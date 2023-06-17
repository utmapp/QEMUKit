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

#ifndef QAPI_TYPES_AUTHZ_H
#define QAPI_TYPES_AUTHZ_H

#include "qapi-builtin-types.h"

typedef enum QAuthZListPolicy {
    QAUTHZ_LIST_POLICY_DENY,
    QAUTHZ_LIST_POLICY_ALLOW,
    QAUTHZ_LIST_POLICY__MAX,
} QAuthZListPolicy;

#define QAuthZListPolicy_str(val) \
    qapi_enum_lookup(&QAuthZListPolicy_lookup, (val))

extern const QEnumLookup QAuthZListPolicy_lookup;

typedef enum QAuthZListFormat {
    QAUTHZ_LIST_FORMAT_EXACT,
    QAUTHZ_LIST_FORMAT_GLOB,
    QAUTHZ_LIST_FORMAT__MAX,
} QAuthZListFormat;

#define QAuthZListFormat_str(val) \
    qapi_enum_lookup(&QAuthZListFormat_lookup, (val))

extern const QEnumLookup QAuthZListFormat_lookup;

typedef struct QAuthZListRule QAuthZListRule;

typedef struct QAuthZListRuleList QAuthZListRuleList;

typedef struct AuthZListProperties AuthZListProperties;

typedef struct AuthZListFileProperties AuthZListFileProperties;

typedef struct AuthZPAMProperties AuthZPAMProperties;

typedef struct AuthZSimpleProperties AuthZSimpleProperties;

struct QAuthZListRule {
    char *match;
    QAuthZListPolicy policy;
    bool has_format;
    QAuthZListFormat format;
};

void qapi_free_QAuthZListRule(QAuthZListRule *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QAuthZListRule, qapi_free_QAuthZListRule)

struct QAuthZListRuleList {
    QAuthZListRuleList *next;
    QAuthZListRule *value;
};

void qapi_free_QAuthZListRuleList(QAuthZListRuleList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QAuthZListRuleList, qapi_free_QAuthZListRuleList)

struct AuthZListProperties {
    bool has_policy;
    QAuthZListPolicy policy;
    bool has_rules;
    QAuthZListRuleList *rules;
};

void qapi_free_AuthZListProperties(AuthZListProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AuthZListProperties, qapi_free_AuthZListProperties)

struct AuthZListFileProperties {
    char *filename;
    bool has_refresh;
    bool refresh;
};

void qapi_free_AuthZListFileProperties(AuthZListFileProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AuthZListFileProperties, qapi_free_AuthZListFileProperties)

struct AuthZPAMProperties {
    char *service;
};

void qapi_free_AuthZPAMProperties(AuthZPAMProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AuthZPAMProperties, qapi_free_AuthZPAMProperties)

struct AuthZSimpleProperties {
    char *identity;
};

void qapi_free_AuthZSimpleProperties(AuthZSimpleProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AuthZSimpleProperties, qapi_free_AuthZSimpleProperties)

#endif /* QAPI_TYPES_AUTHZ_H */
