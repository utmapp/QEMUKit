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
#include "qapi-visit-qom.h"

bool visit_type_ObjectPropertyInfo_members(Visitor *v, ObjectPropertyInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "description", &obj->has_description)) {
        if (!visit_type_str(v, "description", &obj->description, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "default-value", &obj->has_default_value)) {
        if (!visit_type_any(v, "default-value", &obj->default_value, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ObjectPropertyInfo(Visitor *v, const char *name,
                 ObjectPropertyInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ObjectPropertyInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ObjectPropertyInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectPropertyInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_list_arg_members(Visitor *v, q_obj_qom_list_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_qom_list_arg(Visitor *v, const char *name,
                 q_obj_qom_list_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_qom_list_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_qom_list_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_qom_list_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ObjectPropertyInfoList(Visitor *v, const char *name,
                 ObjectPropertyInfoList **obj, Error **errp)
{
    bool ok = false;
    ObjectPropertyInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (ObjectPropertyInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_ObjectPropertyInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectPropertyInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_get_arg_members(Visitor *v, q_obj_qom_get_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_str(v, "property", &obj->property, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_qom_get_arg(Visitor *v, const char *name,
                 q_obj_qom_get_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_qom_get_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_qom_get_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_qom_get_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_set_arg_members(Visitor *v, q_obj_qom_set_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_str(v, "property", &obj->property, errp)) {
        return false;
    }
    if (!visit_type_any(v, "value", &obj->value, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_qom_set_arg(Visitor *v, const char *name,
                 q_obj_qom_set_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_qom_set_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_qom_set_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_qom_set_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ObjectTypeInfo_members(Visitor *v, ObjectTypeInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "abstract", &obj->has_abstract)) {
        if (!visit_type_bool(v, "abstract", &obj->abstract, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "parent", &obj->has_parent)) {
        if (!visit_type_str(v, "parent", &obj->parent, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ObjectTypeInfo(Visitor *v, const char *name,
                 ObjectTypeInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ObjectTypeInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ObjectTypeInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectTypeInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_list_types_arg_members(Visitor *v, q_obj_qom_list_types_arg *obj, Error **errp)
{
    if (visit_optional(v, "implements", &obj->has_implements)) {
        if (!visit_type_str(v, "implements", &obj->implements, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "abstract", &obj->has_abstract)) {
        if (!visit_type_bool(v, "abstract", &obj->abstract, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_qom_list_types_arg(Visitor *v, const char *name,
                 q_obj_qom_list_types_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_qom_list_types_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_qom_list_types_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_qom_list_types_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ObjectTypeInfoList(Visitor *v, const char *name,
                 ObjectTypeInfoList **obj, Error **errp)
{
    bool ok = false;
    ObjectTypeInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (ObjectTypeInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_ObjectTypeInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectTypeInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qom_list_properties_arg_members(Visitor *v, q_obj_qom_list_properties_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "typename", &obj->q_typename, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_qom_list_properties_arg(Visitor *v, const char *name,
                 q_obj_qom_list_properties_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_qom_list_properties_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_qom_list_properties_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_qom_list_properties_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CanHostSocketcanProperties_members(Visitor *v, CanHostSocketcanProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "if", &obj->q_if, errp)) {
        return false;
    }
    if (!visit_type_str(v, "canbus", &obj->canbus, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CanHostSocketcanProperties(Visitor *v, const char *name,
                 CanHostSocketcanProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CanHostSocketcanProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CanHostSocketcanProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CanHostSocketcanProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ColoCompareProperties_members(Visitor *v, ColoCompareProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "primary_in", &obj->primary_in, errp)) {
        return false;
    }
    if (!visit_type_str(v, "secondary_in", &obj->secondary_in, errp)) {
        return false;
    }
    if (!visit_type_str(v, "outdev", &obj->outdev, errp)) {
        return false;
    }
    if (!visit_type_str(v, "iothread", &obj->iothread, errp)) {
        return false;
    }
    if (visit_optional(v, "notify_dev", &obj->has_notify_dev)) {
        if (!visit_type_str(v, "notify_dev", &obj->notify_dev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compare_timeout", &obj->has_compare_timeout)) {
        if (!visit_type_uint64(v, "compare_timeout", &obj->compare_timeout, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "expired_scan_cycle", &obj->has_expired_scan_cycle)) {
        if (!visit_type_uint32(v, "expired_scan_cycle", &obj->expired_scan_cycle, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max_queue_size", &obj->has_max_queue_size)) {
        if (!visit_type_uint32(v, "max_queue_size", &obj->max_queue_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vnet_hdr_support", &obj->has_vnet_hdr_support)) {
        if (!visit_type_bool(v, "vnet_hdr_support", &obj->vnet_hdr_support, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ColoCompareProperties(Visitor *v, const char *name,
                 ColoCompareProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ColoCompareProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ColoCompareProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ColoCompareProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CryptodevBackendProperties_members(Visitor *v, CryptodevBackendProperties *obj, Error **errp)
{
    if (visit_optional(v, "queues", &obj->has_queues)) {
        if (!visit_type_uint32(v, "queues", &obj->queues, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "throttle-bps", &obj->has_throttle_bps)) {
        if (!visit_type_uint64(v, "throttle-bps", &obj->throttle_bps, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "throttle-ops", &obj->has_throttle_ops)) {
        if (!visit_type_uint64(v, "throttle-ops", &obj->throttle_ops, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_CryptodevBackendProperties(Visitor *v, const char *name,
                 CryptodevBackendProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CryptodevBackendProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CryptodevBackendProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CryptodevBackendProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CryptodevVhostUserProperties_members(Visitor *v, CryptodevVhostUserProperties *obj, Error **errp)
{
    if (!visit_type_CryptodevBackendProperties_members(v, (CryptodevBackendProperties *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "chardev", &obj->chardev, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CryptodevVhostUserProperties(Visitor *v, const char *name,
                 CryptodevVhostUserProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CryptodevVhostUserProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CryptodevVhostUserProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CryptodevVhostUserProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DBusVMStateProperties_members(Visitor *v, DBusVMStateProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "addr", &obj->addr, errp)) {
        return false;
    }
    if (visit_optional(v, "id-list", &obj->has_id_list)) {
        if (!visit_type_str(v, "id-list", &obj->id_list, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DBusVMStateProperties(Visitor *v, const char *name,
                 DBusVMStateProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DBusVMStateProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DBusVMStateProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DBusVMStateProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetfilterInsert(Visitor *v, const char *name,
                 NetfilterInsert *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NetfilterInsert_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_NetfilterProperties_members(Visitor *v, NetfilterProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "netdev", &obj->netdev, errp)) {
        return false;
    }
    if (visit_optional(v, "queue", &obj->has_queue)) {
        if (!visit_type_NetFilterDirection(v, "queue", &obj->queue, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "status", &obj->has_status)) {
        if (!visit_type_str(v, "status", &obj->status, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "position", &obj->has_position)) {
        if (!visit_type_str(v, "position", &obj->position, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "insert", &obj->has_insert)) {
        if (!visit_type_NetfilterInsert(v, "insert", &obj->insert, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetfilterProperties(Visitor *v, const char *name,
                 NetfilterProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetfilterProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetfilterProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetfilterProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FilterBufferProperties_members(Visitor *v, FilterBufferProperties *obj, Error **errp)
{
    if (!visit_type_NetfilterProperties_members(v, (NetfilterProperties *)obj, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "interval", &obj->interval, errp)) {
        return false;
    }
    return true;
}

bool visit_type_FilterBufferProperties(Visitor *v, const char *name,
                 FilterBufferProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FilterBufferProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FilterBufferProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FilterBufferProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FilterDumpProperties_members(Visitor *v, FilterDumpProperties *obj, Error **errp)
{
    if (!visit_type_NetfilterProperties_members(v, (NetfilterProperties *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "file", &obj->file, errp)) {
        return false;
    }
    if (visit_optional(v, "maxlen", &obj->has_maxlen)) {
        if (!visit_type_uint32(v, "maxlen", &obj->maxlen, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_FilterDumpProperties(Visitor *v, const char *name,
                 FilterDumpProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FilterDumpProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FilterDumpProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FilterDumpProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FilterMirrorProperties_members(Visitor *v, FilterMirrorProperties *obj, Error **errp)
{
    if (!visit_type_NetfilterProperties_members(v, (NetfilterProperties *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "outdev", &obj->outdev, errp)) {
        return false;
    }
    if (visit_optional(v, "vnet_hdr_support", &obj->has_vnet_hdr_support)) {
        if (!visit_type_bool(v, "vnet_hdr_support", &obj->vnet_hdr_support, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_FilterMirrorProperties(Visitor *v, const char *name,
                 FilterMirrorProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FilterMirrorProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FilterMirrorProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FilterMirrorProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FilterRedirectorProperties_members(Visitor *v, FilterRedirectorProperties *obj, Error **errp)
{
    if (!visit_type_NetfilterProperties_members(v, (NetfilterProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "indev", &obj->has_indev)) {
        if (!visit_type_str(v, "indev", &obj->indev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "outdev", &obj->has_outdev)) {
        if (!visit_type_str(v, "outdev", &obj->outdev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vnet_hdr_support", &obj->has_vnet_hdr_support)) {
        if (!visit_type_bool(v, "vnet_hdr_support", &obj->vnet_hdr_support, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_FilterRedirectorProperties(Visitor *v, const char *name,
                 FilterRedirectorProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FilterRedirectorProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FilterRedirectorProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FilterRedirectorProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FilterRewriterProperties_members(Visitor *v, FilterRewriterProperties *obj, Error **errp)
{
    if (!visit_type_NetfilterProperties_members(v, (NetfilterProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "vnet_hdr_support", &obj->has_vnet_hdr_support)) {
        if (!visit_type_bool(v, "vnet_hdr_support", &obj->vnet_hdr_support, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_FilterRewriterProperties(Visitor *v, const char *name,
                 FilterRewriterProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FilterRewriterProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FilterRewriterProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FilterRewriterProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputBarrierProperties_members(Visitor *v, InputBarrierProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "server", &obj->has_server)) {
        if (!visit_type_str(v, "server", &obj->server, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "port", &obj->has_port)) {
        if (!visit_type_str(v, "port", &obj->port, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "x-origin", &obj->has_x_origin)) {
        if (!visit_type_str(v, "x-origin", &obj->x_origin, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "y-origin", &obj->has_y_origin)) {
        if (!visit_type_str(v, "y-origin", &obj->y_origin, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "width", &obj->has_width)) {
        if (!visit_type_str(v, "width", &obj->width, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "height", &obj->has_height)) {
        if (!visit_type_str(v, "height", &obj->height, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_InputBarrierProperties(Visitor *v, const char *name,
                 InputBarrierProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputBarrierProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputBarrierProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputBarrierProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputLinuxProperties_members(Visitor *v, InputLinuxProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "evdev", &obj->evdev, errp)) {
        return false;
    }
    if (visit_optional(v, "grab_all", &obj->has_grab_all)) {
        if (!visit_type_bool(v, "grab_all", &obj->grab_all, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "repeat", &obj->has_repeat)) {
        if (!visit_type_bool(v, "repeat", &obj->repeat, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "grab-toggle", &obj->has_grab_toggle)) {
        if (!visit_type_GrabToggleKeys(v, "grab-toggle", &obj->grab_toggle, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_InputLinuxProperties(Visitor *v, const char *name,
                 InputLinuxProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputLinuxProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputLinuxProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputLinuxProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_EventLoopBaseProperties_members(Visitor *v, EventLoopBaseProperties *obj, Error **errp)
{
    if (visit_optional(v, "aio-max-batch", &obj->has_aio_max_batch)) {
        if (!visit_type_int(v, "aio-max-batch", &obj->aio_max_batch, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "thread-pool-min", &obj->has_thread_pool_min)) {
        if (!visit_type_int(v, "thread-pool-min", &obj->thread_pool_min, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "thread-pool-max", &obj->has_thread_pool_max)) {
        if (!visit_type_int(v, "thread-pool-max", &obj->thread_pool_max, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_EventLoopBaseProperties(Visitor *v, const char *name,
                 EventLoopBaseProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(EventLoopBaseProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_EventLoopBaseProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_EventLoopBaseProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_IothreadProperties_members(Visitor *v, IothreadProperties *obj, Error **errp)
{
    if (!visit_type_EventLoopBaseProperties_members(v, (EventLoopBaseProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "poll-max-ns", &obj->has_poll_max_ns)) {
        if (!visit_type_int(v, "poll-max-ns", &obj->poll_max_ns, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "poll-grow", &obj->has_poll_grow)) {
        if (!visit_type_int(v, "poll-grow", &obj->poll_grow, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "poll-shrink", &obj->has_poll_shrink)) {
        if (!visit_type_int(v, "poll-shrink", &obj->poll_shrink, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_IothreadProperties(Visitor *v, const char *name,
                 IothreadProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(IothreadProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_IothreadProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_IothreadProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MainLoopProperties_members(Visitor *v, MainLoopProperties *obj, Error **errp)
{
    if (!visit_type_EventLoopBaseProperties_members(v, (EventLoopBaseProperties *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MainLoopProperties(Visitor *v, const char *name,
                 MainLoopProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MainLoopProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MainLoopProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MainLoopProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryBackendProperties_members(Visitor *v, MemoryBackendProperties *obj, Error **errp)
{
    if (visit_optional(v, "dump", &obj->has_dump)) {
        if (!visit_type_bool(v, "dump", &obj->dump, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "host-nodes", &obj->has_host_nodes)) {
        if (!visit_type_uint16List(v, "host-nodes", &obj->host_nodes, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "merge", &obj->has_merge)) {
        if (!visit_type_bool(v, "merge", &obj->merge, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "policy", &obj->has_policy)) {
        if (!visit_type_HostMemPolicy(v, "policy", &obj->policy, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "prealloc", &obj->has_prealloc)) {
        if (!visit_type_bool(v, "prealloc", &obj->prealloc, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "prealloc-threads", &obj->has_prealloc_threads)) {
        if (!visit_type_uint32(v, "prealloc-threads", &obj->prealloc_threads, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "prealloc-context", &obj->has_prealloc_context)) {
        if (!visit_type_str(v, "prealloc-context", &obj->prealloc_context, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "share", &obj->has_share)) {
        if (!visit_type_bool(v, "share", &obj->share, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "reserve", &obj->has_reserve)) {
        if (!visit_type_bool(v, "reserve", &obj->reserve, errp)) {
            return false;
        }
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "x-use-canonical-path-for-ramblock-id", &obj->has_x_use_canonical_path_for_ramblock_id)) {
        if (!visit_type_bool(v, "x-use-canonical-path-for-ramblock-id", &obj->x_use_canonical_path_for_ramblock_id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MemoryBackendProperties(Visitor *v, const char *name,
                 MemoryBackendProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MemoryBackendProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MemoryBackendProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemoryBackendProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryBackendFileProperties_members(Visitor *v, MemoryBackendFileProperties *obj, Error **errp)
{
    if (!visit_type_MemoryBackendProperties_members(v, (MemoryBackendProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "align", &obj->has_align)) {
        if (!visit_type_size(v, "align", &obj->align, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "discard-data", &obj->has_discard_data)) {
        if (!visit_type_bool(v, "discard-data", &obj->discard_data, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "mem-path", &obj->mem_path, errp)) {
        return false;
    }
#if defined(CONFIG_LIBPMEM)
    if (visit_optional(v, "pmem", &obj->has_pmem)) {
        if (!visit_type_bool(v, "pmem", &obj->pmem, errp)) {
            return false;
        }
    }
#endif /* defined(CONFIG_LIBPMEM) */
    if (visit_optional(v, "readonly", &obj->has_readonly)) {
        if (!visit_type_bool(v, "readonly", &obj->readonly, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MemoryBackendFileProperties(Visitor *v, const char *name,
                 MemoryBackendFileProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MemoryBackendFileProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MemoryBackendFileProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemoryBackendFileProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryBackendMemfdProperties_members(Visitor *v, MemoryBackendMemfdProperties *obj, Error **errp)
{
    if (!visit_type_MemoryBackendProperties_members(v, (MemoryBackendProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "hugetlb", &obj->has_hugetlb)) {
        if (!visit_type_bool(v, "hugetlb", &obj->hugetlb, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "hugetlbsize", &obj->has_hugetlbsize)) {
        if (!visit_type_size(v, "hugetlbsize", &obj->hugetlbsize, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "seal", &obj->has_seal)) {
        if (!visit_type_bool(v, "seal", &obj->seal, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MemoryBackendMemfdProperties(Visitor *v, const char *name,
                 MemoryBackendMemfdProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MemoryBackendMemfdProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MemoryBackendMemfdProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemoryBackendMemfdProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryBackendEpcProperties_members(Visitor *v, MemoryBackendEpcProperties *obj, Error **errp)
{
    if (!visit_type_MemoryBackendProperties_members(v, (MemoryBackendProperties *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MemoryBackendEpcProperties(Visitor *v, const char *name,
                 MemoryBackendEpcProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MemoryBackendEpcProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MemoryBackendEpcProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemoryBackendEpcProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PrManagerHelperProperties_members(Visitor *v, PrManagerHelperProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PrManagerHelperProperties(Visitor *v, const char *name,
                 PrManagerHelperProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PrManagerHelperProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PrManagerHelperProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PrManagerHelperProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QtestProperties_members(Visitor *v, QtestProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "chardev", &obj->chardev, errp)) {
        return false;
    }
    if (visit_optional(v, "log", &obj->has_log)) {
        if (!visit_type_str(v, "log", &obj->log, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QtestProperties(Visitor *v, const char *name,
                 QtestProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QtestProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QtestProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QtestProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RemoteObjectProperties_members(Visitor *v, RemoteObjectProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "fd", &obj->fd, errp)) {
        return false;
    }
    if (!visit_type_str(v, "devid", &obj->devid, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RemoteObjectProperties(Visitor *v, const char *name,
                 RemoteObjectProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RemoteObjectProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RemoteObjectProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RemoteObjectProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VfioUserServerProperties_members(Visitor *v, VfioUserServerProperties *obj, Error **errp)
{
    if (!visit_type_SocketAddress(v, "socket", &obj->socket, errp)) {
        return false;
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VfioUserServerProperties(Visitor *v, const char *name,
                 VfioUserServerProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VfioUserServerProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VfioUserServerProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VfioUserServerProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RngProperties_members(Visitor *v, RngProperties *obj, Error **errp)
{
    if (visit_optional(v, "opened", &obj->has_opened)) {
        if (visit_policy_reject(v, "opened", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "opened", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_bool(v, "opened", &obj->opened, errp)) {
                return false;
            }
        }
    }
    return true;
}

bool visit_type_RngProperties(Visitor *v, const char *name,
                 RngProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RngProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RngProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RngProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RngEgdProperties_members(Visitor *v, RngEgdProperties *obj, Error **errp)
{
    if (!visit_type_RngProperties_members(v, (RngProperties *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "chardev", &obj->chardev, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RngEgdProperties(Visitor *v, const char *name,
                 RngEgdProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RngEgdProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RngEgdProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RngEgdProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RngRandomProperties_members(Visitor *v, RngRandomProperties *obj, Error **errp)
{
    if (!visit_type_RngProperties_members(v, (RngProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "filename", &obj->has_filename)) {
        if (!visit_type_str(v, "filename", &obj->filename, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_RngRandomProperties(Visitor *v, const char *name,
                 RngRandomProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RngRandomProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RngRandomProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RngRandomProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SevGuestProperties_members(Visitor *v, SevGuestProperties *obj, Error **errp)
{
    if (visit_optional(v, "sev-device", &obj->has_sev_device)) {
        if (!visit_type_str(v, "sev-device", &obj->sev_device, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dh-cert-file", &obj->has_dh_cert_file)) {
        if (!visit_type_str(v, "dh-cert-file", &obj->dh_cert_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "session-file", &obj->has_session_file)) {
        if (!visit_type_str(v, "session-file", &obj->session_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "policy", &obj->has_policy)) {
        if (!visit_type_uint32(v, "policy", &obj->policy, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "handle", &obj->has_handle)) {
        if (!visit_type_uint32(v, "handle", &obj->handle, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cbitpos", &obj->has_cbitpos)) {
        if (!visit_type_uint32(v, "cbitpos", &obj->cbitpos, errp)) {
            return false;
        }
    }
    if (!visit_type_uint32(v, "reduced-phys-bits", &obj->reduced_phys_bits, errp)) {
        return false;
    }
    if (visit_optional(v, "kernel-hashes", &obj->has_kernel_hashes)) {
        if (!visit_type_bool(v, "kernel-hashes", &obj->kernel_hashes, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SevGuestProperties(Visitor *v, const char *name,
                 SevGuestProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SevGuestProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SevGuestProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SevGuestProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ThreadContextProperties_members(Visitor *v, ThreadContextProperties *obj, Error **errp)
{
    if (visit_optional(v, "cpu-affinity", &obj->has_cpu_affinity)) {
        if (!visit_type_uint16List(v, "cpu-affinity", &obj->cpu_affinity, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "node-affinity", &obj->has_node_affinity)) {
        if (!visit_type_uint16List(v, "node-affinity", &obj->node_affinity, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ThreadContextProperties(Visitor *v, const char *name,
                 ThreadContextProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ThreadContextProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ThreadContextProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ThreadContextProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ObjectType(Visitor *v, const char *name,
                 ObjectType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ObjectType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_ObjectOptions_base_members(Visitor *v, q_obj_ObjectOptions_base *obj, Error **errp)
{
    if (!visit_type_ObjectType(v, "qom-type", &obj->qom_type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ObjectOptions_base(Visitor *v, const char *name,
                 q_obj_ObjectOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_ObjectOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_ObjectOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_ObjectOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ObjectOptions_members(Visitor *v, ObjectOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_ObjectOptions_base_members(v, (q_obj_ObjectOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->qom_type) {
    case OBJECT_TYPE_AUTHZ_LIST:
        return visit_type_AuthZListProperties_members(v, &obj->u.authz_list, errp);
    case OBJECT_TYPE_AUTHZ_LISTFILE:
        return visit_type_AuthZListFileProperties_members(v, &obj->u.authz_listfile, errp);
    case OBJECT_TYPE_AUTHZ_PAM:
        return visit_type_AuthZPAMProperties_members(v, &obj->u.authz_pam, errp);
    case OBJECT_TYPE_AUTHZ_SIMPLE:
        return visit_type_AuthZSimpleProperties_members(v, &obj->u.authz_simple, errp);
#if defined(CONFIG_LINUX)
    case OBJECT_TYPE_CAN_HOST_SOCKETCAN:
        return visit_type_CanHostSocketcanProperties_members(v, &obj->u.can_host_socketcan, errp);
#endif /* defined(CONFIG_LINUX) */
    case OBJECT_TYPE_COLO_COMPARE:
        return visit_type_ColoCompareProperties_members(v, &obj->u.colo_compare, errp);
    case OBJECT_TYPE_CRYPTODEV_BACKEND:
        return visit_type_CryptodevBackendProperties_members(v, &obj->u.cryptodev_backend, errp);
    case OBJECT_TYPE_CRYPTODEV_BACKEND_BUILTIN:
        return visit_type_CryptodevBackendProperties_members(v, &obj->u.cryptodev_backend_builtin, errp);
    case OBJECT_TYPE_CRYPTODEV_BACKEND_LKCF:
        return visit_type_CryptodevBackendProperties_members(v, &obj->u.cryptodev_backend_lkcf, errp);
#if defined(CONFIG_VHOST_CRYPTO)
    case OBJECT_TYPE_CRYPTODEV_VHOST_USER:
        return visit_type_CryptodevVhostUserProperties_members(v, &obj->u.cryptodev_vhost_user, errp);
#endif /* defined(CONFIG_VHOST_CRYPTO) */
    case OBJECT_TYPE_DBUS_VMSTATE:
        return visit_type_DBusVMStateProperties_members(v, &obj->u.dbus_vmstate, errp);
    case OBJECT_TYPE_FILTER_BUFFER:
        return visit_type_FilterBufferProperties_members(v, &obj->u.filter_buffer, errp);
    case OBJECT_TYPE_FILTER_DUMP:
        return visit_type_FilterDumpProperties_members(v, &obj->u.filter_dump, errp);
    case OBJECT_TYPE_FILTER_MIRROR:
        return visit_type_FilterMirrorProperties_members(v, &obj->u.filter_mirror, errp);
    case OBJECT_TYPE_FILTER_REDIRECTOR:
        return visit_type_FilterRedirectorProperties_members(v, &obj->u.filter_redirector, errp);
    case OBJECT_TYPE_FILTER_REPLAY:
        return visit_type_NetfilterProperties_members(v, &obj->u.filter_replay, errp);
    case OBJECT_TYPE_FILTER_REWRITER:
        return visit_type_FilterRewriterProperties_members(v, &obj->u.filter_rewriter, errp);
    case OBJECT_TYPE_INPUT_BARRIER:
        return visit_type_InputBarrierProperties_members(v, &obj->u.input_barrier, errp);
#if defined(CONFIG_LINUX)
    case OBJECT_TYPE_INPUT_LINUX:
        return visit_type_InputLinuxProperties_members(v, &obj->u.input_linux, errp);
#endif /* defined(CONFIG_LINUX) */
    case OBJECT_TYPE_IOTHREAD:
        return visit_type_IothreadProperties_members(v, &obj->u.iothread, errp);
    case OBJECT_TYPE_MAIN_LOOP:
        return visit_type_MainLoopProperties_members(v, &obj->u.main_loop, errp);
#if defined(CONFIG_LINUX)
    case OBJECT_TYPE_MEMORY_BACKEND_EPC:
        return visit_type_MemoryBackendEpcProperties_members(v, &obj->u.memory_backend_epc, errp);
#endif /* defined(CONFIG_LINUX) */
    case OBJECT_TYPE_MEMORY_BACKEND_FILE:
        return visit_type_MemoryBackendFileProperties_members(v, &obj->u.memory_backend_file, errp);
#if defined(CONFIG_LINUX)
    case OBJECT_TYPE_MEMORY_BACKEND_MEMFD:
        return visit_type_MemoryBackendMemfdProperties_members(v, &obj->u.memory_backend_memfd, errp);
#endif /* defined(CONFIG_LINUX) */
    case OBJECT_TYPE_MEMORY_BACKEND_RAM:
        return visit_type_MemoryBackendProperties_members(v, &obj->u.memory_backend_ram, errp);
#if defined(CONFIG_LINUX)
    case OBJECT_TYPE_PR_MANAGER_HELPER:
        return visit_type_PrManagerHelperProperties_members(v, &obj->u.pr_manager_helper, errp);
#endif /* defined(CONFIG_LINUX) */
    case OBJECT_TYPE_QTEST:
        return visit_type_QtestProperties_members(v, &obj->u.qtest, errp);
    case OBJECT_TYPE_RNG_BUILTIN:
        return visit_type_RngProperties_members(v, &obj->u.rng_builtin, errp);
    case OBJECT_TYPE_RNG_EGD:
        return visit_type_RngEgdProperties_members(v, &obj->u.rng_egd, errp);
#if defined(CONFIG_POSIX)
    case OBJECT_TYPE_RNG_RANDOM:
        return visit_type_RngRandomProperties_members(v, &obj->u.rng_random, errp);
#endif /* defined(CONFIG_POSIX) */
    case OBJECT_TYPE_SECRET:
        return visit_type_SecretProperties_members(v, &obj->u.secret, errp);
#if defined(CONFIG_SECRET_KEYRING)
    case OBJECT_TYPE_SECRET_KEYRING:
        return visit_type_SecretKeyringProperties_members(v, &obj->u.secret_keyring, errp);
#endif /* defined(CONFIG_SECRET_KEYRING) */
    case OBJECT_TYPE_SEV_GUEST:
        return visit_type_SevGuestProperties_members(v, &obj->u.sev_guest, errp);
    case OBJECT_TYPE_THREAD_CONTEXT:
        return visit_type_ThreadContextProperties_members(v, &obj->u.thread_context, errp);
    case OBJECT_TYPE_THROTTLE_GROUP:
        return visit_type_ThrottleGroupProperties_members(v, &obj->u.throttle_group, errp);
    case OBJECT_TYPE_TLS_CREDS_ANON:
        return visit_type_TlsCredsAnonProperties_members(v, &obj->u.tls_creds_anon, errp);
    case OBJECT_TYPE_TLS_CREDS_PSK:
        return visit_type_TlsCredsPskProperties_members(v, &obj->u.tls_creds_psk, errp);
    case OBJECT_TYPE_TLS_CREDS_X509:
        return visit_type_TlsCredsX509Properties_members(v, &obj->u.tls_creds_x509, errp);
    case OBJECT_TYPE_TLS_CIPHER_SUITES:
        return visit_type_TlsCredsProperties_members(v, &obj->u.tls_cipher_suites, errp);
    case OBJECT_TYPE_X_REMOTE_OBJECT:
        return visit_type_RemoteObjectProperties_members(v, &obj->u.x_remote_object, errp);
    case OBJECT_TYPE_X_VFIO_USER_SERVER:
        return visit_type_VfioUserServerProperties_members(v, &obj->u.x_vfio_user_server, errp);
    case OBJECT_TYPE_CAN_BUS:
        break;
    case OBJECT_TYPE_PEF_GUEST:
        break;
    case OBJECT_TYPE_S390_PV_GUEST:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_ObjectOptions(Visitor *v, const char *name,
                 ObjectOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ObjectOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ObjectOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ObjectOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_object_del_arg_members(Visitor *v, q_obj_object_del_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_object_del_arg(Visitor *v, const char *name,
                 q_obj_object_del_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_object_del_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_object_del_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_object_del_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_qom_c;
