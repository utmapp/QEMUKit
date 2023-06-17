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
#include "qapi-visit-compat.h"

bool visit_type_CompatPolicyInput(Visitor *v, const char *name,
                 CompatPolicyInput *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CompatPolicyInput_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CompatPolicyOutput(Visitor *v, const char *name,
                 CompatPolicyOutput *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CompatPolicyOutput_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CompatPolicy_members(Visitor *v, CompatPolicy *obj, Error **errp)
{
    if (visit_optional(v, "deprecated-input", &obj->has_deprecated_input)) {
        if (!visit_type_CompatPolicyInput(v, "deprecated-input", &obj->deprecated_input, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "deprecated-output", &obj->has_deprecated_output)) {
        if (!visit_type_CompatPolicyOutput(v, "deprecated-output", &obj->deprecated_output, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "unstable-input", &obj->has_unstable_input)) {
        if (!visit_type_CompatPolicyInput(v, "unstable-input", &obj->unstable_input, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "unstable-output", &obj->has_unstable_output)) {
        if (!visit_type_CompatPolicyOutput(v, "unstable-output", &obj->unstable_output, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_CompatPolicy(Visitor *v, const char *name,
                 CompatPolicy **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CompatPolicy), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CompatPolicy_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CompatPolicy(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_compat_c;
