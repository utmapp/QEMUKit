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

#ifndef QAPI_VISIT_MACHINE_TARGET_H
#define QAPI_VISIT_MACHINE_TARGET_H

#include "qapi-builtin-visit.h"
#include "qapi-types-machine-target.h"


bool visit_type_CpuModelInfo_members(Visitor *v, CpuModelInfo *obj, Error **errp);

bool visit_type_CpuModelInfo(Visitor *v, const char *name,
                 CpuModelInfo **obj, Error **errp);

bool visit_type_CpuModelExpansionType(Visitor *v, const char *name,
                 CpuModelExpansionType *obj, Error **errp);

bool visit_type_CpuModelCompareResult(Visitor *v, const char *name,
                 CpuModelCompareResult *obj, Error **errp);

#if defined(TARGET_S390X)
bool visit_type_CpuModelBaselineInfo_members(Visitor *v, CpuModelBaselineInfo *obj, Error **errp);

bool visit_type_CpuModelBaselineInfo(Visitor *v, const char *name,
                 CpuModelBaselineInfo **obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
bool visit_type_CpuModelCompareInfo_members(Visitor *v, CpuModelCompareInfo *obj, Error **errp);

bool visit_type_CpuModelCompareInfo(Visitor *v, const char *name,
                 CpuModelCompareInfo **obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
bool visit_type_q_obj_query_cpu_model_comparison_arg_members(Visitor *v, q_obj_query_cpu_model_comparison_arg *obj, Error **errp);

bool visit_type_q_obj_query_cpu_model_comparison_arg(Visitor *v, const char *name,
                 q_obj_query_cpu_model_comparison_arg **obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
bool visit_type_q_obj_query_cpu_model_baseline_arg_members(Visitor *v, q_obj_query_cpu_model_baseline_arg *obj, Error **errp);

bool visit_type_q_obj_query_cpu_model_baseline_arg(Visitor *v, const char *name,
                 q_obj_query_cpu_model_baseline_arg **obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
bool visit_type_CpuModelExpansionInfo_members(Visitor *v, CpuModelExpansionInfo *obj, Error **errp);

bool visit_type_CpuModelExpansionInfo(Visitor *v, const char *name,
                 CpuModelExpansionInfo **obj, Error **errp);
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
bool visit_type_q_obj_query_cpu_model_expansion_arg_members(Visitor *v, q_obj_query_cpu_model_expansion_arg *obj, Error **errp);

bool visit_type_q_obj_query_cpu_model_expansion_arg(Visitor *v, const char *name,
                 q_obj_query_cpu_model_expansion_arg **obj, Error **errp);
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
bool visit_type_CpuDefinitionInfo_members(Visitor *v, CpuDefinitionInfo *obj, Error **errp);

bool visit_type_CpuDefinitionInfo(Visitor *v, const char *name,
                 CpuDefinitionInfo **obj, Error **errp);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
bool visit_type_CpuDefinitionInfoList(Visitor *v, const char *name,
                 CpuDefinitionInfoList **obj, Error **errp);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#endif /* QAPI_VISIT_MACHINE_TARGET_H */
