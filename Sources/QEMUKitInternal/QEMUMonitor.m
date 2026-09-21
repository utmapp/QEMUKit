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

extern NSString *const kQEMUKitErrorDomain;

@interface QEMUMonitor (Jobs)

- (void)jobDidConclude:(NSString *)jobId isConnected:(BOOL)isConnected;

@end

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

static void qemukit_job_status_change_handler(const char *id, JobStatus status, void *ctx) {
    QEMUMonitor *self = (__bridge QEMUMonitor *)ctx;
    if (status == JOB_STATUS_CONCLUDED) {
        [self jobDidConclude:[NSString stringWithUTF8String:id] isConnected:YES];
    }
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
    .qapi_job_status_change_handler = qemukit_job_status_change_handler,
};

@interface QEMUMonitor ()

/// Called once the job with the identifier in the key concludes, with NO if QEMU went away before that
@property (nonatomic) NSMutableDictionary<NSString *, void (^)(BOOL)> *jobCompletions;

@property (nonatomic) dispatch_queue_t monitorQueue;

@end

@implementation QEMUMonitor

- (instancetype)initWithPort:(id<QEMUPort>)port {
    if (self = [super initWithPort:port]) {
        dispatch_queue_attr_t attr = dispatch_queue_attr_make_with_qos_class(DISPATCH_QUEUE_SERIAL, QOS_CLASS_USER_INITIATED, 0);
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

#pragma mark - Snapshots

- (void)setIsConnected:(BOOL)isConnected {
    [super setIsConnected:isConnected];
    if (!isConnected) {
        NSArray<NSString *> *jobIds;
        @synchronized (self) {
            jobIds = self.jobCompletions.allKeys;
        }
        for (NSString *jobId in jobIds) {
            [self jobDidConclude:jobId isConnected:NO];
        }
    }
}

- (void)jobDidConclude:(NSString *)jobId isConnected:(BOOL)isConnected {
    void (^jobCompletion)(BOOL);
    @synchronized (self) {
        jobCompletion = self.jobCompletions[jobId];
        [self.jobCompletions removeObjectForKey:jobId];
    }
    if (jobCompletion) {
        jobCompletion(isConnected);
    }
}

- (NSError *)snapshotErrorWithDescription:(NSString *)description {
    return [NSError errorWithDomain:kQEMUKitErrorDomain code:-1 userInfo:@{NSLocalizedDescriptionKey: description}];
}

/// Find the nodes that a snapshot is made of
///
/// Like QEMU does for `savevm`, this is every device with writable media and all of them have to support snapshots.
/// - Parameters:
///   - snapshot: If set, only return the nodes that have this snapshot and put the one that holds its VM state first
///   - error: Error if the query failed or a device does not support snapshots
/// - Returns: Node names or nil on error
- (NSArray<NSString *> *)snapshotNodesContaining:(nullable NSString *)snapshot error:(NSError * _Nullable __autoreleasing *)error {
    Error *qerr = NULL;
    BlockInfoList *block = qmp_query_block(&qerr, (__bridge void *)self);
    if (qerr) {
        if (error) {
            *error = [self errorForQerror:qerr];
        }
        error_free(qerr);
        return nil;
    }
    NSMutableArray<NSString *> *nodes = [NSMutableArray array];
    NSString *unsupported = nil;
    for (BlockInfoList *list = block; list; list = list->next) {
        const BlockInfo *info = list->value;
        if (!info->has_inserted || info->inserted->ro || !info->inserted->has_node_name) {
            continue;
        }
        NSString *node = [NSString stringWithUTF8String:info->inserted->node_name];
        if (strcmp(info->inserted->drv, "qcow2") != 0) {
            unsupported = [NSString stringWithUTF8String:info->device];
        } else if (!snapshot) {
            [nodes addObject:node];
        } else if (info->inserted->image->has_snapshots) {
            for (SnapshotInfoList *item = info->inserted->image->snapshots; item; item = item->next) {
                if ([snapshot isEqualToString:[NSString stringWithUTF8String:item->value->name]]) {
                    if (item->value->vm_state_size > 0) {
                        [nodes insertObject:node atIndex:0];
                    } else {
                        [nodes addObject:node];
                    }
                    break;
                }
            }
        }
    }
    qapi_free_BlockInfoList(block);
    if (unsupported && !snapshot) {
        if (error) {
            *error = [self snapshotErrorWithDescription:[NSString stringWithFormat:NSLocalizedString(@"Device '%@' is writable but does not support snapshots.", "QEMUMonitor"), unsupported]];
        }
        return nil;
    }
    if (nodes.count == 0) {
        if (error) {
            *error = [self snapshotErrorWithDescription:snapshot ? [NSString stringWithFormat:NSLocalizedString(@"Snapshot '%@' does not exist.", "QEMUMonitor"), snapshot] : NSLocalizedString(@"No device supports snapshots.", "QEMUMonitor")];
        }
        return nil;
    }
    return nodes;
}

/// Run one of the snapshot jobs
///
/// QEMU does not respond while it saves or loads the state of the VM, which can take a long time. A job is only started
/// by its command and announces with an event when it is done, so nothing has to wait for a response in the meantime.
/// - Parameters:
///   - snapshot: If set, the job works on the nodes that have this snapshot
///   - start: Issue the command that starts the job
///   - completion: Called with an empty string or with the error of the job
- (void)qmpSnapshotJobForExisting:(nullable NSString *)snapshot
                            start:(void (^)(const char *jobId, const char *vmstate, strList *devices, Error **errp))start
                       completion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    dispatch_async(self.monitorQueue, ^{
        NSError *err;
        NSArray<NSString *> *nodes = [self snapshotNodesContaining:snapshot error:&err];
        if (!nodes) {
            completion(nil, err);
            return;
        }
        strList *devices = NULL;
        for (NSString *node in nodes.reverseObjectEnumerator) {
            strList *item = g_malloc0(sizeof(*item));
            item->value = g_strdup(node.UTF8String);
            item->next = devices;
            devices = item;
        }
        NSString *jobId = [@"qemukit-" stringByAppendingString:NSUUID.UUID.UUIDString];
        // the job may conclude before the command that started it returns
        @synchronized (self) {
            if (!self.jobCompletions) {
                self.jobCompletions = [NSMutableDictionary dictionary];
            }
            self.jobCompletions[jobId] = ^(BOOL isConnected) {
                if (!isConnected) {
                    completion(nil, [self snapshotErrorWithDescription:NSLocalizedString(@"QEMU exited before the snapshot operation completed.", "QEMUMonitor")]);
                    return;
                }
                dispatch_async(self.monitorQueue, ^{
                    completion(@"", [self concludeJob:jobId]);
                });
            };
        }
        Error *qerr = NULL;
        start(jobId.UTF8String, nodes.firstObject.UTF8String, devices, &qerr);
        qapi_free_strList(devices);
        if (qerr) {
            @synchronized (self) {
                [self.jobCompletions removeObjectForKey:jobId];
            }
            completion(nil, [self errorForQerror:qerr]);
            error_free(qerr);
        }
    });
}

/// Collect the result of a job that concluded and let QEMU forget about it
/// - Returns: Error of the job if it failed
- (nullable NSError *)concludeJob:(NSString *)jobId {
    NSError *err = nil;
    Error *qerr = NULL;
    JobInfoList *jobs = qmp_query_jobs(&qerr, (__bridge void *)self);
    if (qerr) {
        err = [self errorForQerror:qerr];
        error_free(qerr);
        return err;
    }
    for (JobInfoList *list = jobs; list; list = list->next) {
        if (strcmp(list->value->id, jobId.UTF8String) == 0 && list->value->has_error) {
            err = [self snapshotErrorWithDescription:[NSString stringWithUTF8String:list->value->error]];
        }
    }
    qapi_free_JobInfoList(jobs);
    qmp_job_dismiss(jobId.UTF8String, &qerr, (__bridge void *)self);
    if (qerr) {
        QEMUKitLog(@"Failed to dismiss job %@: %s", jobId, error_get_pretty(qerr));
        error_free(qerr);
    }
    return err;
}

- (void)qemuSaveSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    [self qmpSnapshotJobForExisting:nil start:^(const char *jobId, const char *vmstate, strList *devices, Error **errp) {
        qmp_snapshot_save(jobId, snapshot.UTF8String, vmstate, devices, errp, (__bridge void *)self);
    } completion:completion];
}

