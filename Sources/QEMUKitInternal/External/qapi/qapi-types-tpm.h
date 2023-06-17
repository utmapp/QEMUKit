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

#ifndef QAPI_TYPES_TPM_H
#define QAPI_TYPES_TPM_H

#include "qapi-builtin-types.h"

#if defined(CONFIG_TPM)
typedef enum TpmModel {
    TPM_MODEL_TPM_TIS,
    TPM_MODEL_TPM_CRB,
    TPM_MODEL_TPM_SPAPR,
    TPM_MODEL__MAX,
} TpmModel;

#define TpmModel_str(val) \
    qapi_enum_lookup(&TpmModel_lookup, (val))

extern const QEnumLookup TpmModel_lookup;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TpmModelList TpmModelList;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef enum TpmType {
    TPM_TYPE_PASSTHROUGH,
    TPM_TYPE_EMULATOR,
    TPM_TYPE__MAX,
} TpmType;

#define TpmType_str(val) \
    qapi_enum_lookup(&TpmType_lookup, (val))

extern const QEnumLookup TpmType_lookup;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TpmTypeList TpmTypeList;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TPMPassthroughOptions TPMPassthroughOptions;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TPMEmulatorOptions TPMEmulatorOptions;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TPMPassthroughOptionsWrapper TPMPassthroughOptionsWrapper;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TPMEmulatorOptionsWrapper TPMEmulatorOptionsWrapper;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct q_obj_TpmTypeOptions_base q_obj_TpmTypeOptions_base;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TpmTypeOptions TpmTypeOptions;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TPMInfo TPMInfo;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
typedef struct TPMInfoList TPMInfoList;
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TpmModelList {
    TpmModelList *next;
    TpmModel value;
};

void qapi_free_TpmModelList(TpmModelList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TpmModelList, qapi_free_TpmModelList)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TpmTypeList {
    TpmTypeList *next;
    TpmType value;
};

void qapi_free_TpmTypeList(TpmTypeList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TpmTypeList, qapi_free_TpmTypeList)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TPMPassthroughOptions {
    bool has_path;
    char *path;
    bool has_cancel_path;
    char *cancel_path;
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMPassthroughOptions(TPMPassthroughOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMPassthroughOptions, qapi_free_TPMPassthroughOptions)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TPMEmulatorOptions {
    char *chardev;
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMEmulatorOptions(TPMEmulatorOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMEmulatorOptions, qapi_free_TPMEmulatorOptions)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TPMPassthroughOptionsWrapper {
    TPMPassthroughOptions *data;
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMPassthroughOptionsWrapper(TPMPassthroughOptionsWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMPassthroughOptionsWrapper, qapi_free_TPMPassthroughOptionsWrapper)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TPMEmulatorOptionsWrapper {
    TPMEmulatorOptions *data;
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMEmulatorOptionsWrapper(TPMEmulatorOptionsWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMEmulatorOptionsWrapper, qapi_free_TPMEmulatorOptionsWrapper)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct q_obj_TpmTypeOptions_base {
    TpmType type;
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_q_obj_TpmTypeOptions_base(q_obj_TpmTypeOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_TpmTypeOptions_base, qapi_free_q_obj_TpmTypeOptions_base)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TpmTypeOptions {
    TpmType type;
    union { /* union tag is @type */
        TPMPassthroughOptionsWrapper passthrough;
        TPMEmulatorOptionsWrapper emulator;
    } u;
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TpmTypeOptions(TpmTypeOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TpmTypeOptions, qapi_free_TpmTypeOptions)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TPMInfo {
    char *id;
    TpmModel model;
    TpmTypeOptions *options;
};
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
void qapi_free_TPMInfo(TPMInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMInfo, qapi_free_TPMInfo)
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
struct TPMInfoList {
    TPMInfoList *next;
    TPMInfo *value;
};

void qapi_free_TPMInfoList(TPMInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TPMInfoList, qapi_free_TPMInfoList)
#endif /* defined(CONFIG_TPM) */

#endif /* QAPI_TYPES_TPM_H */
