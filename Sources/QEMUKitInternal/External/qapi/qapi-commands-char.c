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
#include "qapi-visit-char.h"
#include "qapi-commands-char.h"


static ChardevInfoList *qmp_marshal_rpc_ChardevInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    ChardevInfoList *ret = {0};

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
    visit_type_ChardevInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

ChardevInfoList *qmp_query_chardev(Error **errp, void *ctx)

{
    const char *cmdname = "query-chardev";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    ChardevInfoList *ret = {0};

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
    ret = qmp_marshal_rpc_ChardevInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static ChardevBackendInfoList *qmp_marshal_rpc_ChardevBackendInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    ChardevBackendInfoList *ret = {0};

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
    visit_type_ChardevBackendInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

ChardevBackendInfoList *qmp_query_chardev_backends(Error **errp, void *ctx)

{
    const char *cmdname = "query-chardev-backends";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    ChardevBackendInfoList *ret = {0};

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
    ret = qmp_marshal_rpc_ChardevBackendInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_ringbuf_write(const char *device, const char *data, bool has_format, DataFormat format, Error **errp, void *ctx)

{
    const char *cmdname = "ringbuf-write";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_ringbuf_write_arg _arg = {
        .device = (char *)device,
        .data = (char *)data,
        .has_format = has_format,
        .format = format,
    };
    q_obj_ringbuf_write_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_ringbuf_write_arg(v, "arguments", &argp, &err);
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

static char *qmp_marshal_rpc_str(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    char *ret = {0};

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
    visit_type_str(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

char *qmp_ringbuf_read(const char *device, int64_t size, bool has_format, DataFormat format, Error **errp, void *ctx)

{
    const char *cmdname = "ringbuf-read";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    char *ret = {0};
    q_obj_ringbuf_read_arg _arg = {
        .device = (char *)device,
        .size = size,
        .has_format = has_format,
        .format = format,
    };
    q_obj_ringbuf_read_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_ringbuf_read_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_str(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static ChardevReturn *qmp_marshal_rpc_ChardevReturn(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    ChardevReturn *ret = {0};

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
    visit_type_ChardevReturn(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

ChardevReturn *qmp_chardev_add(const char *id, ChardevBackend *backend, Error **errp, void *ctx)

{
    const char *cmdname = "chardev-add";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    ChardevReturn *ret = {0};
    q_obj_chardev_add_arg _arg = {
        .id = (char *)id,
        .backend = backend,
    };
    q_obj_chardev_add_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_chardev_add_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_ChardevReturn(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

ChardevReturn *qmp_chardev_change(const char *id, ChardevBackend *backend, Error **errp, void *ctx)

{
    const char *cmdname = "chardev-change";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    ChardevReturn *ret = {0};
    q_obj_chardev_change_arg _arg = {
        .id = (char *)id,
        .backend = backend,
    };
    q_obj_chardev_change_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_chardev_change_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_ChardevReturn(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_chardev_remove(const char *id, Error **errp, void *ctx)

{
    const char *cmdname = "chardev-remove";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_chardev_remove_arg _arg = {
        .id = (char *)id,
    };
    q_obj_chardev_remove_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_chardev_remove_arg(v, "arguments", &argp, &err);
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

void qmp_chardev_send_break(const char *id, Error **errp, void *ctx)

{
    const char *cmdname = "chardev-send-break";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_chardev_send_break_arg _arg = {
        .id = (char *)id,
    };
    q_obj_chardev_send_break_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_chardev_send_break_arg(v, "arguments", &argp, &err);
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
char qapi_dummy_qapi_commands_char_c;
