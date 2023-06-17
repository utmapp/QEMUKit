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

#ifndef QAPI_COMMANDS_MACHINE_TARGET_H
#define QAPI_COMMANDS_MACHINE_TARGET_H

#include "qapi-types-machine-target.h"

#if defined(TARGET_S390X)
CpuModelCompareInfo *qmp_query_cpu_model_comparison(CpuModelInfo *modela, CpuModelInfo *modelb, Error **errp, void *ctx);
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_S390X)
CpuModelBaselineInfo *qmp_query_cpu_model_baseline(CpuModelInfo *modela, CpuModelInfo *modelb, Error **errp, void *ctx);
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
CpuModelExpansionInfo *qmp_query_cpu_model_expansion(CpuModelExpansionType type, CpuModelInfo *model, Error **errp, void *ctx);
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */
#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64)
CpuDefinitionInfoList *qmp_query_cpu_definitions(Error **errp, void *ctx);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) */

#endif /* QAPI_COMMANDS_MACHINE_TARGET_H */
