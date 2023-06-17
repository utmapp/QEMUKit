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
#include "qapi-types-machine-target.h"
#include "qapi-visit-machine-target.h"

void qapi_free_CpuModelInfo(CpuModelInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup CpuModelExpansionType_lookup = {
    .array = (const char *const[]) {
        [CPU_MODEL_EXPANSION_TYPE_STATIC] = "static",
        [CPU_MODEL_EXPANSION_TYPE_FULL] = "full",
    },
    .size = CPU_MODEL_EXPANSION_TYPE__MAX
};

const QEnumLookup CpuModelCompareResult_lookup = {
    .array = (const char *const[]) {
        [CPU_MODEL_COMPARE_RESULT_INCOMPATIBLE] = "incompatible",
        [CPU_MODEL_COMPARE_RESULT_IDENTICAL] = "identical",
        [CPU_MODEL_COMPARE_RESULT_SUPERSET] = "superset",
        [CPU_MODEL_COMPARE_RESULT_SUBSET] = "subset",
    },
    .size = CPU_MODEL_COMPARE_RESULT__MAX
};

#if defined(TARGET_S390X)
void qapi_free_CpuModelBaselineInfo(CpuModelBaselineInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelBaselineInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_CpuModelCompareInfo(CpuModelCompareInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelCompareInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_q_obj_query_cpu_model_comparison_arg(q_obj_query_cpu_model_comparison_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_query_cpu_model_comparison_arg(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_q_obj_query_cpu_model_baseline_arg(q_obj_query_cpu_model_baseline_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_query_cpu_model_baseline_arg(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
void qapi_free_CpuModelExpansionInfo(CpuModelExpansionInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelExpansionInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
void qapi_free_q_obj_query_cpu_model_expansion_arg(q_obj_query_cpu_model_expansion_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_query_cpu_model_expansion_arg(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
void qapi_free_CpuDefinitionInfo(CpuDefinitionInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuDefinitionInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
void qapi_free_CpuDefinitionInfoList(CpuDefinitionInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuDefinitionInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_machine_target_c;
