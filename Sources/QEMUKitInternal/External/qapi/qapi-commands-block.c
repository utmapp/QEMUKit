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
#include "qapi-visit-block.h"
#include "qapi-commands-block.h"


static PRManagerInfoList *qmp_marshal_rpc_PRManagerInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    PRManagerInfoList *ret = {0};

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
    visit_type_PRManagerInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

PRManagerInfoList *qmp_query_pr_managers(Error **errp, void *ctx)

{
    const char *cmdname = "query-pr-managers";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    PRManagerInfoList *ret = {0};

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
    ret = qmp_marshal_rpc_PRManagerInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_eject(bool has_device, const char *device, bool has_id, const char *id, bool has_force, bool force, Error **errp, void *ctx)

{
    const char *cmdname = "eject";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_eject_arg _arg = {
        .has_device = has_device,
        .device = (char *)device,
        .has_id = has_id,
        .id = (char *)id,
        .has_force = has_force,
        .force = force,
    };
    q_obj_eject_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_eject_arg(v, "arguments", &argp, &err);
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

void qmp_blockdev_open_tray(bool has_device, const char *device, bool has_id, const char *id, bool has_force, bool force, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-open-tray";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_open_tray_arg _arg = {
        .has_device = has_device,
        .device = (char *)device,
        .has_id = has_id,
        .id = (char *)id,
        .has_force = has_force,
        .force = force,
    };
    q_obj_blockdev_open_tray_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_open_tray_arg(v, "arguments", &argp, &err);
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

void qmp_blockdev_close_tray(bool has_device, const char *device, bool has_id, const char *id, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-close-tray";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_close_tray_arg _arg = {
        .has_device = has_device,
        .device = (char *)device,
        .has_id = has_id,
        .id = (char *)id,
    };
    q_obj_blockdev_close_tray_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_close_tray_arg(v, "arguments", &argp, &err);
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

void qmp_blockdev_remove_medium(const char *id, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-remove-medium";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_remove_medium_arg _arg = {
        .id = (char *)id,
    };
    q_obj_blockdev_remove_medium_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_remove_medium_arg(v, "arguments", &argp, &err);
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

void qmp_blockdev_insert_medium(const char *id, const char *node_name, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-insert-medium";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_insert_medium_arg _arg = {
        .id = (char *)id,
        .node_name = (char *)node_name,
    };
    q_obj_blockdev_insert_medium_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_insert_medium_arg(v, "arguments", &argp, &err);
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

void qmp_blockdev_change_medium(bool has_device, const char *device, bool has_id, const char *id, const char *filename, bool has_format, const char *format, bool has_force, bool force, bool has_read_only_mode, BlockdevChangeReadOnlyMode read_only_mode, Error **errp, void *ctx)

{
    const char *cmdname = "blockdev-change-medium";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_blockdev_change_medium_arg _arg = {
        .has_device = has_device,
        .device = (char *)device,
        .has_id = has_id,
        .id = (char *)id,
        .filename = (char *)filename,
        .has_format = has_format,
        .format = (char *)format,
        .has_force = has_force,
        .force = force,
        .has_read_only_mode = has_read_only_mode,
        .read_only_mode = read_only_mode,
    };
    q_obj_blockdev_change_medium_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_blockdev_change_medium_arg(v, "arguments", &argp, &err);
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

void qmp_block_set_io_throttle(BlockIOThrottle *arg, Error **errp, void *ctx)

{
    const char *cmdname = "block_set_io_throttle";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockIOThrottle *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockIOThrottle(v, "arguments", &argp, &err);
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

void qmp_block_latency_histogram_set(const char *id, bool has_boundaries, uint64List *boundaries, bool has_boundaries_read, uint64List *boundaries_read, bool has_boundaries_write, uint64List *boundaries_write, bool has_boundaries_flush, uint64List *boundaries_flush, Error **errp, void *ctx)

{
    const char *cmdname = "block-latency-histogram-set";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_latency_histogram_set_arg _arg = {
        .id = (char *)id,
        .has_boundaries = has_boundaries,
        .boundaries = boundaries,
        .has_boundaries_read = has_boundaries_read,
        .boundaries_read = boundaries_read,
        .has_boundaries_write = has_boundaries_write,
        .boundaries_write = boundaries_write,
        .has_boundaries_flush = has_boundaries_flush,
        .boundaries_flush = boundaries_flush,
    };
    q_obj_block_latency_histogram_set_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_latency_histogram_set_arg(v, "arguments", &argp, &err);
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

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_block_c;
