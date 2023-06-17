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
#include "qapi-visit-qdev.h"

bool visit_type_q_obj_device_list_properties_arg_members(Visitor *v, q_obj_device_list_properties_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "typename", &obj->q_typename, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_device_list_properties_arg(Visitor *v, const char *name,
                 q_obj_device_list_properties_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_device_list_properties_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_device_list_properties_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_device_list_properties_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_device_add_arg_members(Visitor *v, q_obj_device_add_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "driver", &obj->driver, errp)) {
        return false;
    }
    if (visit_optional(v, "bus", &obj->has_bus)) {
        if (!visit_type_str(v, "bus", &obj->bus, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_device_add_arg(Visitor *v, const char *name,
                 q_obj_device_add_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_device_add_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_device_add_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_device_add_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_device_del_arg_members(Visitor *v, q_obj_device_del_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_device_del_arg(Visitor *v, const char *name,
                 q_obj_device_del_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_device_del_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_device_del_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_device_del_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_DEVICE_DELETED_arg_members(Visitor *v, q_obj_DEVICE_DELETED_arg *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (!visit_type_str(v, "device", &obj->device, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_DEVICE_DELETED_arg(Visitor *v, const char *name,
                 q_obj_DEVICE_DELETED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_DEVICE_DELETED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_DEVICE_DELETED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_DEVICE_DELETED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg_members(Visitor *v, q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (!visit_type_str(v, "device", &obj->device, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg(Visitor *v, const char *name,
                 q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_qdev_c;
