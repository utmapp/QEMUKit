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

#import "QEMUMonitor.h"
#import "QEMUManager-Protected.h"
#import "QEMULogging.h"
#import "qapi-commands.h"
#import "qapi-emit-events.h"
#import "qapi-events.h"
#import "error.h"

static void qemukit_shutdown_handler(bool guest, ShutdownCause reason, void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    [self.delegate qemuWillQuit:self guest:guest];
}

static void qemukit_powerdown_handler(void *ctx) {
    
}

static void qemukit_reset_handler(bool guest, ShutdownCause reason, void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    [self.delegate qemuHasReset:self guest:guest];
}

static void qemukit_stop_handler(void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    [self.delegate qemuHasStopped:self];
}

static void qemukit_resume_handler(void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    [self.delegate qemuHasResumed:self];
}

static void qemukit_suspend_handler(void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    [self.delegate qemuHasSuspended:self];
}

static void qemukit_suspend_disk_handler(void *ctx) {
    
}

static void qemukit_wakeup_handler(void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    [self.delegate qemuHasWakeup:self];
}

static void qemukit_watchdog_handler(WatchdogAction action, void *ctx) {
    
}

static void qemukit_guest_panicked_handler(GuestPanicAction action, bool has_info, GuestPanicInformation *info, void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    [self.delegate qemuError:self error:NSLocalizedString(@"Guest panic", @"QEMUManager")];
}

static void qemukit_block_image_corrupted_handler(const char *device, bool has_node_name, const char *node_name, const char *msg, bool has_offset, int64_t offset, bool has_size, int64_t size, bool fatal, void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    if (fatal) {
        [self.delegate qemuError:self error:[NSString stringWithFormat:@"%s, %s: %s", device, node_name, msg]];
    }
}

static void qemukit_block_io_error_handler(const char *device, bool has_node_name, const char *node_name, IoOperationType operation, BlockErrorAction action, bool has_nospace, bool nospace, const char *reason, void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    [self.delegate qemuError:self error:[NSString stringWithFormat:@"%s, %s: %s", device, node_name, reason]];
}

static void qemukit_spice_connected_handler(SpiceBasicInfo *server, SpiceBasicInfo *client, void *ctx) {
    
}

static void qemukit_spice_initialized_handler(SpiceServerInfo *server, SpiceChannel *client, void *ctx) {
    
}

static void qemukit_spice_disconnected_handler(SpiceBasicInfo *server, SpiceBasicInfo *client, void *ctx) {
    
}

static void qemukit_spice_migrate_completed_handler(void *ctx) {
    
}

static void qemukit_migration_handler(MigrationStatus status, void *ctx) {
    
}

static void qemukit_migration_pass_handler(int64_t pass, void *ctx) {
    
}

qapi_enum_handler_registry qapi_enum_handler_registry_data = {
    .qapi_shutdown_handler = qemukit_shutdown_handler,
    .qapi_powerdown_handler = qemukit_powerdown_handler,
    .qapi_reset_handler = qemukit_reset_handler,
    .qapi_stop_handler = qemukit_stop_handler,
    .qapi_resume_handler = qemukit_resume_handler,
    .qapi_suspend_handler = qemukit_suspend_handler,
    .qapi_suspend_disk_handler = qemukit_suspend_disk_handler,
    .qapi_wakeup_handler = qemukit_wakeup_handler,
    .qapi_watchdog_handler = qemukit_watchdog_handler,
    .qapi_guest_panicked_handler = qemukit_guest_panicked_handler,
    .qapi_block_image_corrupted_handler = qemukit_block_image_corrupted_handler,
    .qapi_block_io_error_handler = qemukit_block_io_error_handler,
    .qapi_spice_connected_handler = qemukit_spice_connected_handler,
    .qapi_spice_initialized_handler = qemukit_spice_initialized_handler,
    .qapi_spice_disconnected_handler = qemukit_spice_disconnected_handler,
    .qapi_spice_migrate_completed_handler = qemukit_spice_migrate_completed_handler,
    .qapi_migration_handler = qemukit_migration_handler,
    .qapi_migration_pass_handler = qemukit_migration_pass_handler,
};

@interface QEMUMonitor ()

@property (nonatomic) dispatch_queue_t monitorQueue;

@end

@implementation QEMUMonitor

- (instancetype)initWithPort:(id<QEMUPort>)port {
    if (self = [super initWithPort:port]) {
        dispatch_queue_attr_t attr = dispatch_queue_attr_make_with_qos_class(DISPATCH_QUEUE_SERIAL, QOS_CLASS_UTILITY, QOS_MIN_RELATIVE_PRIORITY);
        self.monitorQueue = dispatch_queue_create("QEMU Monitor", attr);
    }
    return self;
}

