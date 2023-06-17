/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu-compat.h"
#include "error.h"
#include "qerror.h"
#include "qapi-visit-rdma.h"

bool visit_type_q_obj_RDMA_GID_STATUS_CHANGED_arg_members(Visitor *v, q_obj_RDMA_GID_STATUS_CHANGED_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "netdev", &obj->netdev, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "gid-status", &obj->gid_status, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "subnet-prefix", &obj->subnet_prefix, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "interface-id", &obj->interface_id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_RDMA_GID_STATUS_CHANGED_arg(Visitor *v, const char *name,
                 q_obj_RDMA_GID_STATUS_CHANGED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_RDMA_GID_STATUS_CHANGED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_RDMA_GID_STATUS_CHANGED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_RDMA_GID_STATUS_CHANGED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_rdma_c;
