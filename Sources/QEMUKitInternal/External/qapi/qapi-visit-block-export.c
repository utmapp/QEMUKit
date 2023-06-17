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
#include "qapi-visit-block-export.h"

bool visit_type_NbdServerOptions_members(Visitor *v, NbdServerOptions *obj, Error **errp)
{
    if (!visit_type_SocketAddress(v, "addr", &obj->addr, errp)) {
        return false;
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        if (!visit_type_str(v, "tls-creds", &obj->tls_creds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-authz", &obj->has_tls_authz)) {
        if (!visit_type_str(v, "tls-authz", &obj->tls_authz, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-connections", &obj->has_max_connections)) {
        if (!visit_type_uint32(v, "max-connections", &obj->max_connections, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NbdServerOptions(Visitor *v, const char *name,
                 NbdServerOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NbdServerOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NbdServerOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NbdServerOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_nbd_server_start_arg_members(Visitor *v, q_obj_nbd_server_start_arg *obj, Error **errp)
{
    if (!visit_type_SocketAddressLegacy(v, "addr", &obj->addr, errp)) {
        return false;
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        if (!visit_type_str(v, "tls-creds", &obj->tls_creds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-authz", &obj->has_tls_authz)) {
        if (!visit_type_str(v, "tls-authz", &obj->tls_authz, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-connections", &obj->has_max_connections)) {
        if (!visit_type_uint32(v, "max-connections", &obj->max_connections, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_nbd_server_start_arg(Visitor *v, const char *name,
                 q_obj_nbd_server_start_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_nbd_server_start_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_nbd_server_start_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_nbd_server_start_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockExportOptionsNbdBase_members(Visitor *v, BlockExportOptionsNbdBase *obj, Error **errp)
{
    if (visit_optional(v, "name", &obj->has_name)) {
        if (!visit_type_str(v, "name", &obj->name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "description", &obj->has_description)) {
        if (!visit_type_str(v, "description", &obj->description, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockExportOptionsNbdBase(Visitor *v, const char *name,
                 BlockExportOptionsNbdBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockExportOptionsNbdBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockExportOptionsNbdBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockExportOptionsNbdBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockExportOptionsNbd_members(Visitor *v, BlockExportOptionsNbd *obj, Error **errp)
{
    if (!visit_type_BlockExportOptionsNbdBase_members(v, (BlockExportOptionsNbdBase *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "bitmaps", &obj->has_bitmaps)) {
        if (!visit_type_BlockDirtyBitmapOrStrList(v, "bitmaps", &obj->bitmaps, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "allocation-depth", &obj->has_allocation_depth)) {
        if (!visit_type_bool(v, "allocation-depth", &obj->allocation_depth, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockExportOptionsNbd(Visitor *v, const char *name,
                 BlockExportOptionsNbd **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockExportOptionsNbd), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockExportOptionsNbd_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockExportOptionsNbd(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockExportOptionsVhostUserBlk_members(Visitor *v, BlockExportOptionsVhostUserBlk *obj, Error **errp)
{
    if (!visit_type_SocketAddress(v, "addr", &obj->addr, errp)) {
        return false;
    }
    if (visit_optional(v, "logical-block-size", &obj->has_logical_block_size)) {
        if (!visit_type_size(v, "logical-block-size", &obj->logical_block_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "num-queues", &obj->has_num_queues)) {
        if (!visit_type_uint16(v, "num-queues", &obj->num_queues, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockExportOptionsVhostUserBlk(Visitor *v, const char *name,
                 BlockExportOptionsVhostUserBlk **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockExportOptionsVhostUserBlk), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockExportOptionsVhostUserBlk_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockExportOptionsVhostUserBlk(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FuseExportAllowOther(Visitor *v, const char *name,
                 FuseExportAllowOther *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &FuseExportAllowOther_lookup, errp);
    *obj = value;
    return ok;
}

#if defined(CONFIG_FUSE)
bool visit_type_BlockExportOptionsFuse_members(Visitor *v, BlockExportOptionsFuse *obj, Error **errp)
{
    if (!visit_type_str(v, "mountpoint", &obj->mountpoint, errp)) {
        return false;
    }
    if (visit_optional(v, "growable", &obj->has_growable)) {
        if (!visit_type_bool(v, "growable", &obj->growable, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "allow-other", &obj->has_allow_other)) {
        if (!visit_type_FuseExportAllowOther(v, "allow-other", &obj->allow_other, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockExportOptionsFuse(Visitor *v, const char *name,
                 BlockExportOptionsFuse **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockExportOptionsFuse), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockExportOptionsFuse_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockExportOptionsFuse(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_FUSE) */

bool visit_type_BlockExportOptionsVduseBlk_members(Visitor *v, BlockExportOptionsVduseBlk *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "num-queues", &obj->has_num_queues)) {
        if (!visit_type_uint16(v, "num-queues", &obj->num_queues, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "queue-size", &obj->has_queue_size)) {
        if (!visit_type_uint16(v, "queue-size", &obj->queue_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "logical-block-size", &obj->has_logical_block_size)) {
        if (!visit_type_size(v, "logical-block-size", &obj->logical_block_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "serial", &obj->has_serial)) {
        if (!visit_type_str(v, "serial", &obj->serial, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockExportOptionsVduseBlk(Visitor *v, const char *name,
                 BlockExportOptionsVduseBlk **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockExportOptionsVduseBlk), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockExportOptionsVduseBlk_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockExportOptionsVduseBlk(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NbdServerAddOptions_members(Visitor *v, NbdServerAddOptions *obj, Error **errp)
{
    if (!visit_type_BlockExportOptionsNbdBase_members(v, (BlockExportOptionsNbdBase *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (visit_optional(v, "writable", &obj->has_writable)) {
        if (!visit_type_bool(v, "writable", &obj->writable, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bitmap", &obj->has_bitmap)) {
        if (!visit_type_str(v, "bitmap", &obj->bitmap, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NbdServerAddOptions(Visitor *v, const char *name,
                 NbdServerAddOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NbdServerAddOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NbdServerAddOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NbdServerAddOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockExportRemoveMode(Visitor *v, const char *name,
                 BlockExportRemoveMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockExportRemoveMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_nbd_server_remove_arg_members(Visitor *v, q_obj_nbd_server_remove_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_BlockExportRemoveMode(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_nbd_server_remove_arg(Visitor *v, const char *name,
                 q_obj_nbd_server_remove_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_nbd_server_remove_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_nbd_server_remove_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_nbd_server_remove_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockExportType(Visitor *v, const char *name,
                 BlockExportType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockExportType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_BlockExportOptions_base_members(Visitor *v, q_obj_BlockExportOptions_base *obj, Error **errp)
{
    if (!visit_type_BlockExportType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (visit_optional(v, "fixed-iothread", &obj->has_fixed_iothread)) {
        if (!visit_type_bool(v, "fixed-iothread", &obj->fixed_iothread, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iothread", &obj->has_iothread)) {
        if (!visit_type_str(v, "iothread", &obj->iothread, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    if (visit_optional(v, "writable", &obj->has_writable)) {
        if (!visit_type_bool(v, "writable", &obj->writable, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "writethrough", &obj->has_writethrough)) {
        if (!visit_type_bool(v, "writethrough", &obj->writethrough, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_BlockExportOptions_base(Visitor *v, const char *name,
                 q_obj_BlockExportOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BlockExportOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BlockExportOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BlockExportOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockExportOptions_members(Visitor *v, BlockExportOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_BlockExportOptions_base_members(v, (q_obj_BlockExportOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case BLOCK_EXPORT_TYPE_NBD:
        return visit_type_BlockExportOptionsNbd_members(v, &obj->u.nbd, errp);
#if defined(CONFIG_VHOST_USER_BLK_SERVER)
    case BLOCK_EXPORT_TYPE_VHOST_USER_BLK:
        return visit_type_BlockExportOptionsVhostUserBlk_members(v, &obj->u.vhost_user_blk, errp);
#endif /* defined(CONFIG_VHOST_USER_BLK_SERVER) */
#if defined(CONFIG_FUSE)
    case BLOCK_EXPORT_TYPE_FUSE:
        return visit_type_BlockExportOptionsFuse_members(v, &obj->u.fuse, errp);
#endif /* defined(CONFIG_FUSE) */
#if defined(CONFIG_VDUSE_BLK_EXPORT)
    case BLOCK_EXPORT_TYPE_VDUSE_BLK:
        return visit_type_BlockExportOptionsVduseBlk_members(v, &obj->u.vduse_blk, errp);
#endif /* defined(CONFIG_VDUSE_BLK_EXPORT) */
    default:
        abort();
    }
    return true;
}

bool visit_type_BlockExportOptions(Visitor *v, const char *name,
                 BlockExportOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockExportOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockExportOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockExportOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_export_del_arg_members(Visitor *v, q_obj_block_export_del_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_BlockExportRemoveMode(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_block_export_del_arg(Visitor *v, const char *name,
                 q_obj_block_export_del_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_export_del_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_export_del_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_export_del_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BLOCK_EXPORT_DELETED_arg_members(Visitor *v, q_obj_BLOCK_EXPORT_DELETED_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BLOCK_EXPORT_DELETED_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_EXPORT_DELETED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_EXPORT_DELETED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_EXPORT_DELETED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_EXPORT_DELETED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockExportInfo_members(Visitor *v, BlockExportInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_BlockExportType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "shutting-down", &obj->shutting_down, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockExportInfo(Visitor *v, const char *name,
                 BlockExportInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockExportInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockExportInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockExportInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockExportInfoList(Visitor *v, const char *name,
                 BlockExportInfoList **obj, Error **errp)
{
    bool ok = false;
    BlockExportInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockExportInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockExportInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockExportInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_block_export_c;
