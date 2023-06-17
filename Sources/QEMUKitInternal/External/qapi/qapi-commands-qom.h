/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_QOM_H
#define QAPI_COMMANDS_QOM_H

#include "qapi-commands-authz.h"
#include "qapi-commands-block-core.h"
#include "qapi-commands-common.h"
#include "qapi-commands-crypto.h"
#include "qapi-types-qom.h"

ObjectPropertyInfoList *qmp_qom_list(const char *path, Error **errp, void *ctx);
CFTypeRef qmp_qom_get(const char *path, const char *property, Error **errp, void *ctx);
void qmp_qom_set(const char *path, const char *property, CFTypeRef value, Error **errp, void *ctx);
ObjectTypeInfoList *qmp_qom_list_types(bool has_implements, const char *implements, bool has_abstract, bool abstract, Error **errp, void *ctx);
ObjectPropertyInfoList *qmp_qom_list_properties(const char *q_typename, Error **errp, void *ctx);
void qmp_object_add(ObjectOptions *arg, Error **errp, void *ctx);
void qmp_object_del(const char *id, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_QOM_H */
