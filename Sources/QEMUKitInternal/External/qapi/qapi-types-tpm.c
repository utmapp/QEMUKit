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
#include "qapi-types-tpm.h"
#include "qapi-visit-tpm.h"

#if defined(CONFIG_TPM)
const QEnumLookup TpmModel_lookup = {
    .array = (const char *const[]) {
        [TPM_MODEL_TPM_TIS] = "tpm-tis",
        [TPM_MODEL_TPM_CRB] = "tpm-crb",
        [TPM_MODEL_TPM_SPAPR] = "tpm-spapr",
    },
    .size = TPM_MODEL__MAX
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TpmModelList(TpmModelList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TpmModelList(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
const QEnumLookup TpmType_lookup = {
    .array = (const char *const[]) {
        [TPM_TYPE_PASSTHROUGH] = "passthrough",
        [TPM_TYPE_EMULATOR] = "emulator",
    },
    .size = TPM_TYPE__MAX
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TpmTypeList(TpmTypeList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TpmTypeList(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMPassthroughOptions(TPMPassthroughOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TPMPassthroughOptions(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMEmulatorOptions(TPMEmulatorOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TPMEmulatorOptions(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMPassthroughOptionsWrapper(TPMPassthroughOptionsWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TPMPassthroughOptionsWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMEmulatorOptionsWrapper(TPMEmulatorOptionsWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TPMEmulatorOptionsWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_q_obj_TpmTypeOptions_base(q_obj_TpmTypeOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_TpmTypeOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TpmTypeOptions(TpmTypeOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TpmTypeOptions(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMInfo(TPMInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TPMInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMInfoList(TPMInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TPMInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_TPM) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_tpm_c;
