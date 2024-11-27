//
// Copyright © 2023 osy. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "QEMUJSONStream.h"
#import "QEMULogging.h"
#import "QEMUPort.h"

extern NSString *const kQEMUKitErrorDomain;
const int kMaxBufferSize = 1024;

enum ParserState {
    PARSER_NOT_IN_STRING,
    PARSER_IN_STRING,
    PARSER_IN_STRING_ESCAPE,
    PARSER_WAITING_FOR_DELIMITER,
    PARSER_INVALID
};

@interface QEMUJSONStream ()

@property (nonatomic, readwrite) id<QEMUPort> port;
@property (nonatomic, nullable) NSMutableData *data;
@property (nonatomic, nullable) dispatch_queue_t recieveQueue;
@property (nonatomic, nullable) dispatch_queue_t sendQueue;
@property (nonatomic) NSUInteger parsedBytes;
@property (nonatomic) enum ParserState state;
@property (nonatomic) NSInteger openCurlyCount;

@end

@implementation QEMUJSONStream

- (instancetype)initWithPort:(id<QEMUPort>)port {
    self = [super init];
    if (self) {
        self.recieveQueue = dispatch_queue_create("QEMUJSONStream Receiver", NULL);
        dispatch_queue_attr_t attr = dispatch_queue_attr_make_with_qos_class(DISPATCH_QUEUE_SERIAL, QOS_CLASS_USER_INITIATED, 0);
        self.sendQueue = dispatch_queue_create("QEMUJSONStream Sender", attr);
        self.port = port;
        self.data = [NSMutableData data];
        __weak typeof(port) weakPort = port;
        __weak typeof(self) weakSelf = self;
        port.readDataHandler = ^(NSData * _Nonnull data) {
            typeof(port) port = weakPort;
            if (port) {
                [weakSelf port:port didRecieveData:data];
            }
        };
        port.errorHandler = ^(NSString * _Nonnull error) {
            typeof(port) port = weakPort;
            if (port) {
                [weakSelf port:port didError:error];
            }
        };
        port.disconnectHandler = ^{
            typeof(port) port = weakPort;
            if (port) {
                [weakSelf portDidDisconect:port];
            }
        };
    }
    return self;
}

- (void)parseData {
    __block NSUInteger skipLength = 0;
    __block NSUInteger endIndex = 0;
    [self.data enumerateByteRangesUsingBlock:^(const void *bytes, NSRange byteRange, BOOL *stop) {
        const char *str = (const char *)bytes;
        if (byteRange.location + byteRange.length < self.parsedBytes) {
            return;
        }
        assert(self.parsedBytes >= byteRange.location);
        for (NSUInteger i = self.parsedBytes - byteRange.location; i < byteRange.length; i++) {
            if (self.state == PARSER_WAITING_FOR_DELIMITER) {
                if (str[i] == (char)0xFF) {
                    self.state = PARSER_NOT_IN_STRING;
                    self.openCurlyCount = -1;
                    skipLength = self.parsedBytes + 1;
                }
                self.parsedBytes++;
                continue;
            } else if (self.state == PARSER_IN_STRING_ESCAPE) {
                self.state = PARSER_IN_STRING;
            } else {
                switch (str[i]) {
                    case '{': {
                        if (self.state == PARSER_NOT_IN_STRING) {
                            if (self.openCurlyCount == -1) {
                                self.openCurlyCount = 0;
                            }
                            self.openCurlyCount++;
                        }
                        break;
                    }
                    case '}': {
                        if (self.state == PARSER_NOT_IN_STRING) {
                            self.openCurlyCount--;
                            if (self.openCurlyCount < 0) {
                                QEMUKitLog(@"Saw too many close curly!");
                                self.state = PARSER_INVALID;
                                NSError *err = [NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: NSLocalizedString(@"Error parsing JSON.", "QEMUJSONStream")}];
                                [self.delegate jsonStream:self seenError:err];
                            }
                        }
                        break;
                    }
                    case '\\': {
                        if (self.state == PARSER_IN_STRING) {
                            self.state = PARSER_IN_STRING_ESCAPE;
                        } else {
                            QEMUKitLog(@"Saw escape in invalid context");
                            self.state = PARSER_INVALID;
                            NSError *err = [NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: NSLocalizedString(@"Error parsing JSON.", "QEMUJSONStream")}];
                            [self.delegate jsonStream:self seenError:err];
                        }
                        break;
                    }
                    case '"': {
                        if (self.state == PARSER_IN_STRING) {
                            self.state = PARSER_NOT_IN_STRING;
                        } else {
                            self.state = PARSER_IN_STRING;
                        }
                        break;
                    }
                    default: {
                        // force reset parser
                        if (str[i] == (char)0xFF) {
                            QEMUKitLog(@"Resetting parser...");
                            self.state = PARSER_NOT_IN_STRING;
                            self.openCurlyCount = -1;
                            skipLength = self.parsedBytes + 1;
                        }
                    }
                }
            }
            self.parsedBytes++;
            if (self.openCurlyCount == 0) {
                endIndex = self.parsedBytes;
                *stop = YES;
                break;
            }
        }
    }];
    if (skipLength > 0) {
        // discard any data before delimiter
        [self.data replaceBytesInRange:NSMakeRange(0, skipLength) withBytes:NULL length:0];
        self.parsedBytes -= skipLength;
    }
    if (endIndex > 0) {
        [self consumeJSONLength:endIndex-skipLength];
    }
}

