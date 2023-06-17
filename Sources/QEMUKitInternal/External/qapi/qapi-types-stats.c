/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu-compat.h"
#include "dealloc-visitor.h"
#include "qapi-types-stats.h"
#include "qapi-visit-stats.h"

const QEnumLookup StatsType_lookup = {
    .array = (const char *const[]) {
        [STATS_TYPE_CUMULATIVE] = "cumulative",
        [STATS_TYPE_INSTANT] = "instant",
        [STATS_TYPE_PEAK] = "peak",
        [STATS_TYPE_LINEAR_HISTOGRAM] = "linear-histogram",
        [STATS_TYPE_LOG2_HISTOGRAM] = "log2-histogram",
    },
    .size = STATS_TYPE__MAX
};

const QEnumLookup StatsUnit_lookup = {
    .array = (const char *const[]) {
        [STATS_UNIT_BYTES] = "bytes",
        [STATS_UNIT_SECONDS] = "seconds",
        [STATS_UNIT_CYCLES] = "cycles",
        [STATS_UNIT_BOOLEAN] = "boolean",
    },
    .size = STATS_UNIT__MAX
};

const QEnumLookup StatsProvider_lookup = {
    .array = (const char *const[]) {
        [STATS_PROVIDER_KVM] = "kvm",
        [STATS_PROVIDER_CRYPTODEV] = "cryptodev",
    },
    .size = STATS_PROVIDER__MAX
};

const QEnumLookup StatsTarget_lookup = {
    .array = (const char *const[]) {
        [STATS_TARGET_VM] = "vm",
        [STATS_TARGET_VCPU] = "vcpu",
        [STATS_TARGET_CRYPTODEV] = "cryptodev",
    },
    .size = STATS_TARGET__MAX
};

void qapi_free_StatsRequest(StatsRequest *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsRequest(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsVCPUFilter(StatsVCPUFilter *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsVCPUFilter(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsRequestList(StatsRequestList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsRequestList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_StatsFilter_base(q_obj_StatsFilter_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_StatsFilter_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsFilter(StatsFilter *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsFilter(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsValue(StatsValue *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsValue(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_Stats(Stats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Stats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsList(StatsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsResult(StatsResult *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsResult(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsResultList(StatsResultList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsResultList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsSchemaValue(StatsSchemaValue *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsSchemaValue(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsSchemaValueList(StatsSchemaValueList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsSchemaValueList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsSchema(StatsSchema *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsSchema(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_query_stats_schemas_arg(q_obj_query_stats_schemas_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_query_stats_schemas_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StatsSchemaList(StatsSchemaList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatsSchemaList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_stats_c;
