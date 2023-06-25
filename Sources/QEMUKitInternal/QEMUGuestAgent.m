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

#import "QEMUGuestAgent.h"
#import "QEMUGuestAgent-Private.h"
#import "QEMUManager-Protected.h"
#import "qga-qapi-commands.h"

extern NSString *const kQEMUKitErrorDomain;

@interface QEMUGuestAgent ()

@property (nonatomic) BOOL isGuestAgentResponsive;
@property (nonatomic, readwrite) BOOL shouldSynchronizeParser;
@property (nonatomic) dispatch_queue_t guestAgentQueue;

@end

@implementation QEMUGuestAgent

- (NSInteger)timeoutSeconds {
    if (self.isGuestAgentResponsive) {
        return 10;
    } else {
        return 1;
    }
}

- (instancetype)initWithPort:(id<QEMUPort>)port {
    if (self = [super initWithPort:port]) {
        dispatch_queue_attr_t attr = dispatch_queue_attr_make_with_qos_class(DISPATCH_QUEUE_SERIAL, QOS_CLASS_USER_INITIATED, 0);
        self.guestAgentQueue = dispatch_queue_create("QEMU Guest Agent Server", attr);
        self.isConnected = YES;
    }
    return self;
}

- (void)jsonStream:(QEMUJSONStream *)stream seenError:(NSError *)error {
    self.isGuestAgentResponsive = NO;
    [super jsonStream:stream seenError:error];
}

- (__autoreleasing NSError * _Nullable)_convertErrorFromQerrorAndFree:(nullable Error *)qerror {
    if (qerror) {
        NSError *error = [self errorForQerror:qerror];
        error_free(qerror);
        return error;
    } else {
        return nil;
    }
}

- (void)synchronizeWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    self.isGuestAgentResponsive = NO;
    dispatch_async(self.guestAgentQueue, ^{
        Error *qerr = NULL;
        int64_t random = g_random_int();
        int64_t response = 0;
        self.shouldSynchronizeParser = YES;
        response = qmp_guest_sync_delimited(random, &qerr, (__bridge void *)self);
        self.shouldSynchronizeParser = NO;
        if (qerr) {
            if (completion) {
                completion([self _convertErrorFromQerrorAndFree:qerr]);
            }
            return;
        }
        if (response != random) {
            if (completion) {
                completion([NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: NSLocalizedString(@"Mismatched id from guest-sync-delimited.", "QEMUGuestAgent")}]);
            }
            return;
        }
        self.isGuestAgentResponsive = YES;
        if (completion) {
            completion(nil);
        }
    });
}

- (void)_withSynchronizeBlock:(NSError * _Nullable (^)(void))block withCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    dispatch_async(self.guestAgentQueue, ^{
        if (!self.isGuestAgentResponsive) {
            [self synchronizeWithCompletion:^(NSError *error) {
                if (error) {
                    if (completion) {
                        completion(error);
                    }
                } else {
                    NSError *error = block();
                    if (completion) {
                        completion(error);
                    }
                }
            }];
        } else {
            NSError *error = block();
            if (completion) {
                completion(error);
            }
        }
    });
}

- (void)guestSetTime:(NSTimeInterval)time withCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    int64_t timeNanoseconds = (int64_t)(time * NSEC_PER_SEC);
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        qmp_guest_set_time(true, timeNanoseconds, &qerr, (__bridge void *)self);
        return [self _convertErrorFromQerrorAndFree:qerr];
    } withCompletion:completion];
}

- (void)guestFileOpen:(NSString *)path mode:(nullable NSString *)mode withCompletion:(void (^)(NSInteger, NSError * _Nullable))completion {
    __block int64_t handle = 0;
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        handle = qmp_guest_file_open(path.UTF8String, mode != nil, mode.UTF8String, &qerr, (__bridge void *)self);
        return [self _convertErrorFromQerrorAndFree:qerr];
    } withCompletion:^(NSError *error){
        completion(handle, error);
    }];
}

- (void)guestFileClose:(NSInteger)handle withCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        qmp_guest_file_close(handle, &qerr, (__bridge void *)self);
        return [self _convertErrorFromQerrorAndFree:qerr];
    } withCompletion:completion];
}

- (void)guestFileRead:(NSInteger)handle count:(NSInteger)count withCompletion:(void (^)(NSData *, NSError * _Nullable))completion {
    __block NSData *data = [NSData data];
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        GuestFileRead *result = qmp_guest_file_read(handle, true, count, &qerr, (__bridge void *)self);
        NSError *error = [self _convertErrorFromQerrorAndFree:qerr];
        if (result) {
            data = [[NSData alloc] initWithBase64EncodedString:[NSString stringWithCString:result->buf_b64
                                                                                  encoding:NSASCIIStringEncoding]
                                                       options:0];
            qapi_free_GuestFileRead(result);
        }
        return error;
    } withCompletion:^(NSError *error) {
        completion(data, error);
    }];
}

