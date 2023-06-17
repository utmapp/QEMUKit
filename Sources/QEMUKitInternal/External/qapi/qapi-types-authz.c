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
#include "qapi-types-authz.h"
#include "qapi-visit-authz.h"

const QEnumLookup QAuthZListPolicy_lookup = {
    .array = (const char *const[]) {
        [QAUTHZ_LIST_POLICY_DENY] = "deny",
        [QAUTHZ_LIST_POLICY_ALLOW] = "allow",
    },
    .size = QAUTHZ_LIST_POLICY__MAX
};

const QEnumLookup QAuthZListFormat_lookup = {
    .array = (const char *const[]) {
        [QAUTHZ_LIST_FORMAT_EXACT] = "exact",
        [QAUTHZ_LIST_FORMAT_GLOB] = "glob",
    },
    .size = QAUTHZ_LIST_FORMAT__MAX
};

void qapi_free_QAuthZListRule(QAuthZListRule *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_QAuthZListRule(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_QAuthZListRuleList(QAuthZListRuleList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_QAuthZListRuleList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AuthZListProperties(AuthZListProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AuthZListProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AuthZListFileProperties(AuthZListFileProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AuthZListFileProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AuthZPAMProperties(AuthZPAMProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AuthZPAMProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AuthZSimpleProperties(AuthZSimpleProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AuthZSimpleProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_authz_c;
