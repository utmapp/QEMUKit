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
#include "qapi-visit-stats.h"

bool visit_type_StatsType(Visitor *v, const char *name,
                 StatsType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &StatsType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_StatsUnit(Visitor *v, const char *name,
                 StatsUnit *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &StatsUnit_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_StatsProvider(Visitor *v, const char *name,
                 StatsProvider *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &StatsProvider_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_StatsTarget(Visitor *v, const char *name,
                 StatsTarget *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &StatsTarget_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_StatsRequest_members(Visitor *v, StatsRequest *obj, Error **errp)
{
    if (!visit_type_StatsProvider(v, "provider", &obj->provider, errp)) {
        return false;
    }
    if (visit_optional(v, "names", &obj->has_names)) {
        if (!visit_type_strList(v, "names", &obj->names, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_StatsRequest(Visitor *v, const char *name,
                 StatsRequest **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(StatsRequest), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_StatsRequest_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsRequest(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsVCPUFilter_members(Visitor *v, StatsVCPUFilter *obj, Error **errp)
{
    if (visit_optional(v, "vcpus", &obj->has_vcpus)) {
        if (!visit_type_strList(v, "vcpus", &obj->vcpus, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_StatsVCPUFilter(Visitor *v, const char *name,
                 StatsVCPUFilter **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(StatsVCPUFilter), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_StatsVCPUFilter_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsVCPUFilter(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsRequestList(Visitor *v, const char *name,
                 StatsRequestList **obj, Error **errp)
{
    bool ok = false;
    StatsRequestList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (StatsRequestList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_StatsRequest(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsRequestList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_StatsFilter_base_members(Visitor *v, q_obj_StatsFilter_base *obj, Error **errp)
{
    if (!visit_type_StatsTarget(v, "target", &obj->target, errp)) {
        return false;
    }
    if (visit_optional(v, "providers", &obj->has_providers)) {
        if (!visit_type_StatsRequestList(v, "providers", &obj->providers, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_StatsFilter_base(Visitor *v, const char *name,
                 q_obj_StatsFilter_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_StatsFilter_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_StatsFilter_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_StatsFilter_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsFilter_members(Visitor *v, StatsFilter *obj, Error **errp)
{
    if (!visit_type_q_obj_StatsFilter_base_members(v, (q_obj_StatsFilter_base *)obj, errp)) {
        return false;
    }
    switch (obj->target) {
    case STATS_TARGET_VCPU:
        return visit_type_StatsVCPUFilter_members(v, &obj->u.vcpu, errp);
    case STATS_TARGET_VM:
        break;
    case STATS_TARGET_CRYPTODEV:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_StatsFilter(Visitor *v, const char *name,
                 StatsFilter **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(StatsFilter), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_StatsFilter_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsFilter(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsValue(Visitor *v, const char *name,
                 StatsValue **obj, Error **errp)
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
    case QTYPE_QNUM:
        ok = visit_type_uint64(v, name, &(*obj)->u.scalar, errp);
        break;
    case QTYPE_QBOOL:
        ok = visit_type_bool(v, name, &(*obj)->u.boolean, errp);
        break;
    case QTYPE_QLIST:
        ok = visit_type_uint64List(v, name, &(*obj)->u.list, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "StatsValue");
        /* Avoid passing invalid *obj to qapi_free_StatsValue() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsValue(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Stats_members(Visitor *v, Stats *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_StatsValue(v, "value", &obj->value, errp)) {
        return false;
    }
    return true;
}

bool visit_type_Stats(Visitor *v, const char *name,
                 Stats **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Stats), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Stats_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Stats(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsList(Visitor *v, const char *name,
                 StatsList **obj, Error **errp)
{
    bool ok = false;
    StatsList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (StatsList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_Stats(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsResult_members(Visitor *v, StatsResult *obj, Error **errp)
{
    if (!visit_type_StatsProvider(v, "provider", &obj->provider, errp)) {
        return false;
    }
    if (visit_optional(v, "qom-path", &obj->has_qom_path)) {
        if (!visit_type_str(v, "qom-path", &obj->qom_path, errp)) {
            return false;
        }
    }
    if (!visit_type_StatsList(v, "stats", &obj->stats, errp)) {
        return false;
    }
    return true;
}

bool visit_type_StatsResult(Visitor *v, const char *name,
                 StatsResult **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(StatsResult), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_StatsResult_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsResult(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsResultList(Visitor *v, const char *name,
                 StatsResultList **obj, Error **errp)
{
    bool ok = false;
    StatsResultList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (StatsResultList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_StatsResult(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsResultList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsSchemaValue_members(Visitor *v, StatsSchemaValue *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_StatsType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "unit", &obj->has_unit)) {
        if (!visit_type_StatsUnit(v, "unit", &obj->unit, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "base", &obj->has_base)) {
        if (!visit_type_int8(v, "base", &obj->base, errp)) {
            return false;
        }
    }
    if (!visit_type_int16(v, "exponent", &obj->exponent, errp)) {
        return false;
    }
    if (visit_optional(v, "bucket-size", &obj->has_bucket_size)) {
        if (!visit_type_uint32(v, "bucket-size", &obj->bucket_size, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_StatsSchemaValue(Visitor *v, const char *name,
                 StatsSchemaValue **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(StatsSchemaValue), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_StatsSchemaValue_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsSchemaValue(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsSchemaValueList(Visitor *v, const char *name,
                 StatsSchemaValueList **obj, Error **errp)
{
    bool ok = false;
    StatsSchemaValueList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (StatsSchemaValueList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_StatsSchemaValue(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsSchemaValueList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsSchema_members(Visitor *v, StatsSchema *obj, Error **errp)
{
    if (!visit_type_StatsProvider(v, "provider", &obj->provider, errp)) {
        return false;
    }
    if (!visit_type_StatsTarget(v, "target", &obj->target, errp)) {
        return false;
    }
    if (!visit_type_StatsSchemaValueList(v, "stats", &obj->stats, errp)) {
        return false;
    }
    return true;
}

bool visit_type_StatsSchema(Visitor *v, const char *name,
                 StatsSchema **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(StatsSchema), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_StatsSchema_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsSchema(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_stats_schemas_arg_members(Visitor *v, q_obj_query_stats_schemas_arg *obj, Error **errp)
{
    if (visit_optional(v, "provider", &obj->has_provider)) {
        if (!visit_type_StatsProvider(v, "provider", &obj->provider, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_query_stats_schemas_arg(Visitor *v, const char *name,
                 q_obj_query_stats_schemas_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_stats_schemas_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_stats_schemas_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_stats_schemas_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StatsSchemaList(Visitor *v, const char *name,
                 StatsSchemaList **obj, Error **errp)
{
    bool ok = false;
    StatsSchemaList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (StatsSchemaList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_StatsSchema(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatsSchemaList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_stats_c;