- (void)guestFileWrite:(NSInteger)handle data:(NSData *)data withCompletion:(void (^)(NSInteger, NSError * _Nullable))completion {
    __block NSInteger written = 0;
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        GuestFileWrite *result = qmp_guest_file_write(handle, [data base64EncodedStringWithOptions:0].UTF8String, true, data.length, &qerr, (__bridge void *)self);
        NSError *error = [self _convertErrorFromQerrorAndFree:qerr];
        if (result) {
            written = result->count;
            qapi_free_GuestFileWrite(result);
        }
        return error;
    } withCompletion:^(NSError *error) {
        completion(written, error);
    }];
}

- (void)guestFileSeek:(NSInteger)handle offset:(NSInteger)offset whence:(QEMUGuestAgentSeek)whence withCompletion:(void (^)(NSInteger, NSError * _Nullable))completion {
    __block NSInteger position = 0;
    QGASeek qwhence = QGA_SEEK__MAX;
    switch (whence) {
        case kQEMUGuestAgentSeekCur: qwhence = QGA_SEEK_CUR; break;
        case kQEMUGuestAgentSeekSet: qwhence = QGA_SEEK_SET; break;
        case kQEMUGuestAgentSeekEnd: qwhence = QGA_SEEK_END; break;
        default: break;
    }
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        GuestFileWhence _whence = { .type = QTYPE_QSTRING, .u.name = qwhence };
        GuestFileSeek *result = qmp_guest_file_seek(handle, offset, &_whence, &qerr, (__bridge void *)self);
        NSError *error = [self _convertErrorFromQerrorAndFree:qerr];
        if (result) {
            position = result->position;
            qapi_free_GuestFileSeek(result);
        }
        return error;
    } withCompletion:^(NSError *error) {
        completion(position, error);
    }];
}

- (void)guestFileFlush:(NSInteger)handle withCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        qmp_guest_file_flush(handle, &qerr, (__bridge void *)self);
        return [self _convertErrorFromQerrorAndFree:qerr];
    } withCompletion:completion];
}

- (void)guestNetworkGetInterfacesWithCompletion:(void (^)(NSArray<QEMUGuestAgentNetworkInterface *> *, NSError * _Nullable))completion {
    NSMutableArray<QEMUGuestAgentNetworkInterface *> *interfaces = [NSMutableArray array];
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        GuestNetworkInterfaceList *result = qmp_guest_network_get_interfaces(&qerr, (__bridge void *)self);
        NSError *error = [self _convertErrorFromQerrorAndFree:qerr];
        if (result) {
            for (GuestNetworkInterfaceList *list = result; list != NULL; list = list->next) {
                [interfaces addObject:[QEMUGuestAgentNetworkInterface networkInterfaceFromQapi:list->value]];
            }
            qapi_free_GuestNetworkInterfaceList(result);
        }
        return error;
    } withCompletion:^(NSError *error) {
        completion(interfaces, error);
    }];
}

static strList *arrayToStrList(NSArray<NSString *> * _Nullable arr) {
    strList *head = NULL;
    __block strList **next = &head;
    [arr enumerateObjectsUsingBlock:^(NSString *obj, NSUInteger idx, BOOL *stop) {
        strList *tail = g_malloc0(sizeof(strList));
        tail->value = g_strdup(obj.UTF8String);
        *next = tail;
        next = &tail->next;
    }];
    return head;
}

- (void)guestExec:(NSString *)path argv:(nullable NSArray<NSString *> *)argv envp:(nullable NSArray<NSString *> *)envp input:(nullable NSData *)input captureOutput:(BOOL)captureOutput withCompletion:(void (^)(NSInteger, NSError * _Nullable))completion {
    strList *_arg = arrayToStrList(argv);
    strList *_env = arrayToStrList(envp);
    __block NSInteger pid = -1;
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        GuestExec *result = qmp_guest_exec(path.UTF8String,
                                           _arg != NULL, _arg,
                                           _env != NULL, _env,
                                           input != nil, [input base64EncodedStringWithOptions:0].UTF8String,
                                           true, captureOutput,
                                           &qerr, (__bridge void *)self);
        NSError *error = [self _convertErrorFromQerrorAndFree:qerr];
        if (result) {
            pid = result->pid;
            qapi_free_GuestExec(result);
        }
        return error;
    } withCompletion:^(NSError *error) {
        if (_arg) {
            qapi_free_strList(_arg);
        }
        if (_env) {
            qapi_free_strList(_env);
        }
        completion(pid, error);
    }];
}

