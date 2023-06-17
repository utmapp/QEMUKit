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
#include "qapi-visit-rocker.h"
#include "qapi-commands-rocker.h"


static RockerSwitch *qmp_marshal_rpc_RockerSwitch(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    RockerSwitch *ret = {0};

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
    visit_type_RockerSwitch(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

RockerSwitch *qmp_query_rocker(const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "query-rocker";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    RockerSwitch *ret = {0};
    q_obj_query_rocker_arg _arg = {
        .name = (char *)name,
    };
    q_obj_query_rocker_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_rocker_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_RockerSwitch(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static RockerPortList *qmp_marshal_rpc_RockerPortList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    RockerPortList *ret = {0};

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
    visit_type_RockerPortList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

RockerPortList *qmp_query_rocker_ports(const char *name, Error **errp, void *ctx)

{
    const char *cmdname = "query-rocker-ports";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    RockerPortList *ret = {0};
    q_obj_query_rocker_ports_arg _arg = {
        .name = (char *)name,
    };
    q_obj_query_rocker_ports_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_rocker_ports_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_RockerPortList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static RockerOfDpaFlowList *qmp_marshal_rpc_RockerOfDpaFlowList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    RockerOfDpaFlowList *ret = {0};

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
    visit_type_RockerOfDpaFlowList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

RockerOfDpaFlowList *qmp_query_rocker_of_dpa_flows(const char *name, bool has_tbl_id, uint32_t tbl_id, Error **errp, void *ctx)

{
    const char *cmdname = "query-rocker-of-dpa-flows";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    RockerOfDpaFlowList *ret = {0};
    q_obj_query_rocker_of_dpa_flows_arg _arg = {
        .name = (char *)name,
        .has_tbl_id = has_tbl_id,
        .tbl_id = tbl_id,
    };
    q_obj_query_rocker_of_dpa_flows_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_rocker_of_dpa_flows_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_RockerOfDpaFlowList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

static RockerOfDpaGroupList *qmp_marshal_rpc_RockerOfDpaGroupList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    RockerOfDpaGroupList *ret = {0};

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
    visit_type_RockerOfDpaGroupList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

RockerOfDpaGroupList *qmp_query_rocker_of_dpa_groups(const char *name, bool has_type, uint8_t type, Error **errp, void *ctx)

{
    const char *cmdname = "query-rocker-of-dpa-groups";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    RockerOfDpaGroupList *ret = {0};
    q_obj_query_rocker_of_dpa_groups_arg _arg = {
        .name = (char *)name,
        .has_type = has_type,
        .type = type,
    };
    q_obj_query_rocker_of_dpa_groups_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_rocker_of_dpa_groups_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_RockerOfDpaGroupList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_rocker_c;
