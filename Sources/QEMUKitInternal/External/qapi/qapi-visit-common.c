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
#include "qapi-visit-common.h"

bool visit_type_IoOperationType(Visitor *v, const char *name,
                 IoOperationType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &IoOperationType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_OnOffAuto(Visitor *v, const char *name,
                 OnOffAuto *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &OnOffAuto_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_OnOffSplit(Visitor *v, const char *name,
                 OnOffSplit *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &OnOffSplit_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_String_members(Visitor *v, String *obj, Error **errp)
{
    if (!visit_type_str(v, "str", &obj->str, errp)) {
        return false;
    }
    return true;
}

bool visit_type_String(Visitor *v, const char *name,
                 String **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(String), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_String_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_String(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StrOrNull(Visitor *v, const char *name,
                 StrOrNull **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QSTRING:
        ok = visit_type_str(v, name, &(*obj)->u.s, errp);
        break;
    case QTYPE_QNULL:
        ok = visit_type_null(v, name, &(*obj)->u.n, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "StrOrNull");
        /* Avoid passing invalid *obj to qapi_free_StrOrNull() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StrOrNull(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_OffAutoPCIBAR(Visitor *v, const char *name,
                 OffAutoPCIBAR *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &OffAutoPCIBAR_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_PCIELinkSpeed(Visitor *v, const char *name,
                 PCIELinkSpeed *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &PCIELinkSpeed_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_PCIELinkWidth(Visitor *v, const char *name,
                 PCIELinkWidth *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &PCIELinkWidth_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_HostMemPolicy(Visitor *v, const char *name,
                 HostMemPolicy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HostMemPolicy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_NetFilterDirection(Visitor *v, const char *name,
                 NetFilterDirection *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NetFilterDirection_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_GrabToggleKeys(Visitor *v, const char *name,
                 GrabToggleKeys *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &GrabToggleKeys_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_HumanReadableText_members(Visitor *v, HumanReadableText *obj, Error **errp)
{
    if (!visit_type_str(v, "human-readable-text", &obj->human_readable_text, errp)) {
        return false;
    }
    return true;
}

bool visit_type_HumanReadableText(Visitor *v, const char *name,
                 HumanReadableText **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(HumanReadableText), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_HumanReadableText_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_HumanReadableText(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StringList(Visitor *v, const char *name,
                 StringList **obj, Error **errp)
{
    bool ok = false;
    StringList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (StringList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_String(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StringList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_common_c;
