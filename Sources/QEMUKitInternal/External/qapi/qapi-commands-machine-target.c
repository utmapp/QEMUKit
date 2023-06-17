/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu-compat.h"
#include "cf-output-visitor.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"
#include "error.h"
#include "qapi-visit-machine-target.h"
#include "qapi-commands-machine-target.h"


#if defined(TARGET_S390X)
static CpuModelCompareInfo *qmp_marshal_rpc_CpuModelCompareInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    CpuModelCompareInfo *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_CpuModelCompareInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
CpuModelCompareInfo *qmp_query_cpu_model_comparison(CpuModelInfo *modela, CpuModelInfo *modelb, Error **errp, void *ctx)

{
    const char *cmdname = "query-cpu-model-comparison";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    CpuModelCompareInfo *ret = {0};
    q_obj_query_cpu_model_comparison_arg _arg = {
        .modela = modela,
        .modelb = modelb,
    };
    q_obj_query_cpu_model_comparison_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_cpu_model_comparison_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_CpuModelCompareInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
static CpuModelBaselineInfo *qmp_marshal_rpc_CpuModelBaselineInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    CpuModelBaselineInfo *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_CpuModelBaselineInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
CpuModelBaselineInfo *qmp_query_cpu_model_baseline(CpuModelInfo *modela, CpuModelInfo *modelb, Error **errp, void *ctx)

{
    const char *cmdname = "query-cpu-model-baseline";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    CpuModelBaselineInfo *ret = {0};
    q_obj_query_cpu_model_baseline_arg _arg = {
        .modela = modela,
        .modelb = modelb,
    };
    q_obj_query_cpu_model_baseline_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_cpu_model_baseline_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_CpuModelBaselineInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
static CpuModelExpansionInfo *qmp_marshal_rpc_CpuModelExpansionInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    CpuModelExpansionInfo *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_CpuModelExpansionInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
CpuModelExpansionInfo *qmp_query_cpu_model_expansion(CpuModelExpansionType type, CpuModelInfo *model, Error **errp, void *ctx)

{
    const char *cmdname = "query-cpu-model-expansion";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    CpuModelExpansionInfo *ret = {0};
    q_obj_query_cpu_model_expansion_arg _arg = {
        .type = type,
        .model = model,
    };
    q_obj_query_cpu_model_expansion_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_cpu_model_expansion_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_CpuModelExpansionInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
static CpuDefinitionInfoList *qmp_marshal_rpc_CpuDefinitionInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    CpuDefinitionInfoList *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_CpuDefinitionInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
CpuDefinitionInfoList *qmp_query_cpu_definitions(Error **errp, void *ctx)

{
    const char *cmdname = "query-cpu-definitions";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    CpuDefinitionInfoList *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_CpuDefinitionInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_machine_target_c;
