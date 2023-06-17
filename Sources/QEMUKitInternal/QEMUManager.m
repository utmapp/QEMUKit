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

typedef void(^rpcCompletionHandler_t)(NSDictionary *, NSError *);

@interface QEMUManager ()

@property (nonatomic, nullable) rpcCompletionHandler_t rpcCallback;
@property (nonatomic) QEMUJSONStream *jsonStream;
@property (nonatomic) dispatch_semaphore_t cmdLock;

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
    dispatch_semaphore_t rpc_sema = dispatch_semaphore_create(0);
    __block NSDictionary *dict;
    __block NSError *nserr;
    __weak typeof(self) _self = self;
    dispatch_semaphore_wait(self.cmdLock, DISPATCH_TIME_FOREVER);
    self.rpcCallback = ^(NSDictionary *ret_dict, NSError *ret_err){
        NSCAssert(ret_dict || ret_err, @"Both dict and err are null");
        nserr = ret_err;
        dict = ret_dict;
        _self.rpcCallback = nil;
        dispatch_semaphore_signal(rpc_sema); // copy to avoid race condition
    };
    if (![self.jsonStream sendDictionary:(__bridge NSDictionary *)args shouldSynchronize:self.shouldSynchronizeParser error:&nserr] && self.rpcCallback) {
        self.rpcCallback(nil, nserr);
    }
    if (dispatch_semaphore_wait(rpc_sema, dispatch_time(DISPATCH_TIME_NOW, (int64_t)self.timeoutSeconds*NSEC_PER_SEC)) != 0) {
        // possible race between this timeout and the callback being triggered
        self.rpcCallback = ^(NSDictionary *ret_dict, NSError *ret_err){
            _self.rpcCallback = nil;
        };
        nserr = [NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: NSLocalizedString(@"Timed out waiting for RPC.", "QEMUManager")}];
    }
    if (ret) {
        *ret = CFBridgingRetain(dict);
    }
    dict = nil;
    if (nserr) {
        if (err) {
            error_setg(err, "%s", [nserr.localizedDescription cStringUsingEncoding:NSUTF8StringEncoding]);
        }
        QEMUKitLog(@"RPC: %@", nserr);
    }
    dispatch_semaphore_signal(self.cmdLock);
}

- (instancetype)initWithPort:(id<QEMUPort>)port {
    self = [super init];
    if (self) {
        self.jsonStream = [[QEMUJSONStream alloc] initWithPort:port];
        self.jsonStream.delegate = self;
        self.cmdLock = dispatch_semaphore_create(1);
    }
    return self;
}

- (void)dealloc {
    if (self.rpcCallback) {
        self.rpcCallback(nil, [NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: NSLocalizedString(@"Manager being deallocated, killing pending RPC.", "QEMUManager")}]);
    }
}

- (void)jsonStream:(QEMUJSONStream *)stream connected:(BOOL)connected {
    QEMUKitLog(@"QMP %@", connected ? @"connected" : @"disconnected");
    if (!connected) {
        self.isConnected = NO;
    }
}

- (void)jsonStream:(QEMUJSONStream *)stream seenError:(NSError *)error {
    QEMUKitLog(@"QMP stream error seen: %@", error);
    if (self.rpcCallback) {
        self.rpcCallback(nil, error);
    }
}

- (void)jsonStream:(QEMUJSONStream *)stream receivedDictionary:(NSDictionary *)dict {
    [dict enumerateKeysAndObjectsUsingBlock:^(id key, id val, BOOL *stop) {
        if ([key isEqualToString:@"return"]) {
            if (self.rpcCallback) {
                self.rpcCallback(dict, nil);
            } else {
                QEMUKitLog(@"Got unexpected 'return' response: %@", dict);
            }
            *stop = YES;
        } else if ([key isEqualToString:@"error"]) {
            if (self.rpcCallback) {
                self.rpcCallback(nil, [NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: dict[@"error"][@"desc"]}]);
            } else {
                QEMUKitLog(@"Got unexpected 'error' response: %@", dict);
            }
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
