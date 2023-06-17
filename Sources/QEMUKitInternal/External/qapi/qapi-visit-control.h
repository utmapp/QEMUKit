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

#ifndef QAPI_VISIT_CONTROL_H
#define QAPI_VISIT_CONTROL_H

#include "qapi-builtin-visit.h"
#include "qapi-types-control.h"


bool visit_type_QMPCapabilityList(Visitor *v, const char *name,
                 QMPCapabilityList **obj, Error **errp);

bool visit_type_q_obj_qmp_capabilities_arg_members(Visitor *v, q_obj_qmp_capabilities_arg *obj, Error **errp);

bool visit_type_q_obj_qmp_capabilities_arg(Visitor *v, const char *name,
                 q_obj_qmp_capabilities_arg **obj, Error **errp);

bool visit_type_QMPCapability(Visitor *v, const char *name,
                 QMPCapability *obj, Error **errp);

bool visit_type_VersionTriple_members(Visitor *v, VersionTriple *obj, Error **errp);

bool visit_type_VersionTriple(Visitor *v, const char *name,
                 VersionTriple **obj, Error **errp);

bool visit_type_VersionInfo_members(Visitor *v, VersionInfo *obj, Error **errp);

bool visit_type_VersionInfo(Visitor *v, const char *name,
                 VersionInfo **obj, Error **errp);

bool visit_type_CommandInfo_members(Visitor *v, CommandInfo *obj, Error **errp);

bool visit_type_CommandInfo(Visitor *v, const char *name,
                 CommandInfo **obj, Error **errp);

bool visit_type_CommandInfoList(Visitor *v, const char *name,
                 CommandInfoList **obj, Error **errp);

bool visit_type_MonitorMode(Visitor *v, const char *name,
                 MonitorMode *obj, Error **errp);

bool visit_type_MonitorOptions_members(Visitor *v, MonitorOptions *obj, Error **errp);

bool visit_type_MonitorOptions(Visitor *v, const char *name,
                 MonitorOptions **obj, Error **errp);

#endif /* QAPI_VISIT_CONTROL_H */
