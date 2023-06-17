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
#include "qapi-visit-authz.h"

bool visit_type_QAuthZListPolicy(Visitor *v, const char *name,
                 QAuthZListPolicy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QAuthZListPolicy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QAuthZListFormat(Visitor *v, const char *name,
                 QAuthZListFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QAuthZListFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QAuthZListRule_members(Visitor *v, QAuthZListRule *obj, Error **errp)
{
    if (!visit_type_str(v, "match", &obj->match, errp)) {
        return false;
    }
    if (!visit_type_QAuthZListPolicy(v, "policy", &obj->policy, errp)) {
        return false;
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_QAuthZListFormat(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QAuthZListRule(Visitor *v, const char *name,
                 QAuthZListRule **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QAuthZListRule), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QAuthZListRule_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QAuthZListRule(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QAuthZListRuleList(Visitor *v, const char *name,
                 QAuthZListRuleList **obj, Error **errp)
{
    bool ok = false;
    QAuthZListRuleList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (QAuthZListRuleList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_QAuthZListRule(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QAuthZListRuleList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AuthZListProperties_members(Visitor *v, AuthZListProperties *obj, Error **errp)
{
    if (visit_optional(v, "policy", &obj->has_policy)) {
        if (!visit_type_QAuthZListPolicy(v, "policy", &obj->policy, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "rules", &obj->has_rules)) {
        if (!visit_type_QAuthZListRuleList(v, "rules", &obj->rules, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AuthZListProperties(Visitor *v, const char *name,
                 AuthZListProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AuthZListProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AuthZListProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AuthZListProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AuthZListFileProperties_members(Visitor *v, AuthZListFileProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (visit_optional(v, "refresh", &obj->has_refresh)) {
        if (!visit_type_bool(v, "refresh", &obj->refresh, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AuthZListFileProperties(Visitor *v, const char *name,
                 AuthZListFileProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AuthZListFileProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AuthZListFileProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AuthZListFileProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AuthZPAMProperties_members(Visitor *v, AuthZPAMProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "service", &obj->service, errp)) {
        return false;
    }
    return true;
}

bool visit_type_AuthZPAMProperties(Visitor *v, const char *name,
                 AuthZPAMProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AuthZPAMProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AuthZPAMProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AuthZPAMProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AuthZSimpleProperties_members(Visitor *v, AuthZSimpleProperties *obj, Error **errp)
{
    if (!visit_type_str(v, "identity", &obj->identity, errp)) {
        return false;
    }
    return true;
}

bool visit_type_AuthZSimpleProperties(Visitor *v, const char *name,
                 AuthZSimpleProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AuthZSimpleProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AuthZSimpleProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AuthZSimpleProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_authz_c;
