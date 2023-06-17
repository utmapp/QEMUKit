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
#include "qapi-visit-cxl.h"

bool visit_type_CxlUncorErrorType(Visitor *v, const char *name,
                 CxlUncorErrorType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CxlUncorErrorType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CXLUncorErrorRecord_members(Visitor *v, CXLUncorErrorRecord *obj, Error **errp)
{
    if (!visit_type_CxlUncorErrorType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_uint32List(v, "header", &obj->header, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CXLUncorErrorRecord(Visitor *v, const char *name,
                 CXLUncorErrorRecord **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CXLUncorErrorRecord), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CXLUncorErrorRecord_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CXLUncorErrorRecord(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CXLUncorErrorRecordList(Visitor *v, const char *name,
                 CXLUncorErrorRecordList **obj, Error **errp)
{
    bool ok = false;
    CXLUncorErrorRecordList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CXLUncorErrorRecordList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CXLUncorErrorRecord(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CXLUncorErrorRecordList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_cxl_inject_uncorrectable_errors_arg_members(Visitor *v, q_obj_cxl_inject_uncorrectable_errors_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_CXLUncorErrorRecordList(v, "errors", &obj->errors, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_cxl_inject_uncorrectable_errors_arg(Visitor *v, const char *name,
                 q_obj_cxl_inject_uncorrectable_errors_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_cxl_inject_uncorrectable_errors_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_cxl_inject_uncorrectable_errors_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_cxl_inject_uncorrectable_errors_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CxlCorErrorType(Visitor *v, const char *name,
                 CxlCorErrorType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CxlCorErrorType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_cxl_inject_correctable_error_arg_members(Visitor *v, q_obj_cxl_inject_correctable_error_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_CxlCorErrorType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_cxl_inject_correctable_error_arg(Visitor *v, const char *name,
                 q_obj_cxl_inject_correctable_error_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_cxl_inject_correctable_error_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_cxl_inject_correctable_error_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_cxl_inject_correctable_error_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_cxl_c;
