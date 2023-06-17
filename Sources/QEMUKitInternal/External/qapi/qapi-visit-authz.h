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

#ifndef QAPI_VISIT_AUTHZ_H
#define QAPI_VISIT_AUTHZ_H

#include "qapi-builtin-visit.h"
#include "qapi-types-authz.h"


bool visit_type_QAuthZListPolicy(Visitor *v, const char *name,
                 QAuthZListPolicy *obj, Error **errp);

bool visit_type_QAuthZListFormat(Visitor *v, const char *name,
                 QAuthZListFormat *obj, Error **errp);

bool visit_type_QAuthZListRule_members(Visitor *v, QAuthZListRule *obj, Error **errp);

bool visit_type_QAuthZListRule(Visitor *v, const char *name,
                 QAuthZListRule **obj, Error **errp);

bool visit_type_QAuthZListRuleList(Visitor *v, const char *name,
                 QAuthZListRuleList **obj, Error **errp);

bool visit_type_AuthZListProperties_members(Visitor *v, AuthZListProperties *obj, Error **errp);

bool visit_type_AuthZListProperties(Visitor *v, const char *name,
                 AuthZListProperties **obj, Error **errp);

bool visit_type_AuthZListFileProperties_members(Visitor *v, AuthZListFileProperties *obj, Error **errp);

bool visit_type_AuthZListFileProperties(Visitor *v, const char *name,
                 AuthZListFileProperties **obj, Error **errp);

bool visit_type_AuthZPAMProperties_members(Visitor *v, AuthZPAMProperties *obj, Error **errp);

bool visit_type_AuthZPAMProperties(Visitor *v, const char *name,
                 AuthZPAMProperties **obj, Error **errp);

bool visit_type_AuthZSimpleProperties_members(Visitor *v, AuthZSimpleProperties *obj, Error **errp);

bool visit_type_AuthZSimpleProperties(Visitor *v, const char *name,
                 AuthZSimpleProperties **obj, Error **errp);

#endif /* QAPI_VISIT_AUTHZ_H */
