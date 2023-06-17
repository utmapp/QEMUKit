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

#ifndef QAPI_VISIT_RUN_STATE_H
#define QAPI_VISIT_RUN_STATE_H

#include "qapi-builtin-visit.h"
#include "qapi-types-run-state.h"


bool visit_type_RunState(Visitor *v, const char *name,
                 RunState *obj, Error **errp);

bool visit_type_ShutdownCause(Visitor *v, const char *name,
                 ShutdownCause *obj, Error **errp);

bool visit_type_StatusInfo_members(Visitor *v, StatusInfo *obj, Error **errp);

bool visit_type_StatusInfo(Visitor *v, const char *name,
                 StatusInfo **obj, Error **errp);

bool visit_type_q_obj_SHUTDOWN_arg_members(Visitor *v, q_obj_SHUTDOWN_arg *obj, Error **errp);

bool visit_type_q_obj_SHUTDOWN_arg(Visitor *v, const char *name,
                 q_obj_SHUTDOWN_arg **obj, Error **errp);

bool visit_type_q_obj_RESET_arg_members(Visitor *v, q_obj_RESET_arg *obj, Error **errp);

bool visit_type_q_obj_RESET_arg(Visitor *v, const char *name,
                 q_obj_RESET_arg **obj, Error **errp);

bool visit_type_q_obj_WATCHDOG_arg_members(Visitor *v, q_obj_WATCHDOG_arg *obj, Error **errp);

bool visit_type_q_obj_WATCHDOG_arg(Visitor *v, const char *name,
                 q_obj_WATCHDOG_arg **obj, Error **errp);

bool visit_type_WatchdogAction(Visitor *v, const char *name,
                 WatchdogAction *obj, Error **errp);

bool visit_type_RebootAction(Visitor *v, const char *name,
                 RebootAction *obj, Error **errp);

bool visit_type_ShutdownAction(Visitor *v, const char *name,
                 ShutdownAction *obj, Error **errp);

bool visit_type_PanicAction(Visitor *v, const char *name,
                 PanicAction *obj, Error **errp);

bool visit_type_q_obj_watchdog_set_action_arg_members(Visitor *v, q_obj_watchdog_set_action_arg *obj, Error **errp);

bool visit_type_q_obj_watchdog_set_action_arg(Visitor *v, const char *name,
                 q_obj_watchdog_set_action_arg **obj, Error **errp);

bool visit_type_q_obj_set_action_arg_members(Visitor *v, q_obj_set_action_arg *obj, Error **errp);

bool visit_type_q_obj_set_action_arg(Visitor *v, const char *name,
                 q_obj_set_action_arg **obj, Error **errp);

bool visit_type_q_obj_GUEST_PANICKED_arg_members(Visitor *v, q_obj_GUEST_PANICKED_arg *obj, Error **errp);

bool visit_type_q_obj_GUEST_PANICKED_arg(Visitor *v, const char *name,
                 q_obj_GUEST_PANICKED_arg **obj, Error **errp);

bool visit_type_q_obj_GUEST_CRASHLOADED_arg_members(Visitor *v, q_obj_GUEST_CRASHLOADED_arg *obj, Error **errp);

bool visit_type_q_obj_GUEST_CRASHLOADED_arg(Visitor *v, const char *name,
                 q_obj_GUEST_CRASHLOADED_arg **obj, Error **errp);

bool visit_type_GuestPanicAction(Visitor *v, const char *name,
                 GuestPanicAction *obj, Error **errp);

bool visit_type_GuestPanicInformationType(Visitor *v, const char *name,
                 GuestPanicInformationType *obj, Error **errp);

bool visit_type_q_obj_GuestPanicInformation_base_members(Visitor *v, q_obj_GuestPanicInformation_base *obj, Error **errp);

bool visit_type_q_obj_GuestPanicInformation_base(Visitor *v, const char *name,
                 q_obj_GuestPanicInformation_base **obj, Error **errp);

bool visit_type_GuestPanicInformation_members(Visitor *v, GuestPanicInformation *obj, Error **errp);

bool visit_type_GuestPanicInformation(Visitor *v, const char *name,
                 GuestPanicInformation **obj, Error **errp);

bool visit_type_GuestPanicInformationHyperV_members(Visitor *v, GuestPanicInformationHyperV *obj, Error **errp);

bool visit_type_GuestPanicInformationHyperV(Visitor *v, const char *name,
                 GuestPanicInformationHyperV **obj, Error **errp);

bool visit_type_S390CrashReason(Visitor *v, const char *name,
                 S390CrashReason *obj, Error **errp);

bool visit_type_GuestPanicInformationS390_members(Visitor *v, GuestPanicInformationS390 *obj, Error **errp);

bool visit_type_GuestPanicInformationS390(Visitor *v, const char *name,
                 GuestPanicInformationS390 **obj, Error **errp);

bool visit_type_q_obj_MEMORY_FAILURE_arg_members(Visitor *v, q_obj_MEMORY_FAILURE_arg *obj, Error **errp);

bool visit_type_q_obj_MEMORY_FAILURE_arg(Visitor *v, const char *name,
                 q_obj_MEMORY_FAILURE_arg **obj, Error **errp);

bool visit_type_MemoryFailureRecipient(Visitor *v, const char *name,
                 MemoryFailureRecipient *obj, Error **errp);

bool visit_type_MemoryFailureAction(Visitor *v, const char *name,
                 MemoryFailureAction *obj, Error **errp);

bool visit_type_MemoryFailureFlags_members(Visitor *v, MemoryFailureFlags *obj, Error **errp);

bool visit_type_MemoryFailureFlags(Visitor *v, const char *name,
                 MemoryFailureFlags **obj, Error **errp);

bool visit_type_NotifyVmexitOption(Visitor *v, const char *name,
                 NotifyVmexitOption *obj, Error **errp);

#endif /* QAPI_VISIT_RUN_STATE_H */
