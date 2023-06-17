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

#ifndef QAPI_VISIT_COMMON_H
#define QAPI_VISIT_COMMON_H

#include "qapi-builtin-visit.h"
#include "qapi-types-common.h"


bool visit_type_IoOperationType(Visitor *v, const char *name,
                 IoOperationType *obj, Error **errp);

bool visit_type_OnOffAuto(Visitor *v, const char *name,
                 OnOffAuto *obj, Error **errp);

bool visit_type_OnOffSplit(Visitor *v, const char *name,
                 OnOffSplit *obj, Error **errp);

bool visit_type_String_members(Visitor *v, String *obj, Error **errp);

bool visit_type_String(Visitor *v, const char *name,
                 String **obj, Error **errp);

bool visit_type_StrOrNull(Visitor *v, const char *name,
                 StrOrNull **obj, Error **errp);

bool visit_type_OffAutoPCIBAR(Visitor *v, const char *name,
                 OffAutoPCIBAR *obj, Error **errp);

bool visit_type_PCIELinkSpeed(Visitor *v, const char *name,
                 PCIELinkSpeed *obj, Error **errp);

bool visit_type_PCIELinkWidth(Visitor *v, const char *name,
                 PCIELinkWidth *obj, Error **errp);

bool visit_type_HostMemPolicy(Visitor *v, const char *name,
                 HostMemPolicy *obj, Error **errp);

bool visit_type_NetFilterDirection(Visitor *v, const char *name,
                 NetFilterDirection *obj, Error **errp);

bool visit_type_GrabToggleKeys(Visitor *v, const char *name,
                 GrabToggleKeys *obj, Error **errp);

bool visit_type_HumanReadableText_members(Visitor *v, HumanReadableText *obj, Error **errp);

bool visit_type_HumanReadableText(Visitor *v, const char *name,
                 HumanReadableText **obj, Error **errp);

bool visit_type_StringList(Visitor *v, const char *name,
                 StringList **obj, Error **errp);

#endif /* QAPI_VISIT_COMMON_H */