- (BOOL)didGetUnhandledKey:(NSString *)key value:(id)value {
    if ([key isEqualToString:@"QMP"]) {
        QEMUKitLog(@"Got QMP handshake: %@", value);
        self.isConnected = YES;
        [self.delegate qemuQmpDidConnect:self];
        return YES;
    }
    return NO;
}

- (void)qmpEnterCommandModeWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    dispatch_async(self.monitorQueue, ^{
        NSDictionary *cmd = @{
            @"execute": @"qmp_capabilities"
        };
        Error *qerr = NULL;
        NSError *err;
        qmp_rpc_call((__bridge CFDictionaryRef)cmd, NULL, &qerr, (__bridge void *)self);
        if (qerr != NULL) {
            err = [self errorForQerror:qerr];
            error_free(qerr);
        }
        if (completion) {
            completion(err);
        }
    });
}

- (void)continueBootWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    dispatch_async(self.monitorQueue, ^{
        Error *qerr = NULL;
        NSError *err;
        qmp_cont(&qerr, (__bridge void *)self);
        if (qerr != NULL) {
            err = [self errorForQerror:qerr];
            error_free(qerr);
        }
        if (completion) {
            completion(err);
        }
    });
}

- (void)qmpPowerCommand:(NSString *)command completion:(void (^ _Nullable)(NSError * _Nullable))completion {
    dispatch_async(self.monitorQueue, ^{
        Error *qerr = NULL;
        NSError *err;
        NSDictionary *cmd = @{
            @"execute": command
        };
        qmp_rpc_call((__bridge CFDictionaryRef)cmd, NULL, &qerr, (__bridge void *)self);
        if (qerr) {
            err = [self errorForQerror:qerr];
            error_free(qerr);
        }
        if (completion) {
            completion(err);
        }
    });
}

- (void)qmpHmpCommand:(NSString *)cmd completion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    dispatch_async(self.monitorQueue, ^{
        Error *qerr = NULL;
        NSError *err;
        NSString *result;
        char *res;
        res = qmp_human_monitor_command([cmd cStringUsingEncoding:NSASCIIStringEncoding], false, 0, &qerr, (__bridge void *)self);
        if (res) {
            result = [NSString stringWithCString:res encoding:NSASCIIStringEncoding];
            g_free(res);
        }
        if (qerr) {
            err = [self errorForQerror:qerr];
            error_free(qerr);
        }
        if (completion) {
            completion(result, err);
        }
    });
}

- (void)qemuPowerDownWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    [self qmpPowerCommand:@"system_powerdown" completion:completion];
}

- (void)qemuResetWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    [self qmpPowerCommand:@"system_reset" completion:completion];
}

- (void)qemuStopWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    [self qmpPowerCommand:@"stop" completion:completion];
}

- (void)qemuResumeWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    [self qmpPowerCommand:@"cont" completion:completion];
}

- (void)qemuQuitWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion {
    [self qmpPowerCommand:@"quit" completion:completion];
}

- (void)qemuSaveSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    NSString *cmd = [NSString stringWithFormat:@"savevm %@", snapshot];
    [self qmpHmpCommand:cmd completion:completion];
}

- (void)qemuDeleteSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    NSString *cmd = [NSString stringWithFormat:@"delvm %@", snapshot];
    [self qmpHmpCommand:cmd completion:completion];
}

- (void)qemuRestoreSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    NSString *cmd = [NSString stringWithFormat:@"loadvm %@", snapshot];
    [self qmpHmpCommand:cmd completion:completion];
}

- (void)mouseIndexForAbsolute:(BOOL)absolute withCompletion:(void (^)(int64_t, NSError * _Nullable))completion {
    dispatch_async(self.monitorQueue, ^{
        MouseInfoList *info = NULL;
        Error *qerr = NULL;
        int64_t index = -1;
        NSError *err;
        info = qmp_query_mice(&qerr, (__bridge void *)self);
        if (qerr) {
            err = [self errorForQerror:qerr];
            error_free(qerr);
        }
        if (info) {
            for (MouseInfoList *list = info; list; list = list->next) {
                if (list->value->absolute == absolute) {
                    index = list->value->index;
                    break;
                }
            }
            qapi_free_MouseInfoList(info);
        }
        if (completion) {
            completion(index, err);
        }
    });
}

- (void)mouseSelect:(int64_t)index withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    NSString *cmd = [NSString stringWithFormat:@"mouse_set %lld", index];
    [self qmpHmpCommand:cmd completion:completion];
}

@end
