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
#include "qapi-visit-introspect.h"

bool visit_type_SchemaInfoList(Visitor *v, const char *name,
                 SchemaInfoList **obj, Error **errp)
{
    bool ok = false;
    SchemaInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SchemaInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SchemaInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaMetaType(Visitor *v, const char *name,
                 SchemaMetaType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SchemaMetaType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_SchemaInfo_base_members(Visitor *v, q_obj_SchemaInfo_base *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_SchemaMetaType(v, "meta-type", &obj->meta_type, errp)) {
        return false;
    }
    if (visit_optional(v, "features", &obj->has_features)) {
        if (!visit_type_strList(v, "features", &obj->features, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_SchemaInfo_base(Visitor *v, const char *name,
                 q_obj_SchemaInfo_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SchemaInfo_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SchemaInfo_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SchemaInfo_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfo_members(Visitor *v, SchemaInfo *obj, Error **errp)
{
    if (!visit_type_q_obj_SchemaInfo_base_members(v, (q_obj_SchemaInfo_base *)obj, errp)) {
        return false;
    }
    switch (obj->meta_type) {
    case SCHEMA_META_TYPE_BUILTIN:
        return visit_type_SchemaInfoBuiltin_members(v, &obj->u.builtin, errp);
    case SCHEMA_META_TYPE_ENUM:
        return visit_type_SchemaInfoEnum_members(v, &obj->u.q_enum, errp);
    case SCHEMA_META_TYPE_ARRAY:
        return visit_type_SchemaInfoArray_members(v, &obj->u.array, errp);
    case SCHEMA_META_TYPE_OBJECT:
        return visit_type_SchemaInfoObject_members(v, &obj->u.object, errp);
    case SCHEMA_META_TYPE_ALTERNATE:
        return visit_type_SchemaInfoAlternate_members(v, &obj->u.alternate, errp);
    case SCHEMA_META_TYPE_COMMAND:
        return visit_type_SchemaInfoCommand_members(v, &obj->u.command, errp);
    case SCHEMA_META_TYPE_EVENT:
        return visit_type_SchemaInfoEvent_members(v, &obj->u.event, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_SchemaInfo(Visitor *v, const char *name,
                 SchemaInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoBuiltin_members(Visitor *v, SchemaInfoBuiltin *obj, Error **errp)
{
    if (!visit_type_JSONType(v, "json-type", &obj->json_type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SchemaInfoBuiltin(Visitor *v, const char *name,
                 SchemaInfoBuiltin **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoBuiltin), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoBuiltin_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoBuiltin(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_JSONType(Visitor *v, const char *name,
                 JSONType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &JSONType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_SchemaInfoEnumMemberList(Visitor *v, const char *name,
                 SchemaInfoEnumMemberList **obj, Error **errp)
{
    bool ok = false;
    SchemaInfoEnumMemberList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SchemaInfoEnumMemberList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SchemaInfoEnumMember(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoEnumMemberList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoEnum_members(Visitor *v, SchemaInfoEnum *obj, Error **errp)
{
    if (!visit_type_SchemaInfoEnumMemberList(v, "members", &obj->members, errp)) {
        return false;
    }
    if (visit_policy_reject(v, "values", 1u << QAPI_DEPRECATED, errp)) {
        return false;
    }
    if (!visit_policy_skip(v, "values", 1u << QAPI_DEPRECATED)) {
        if (!visit_type_strList(v, "values", &obj->values, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SchemaInfoEnum(Visitor *v, const char *name,
                 SchemaInfoEnum **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoEnum), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoEnum_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoEnum(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoEnumMember_members(Visitor *v, SchemaInfoEnumMember *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "features", &obj->has_features)) {
        if (!visit_type_strList(v, "features", &obj->features, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SchemaInfoEnumMember(Visitor *v, const char *name,
                 SchemaInfoEnumMember **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoEnumMember), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoEnumMember_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoEnumMember(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoArray_members(Visitor *v, SchemaInfoArray *obj, Error **errp)
{
    if (!visit_type_str(v, "element-type", &obj->element_type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SchemaInfoArray(Visitor *v, const char *name,
                 SchemaInfoArray **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoArray), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoArray_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoArray(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoObjectMemberList(Visitor *v, const char *name,
                 SchemaInfoObjectMemberList **obj, Error **errp)
{
    bool ok = false;
    SchemaInfoObjectMemberList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SchemaInfoObjectMemberList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SchemaInfoObjectMember(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoObjectMemberList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoObjectVariantList(Visitor *v, const char *name,
                 SchemaInfoObjectVariantList **obj, Error **errp)
{
    bool ok = false;
    SchemaInfoObjectVariantList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SchemaInfoObjectVariantList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SchemaInfoObjectVariant(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoObjectVariantList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoObject_members(Visitor *v, SchemaInfoObject *obj, Error **errp)
{
    if (!visit_type_SchemaInfoObjectMemberList(v, "members", &obj->members, errp)) {
        return false;
    }
    if (visit_optional(v, "tag", &obj->has_tag)) {
        if (!visit_type_str(v, "tag", &obj->tag, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "variants", &obj->has_variants)) {
        if (!visit_type_SchemaInfoObjectVariantList(v, "variants", &obj->variants, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SchemaInfoObject(Visitor *v, const char *name,
                 SchemaInfoObject **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoObject), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoObject_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoObject(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoObjectMember_members(Visitor *v, SchemaInfoObjectMember *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "default", &obj->has_q_default)) {
        if (!visit_type_any(v, "default", &obj->q_default, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "features", &obj->has_features)) {
        if (!visit_type_strList(v, "features", &obj->features, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SchemaInfoObjectMember(Visitor *v, const char *name,
                 SchemaInfoObjectMember **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoObjectMember), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoObjectMember_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoObjectMember(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoObjectVariant_members(Visitor *v, SchemaInfoObjectVariant *obj, Error **errp)
{
    if (!visit_type_str(v, "case", &obj->q_case, errp)) {
        return false;
    }
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SchemaInfoObjectVariant(Visitor *v, const char *name,
                 SchemaInfoObjectVariant **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoObjectVariant), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoObjectVariant_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoObjectVariant(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoAlternateMemberList(Visitor *v, const char *name,
                 SchemaInfoAlternateMemberList **obj, Error **errp)
{
    bool ok = false;
    SchemaInfoAlternateMemberList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SchemaInfoAlternateMemberList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SchemaInfoAlternateMember(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoAlternateMemberList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoAlternate_members(Visitor *v, SchemaInfoAlternate *obj, Error **errp)
{
    if (!visit_type_SchemaInfoAlternateMemberList(v, "members", &obj->members, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SchemaInfoAlternate(Visitor *v, const char *name,
                 SchemaInfoAlternate **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoAlternate), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoAlternate_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoAlternate(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoAlternateMember_members(Visitor *v, SchemaInfoAlternateMember *obj, Error **errp)
{
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SchemaInfoAlternateMember(Visitor *v, const char *name,
                 SchemaInfoAlternateMember **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoAlternateMember), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoAlternateMember_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoAlternateMember(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoCommand_members(Visitor *v, SchemaInfoCommand *obj, Error **errp)
{
    if (!visit_type_str(v, "arg-type", &obj->arg_type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "ret-type", &obj->ret_type, errp)) {
        return false;
    }
    if (visit_optional(v, "allow-oob", &obj->has_allow_oob)) {
        if (!visit_type_bool(v, "allow-oob", &obj->allow_oob, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SchemaInfoCommand(Visitor *v, const char *name,
                 SchemaInfoCommand **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoCommand), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoCommand_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoCommand(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SchemaInfoEvent_members(Visitor *v, SchemaInfoEvent *obj, Error **errp)
{
    if (!visit_type_str(v, "arg-type", &obj->arg_type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SchemaInfoEvent(Visitor *v, const char *name,
                 SchemaInfoEvent **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SchemaInfoEvent), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SchemaInfoEvent_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SchemaInfoEvent(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_introspect_c;
