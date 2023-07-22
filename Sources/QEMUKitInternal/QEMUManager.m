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

#import "QEMUManager-Protected.h"
#import "QEMUJSONStream.h"
#import "QEMULogging.h"
#import "qapi-emit-events.h"

NSString *const kQEMUKitErrorDomain = @"com.utmapp.QEMUKit";

typedef void(^rpcCompletionHandler_t)(NSDictionary *, NSString *);

@interface QEMUManager ()

/// Synchronizes calls to `self.rpcQueue`
@property (nonatomic) dispatch_queue_t rpcQueue;

/// Used to ensure that `qmp_rpc_call` only has one outstanding call
@property (nonatomic) dispatch_semaphore_t rpcLock;

/// Must be modified or called from `self.rpcQueue`
@property (nonatomic, nullable) rpcCompletionHandler_t rpcCallback;

@property (nonatomic) QEMUJSONStream *jsonStream;

@end

@implementation QEMUManager

@synthesize isConnected = _isConnected;

- (void)setIsConnected:(BOOL)isConnected {
    _isConnected = isConnected;
}

- (NSInteger)timeoutSeconds {
    return 10;
}

- (BOOL)shouldSynchronizeParser {
    return NO;
}

void qmp_rpc_call(CFDictionaryRef args, CFDictionaryRef *ret, Error **err, void *ctx) {
    QEMUManager *self = (__bridge QEMUManager *)ctx;
    dispatch_semaphore_t rpcResponseEvent = dispatch_semaphore_create(0);
    __block NSDictionary *dict;
    __block NSString *nserr;
    __weak typeof(self) _self = self;
    // allow only one outgoing RPC call at a time
    dispatch_semaphore_wait(self.rpcLock, DISPATCH_TIME_FOREVER);
    dispatch_sync(self.rpcQueue, ^{
        assert(!self.rpcCallback); // sync on rpcLock should prevent this!
        self.rpcCallback = ^(NSDictionary *ret_dict, NSString *ret_err){
            NSCAssert(ret_dict || ret_err, @"Both dict and err are null");
            nserr = ret_err;
            dict = ret_dict;
            _self.rpcCallback = nil;
            dispatch_semaphore_signal(rpcResponseEvent);
        };
        NSError *_err;
        if (![self.jsonStream sendDictionary:(__bridge NSDictionary *)args shouldSynchronize:self.shouldSynchronizeParser error:&_err]) {
            self.rpcCallback(nil, _err.localizedDescription);
        }
    });
    if (dispatch_semaphore_wait(rpcResponseEvent, dispatch_time(DISPATCH_TIME_NOW, (int64_t)self.timeoutSeconds*NSEC_PER_SEC)) != 0) {
        dispatch_sync(self.rpcQueue, ^{
            if (self.rpcCallback) {
                self.rpcCallback(nil, NSLocalizedString(@"Timed out waiting for RPC.", "QEMUManager"));
            }
        });
    }
    if (ret) {
        *ret = CFBridgingRetain(dict);
    }
    if (nserr) {
        if (err) {
            error_setg(err, "%s", nserr.UTF8String);
        }
        QEMUKitLog(@"RPC: %@", nserr);
    }
    dispatch_semaphore_signal(self.rpcLock);
}

- (instancetype)initWithPort:(id<QEMUPort>)port {
    self = [super init];
    if (self) {
        self.jsonStream = [[QEMUJSONStream alloc] initWithPort:port];
        self.jsonStream.delegate = self;
        dispatch_queue_attr_t attr = dispatch_queue_attr_make_with_qos_class(DISPATCH_QUEUE_SERIAL, QOS_CLASS_USER_INITIATED, 0);
        self.rpcQueue = dispatch_queue_create("QEMUManager RPC Queue", attr);
        self.rpcLock = dispatch_semaphore_create(1);
    }
    return self;
}

- (void)jsonStream:(QEMUJSONStream *)stream connected:(BOOL)connected {
    QEMUKitLog(@"QMP %@", connected ? @"connected" : @"disconnected");
    if (!connected) {
        self.isConnected = NO;
    }
}

- (void)jsonStream:(QEMUJSONStream *)stream seenError:(NSError *)error {
    QEMUKitLog(@"QMP stream error seen: %@", error);
    dispatch_async(self.rpcQueue, ^{
        if (self.rpcCallback) {
            self.rpcCallback(nil, error.localizedDescription);
        }
    });
}

- (void)jsonStream:(QEMUJSONStream *)stream receivedDictionary:(NSDictionary *)dict {
    [dict enumerateKeysAndObjectsUsingBlock:^(id key, id val, BOOL *stop) {
        if ([key isEqualToString:@"return"]) {
            dispatch_async(self.rpcQueue, ^{
                if (self.rpcCallback) {
                    self.rpcCallback(dict, nil);
                } else {
                    QEMUKitLog(@"Got unexpected 'return' response: %@", dict);
                }
            });
            *stop = YES;
        } else if ([key isEqualToString:@"error"]) {
            dispatch_async(self.rpcQueue, ^{
                if (self.rpcCallback) {
                    self.rpcCallback(nil, dict[@"error"][@"desc"]);
                } else {
                    QEMUKitLog(@"Got unexpected 'error' response: %@", dict);
                }
            });
            *stop = YES;
        } else if ([key isEqualToString:@"event"]) {
            const char *event = [dict[@"event"] cStringUsingEncoding:NSASCIIStringEncoding];
            qapi_event_dispatch(event, (__bridge CFTypeRef)dict, (__bridge void *)self);
            *stop = YES;
        } else if ([self didGetUnhandledKey:key value:val]) {
            *stop = YES;
        }
    }];
}

- (__autoreleasing NSError *)errorForQerror:(Error *)qerr {
    return [NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: [NSString stringWithCString:error_get_pretty(qerr) encoding:NSASCIIStringEncoding]}];
}

- (BOOL)didGetUnhandledKey:(NSString *)key value:(id)value {
    return NO;
}

@end
