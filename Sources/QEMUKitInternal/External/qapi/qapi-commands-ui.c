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
#include "qapi-visit-ui.h"
#include "qapi-commands-ui.h"


void qmp_set_password(SetPasswordOptions *arg, Error **errp, void *ctx)

{
    const char *cmdname = "set_password";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SetPasswordOptions *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_SetPasswordOptions(v, "arguments", &argp, &err);
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

void qmp_expire_password(ExpirePasswordOptions *arg, Error **errp, void *ctx)

{
    const char *cmdname = "expire_password";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    ExpirePasswordOptions *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_ExpirePasswordOptions(v, "arguments", &argp, &err);
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

void qmp_screendump(const char *filename, bool has_device, const char *device, bool has_head, int64_t head, bool has_format, ImageFormat format, Error **errp, void *ctx)

{
    const char *cmdname = "screendump";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_screendump_arg _arg = {
        .filename = (char *)filename,
        .has_device = has_device,
        .device = (char *)device,
        .has_head = has_head,
        .head = head,
        .has_format = has_format,
        .format = format,
    };
    q_obj_screendump_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_screendump_arg(v, "arguments", &argp, &err);
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

#if defined(CONFIG_SPICE)
static SpiceInfo *qmp_marshal_rpc_SpiceInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    SpiceInfo *ret = {0};

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
    visit_type_SpiceInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
SpiceInfo *qmp_query_spice(Error **errp, void *ctx)

{
    const char *cmdname = "query-spice";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SpiceInfo *ret = {0};

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
    ret = qmp_marshal_rpc_SpiceInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
static VncInfo *qmp_marshal_rpc_VncInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    VncInfo *ret = {0};

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
    visit_type_VncInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
VncInfo *qmp_query_vnc(Error **errp, void *ctx)

{
    const char *cmdname = "query-vnc";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    VncInfo *ret = {0};

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
    ret = qmp_marshal_rpc_VncInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
static VncInfo2List *qmp_marshal_rpc_VncInfo2List(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    VncInfo2List *ret = {0};

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
    visit_type_VncInfo2List(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
VncInfo2List *qmp_query_vnc_servers(Error **errp, void *ctx)

{
    const char *cmdname = "query-vnc-servers";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    VncInfo2List *ret = {0};

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
    ret = qmp_marshal_rpc_VncInfo2List(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qmp_change_vnc_password(const char *password, Error **errp, void *ctx)

{
    const char *cmdname = "change-vnc-password";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_change_vnc_password_arg _arg = {
        .password = (char *)password,
    };
    q_obj_change_vnc_password_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_change_vnc_password_arg(v, "arguments", &argp, &err);
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
#endif /* defined(CONFIG_VNC) */

static MouseInfoList *qmp_marshal_rpc_MouseInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    MouseInfoList *ret = {0};

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
    visit_type_MouseInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

MouseInfoList *qmp_query_mice(Error **errp, void *ctx)

{
    const char *cmdname = "query-mice";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    MouseInfoList *ret = {0};

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
    ret = qmp_marshal_rpc_MouseInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_send_key(KeyValueList *keys, bool has_hold_time, int64_t hold_time, Error **errp, void *ctx)

{
    const char *cmdname = "send-key";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_send_key_arg _arg = {
        .keys = keys,
        .has_hold_time = has_hold_time,
        .hold_time = hold_time,
    };
    q_obj_send_key_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_send_key_arg(v, "arguments", &argp, &err);
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

void qmp_input_send_event(bool has_device, const char *device, bool has_head, int64_t head, InputEventList *events, Error **errp, void *ctx)

{
    const char *cmdname = "input-send-event";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_input_send_event_arg _arg = {
        .has_device = has_device,
        .device = (char *)device,
        .has_head = has_head,
        .head = head,
        .events = events,
    };
    q_obj_input_send_event_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_input_send_event_arg(v, "arguments", &argp, &err);
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

static DisplayOptions *qmp_marshal_rpc_DisplayOptions(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    DisplayOptions *ret = {0};

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
    visit_type_DisplayOptions(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

DisplayOptions *qmp_query_display_options(Error **errp, void *ctx)

{
    const char *cmdname = "query-display-options";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    DisplayOptions *ret = {0};

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
    ret = qmp_marshal_rpc_DisplayOptions(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_display_reload(DisplayReloadOptions *arg, Error **errp, void *ctx)

{
    const char *cmdname = "display-reload";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    DisplayReloadOptions *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_DisplayReloadOptions(v, "arguments", &argp, &err);
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

void qmp_display_update(DisplayUpdateOptions *arg, Error **errp, void *ctx)

{
    const char *cmdname = "display-update";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    DisplayUpdateOptions *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_DisplayUpdateOptions(v, "arguments", &argp, &err);
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
char qapi_dummy_qapi_commands_ui_c;
