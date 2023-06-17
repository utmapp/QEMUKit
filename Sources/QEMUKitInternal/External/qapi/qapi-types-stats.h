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

#ifndef QAPI_TYPES_STATS_H
#define QAPI_TYPES_STATS_H

#include "qapi-builtin-types.h"

typedef enum StatsType {
    STATS_TYPE_CUMULATIVE,
    STATS_TYPE_INSTANT,
    STATS_TYPE_PEAK,
    STATS_TYPE_LINEAR_HISTOGRAM,
    STATS_TYPE_LOG2_HISTOGRAM,
    STATS_TYPE__MAX,
} StatsType;

#define StatsType_str(val) \
    qapi_enum_lookup(&StatsType_lookup, (val))

extern const QEnumLookup StatsType_lookup;

typedef enum StatsUnit {
    STATS_UNIT_BYTES,
    STATS_UNIT_SECONDS,
    STATS_UNIT_CYCLES,
    STATS_UNIT_BOOLEAN,
    STATS_UNIT__MAX,
} StatsUnit;

#define StatsUnit_str(val) \
    qapi_enum_lookup(&StatsUnit_lookup, (val))

extern const QEnumLookup StatsUnit_lookup;

typedef enum StatsProvider {
    STATS_PROVIDER_KVM,
    STATS_PROVIDER_CRYPTODEV,
    STATS_PROVIDER__MAX,
} StatsProvider;

#define StatsProvider_str(val) \
    qapi_enum_lookup(&StatsProvider_lookup, (val))

extern const QEnumLookup StatsProvider_lookup;

typedef enum StatsTarget {
    STATS_TARGET_VM,
    STATS_TARGET_VCPU,
    STATS_TARGET_CRYPTODEV,
    STATS_TARGET__MAX,
} StatsTarget;

#define StatsTarget_str(val) \
    qapi_enum_lookup(&StatsTarget_lookup, (val))

extern const QEnumLookup StatsTarget_lookup;

typedef struct StatsRequest StatsRequest;

typedef struct StatsVCPUFilter StatsVCPUFilter;

typedef struct StatsRequestList StatsRequestList;

typedef struct q_obj_StatsFilter_base q_obj_StatsFilter_base;

typedef struct StatsFilter StatsFilter;

typedef struct StatsValue StatsValue;

typedef struct Stats Stats;

typedef struct StatsList StatsList;

typedef struct StatsResult StatsResult;

typedef struct StatsResultList StatsResultList;

typedef struct StatsSchemaValue StatsSchemaValue;

typedef struct StatsSchemaValueList StatsSchemaValueList;

typedef struct StatsSchema StatsSchema;

typedef struct q_obj_query_stats_schemas_arg q_obj_query_stats_schemas_arg;

typedef struct StatsSchemaList StatsSchemaList;

struct StatsRequest {
    StatsProvider provider;
    bool has_names;
    strList *names;
};

void qapi_free_StatsRequest(StatsRequest *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsRequest, qapi_free_StatsRequest)

struct StatsVCPUFilter {
    bool has_vcpus;
    strList *vcpus;
};

void qapi_free_StatsVCPUFilter(StatsVCPUFilter *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsVCPUFilter, qapi_free_StatsVCPUFilter)

struct StatsRequestList {
    StatsRequestList *next;
    StatsRequest *value;
};

void qapi_free_StatsRequestList(StatsRequestList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsRequestList, qapi_free_StatsRequestList)

struct q_obj_StatsFilter_base {
    StatsTarget target;
    bool has_providers;
    StatsRequestList *providers;
};

void qapi_free_q_obj_StatsFilter_base(q_obj_StatsFilter_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_StatsFilter_base, qapi_free_q_obj_StatsFilter_base)

struct StatsFilter {
    StatsTarget target;
    bool has_providers;
    StatsRequestList *providers;
    union { /* union tag is @target */
        StatsVCPUFilter vcpu;
    } u;
};

void qapi_free_StatsFilter(StatsFilter *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsFilter, qapi_free_StatsFilter)

struct StatsValue {
    QType type;
    union { /* union tag is @type */
        uint64_t scalar;
        bool boolean;
        uint64List *list;
    } u;
};

void qapi_free_StatsValue(StatsValue *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsValue, qapi_free_StatsValue)

struct Stats {
    char *name;
    StatsValue *value;
};

void qapi_free_Stats(Stats *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Stats, qapi_free_Stats)

struct StatsList {
    StatsList *next;
    Stats *value;
};

void qapi_free_StatsList(StatsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsList, qapi_free_StatsList)

struct StatsResult {
    StatsProvider provider;
    bool has_qom_path;
    char *qom_path;
    StatsList *stats;
};

void qapi_free_StatsResult(StatsResult *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsResult, qapi_free_StatsResult)

struct StatsResultList {
    StatsResultList *next;
    StatsResult *value;
};

void qapi_free_StatsResultList(StatsResultList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsResultList, qapi_free_StatsResultList)

struct StatsSchemaValue {
    char *name;
    StatsType type;
    bool has_unit;
    StatsUnit unit;
    bool has_base;
    int8_t base;
    int16_t exponent;
    bool has_bucket_size;
    uint32_t bucket_size;
};

void qapi_free_StatsSchemaValue(StatsSchemaValue *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsSchemaValue, qapi_free_StatsSchemaValue)

struct StatsSchemaValueList {
    StatsSchemaValueList *next;
    StatsSchemaValue *value;
};

void qapi_free_StatsSchemaValueList(StatsSchemaValueList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsSchemaValueList, qapi_free_StatsSchemaValueList)

struct StatsSchema {
    StatsProvider provider;
    StatsTarget target;
    StatsSchemaValueList *stats;
};

void qapi_free_StatsSchema(StatsSchema *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsSchema, qapi_free_StatsSchema)

struct q_obj_query_stats_schemas_arg {
    bool has_provider;
    StatsProvider provider;
};

void qapi_free_q_obj_query_stats_schemas_arg(q_obj_query_stats_schemas_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_stats_schemas_arg, qapi_free_q_obj_query_stats_schemas_arg)

struct StatsSchemaList {
    StatsSchemaList *next;
    StatsSchema *value;
};

void qapi_free_StatsSchemaList(StatsSchemaList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatsSchemaList, qapi_free_StatsSchemaList)

#endif /* QAPI_TYPES_STATS_H */
