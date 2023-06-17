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

#include "qemu-compat.h"
#include "cf-output-visitor.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"
#include "error.h"
#include "qapi-visit-block-core.h"
#include "qapi-commands-block-core.h"


static BlockInfoList *qmp_marshal_rpc_BlockInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    BlockInfoList *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_BlockInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

BlockInfoList *qmp_query_block(Error **errp, void *ctx)

{
    const char *cmdname = "query-block";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockInfoList *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_BlockInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static BlockStatsList *qmp_marshal_rpc_BlockStatsList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    BlockStatsList *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_BlockStatsList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

BlockStatsList *qmp_query_blockstats(bool has_query_nodes, bool query_nodes, Error **errp, void *ctx)

{
    const char *cmdname = "query-blockstats";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockStatsList *ret = {0};
    q_obj_query_blockstats_arg _arg = {
        .has_query_nodes = has_query_nodes,
        .query_nodes = query_nodes,
    };
    q_obj_query_blockstats_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_blockstats_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_BlockStatsList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static BlockJobInfoList *qmp_marshal_rpc_BlockJobInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    BlockJobInfoList *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_BlockJobInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

BlockJobInfoList *qmp_query_block_jobs(Error **errp, void *ctx)

{
    const char *cmdname = "query-block-jobs";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockJobInfoList *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_BlockJobInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_block_resize(bool has_device, const char *device, bool has_node_name, const char *node_name, int64_t size, Error **errp, void *ctx)

{
    const char *cmdname = "block_resize";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_resize_arg _arg = {
        .has_device = has_device,
        .device = (char *)device,
        .has_node_name = has_node_name,
        .node_name = (char *)node_name,
        .size = size,
    };
    q_obj_block_resize_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_resize_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_blockdev_snapshot_sync(bool has_device, const char *device, bool has_node_name, const char *node_name, const char *snapshot_file, bool has_snapshot_node_name, const char *snapshot_node_name, bool has_format, const char *format, bool has_mode, NewImageMode mode, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-snapshot-sync";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockdevSnapshotSync _arg = {
        .has_device = has_device,
        .device = (char *)device,
        .has_node_name = has_node_name,
        .node_name = (char *)node_name,
        .snapshot_file = (char *)snapshot_file,
        .has_snapshot_node_name = has_snapshot_node_name,
        .snapshot_node_name = (char *)snapshot_node_name,
        .has_format = has_format,
        .format = (char *)format,
        .has_mode = has_mode,
        .mode = mode,
    };
    BlockdevSnapshotSync *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockdevSnapshotSync(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_blockdev_snapshot(const char *node, const char *overlay, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-snapshot";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockdevSnapshot _arg = {
        .node = (char *)node,
        .overlay = (char *)overlay,
    };
    BlockdevSnapshot *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockdevSnapshot(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_change_backing_file(const char *device, const char *image_node_name, const char *backing_file, Error **errp, void *ctx)

{
    const char *cmdname = "change-backing-file";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_change_backing_file_arg _arg = {
        .device = (char *)device,
        .image_node_name = (char *)image_node_name,
        .backing_file = (char *)backing_file,
    };
    q_obj_change_backing_file_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_change_backing_file_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_commit(bool has_job_id, const char *job_id, const char *device, bool has_base_node, const char *base_node, bool has_base, const char *base, bool has_top_node, const char *top_node, bool has_top, const char *top, bool has_backing_file, const char *backing_file, bool has_speed, int64_t speed, bool has_on_error, BlockdevOnError on_error, bool has_filter_node_name, const char *filter_node_name, bool has_auto_finalize, bool auto_finalize, bool has_auto_dismiss, bool auto_dismiss, Error **errp, void *ctx)

{
    const char *cmdname = "block-commit";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_commit_arg _arg = {
        .has_job_id = has_job_id,
        .job_id = (char *)job_id,
        .device = (char *)device,
        .has_base_node = has_base_node,
        .base_node = (char *)base_node,
        .has_base = has_base,
        .base = (char *)base,
        .has_top_node = has_top_node,
        .top_node = (char *)top_node,
        .has_top = has_top,
        .top = (char *)top,
        .has_backing_file = has_backing_file,
        .backing_file = (char *)backing_file,
        .has_speed = has_speed,
        .speed = speed,
        .has_on_error = has_on_error,
        .on_error = on_error,
        .has_filter_node_name = has_filter_node_name,
        .filter_node_name = (char *)filter_node_name,
        .has_auto_finalize = has_auto_finalize,
        .auto_finalize = auto_finalize,
        .has_auto_dismiss = has_auto_dismiss,
        .auto_dismiss = auto_dismiss,
    };
    q_obj_block_commit_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_commit_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_drive_backup(DriveBackup *arg, Error **errp, void *ctx)

{
    const char *cmdname = "drive-backup";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    DriveBackup *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_DriveBackup(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_blockdev_backup(BlockdevBackup *arg, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-backup";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockdevBackup *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockdevBackup(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

static BlockDeviceInfoList *qmp_marshal_rpc_BlockDeviceInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    BlockDeviceInfoList *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_BlockDeviceInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

BlockDeviceInfoList *qmp_query_named_block_nodes(bool has_flat, bool flat, Error **errp, void *ctx)

{
    const char *cmdname = "query-named-block-nodes";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockDeviceInfoList *ret = {0};
    q_obj_query_named_block_nodes_arg _arg = {
        .has_flat = has_flat,
        .flat = flat,
    };
    q_obj_query_named_block_nodes_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_named_block_nodes_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_BlockDeviceInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static XDbgBlockGraph *qmp_marshal_rpc_XDbgBlockGraph(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    XDbgBlockGraph *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_XDbgBlockGraph(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

XDbgBlockGraph *qmp_x_debug_query_block_graph(Error **errp, void *ctx)

{
    const char *cmdname = "x-debug-query-block-graph";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    XDbgBlockGraph *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_XDbgBlockGraph(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_drive_mirror(DriveMirror *arg, Error **errp, void *ctx)

{
    const char *cmdname = "drive-mirror";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    DriveMirror *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_DriveMirror(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_dirty_bitmap_add(const char *node, const char *name, bool has_granularity, uint32_t granularity, bool has_persistent, bool persistent, bool has_disabled, bool disabled, Error **errp, void *ctx)

{
    const char *cmdname = "block-dirty-bitmap-add";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockDirtyBitmapAdd _arg = {
        .node = (char *)node,
        .name = (char *)name,
        .has_granularity = has_granularity,
        .granularity = granularity,
        .has_persistent = has_persistent,
        .persistent = persistent,
        .has_disabled = has_disabled,
        .disabled = disabled,
    };
    BlockDirtyBitmapAdd *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockDirtyBitmapAdd(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_dirty_bitmap_remove(const char *node, const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "block-dirty-bitmap-remove";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockDirtyBitmap _arg = {
        .node = (char *)node,
        .name = (char *)name,
    };
    BlockDirtyBitmap *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockDirtyBitmap(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_dirty_bitmap_clear(const char *node, const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "block-dirty-bitmap-clear";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockDirtyBitmap _arg = {
        .node = (char *)node,
        .name = (char *)name,
    };
    BlockDirtyBitmap *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockDirtyBitmap(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_dirty_bitmap_enable(const char *node, const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "block-dirty-bitmap-enable";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockDirtyBitmap _arg = {
        .node = (char *)node,
        .name = (char *)name,
    };
    BlockDirtyBitmap *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockDirtyBitmap(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_dirty_bitmap_disable(const char *node, const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "block-dirty-bitmap-disable";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockDirtyBitmap _arg = {
        .node = (char *)node,
        .name = (char *)name,
    };
    BlockDirtyBitmap *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockDirtyBitmap(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_dirty_bitmap_merge(const char *node, const char *target, BlockDirtyBitmapOrStrList *bitmaps, Error **errp, void *ctx)

{
    const char *cmdname = "block-dirty-bitmap-merge";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockDirtyBitmapMerge _arg = {
        .node = (char *)node,
        .target = (char *)target,
        .bitmaps = bitmaps,
    };
    BlockDirtyBitmapMerge *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockDirtyBitmapMerge(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

static BlockDirtyBitmapSha256 *qmp_marshal_rpc_BlockDirtyBitmapSha256(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    BlockDirtyBitmapSha256 *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_BlockDirtyBitmapSha256(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

BlockDirtyBitmapSha256 *qmp_x_debug_block_dirty_bitmap_sha256(const char *node, const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "x-debug-block-dirty-bitmap-sha256";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockDirtyBitmapSha256 *ret = {0};
    BlockDirtyBitmap _arg = {
        .node = (char *)node,
        .name = (char *)name,
    };
    BlockDirtyBitmap *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockDirtyBitmap(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_BlockDirtyBitmapSha256(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_blockdev_mirror(bool has_job_id, const char *job_id, const char *device, const char *target, bool has_replaces, const char *replaces, MirrorSyncMode sync, bool has_speed, int64_t speed, bool has_granularity, uint32_t granularity, bool has_buf_size, int64_t buf_size, bool has_on_source_error, BlockdevOnError on_source_error, bool has_on_target_error, BlockdevOnError on_target_error, bool has_filter_node_name, const char *filter_node_name, bool has_copy_mode, MirrorCopyMode copy_mode, bool has_auto_finalize, bool auto_finalize, bool has_auto_dismiss, bool auto_dismiss, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-mirror";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_mirror_arg _arg = {
        .has_job_id = has_job_id,
        .job_id = (char *)job_id,
        .device = (char *)device,
        .target = (char *)target,
        .has_replaces = has_replaces,
        .replaces = (char *)replaces,
        .sync = sync,
        .has_speed = has_speed,
        .speed = speed,
        .has_granularity = has_granularity,
        .granularity = granularity,
        .has_buf_size = has_buf_size,
        .buf_size = buf_size,
        .has_on_source_error = has_on_source_error,
        .on_source_error = on_source_error,
        .has_on_target_error = has_on_target_error,
        .on_target_error = on_target_error,
        .has_filter_node_name = has_filter_node_name,
        .filter_node_name = (char *)filter_node_name,
        .has_copy_mode = has_copy_mode,
        .copy_mode = copy_mode,
        .has_auto_finalize = has_auto_finalize,
        .auto_finalize = auto_finalize,
        .has_auto_dismiss = has_auto_dismiss,
        .auto_dismiss = auto_dismiss,
    };
    q_obj_blockdev_mirror_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_mirror_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_stream(bool has_job_id, const char *job_id, const char *device, bool has_base, const char *base, bool has_base_node, const char *base_node, bool has_backing_file, const char *backing_file, bool has_bottom, const char *bottom, bool has_speed, int64_t speed, bool has_on_error, BlockdevOnError on_error, bool has_filter_node_name, const char *filter_node_name, bool has_auto_finalize, bool auto_finalize, bool has_auto_dismiss, bool auto_dismiss, Error **errp, void *ctx)

{
    const char *cmdname = "block-stream";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_stream_arg _arg = {
        .has_job_id = has_job_id,
        .job_id = (char *)job_id,
        .device = (char *)device,
        .has_base = has_base,
        .base = (char *)base,
        .has_base_node = has_base_node,
        .base_node = (char *)base_node,
        .has_backing_file = has_backing_file,
        .backing_file = (char *)backing_file,
        .has_bottom = has_bottom,
        .bottom = (char *)bottom,
        .has_speed = has_speed,
        .speed = speed,
        .has_on_error = has_on_error,
        .on_error = on_error,
        .has_filter_node_name = has_filter_node_name,
        .filter_node_name = (char *)filter_node_name,
        .has_auto_finalize = has_auto_finalize,
        .auto_finalize = auto_finalize,
        .has_auto_dismiss = has_auto_dismiss,
        .auto_dismiss = auto_dismiss,
    };
    q_obj_block_stream_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_stream_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_job_set_speed(const char *device, int64_t speed, Error **errp, void *ctx)

{
    const char *cmdname = "block-job-set-speed";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_job_set_speed_arg _arg = {
        .device = (char *)device,
        .speed = speed,
    };
    q_obj_block_job_set_speed_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_job_set_speed_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_job_cancel(const char *device, bool has_force, bool force, Error **errp, void *ctx)

{
    const char *cmdname = "block-job-cancel";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_job_cancel_arg _arg = {
        .device = (char *)device,
        .has_force = has_force,
        .force = force,
    };
    q_obj_block_job_cancel_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_job_cancel_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_job_pause(const char *device, Error **errp, void *ctx)

{
    const char *cmdname = "block-job-pause";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_job_pause_arg _arg = {
        .device = (char *)device,
    };
    q_obj_block_job_pause_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_job_pause_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_job_resume(const char *device, Error **errp, void *ctx)

{
    const char *cmdname = "block-job-resume";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_job_resume_arg _arg = {
        .device = (char *)device,
    };
    q_obj_block_job_resume_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_job_resume_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_job_complete(const char *device, Error **errp, void *ctx)

{
    const char *cmdname = "block-job-complete";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_job_complete_arg _arg = {
        .device = (char *)device,
    };
    q_obj_block_job_complete_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_job_complete_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_job_dismiss(const char *id, Error **errp, void *ctx)

{
    const char *cmdname = "block-job-dismiss";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_job_dismiss_arg _arg = {
        .id = (char *)id,
    };
    q_obj_block_job_dismiss_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_job_dismiss_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_job_finalize(const char *id, Error **errp, void *ctx)

{
    const char *cmdname = "block-job-finalize";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_job_finalize_arg _arg = {
        .id = (char *)id,
    };
    q_obj_block_job_finalize_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_job_finalize_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_blockdev_add(BlockdevOptions *arg, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-add";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockdevOptions *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockdevOptions(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_blockdev_reopen(BlockdevOptionsList *options, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-reopen";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_reopen_arg _arg = {
        .options = options,
    };
    q_obj_blockdev_reopen_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_reopen_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_blockdev_del(const char *node_name, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-del";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_del_arg _arg = {
        .node_name = (char *)node_name,
    };
    q_obj_blockdev_del_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_del_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_blockdev_create(const char *job_id, BlockdevCreateOptions *options, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-create";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_create_arg _arg = {
        .job_id = (char *)job_id,
        .options = options,
    };
    q_obj_blockdev_create_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_create_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_x_blockdev_amend(const char *job_id, const char *node_name, BlockdevAmendOptions *options, bool has_force, bool force, Error **errp, void *ctx)

{
    const char *cmdname = "x-blockdev-amend";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_x_blockdev_amend_arg _arg = {
        .job_id = (char *)job_id,
        .node_name = (char *)node_name,
        .options = options,
        .has_force = has_force,
        .force = force,
    };
    q_obj_x_blockdev_amend_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_x_blockdev_amend_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_set_write_threshold(const char *node_name, uint64_t write_threshold, Error **errp, void *ctx)

{
    const char *cmdname = "block-set-write-threshold";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_set_write_threshold_arg _arg = {
        .node_name = (char *)node_name,
        .write_threshold = write_threshold,
    };
    q_obj_block_set_write_threshold_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_set_write_threshold_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_x_blockdev_change(const char *parent, bool has_child, const char *child, bool has_node, const char *node, Error **errp, void *ctx)

{
    const char *cmdname = "x-blockdev-change";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_x_blockdev_change_arg _arg = {
        .parent = (char *)parent,
        .has_child = has_child,
        .child = (char *)child,
        .has_node = has_node,
        .node = (char *)node,
    };
    q_obj_x_blockdev_change_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_x_blockdev_change_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_x_blockdev_set_iothread(const char *node_name, StrOrNull *iothread, bool has_force, bool force, Error **errp, void *ctx)

{
    const char *cmdname = "x-blockdev-set-iothread";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_x_blockdev_set_iothread_arg _arg = {
        .node_name = (char *)node_name,
        .iothread = iothread,
        .has_force = has_force,
        .force = force,
    };
    q_obj_x_blockdev_set_iothread_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_x_blockdev_set_iothread_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_blockdev_snapshot_internal_sync(const char *device, const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-snapshot-internal-sync";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockdevSnapshotInternal _arg = {
        .device = (char *)device,
        .name = (char *)name,
    };
    BlockdevSnapshotInternal *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockdevSnapshotInternal(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

static SnapshotInfo *qmp_marshal_rpc_SnapshotInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    SnapshotInfo *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_SnapshotInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

SnapshotInfo *qmp_blockdev_snapshot_delete_internal_sync(const char *device, bool has_id, const char *id, bool has_name, const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-snapshot-delete-internal-sync";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SnapshotInfo *ret = {0};
    q_obj_blockdev_snapshot_delete_internal_sync_arg _arg = {
        .device = (char *)device,
        .has_id = has_id,
        .id = (char *)id,
        .has_name = has_name,
        .name = (char *)name,
    };
    q_obj_blockdev_snapshot_delete_internal_sync_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_snapshot_delete_internal_sync_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_SnapshotInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_block_core_c;
