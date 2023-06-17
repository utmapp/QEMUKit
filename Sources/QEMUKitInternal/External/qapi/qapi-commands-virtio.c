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
#include "qapi-visit-virtio.h"
#include "qapi-commands-virtio.h"


static VirtioInfoList *qmp_marshal_rpc_VirtioInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    VirtioInfoList *ret = {0};

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
    visit_type_VirtioInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

VirtioInfoList *qmp_x_query_virtio(Error **errp, void *ctx)

{
    const char *cmdname = "x-query-virtio";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    VirtioInfoList *ret = {0};

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
    ret = qmp_marshal_rpc_VirtioInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static VirtioStatus *qmp_marshal_rpc_VirtioStatus(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    VirtioStatus *ret = {0};

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
    visit_type_VirtioStatus(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

VirtioStatus *qmp_x_query_virtio_status(const char *path, Error **errp, void *ctx)

{
    const char *cmdname = "x-query-virtio-status";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    VirtioStatus *ret = {0};
    q_obj_x_query_virtio_status_arg _arg = {
        .path = (char *)path,
    };
    q_obj_x_query_virtio_status_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_x_query_virtio_status_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_VirtioStatus(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static VirtQueueStatus *qmp_marshal_rpc_VirtQueueStatus(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    VirtQueueStatus *ret = {0};

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
    visit_type_VirtQueueStatus(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

VirtQueueStatus *qmp_x_query_virtio_queue_status(const char *path, uint16_t queue, Error **errp, void *ctx)

{
    const char *cmdname = "x-query-virtio-queue-status";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    VirtQueueStatus *ret = {0};
    q_obj_x_query_virtio_queue_status_arg _arg = {
        .path = (char *)path,
        .queue = queue,
    };
    q_obj_x_query_virtio_queue_status_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_x_query_virtio_queue_status_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_VirtQueueStatus(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static VirtVhostQueueStatus *qmp_marshal_rpc_VirtVhostQueueStatus(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    VirtVhostQueueStatus *ret = {0};

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
    visit_type_VirtVhostQueueStatus(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

VirtVhostQueueStatus *qmp_x_query_virtio_vhost_queue_status(const char *path, uint16_t queue, Error **errp, void *ctx)

{
    const char *cmdname = "x-query-virtio-vhost-queue-status";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    VirtVhostQueueStatus *ret = {0};
    q_obj_x_query_virtio_vhost_queue_status_arg _arg = {
        .path = (char *)path,
        .queue = queue,
    };
    q_obj_x_query_virtio_vhost_queue_status_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_x_query_virtio_vhost_queue_status_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_VirtVhostQueueStatus(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static VirtioQueueElement *qmp_marshal_rpc_VirtioQueueElement(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    VirtioQueueElement *ret = {0};

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
    visit_type_VirtioQueueElement(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

VirtioQueueElement *qmp_x_query_virtio_queue_element(const char *path, uint16_t queue, bool has_index, uint16_t index, Error **errp, void *ctx)

{
    const char *cmdname = "x-query-virtio-queue-element";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    VirtioQueueElement *ret = {0};
    q_obj_x_query_virtio_queue_element_arg _arg = {
        .path = (char *)path,
        .queue = queue,
        .has_index = has_index,
        .index = index,
    };
    q_obj_x_query_virtio_queue_element_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_x_query_virtio_queue_element_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_VirtioQueueElement(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_virtio_c;
