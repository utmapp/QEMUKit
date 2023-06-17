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

#ifndef QAPI_VISIT_TPM_H
#define QAPI_VISIT_TPM_H

#include "qapi-builtin-visit.h"
#include "qapi-types-tpm.h"


#if defined(CONFIG_TPM)
bool visit_type_TpmModel(Visitor *v, const char *name,
                 TpmModel *obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TpmModelList(Visitor *v, const char *name,
                 TpmModelList **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TpmType(Visitor *v, const char *name,
                 TpmType *obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TpmTypeList(Visitor *v, const char *name,
                 TpmTypeList **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMPassthroughOptions_members(Visitor *v, TPMPassthroughOptions *obj, Error **errp);

bool visit_type_TPMPassthroughOptions(Visitor *v, const char *name,
                 TPMPassthroughOptions **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMEmulatorOptions_members(Visitor *v, TPMEmulatorOptions *obj, Error **errp);

bool visit_type_TPMEmulatorOptions(Visitor *v, const char *name,
                 TPMEmulatorOptions **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMPassthroughOptionsWrapper_members(Visitor *v, TPMPassthroughOptionsWrapper *obj, Error **errp);

bool visit_type_TPMPassthroughOptionsWrapper(Visitor *v, const char *name,
                 TPMPassthroughOptionsWrapper **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMEmulatorOptionsWrapper_members(Visitor *v, TPMEmulatorOptionsWrapper *obj, Error **errp);

bool visit_type_TPMEmulatorOptionsWrapper(Visitor *v, const char *name,
                 TPMEmulatorOptionsWrapper **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_q_obj_TpmTypeOptions_base_members(Visitor *v, q_obj_TpmTypeOptions_base *obj, Error **errp);

bool visit_type_q_obj_TpmTypeOptions_base(Visitor *v, const char *name,
                 q_obj_TpmTypeOptions_base **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TpmTypeOptions_members(Visitor *v, TpmTypeOptions *obj, Error **errp);

bool visit_type_TpmTypeOptions(Visitor *v, const char *name,
                 TpmTypeOptions **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMInfo_members(Visitor *v, TPMInfo *obj, Error **errp);

bool visit_type_TPMInfo(Visitor *v, const char *name,
                 TPMInfo **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMInfoList(Visitor *v, const char *name,
                 TPMInfoList **obj, Error **errp);
#endif /* defined(CONFIG_TPM) */

#endif /* QAPI_VISIT_TPM_H */
