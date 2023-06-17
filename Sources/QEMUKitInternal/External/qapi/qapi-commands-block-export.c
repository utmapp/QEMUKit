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
#include "qapi-visit-block-export.h"
#include "qapi-commands-block-export.h"


void qmp_nbd_server_start(SocketAddressLegacy *addr, bool has_tls_creds, const char *tls_creds, bool has_tls_authz, const char *tls_authz, bool has_max_connections, uint32_t max_connections, Error **errp, void *ctx)

{
    const char *cmdname = "nbd-server-start";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_nbd_server_start_arg _arg = {
        .addr = addr,
        .has_tls_creds = has_tls_creds,
        .tls_creds = (char *)tls_creds,
        .has_tls_authz = has_tls_authz,
        .tls_authz = (char *)tls_authz,
        .has_max_connections = has_max_connections,
        .max_connections = max_connections,
    };
    q_obj_nbd_server_start_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_nbd_server_start_arg(v, "arguments", &argp, &err);
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

void qmp_nbd_server_add(NbdServerAddOptions *arg, Error **errp, void *ctx)

{
    const char *cmdname = "nbd-server-add";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    NbdServerAddOptions *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_NbdServerAddOptions(v, "arguments", &argp, &err);
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

void qmp_nbd_server_remove(const char *name, bool has_mode, BlockExportRemoveMode mode, Error **errp, void *ctx)

{
    const char *cmdname = "nbd-server-remove";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_nbd_server_remove_arg _arg = {
        .name = (char *)name,
        .has_mode = has_mode,
        .mode = mode,
    };
    q_obj_nbd_server_remove_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_nbd_server_remove_arg(v, "arguments", &argp, &err);
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

void qmp_nbd_server_stop(Error **errp, void *ctx)

{
    const char *cmdname = "nbd-server-stop";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;

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
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}

void qmp_block_export_add(BlockExportOptions *arg, Error **errp, void *ctx)

{
    const char *cmdname = "block-export-add";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockExportOptions *argp = arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_BlockExportOptions(v, "arguments", &argp, &err);
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

void qmp_block_export_del(const char *id, bool has_mode, BlockExportRemoveMode mode, Error **errp, void *ctx)

{
    const char *cmdname = "block-export-del";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_block_export_del_arg _arg = {
        .id = (char *)id,
        .has_mode = has_mode,
        .mode = mode,
    };
    q_obj_block_export_del_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_block_export_del_arg(v, "arguments", &argp, &err);
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

static BlockExportInfoList *qmp_marshal_rpc_BlockExportInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    BlockExportInfoList *ret = {0};

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
    visit_type_BlockExportInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}

BlockExportInfoList *qmp_query_block_exports(Error **errp, void *ctx)

{
    const char *cmdname = "query-block-exports";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    BlockExportInfoList *ret = {0};

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
    ret = qmp_marshal_rpc_BlockExportInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_block_export_c;
