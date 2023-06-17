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
#include "qapi-visit-dump.h"

bool visit_type_DumpGuestMemoryFormat(Visitor *v, const char *name,
                 DumpGuestMemoryFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DumpGuestMemoryFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_dump_guest_memory_arg_members(Visitor *v, q_obj_dump_guest_memory_arg *obj, Error **errp)
{
    if (!visit_type_bool(v, "paging", &obj->paging, errp)) {
        return false;
    }
    if (!visit_type_str(v, "protocol", &obj->protocol, errp)) {
        return false;
    }
    if (visit_optional(v, "detach", &obj->has_detach)) {
        if (!visit_type_bool(v, "detach", &obj->detach, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "begin", &obj->has_begin)) {
        if (!visit_type_int(v, "begin", &obj->begin, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "length", &obj->has_length)) {
        if (!visit_type_int(v, "length", &obj->length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_DumpGuestMemoryFormat(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_dump_guest_memory_arg(Visitor *v, const char *name,
                 q_obj_dump_guest_memory_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_dump_guest_memory_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_dump_guest_memory_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_dump_guest_memory_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DumpStatus(Visitor *v, const char *name,
                 DumpStatus *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DumpStatus_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_DumpQueryResult_members(Visitor *v, DumpQueryResult *obj, Error **errp)
{
    if (!visit_type_DumpStatus(v, "status", &obj->status, errp)) {
        return false;
    }
    if (!visit_type_int(v, "completed", &obj->completed, errp)) {
        return false;
    }
    if (!visit_type_int(v, "total", &obj->total, errp)) {
        return false;
    }
    return true;
}

bool visit_type_DumpQueryResult(Visitor *v, const char *name,
                 DumpQueryResult **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DumpQueryResult), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DumpQueryResult_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DumpQueryResult(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_DUMP_COMPLETED_arg_members(Visitor *v, q_obj_DUMP_COMPLETED_arg *obj, Error **errp)
{
    if (!visit_type_DumpQueryResult(v, "result", &obj->result, errp)) {
        return false;
    }
    if (visit_optional(v, "error", &obj->has_error)) {
        if (!visit_type_str(v, "error", &obj->error, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_DUMP_COMPLETED_arg(Visitor *v, const char *name,
                 q_obj_DUMP_COMPLETED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_DUMP_COMPLETED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_DUMP_COMPLETED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_DUMP_COMPLETED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DumpGuestMemoryFormatList(Visitor *v, const char *name,
                 DumpGuestMemoryFormatList **obj, Error **errp)
{
    bool ok = false;
    DumpGuestMemoryFormatList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (DumpGuestMemoryFormatList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_DumpGuestMemoryFormat(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DumpGuestMemoryFormatList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DumpGuestMemoryCapability_members(Visitor *v, DumpGuestMemoryCapability *obj, Error **errp)
{
    if (!visit_type_DumpGuestMemoryFormatList(v, "formats", &obj->formats, errp)) {
        return false;
    }
    return true;
}

bool visit_type_DumpGuestMemoryCapability(Visitor *v, const char *name,
                 DumpGuestMemoryCapability **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DumpGuestMemoryCapability), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DumpGuestMemoryCapability_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DumpGuestMemoryCapability(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_dump_c;