- (void)consumeJSONLength:(NSUInteger)length {
    NSRange range = NSMakeRange(0, length);
    NSData *jsonData = [self.data subdataWithRange:range];
    [self.data replaceBytesInRange:range withBytes:NULL length:0];
    self.parsedBytes = 0;
    self.openCurlyCount = -1;
    NSError *err;
    id json = [NSJSONSerialization JSONObjectWithData:jsonData options:0 error:&err];
    if (err) {
        [self.delegate jsonStream:self seenError:err];
        return;
    }
    NSAssert([json isKindOfClass:[NSDictionary class]], @"JSON data not dictionary");
    QEMUKitLog(@"Debug JSON recieved <- %@", json);
    dispatch_async(self.sendQueue, ^{
        [self.delegate jsonStream:self receivedDictionary:(NSDictionary *)json];
    });
}

- (void)portDidDisconect:(id<QEMUPort>)port {
    assert(self.port == port);
    [self.delegate jsonStream:self connected:NO];
}

- (void)port:(id<QEMUPort>)port didError:(NSString *)error {
    [self.delegate jsonStream:self seenError:[NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: error}]];
}

- (void)port:(id<QEMUPort>)port didRecieveData:(NSData *)data {
    assert(self.port == port);
    dispatch_async(self.recieveQueue, ^{
        [self.data appendData:data];
        while (self.parsedBytes < [self.data length]) {
            [self parseData];
        }
    });
}

- (BOOL)sendDictionary:(NSDictionary *)dict shouldSynchronize:(BOOL)shouldSynchronize error:(NSError * _Nullable *)error {
    QEMUKitLog(@"Debug JSON send -> %@", dict);
    if (!self.port || !self.port.isOpen) {
        if (error) {
            *error = [NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: NSLocalizedString(@"Port is not connected.", "QEMUJSONStream")}];
        }
        return NO;
    }
    NSData *data = [NSJSONSerialization dataWithJSONObject:dict options:0 error:error];
    if (!data) {
        return NO;
    }
    if (shouldSynchronize) {
        dispatch_async(self.recieveQueue, ^{
            [self.port writeData:[NSData dataWithBytes:"\xFF" length:1]];
            [self.port writeData:data];
            self.state = PARSER_WAITING_FOR_DELIMITER;
        });
    } else {
        [self.port writeData:data];
    }
    return YES;
}

@end
