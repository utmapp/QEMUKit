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

#ifndef QAPI_COMMANDS_BLOCK_CORE_H
#define QAPI_COMMANDS_BLOCK_CORE_H

#include "qapi-commands-common.h"
#include "qapi-commands-crypto.h"
#include "qapi-commands-job.h"
#include "qapi-commands-sockets.h"
#include "qapi-types-block-core.h"

BlockInfoList *qmp_query_block(Error **errp, void *ctx);
BlockStatsList *qmp_query_blockstats(bool has_query_nodes, bool query_nodes, Error **errp, void *ctx);
BlockJobInfoList *qmp_query_block_jobs(Error **errp, void *ctx);
void qmp_block_resize(bool has_device, const char *device, bool has_node_name, const char *node_name, int64_t size, Error **errp, void *ctx);
void qmp_blockdev_snapshot_sync(bool has_device, const char *device, bool has_node_name, const char *node_name, const char *snapshot_file, bool has_snapshot_node_name, const char *snapshot_node_name, bool has_format, const char *format, bool has_mode, NewImageMode mode, Error **errp, void *ctx);
void qmp_blockdev_snapshot(const char *node, const char *overlay, Error **errp, void *ctx);
void qmp_change_backing_file(const char *device, const char *image_node_name, const char *backing_file, Error **errp, void *ctx);
void qmp_block_commit(bool has_job_id, const char *job_id, const char *device, bool has_base_node, const char *base_node, bool has_base, const char *base, bool has_top_node, const char *top_node, bool has_top, const char *top, bool has_backing_file, const char *backing_file, bool has_speed, int64_t speed, bool has_on_error, BlockdevOnError on_error, bool has_filter_node_name, const char *filter_node_name, bool has_auto_finalize, bool auto_finalize, bool has_auto_dismiss, bool auto_dismiss, Error **errp, void *ctx);
void qmp_drive_backup(DriveBackup *arg, Error **errp, void *ctx);
void qmp_blockdev_backup(BlockdevBackup *arg, Error **errp, void *ctx);
BlockDeviceInfoList *qmp_query_named_block_nodes(bool has_flat, bool flat, Error **errp, void *ctx);
XDbgBlockGraph *qmp_x_debug_query_block_graph(Error **errp, void *ctx);
void qmp_drive_mirror(DriveMirror *arg, Error **errp, void *ctx);
void qmp_block_dirty_bitmap_add(const char *node, const char *name, bool has_granularity, uint32_t granularity, bool has_persistent, bool persistent, bool has_disabled, bool disabled, Error **errp, void *ctx);
void qmp_block_dirty_bitmap_remove(const char *node, const char *name, Error **errp, void *ctx);
void qmp_block_dirty_bitmap_clear(const char *node, const char *name, Error **errp, void *ctx);
void qmp_block_dirty_bitmap_enable(const char *node, const char *name, Error **errp, void *ctx);
void qmp_block_dirty_bitmap_disable(const char *node, const char *name, Error **errp, void *ctx);
void qmp_block_dirty_bitmap_merge(const char *node, const char *target, BlockDirtyBitmapOrStrList *bitmaps, Error **errp, void *ctx);
BlockDirtyBitmapSha256 *qmp_x_debug_block_dirty_bitmap_sha256(const char *node, const char *name, Error **errp, void *ctx);
void qmp_blockdev_mirror(bool has_job_id, const char *job_id, const char *device, const char *target, bool has_replaces, const char *replaces, MirrorSyncMode sync, bool has_speed, int64_t speed, bool has_granularity, uint32_t granularity, bool has_buf_size, int64_t buf_size, bool has_on_source_error, BlockdevOnError on_source_error, bool has_on_target_error, BlockdevOnError on_target_error, bool has_filter_node_name, const char *filter_node_name, bool has_copy_mode, MirrorCopyMode copy_mode, bool has_auto_finalize, bool auto_finalize, bool has_auto_dismiss, bool auto_dismiss, Error **errp, void *ctx);
void qmp_block_stream(bool has_job_id, const char *job_id, const char *device, bool has_base, const char *base, bool has_base_node, const char *base_node, bool has_backing_file, const char *backing_file, bool has_bottom, const char *bottom, bool has_speed, int64_t speed, bool has_on_error, BlockdevOnError on_error, bool has_filter_node_name, const char *filter_node_name, bool has_auto_finalize, bool auto_finalize, bool has_auto_dismiss, bool auto_dismiss, Error **errp, void *ctx);
void qmp_block_job_set_speed(const char *device, int64_t speed, Error **errp, void *ctx);
void qmp_block_job_cancel(const char *device, bool has_force, bool force, Error **errp, void *ctx);
void qmp_block_job_pause(const char *device, Error **errp, void *ctx);
void qmp_block_job_resume(const char *device, Error **errp, void *ctx);
void qmp_block_job_complete(const char *device, Error **errp, void *ctx);
void qmp_block_job_dismiss(const char *id, Error **errp, void *ctx);
void qmp_block_job_finalize(const char *id, Error **errp, void *ctx);
void qmp_blockdev_add(BlockdevOptions *arg, Error **errp, void *ctx);
void qmp_blockdev_reopen(BlockdevOptionsList *options, Error **errp, void *ctx);
void qmp_blockdev_del(const char *node_name, Error **errp, void *ctx);
void qmp_blockdev_create(const char *job_id, BlockdevCreateOptions *options, Error **errp, void *ctx);
void qmp_x_blockdev_amend(const char *job_id, const char *node_name, BlockdevAmendOptions *options, bool has_force, bool force, Error **errp, void *ctx);
void qmp_block_set_write_threshold(const char *node_name, uint64_t write_threshold, Error **errp, void *ctx);
void qmp_x_blockdev_change(const char *parent, bool has_child, const char *child, bool has_node, const char *node, Error **errp, void *ctx);
void qmp_x_blockdev_set_iothread(const char *node_name, StrOrNull *iothread, bool has_force, bool force, Error **errp, void *ctx);
void qmp_blockdev_snapshot_internal_sync(const char *device, const char *name, Error **errp, void *ctx);
SnapshotInfo *qmp_blockdev_snapshot_delete_internal_sync(const char *device, bool has_id, const char *id, bool has_name, const char *name, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_BLOCK_CORE_H */
