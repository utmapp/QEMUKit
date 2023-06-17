/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QGA_QAPI_COMMANDS_H
#define QGA_QAPI_COMMANDS_H

#include "qga-qapi-types.h"

int64_t qmp_guest_sync_delimited(int64_t id, Error **errp, void *ctx);
int64_t qmp_guest_sync(int64_t id, Error **errp, void *ctx);
void qmp_guest_ping(Error **errp, void *ctx);
int64_t qmp_guest_get_time(Error **errp, void *ctx);
void qmp_guest_set_time(bool has_time, int64_t time, Error **errp, void *ctx);
GuestAgentInfo *qmp_guest_info(Error **errp, void *ctx);
void qmp_guest_shutdown(bool has_mode, const char *mode, Error **errp, void *ctx);
int64_t qmp_guest_file_open(const char *path, bool has_mode, const char *mode, Error **errp, void *ctx);
void qmp_guest_file_close(int64_t handle, Error **errp, void *ctx);
GuestFileRead *qmp_guest_file_read(int64_t handle, bool has_count, int64_t count, Error **errp, void *ctx);
GuestFileWrite *qmp_guest_file_write(int64_t handle, const char *buf_b64, bool has_count, int64_t count, Error **errp, void *ctx);
GuestFileSeek *qmp_guest_file_seek(int64_t handle, int64_t offset, GuestFileWhence *whence, Error **errp, void *ctx);
void qmp_guest_file_flush(int64_t handle, Error **errp, void *ctx);
GuestFsfreezeStatus qmp_guest_fsfreeze_status(Error **errp, void *ctx);
int64_t qmp_guest_fsfreeze_freeze(Error **errp, void *ctx);
int64_t qmp_guest_fsfreeze_freeze_list(bool has_mountpoints, strList *mountpoints, Error **errp, void *ctx);
int64_t qmp_guest_fsfreeze_thaw(Error **errp, void *ctx);
GuestFilesystemTrimResponse *qmp_guest_fstrim(bool has_minimum, int64_t minimum, Error **errp, void *ctx);
void qmp_guest_suspend_disk(Error **errp, void *ctx);
void qmp_guest_suspend_ram(Error **errp, void *ctx);
void qmp_guest_suspend_hybrid(Error **errp, void *ctx);
GuestNetworkInterfaceList *qmp_guest_network_get_interfaces(Error **errp, void *ctx);
GuestLogicalProcessorList *qmp_guest_get_vcpus(Error **errp, void *ctx);
int64_t qmp_guest_set_vcpus(GuestLogicalProcessorList *vcpus, Error **errp, void *ctx);
GuestDiskInfoList *qmp_guest_get_disks(Error **errp, void *ctx);
GuestFilesystemInfoList *qmp_guest_get_fsinfo(Error **errp, void *ctx);
void qmp_guest_set_user_password(const char *username, const char *password, bool crypted, Error **errp, void *ctx);
GuestMemoryBlockList *qmp_guest_get_memory_blocks(Error **errp, void *ctx);
GuestMemoryBlockResponseList *qmp_guest_set_memory_blocks(GuestMemoryBlockList *mem_blks, Error **errp, void *ctx);
GuestMemoryBlockInfo *qmp_guest_get_memory_block_info(Error **errp, void *ctx);
GuestExecStatus *qmp_guest_exec_status(int64_t pid, Error **errp, void *ctx);
GuestExec *qmp_guest_exec(const char *path, bool has_arg, strList *arg, bool has_env, strList *env, bool has_input_data, const char *input_data, bool has_capture_output, bool capture_output, Error **errp, void *ctx);
GuestHostName *qmp_guest_get_host_name(Error **errp, void *ctx);
GuestUserList *qmp_guest_get_users(Error **errp, void *ctx);
GuestTimezone *qmp_guest_get_timezone(Error **errp, void *ctx);
GuestOSInfo *qmp_guest_get_osinfo(Error **errp, void *ctx);
GuestDeviceInfoList *qmp_guest_get_devices(Error **errp, void *ctx);
#if defined(CONFIG_POSIX)
GuestAuthorizedKeys *qmp_guest_ssh_get_authorized_keys(const char *username, Error **errp, void *ctx);
#endif /* defined(CONFIG_POSIX) */
#if defined(CONFIG_POSIX)
void qmp_guest_ssh_add_authorized_keys(const char *username, strList *keys, bool has_reset, bool reset, Error **errp, void *ctx);
#endif /* defined(CONFIG_POSIX) */
#if defined(CONFIG_POSIX)
void qmp_guest_ssh_remove_authorized_keys(const char *username, strList *keys, Error **errp, void *ctx);
#endif /* defined(CONFIG_POSIX) */
GuestDiskStatsInfoList *qmp_guest_get_diskstats(Error **errp, void *ctx);
GuestCpuStatsList *qmp_guest_get_cpustats(Error **errp, void *ctx);

#endif /* QGA_QAPI_COMMANDS_H */
