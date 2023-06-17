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
#include "qapi-types-compat.h"
#include "qapi-visit-compat.h"

const QEnumLookup CompatPolicyInput_lookup = {
    .array = (const char *const[]) {
        [COMPAT_POLICY_INPUT_ACCEPT] = "accept",
        [COMPAT_POLICY_INPUT_REJECT] = "reject",
        [COMPAT_POLICY_INPUT_CRASH] = "crash",
    },
    .size = COMPAT_POLICY_INPUT__MAX
};

const QEnumLookup CompatPolicyOutput_lookup = {
    .array = (const char *const[]) {
        [COMPAT_POLICY_OUTPUT_ACCEPT] = "accept",
        [COMPAT_POLICY_OUTPUT_HIDE] = "hide",
    },
    .size = COMPAT_POLICY_OUTPUT__MAX
};

void qapi_free_CompatPolicy(CompatPolicy *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CompatPolicy(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_compat_c;
