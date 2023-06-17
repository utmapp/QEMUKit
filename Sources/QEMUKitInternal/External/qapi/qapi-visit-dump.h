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

#ifndef QAPI_VISIT_DUMP_H
#define QAPI_VISIT_DUMP_H

#include "qapi-builtin-visit.h"
#include "qapi-types-dump.h"


bool visit_type_DumpGuestMemoryFormat(Visitor *v, const char *name,
                 DumpGuestMemoryFormat *obj, Error **errp);

bool visit_type_q_obj_dump_guest_memory_arg_members(Visitor *v, q_obj_dump_guest_memory_arg *obj, Error **errp);

bool visit_type_q_obj_dump_guest_memory_arg(Visitor *v, const char *name,
                 q_obj_dump_guest_memory_arg **obj, Error **errp);

bool visit_type_DumpStatus(Visitor *v, const char *name,
                 DumpStatus *obj, Error **errp);

bool visit_type_DumpQueryResult_members(Visitor *v, DumpQueryResult *obj, Error **errp);

bool visit_type_DumpQueryResult(Visitor *v, const char *name,
                 DumpQueryResult **obj, Error **errp);

bool visit_type_q_obj_DUMP_COMPLETED_arg_members(Visitor *v, q_obj_DUMP_COMPLETED_arg *obj, Error **errp);

bool visit_type_q_obj_DUMP_COMPLETED_arg(Visitor *v, const char *name,
                 q_obj_DUMP_COMPLETED_arg **obj, Error **errp);

bool visit_type_DumpGuestMemoryFormatList(Visitor *v, const char *name,
                 DumpGuestMemoryFormatList **obj, Error **errp);

bool visit_type_DumpGuestMemoryCapability_members(Visitor *v, DumpGuestMemoryCapability *obj, Error **errp);

bool visit_type_DumpGuestMemoryCapability(Visitor *v, const char *name,
                 DumpGuestMemoryCapability **obj, Error **errp);

#endif /* QAPI_VISIT_DUMP_H */
