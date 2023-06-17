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

#ifndef QAPI_TYPES_MACHINE_TARGET_H
#define QAPI_TYPES_MACHINE_TARGET_H

#include "qapi-builtin-types.h"

typedef struct CpuModelInfo CpuModelInfo;

typedef enum CpuModelExpansionType {
    CPU_MODEL_EXPANSION_TYPE_STATIC,
    CPU_MODEL_EXPANSION_TYPE_FULL,
    CPU_MODEL_EXPANSION_TYPE__MAX,
} CpuModelExpansionType;

#define CpuModelExpansionType_str(val) \
    qapi_enum_lookup(&CpuModelExpansionType_lookup, (val))

extern const QEnumLookup CpuModelExpansionType_lookup;

typedef enum CpuModelCompareResult {
    CPU_MODEL_COMPARE_RESULT_INCOMPATIBLE,
    CPU_MODEL_COMPARE_RESULT_IDENTICAL,
    CPU_MODEL_COMPARE_RESULT_SUPERSET,
    CPU_MODEL_COMPARE_RESULT_SUBSET,
    CPU_MODEL_COMPARE_RESULT__MAX,
} CpuModelCompareResult;

#define CpuModelCompareResult_str(val) \
    qapi_enum_lookup(&CpuModelCompareResult_lookup, (val))

extern const QEnumLookup CpuModelCompareResult_lookup;

#if defined(TARGET_S390X)
typedef struct CpuModelBaselineInfo CpuModelBaselineInfo;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
typedef struct CpuModelCompareInfo CpuModelCompareInfo;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
typedef struct q_obj_query_cpu_model_comparison_arg q_obj_query_cpu_model_comparison_arg;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
typedef struct q_obj_query_cpu_model_baseline_arg q_obj_query_cpu_model_baseline_arg;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
typedef struct CpuModelExpansionInfo CpuModelExpansionInfo;
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
typedef struct q_obj_query_cpu_model_expansion_arg q_obj_query_cpu_model_expansion_arg;
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
typedef struct CpuDefinitionInfo CpuDefinitionInfo;
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
typedef struct CpuDefinitionInfoList CpuDefinitionInfoList;
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

struct CpuModelInfo {
    char *name;
    bool has_props;
    CFTypeRef props;
};

void qapi_free_CpuModelInfo(CpuModelInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuModelInfo, qapi_free_CpuModelInfo)

#if defined(TARGET_S390X)
struct CpuModelBaselineInfo {
    CpuModelInfo *model;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_CpuModelBaselineInfo(CpuModelBaselineInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuModelBaselineInfo, qapi_free_CpuModelBaselineInfo)
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
struct CpuModelCompareInfo {
    CpuModelCompareResult result;
    strList *responsible_properties;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_CpuModelCompareInfo(CpuModelCompareInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuModelCompareInfo, qapi_free_CpuModelCompareInfo)
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
struct q_obj_query_cpu_model_comparison_arg {
    CpuModelInfo *modela;
    CpuModelInfo *modelb;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_q_obj_query_cpu_model_comparison_arg(q_obj_query_cpu_model_comparison_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_cpu_model_comparison_arg, qapi_free_q_obj_query_cpu_model_comparison_arg)
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
struct q_obj_query_cpu_model_baseline_arg {
    CpuModelInfo *modela;
    CpuModelInfo *modelb;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_q_obj_query_cpu_model_baseline_arg(q_obj_query_cpu_model_baseline_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_cpu_model_baseline_arg, qapi_free_q_obj_query_cpu_model_baseline_arg)
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
struct CpuModelExpansionInfo {
    CpuModelInfo *model;
};
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
void qapi_free_CpuModelExpansionInfo(CpuModelExpansionInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuModelExpansionInfo, qapi_free_CpuModelExpansionInfo)
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
struct q_obj_query_cpu_model_expansion_arg {
    CpuModelExpansionType type;
    CpuModelInfo *model;
};
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
void qapi_free_q_obj_query_cpu_model_expansion_arg(q_obj_query_cpu_model_expansion_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_cpu_model_expansion_arg, qapi_free_q_obj_query_cpu_model_expansion_arg)
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
struct CpuDefinitionInfo {
    char *name;
    bool has_migration_safe;
    bool migration_safe;
    bool q_static;
    bool has_unavailable_features;
    strList *unavailable_features;
    char *q_typename;
    bool has_alias_of;
    char *alias_of;
    bool deprecated;
};
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
void qapi_free_CpuDefinitionInfo(CpuDefinitionInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuDefinitionInfo, qapi_free_CpuDefinitionInfo)
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
struct CpuDefinitionInfoList {
    CpuDefinitionInfoList *next;
    CpuDefinitionInfo *value;
};

void qapi_free_CpuDefinitionInfoList(CpuDefinitionInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuDefinitionInfoList, qapi_free_CpuDefinitionInfoList)
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#endif /* QAPI_TYPES_MACHINE_TARGET_H */
