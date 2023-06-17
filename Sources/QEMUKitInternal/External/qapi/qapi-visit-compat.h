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

#ifndef QAPI_VISIT_COMPAT_H
#define QAPI_VISIT_COMPAT_H

#include "qapi-builtin-visit.h"
#include "qapi-types-compat.h"


bool visit_type_CompatPolicyInput(Visitor *v, const char *name,
                 CompatPolicyInput *obj, Error **errp);

bool visit_type_CompatPolicyOutput(Visitor *v, const char *name,
                 CompatPolicyOutput *obj, Error **errp);

bool visit_type_CompatPolicy_members(Visitor *v, CompatPolicy *obj, Error **errp);

bool visit_type_CompatPolicy(Visitor *v, const char *name,
                 CompatPolicy **obj, Error **errp);

#endif /* QAPI_VISIT_COMPAT_H */
