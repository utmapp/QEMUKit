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
#include "qapi-visit-block.h"

bool visit_type_BiosAtaTranslation(Visitor *v, const char *name,
                 BiosAtaTranslation *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BiosAtaTranslation_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_FloppyDriveType(Visitor *v, const char *name,
                 FloppyDriveType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &FloppyDriveType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_PRManagerInfo_members(Visitor *v, PRManagerInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "connected", &obj->connected, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PRManagerInfo(Visitor *v, const char *name,
                 PRManagerInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PRManagerInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PRManagerInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PRManagerInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PRManagerInfoList(Visitor *v, const char *name,
                 PRManagerInfoList **obj, Error **errp)
{
    bool ok = false;
    PRManagerInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (PRManagerInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_PRManagerInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PRManagerInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_eject_arg_members(Visitor *v, q_obj_eject_arg *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (visit_policy_reject(v, "device", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "device", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_str(v, "device", &obj->device, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "force", &obj->has_force)) {
        if (!visit_type_bool(v, "force", &obj->force, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_eject_arg(Visitor *v, const char *name,
                 q_obj_eject_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_eject_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_eject_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_eject_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_open_tray_arg_members(Visitor *v, q_obj_blockdev_open_tray_arg *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (visit_policy_reject(v, "device", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "device", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_str(v, "device", &obj->device, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "force", &obj->has_force)) {
        if (!visit_type_bool(v, "force", &obj->force, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_blockdev_open_tray_arg(Visitor *v, const char *name,
                 q_obj_blockdev_open_tray_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_open_tray_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_open_tray_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_open_tray_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_close_tray_arg_members(Visitor *v, q_obj_blockdev_close_tray_arg *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (visit_policy_reject(v, "device", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "device", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_str(v, "device", &obj->device, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_blockdev_close_tray_arg(Visitor *v, const char *name,
                 q_obj_blockdev_close_tray_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_close_tray_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_close_tray_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_close_tray_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_remove_medium_arg_members(Visitor *v, q_obj_blockdev_remove_medium_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_blockdev_remove_medium_arg(Visitor *v, const char *name,
                 q_obj_blockdev_remove_medium_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_remove_medium_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_remove_medium_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_remove_medium_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_insert_medium_arg_members(Visitor *v, q_obj_blockdev_insert_medium_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_blockdev_insert_medium_arg(Visitor *v, const char *name,
                 q_obj_blockdev_insert_medium_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_insert_medium_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_insert_medium_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_insert_medium_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevChangeReadOnlyMode(Visitor *v, const char *name,
                 BlockdevChangeReadOnlyMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevChangeReadOnlyMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevChangeFileLockingMode(Visitor *v, const char *name,
                 BlockdevChangeFileLockingMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevChangeFileLockingMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_blockdev_change_medium_arg_members(Visitor *v, q_obj_blockdev_change_medium_arg *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (visit_policy_reject(v, "device", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "device", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_str(v, "device", &obj->device, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_str(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "force", &obj->has_force)) {
        if (!visit_type_bool(v, "force", &obj->force, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "read-only-mode", &obj->has_read_only_mode)) {
        if (!visit_type_BlockdevChangeReadOnlyMode(v, "read-only-mode", &obj->read_only_mode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "file-locking-mode", &obj->has_file_locking_mode)) {
        if (!visit_type_BlockdevChangeFileLockingMode(v, "file-locking-mode", &obj->file_locking_mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_blockdev_change_medium_arg(Visitor *v, const char *name,
                 q_obj_blockdev_change_medium_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_change_medium_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_change_medium_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_change_medium_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_DEVICE_TRAY_MOVED_arg_members(Visitor *v, q_obj_DEVICE_TRAY_MOVED_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "tray-open", &obj->tray_open, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_DEVICE_TRAY_MOVED_arg(Visitor *v, const char *name,
                 q_obj_DEVICE_TRAY_MOVED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_DEVICE_TRAY_MOVED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_DEVICE_TRAY_MOVED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_DEVICE_TRAY_MOVED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg_members(Visitor *v, q_obj_PR_MANAGER_STATUS_CHANGED_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "connected", &obj->connected, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg(Visitor *v, const char *name,
                 q_obj_PR_MANAGER_STATUS_CHANGED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_PR_MANAGER_STATUS_CHANGED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_PR_MANAGER_STATUS_CHANGED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_latency_histogram_set_arg_members(Visitor *v, q_obj_block_latency_histogram_set_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (visit_optional(v, "boundaries", &obj->has_boundaries)) {
        if (!visit_type_uint64List(v, "boundaries", &obj->boundaries, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "boundaries-read", &obj->has_boundaries_read)) {
        if (!visit_type_uint64List(v, "boundaries-read", &obj->boundaries_read, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "boundaries-write", &obj->has_boundaries_write)) {
        if (!visit_type_uint64List(v, "boundaries-write", &obj->boundaries_write, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "boundaries-flush", &obj->has_boundaries_flush)) {
        if (!visit_type_uint64List(v, "boundaries-flush", &obj->boundaries_flush, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_block_latency_histogram_set_arg(Visitor *v, const char *name,
                 q_obj_block_latency_histogram_set_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_latency_histogram_set_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_latency_histogram_set_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_latency_histogram_set_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_block_c;