- (void)qemuDeleteSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    [self qmpSnapshotJobForExisting:snapshot start:^(const char *jobId, const char *vmstate, strList *devices, Error **errp) {
        qmp_snapshot_delete(jobId, snapshot.UTF8String, devices, errp, (__bridge void *)self);
    } completion:completion];
}

- (void)qemuRestoreSnapshot:(NSString *)snapshot withCompletion:(void (^)(NSString * _Nullable, NSError * _Nullable))completion {
    [self qmpSnapshotJobForExisting:snapshot start:^(const char *jobId, const char *vmstate, strList *devices, Error **errp) {
        qmp_snapshot_load(jobId, snapshot.UTF8String, vmstate, devices, errp, (__bridge void *)self);
    } completion:completion];
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

- (void)sendKeysRaw:(NSArray<NSNumber *> *)keysRaw holdTime:(NSInteger)holdTime withCompletion:(void (^)(NSError * _Nullable))completion {
    KeyValue *v = NULL;
    KeyValueList *head = NULL, **tail = &head;
    for (NSNumber *num in keysRaw) {
        v = g_malloc0(sizeof(*v));
        v->type = KEY_VALUE_KIND_QCODE;
        v->u.qcode.data = (QKeyCode)num.integerValue;
        QAPI_LIST_APPEND(tail, v);
    }
    dispatch_async(self.monitorQueue, ^{
        Error *qerr = NULL;
        NSError *err;
        qmp_send_key(head, holdTime != 0, holdTime, &qerr, (__bridge void *)self);
        if (qerr) {
            err = [self errorForQerror:qerr];
            error_free(qerr);
        }
        qapi_free_KeyValueList(head);
        if (completion) {
            completion(err);
        }
    });
}

@end
