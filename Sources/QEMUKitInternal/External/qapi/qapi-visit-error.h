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

#ifndef QAPI_VISIT_ERROR_H
#define QAPI_VISIT_ERROR_H

#include "qapi-builtin-visit.h"
#include "qapi-types-error.h"


bool visit_type_QapiErrorClass(Visitor *v, const char *name,
                 QapiErrorClass *obj, Error **errp);

#endif /* QAPI_VISIT_ERROR_H */
