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
#include "qapi-visit-trace.h"
#include "qapi-commands-trace.h"


static TraceEventInfoList *qmp_marshal_rpc_TraceEventInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    TraceEventInfoList *ret = {0};

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
    visit_type_TraceEventInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

TraceEventInfoList *qmp_trace_event_get_state(const char *name, bool has_vcpu, int64_t vcpu, Error **errp, void *ctx)

{
    const char *cmdname = "trace-event-get-state";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    TraceEventInfoList *ret = {0};
    q_obj_trace_event_get_state_arg _arg = {
        .name = (char *)name,
        .has_vcpu = has_vcpu,
        .vcpu = vcpu,
    };
    q_obj_trace_event_get_state_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_trace_event_get_state_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_TraceEventInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

void qmp_trace_event_set_state(const char *name, bool enable, bool has_ignore_unavailable, bool ignore_unavailable, bool has_vcpu, int64_t vcpu, Error **errp, void *ctx)

{
    const char *cmdname = "trace-event-set-state";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_trace_event_set_state_arg _arg = {
        .name = (char *)name,
        .enable = enable,
        .has_ignore_unavailable = has_ignore_unavailable,
        .ignore_unavailable = ignore_unavailable,
        .has_vcpu = has_vcpu,
        .vcpu = vcpu,
    };
    q_obj_trace_event_set_state_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_trace_event_set_state_arg(v, "arguments", &argp, &err);
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
char qapi_dummy_qapi_commands_trace_c;