- (void)guestExecStatus:(NSInteger)pid withCompletion:(void (^)(QEMUGuestAgentExecStatus *, NSError * _Nullable))completion {
    __block QEMUGuestAgentExecStatus *status = nil;
    [self _withSynchronizeBlock:^{
        Error *qerr = NULL;
        GuestExecStatus *result = qmp_guest_exec_status(pid, &qerr, (__bridge void *)self);
        NSError *error = [self _convertErrorFromQerrorAndFree:qerr];
        if (result) {
            status = [QEMUGuestAgentExecStatus execStatusFromQapi:result];
            qapi_free_GuestExecStatus(result);
        }
        return error;
    } withCompletion:^(NSError *error) {
        completion(status, error);
    }];
}

@end

@implementation QEMUGuestAgentNetworkAddress

+ (instancetype)networkAddressFromQapi:(GuestIpAddress *)qapi {
    return [[QEMUGuestAgentNetworkAddress alloc] initFromQapi:qapi];
}

- (instancetype)initFromQapi:(GuestIpAddress *)qapi {
    if (self = [super init]) {
        self.ipAddress = [NSString stringWithCString:qapi->ip_address encoding:NSASCIIStringEncoding];
        self.isIpV6Address = qapi->ip_address_type == GUEST_IP_ADDRESS_TYPE_IPV6;
        self.ipAddressPrefix = qapi->prefix;
    }
    return self;
}

@end

@implementation QEMUGuestAgentNetworkInterface

+ (instancetype)networkInterfaceFromQapi:(GuestNetworkInterface *)qapi {
    return [[QEMUGuestAgentNetworkInterface alloc] initFromQapi:qapi];
}

- (instancetype)initFromQapi:(GuestNetworkInterface *)qapi {
    if (self = [super init]) {
        self.interfaceName = [NSString stringWithCString:qapi->name encoding:NSASCIIStringEncoding];
        if (qapi->has_hardware_address) {
            self.hardwareAddress = [NSString stringWithCString:qapi->hardware_address encoding:NSASCIIStringEncoding];
        }
        if (qapi->has_ip_addresses) {
            NSMutableArray<QEMUGuestAgentNetworkAddress *> *ipAddresses = [NSMutableArray array];
            for (GuestIpAddressList *list = qapi->ip_addresses; list != NULL; list = list->next) {
                [ipAddresses addObject:[QEMUGuestAgentNetworkAddress networkAddressFromQapi:list->value]];
            }
            self.ipAddresses = ipAddresses;
        } else {
            self.ipAddresses = [NSArray array];
        }
        if (qapi->has_statistics) {
            self.rxBytes = qapi->statistics->rx_bytes;
            self.rxPackets = qapi->statistics->rx_packets;
            self.rxErrors = qapi->statistics->rx_errs;
            self.rxDropped = qapi->statistics->rx_dropped;
            self.txBytes = qapi->statistics->tx_bytes;
            self.txPackets = qapi->statistics->tx_packets;
            self.txErrors = qapi->statistics->tx_errs;
            self.txDropped = qapi->statistics->tx_dropped;
        }
    }
    return self;
}

@end

@implementation QEMUGuestAgentExecStatus

+ (instancetype)execStatusFromQapi:(GuestExecStatus *)qapi {
    return [[QEMUGuestAgentExecStatus alloc] initFromQapi:qapi];
}

- (instancetype)initFromQapi:(GuestExecStatus *)qapi {
    if (self = [super init]) {
        self.hasExited = qapi->exited;
        if (qapi->has_exitcode) {
            self.exitCode = qapi->exitcode;
        }
        if (qapi->has_signal) {
            self.signal = qapi->signal;
        }
        if (qapi->has_out_data) {
            self.outData = [[NSData alloc] initWithBase64EncodedString:[NSString stringWithCString:qapi->out_data
                                                                                          encoding:NSASCIIStringEncoding] options:0];
        }
        if (qapi->has_err_data) {
            self.errData = [[NSData alloc] initWithBase64EncodedString:[NSString stringWithCString:qapi->err_data
                                                                                          encoding:NSASCIIStringEncoding] options:0];
        }
        if (qapi->has_out_truncated) {
            self.isOutDataTruncated = qapi->out_truncated;
        }
        if (qapi->has_err_truncated) {
            self.isErrDataTruncated = qapi->err_truncated;
        }
    }
    return self;
}

@end
