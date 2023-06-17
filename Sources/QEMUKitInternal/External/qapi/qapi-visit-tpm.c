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

#include "qemu-compat.h"
#include "error.h"
#include "qerror.h"
#include "qapi-visit-tpm.h"

#if defined(CONFIG_TPM)
bool visit_type_TpmModel(Visitor *v, const char *name,
                 TpmModel *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &TpmModel_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TpmModelList(Visitor *v, const char *name,
                 TpmModelList **obj, Error **errp)
{
    bool ok = false;
    TpmModelList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (TpmModelList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_TpmModel(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TpmModelList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TpmType(Visitor *v, const char *name,
                 TpmType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &TpmType_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TpmTypeList(Visitor *v, const char *name,
                 TpmTypeList **obj, Error **errp)
{
    bool ok = false;
    TpmTypeList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (TpmTypeList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_TpmType(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TpmTypeList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMPassthroughOptions_members(Visitor *v, TPMPassthroughOptions *obj, Error **errp)
{
    if (visit_optional(v, "path", &obj->has_path)) {
        if (!visit_type_str(v, "path", &obj->path, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cancel-path", &obj->has_cancel_path)) {
        if (!visit_type_str(v, "cancel-path", &obj->cancel_path, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_TPMPassthroughOptions(Visitor *v, const char *name,
                 TPMPassthroughOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TPMPassthroughOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TPMPassthroughOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TPMPassthroughOptions(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMEmulatorOptions_members(Visitor *v, TPMEmulatorOptions *obj, Error **errp)
{
    if (!visit_type_str(v, "chardev", &obj->chardev, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TPMEmulatorOptions(Visitor *v, const char *name,
                 TPMEmulatorOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TPMEmulatorOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TPMEmulatorOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TPMEmulatorOptions(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMPassthroughOptionsWrapper_members(Visitor *v, TPMPassthroughOptionsWrapper *obj, Error **errp)
{
    if (!visit_type_TPMPassthroughOptions(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TPMPassthroughOptionsWrapper(Visitor *v, const char *name,
                 TPMPassthroughOptionsWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TPMPassthroughOptionsWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TPMPassthroughOptionsWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TPMPassthroughOptionsWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMEmulatorOptionsWrapper_members(Visitor *v, TPMEmulatorOptionsWrapper *obj, Error **errp)
{
    if (!visit_type_TPMEmulatorOptions(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TPMEmulatorOptionsWrapper(Visitor *v, const char *name,
                 TPMEmulatorOptionsWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TPMEmulatorOptionsWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TPMEmulatorOptionsWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TPMEmulatorOptionsWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_q_obj_TpmTypeOptions_base_members(Visitor *v, q_obj_TpmTypeOptions_base *obj, Error **errp)
{
    if (!visit_type_TpmType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_TpmTypeOptions_base(Visitor *v, const char *name,
                 q_obj_TpmTypeOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_TpmTypeOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_TpmTypeOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_TpmTypeOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TpmTypeOptions_members(Visitor *v, TpmTypeOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_TpmTypeOptions_base_members(v, (q_obj_TpmTypeOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case TPM_TYPE_PASSTHROUGH:
        return visit_type_TPMPassthroughOptionsWrapper_members(v, &obj->u.passthrough, errp);
    case TPM_TYPE_EMULATOR:
        return visit_type_TPMEmulatorOptionsWrapper_members(v, &obj->u.emulator, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_TpmTypeOptions(Visitor *v, const char *name,
                 TpmTypeOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TpmTypeOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TpmTypeOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TpmTypeOptions(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMInfo_members(Visitor *v, TPMInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_TpmModel(v, "model", &obj->model, errp)) {
        return false;
    }
    if (!visit_type_TpmTypeOptions(v, "options", &obj->options, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TPMInfo(Visitor *v, const char *name,
                 TPMInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TPMInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TPMInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TPMInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

#if defined(CONFIG_TPM)
bool visit_type_TPMInfoList(Visitor *v, const char *name,
                 TPMInfoList **obj, Error **errp)
{
    bool ok = false;
    TPMInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (TPMInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_TPMInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TPMInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_TPM) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_tpm_c;
