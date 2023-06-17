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

#include "qemu-compat.h"
#include "error.h"
#include "qerror.h"
#include "qapi-visit-run-state.h"

bool visit_type_RunState(Visitor *v, const char *name,
                 RunState *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &RunState_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_ShutdownCause(Visitor *v, const char *name,
                 ShutdownCause *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ShutdownCause_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_StatusInfo_members(Visitor *v, StatusInfo *obj, Error **errp)
{
    if (!visit_type_bool(v, "running", &obj->running, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "singlestep", &obj->singlestep, errp)) {
        return false;
    }
    if (!visit_type_RunState(v, "status", &obj->status, errp)) {
        return false;
    }
    return true;
}

bool visit_type_StatusInfo(Visitor *v, const char *name,
                 StatusInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(StatusInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_StatusInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StatusInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_SHUTDOWN_arg_members(Visitor *v, q_obj_SHUTDOWN_arg *obj, Error **errp)
{
    if (!visit_type_bool(v, "guest", &obj->guest, errp)) {
        return false;
    }
    if (!visit_type_ShutdownCause(v, "reason", &obj->reason, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_SHUTDOWN_arg(Visitor *v, const char *name,
                 q_obj_SHUTDOWN_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SHUTDOWN_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SHUTDOWN_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SHUTDOWN_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_RESET_arg_members(Visitor *v, q_obj_RESET_arg *obj, Error **errp)
{
    if (!visit_type_bool(v, "guest", &obj->guest, errp)) {
        return false;
    }
    if (!visit_type_ShutdownCause(v, "reason", &obj->reason, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_RESET_arg(Visitor *v, const char *name,
                 q_obj_RESET_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_RESET_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_RESET_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_RESET_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_WATCHDOG_arg_members(Visitor *v, q_obj_WATCHDOG_arg *obj, Error **errp)
{
    if (!visit_type_WatchdogAction(v, "action", &obj->action, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_WATCHDOG_arg(Visitor *v, const char *name,
                 q_obj_WATCHDOG_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_WATCHDOG_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_WATCHDOG_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_WATCHDOG_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_WatchdogAction(Visitor *v, const char *name,
                 WatchdogAction *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &WatchdogAction_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_RebootAction(Visitor *v, const char *name,
                 RebootAction *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &RebootAction_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_ShutdownAction(Visitor *v, const char *name,
                 ShutdownAction *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ShutdownAction_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_PanicAction(Visitor *v, const char *name,
                 PanicAction *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &PanicAction_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_watchdog_set_action_arg_members(Visitor *v, q_obj_watchdog_set_action_arg *obj, Error **errp)
{
    if (!visit_type_WatchdogAction(v, "action", &obj->action, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_watchdog_set_action_arg(Visitor *v, const char *name,
                 q_obj_watchdog_set_action_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_watchdog_set_action_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_watchdog_set_action_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_watchdog_set_action_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_set_action_arg_members(Visitor *v, q_obj_set_action_arg *obj, Error **errp)
{
    if (visit_optional(v, "reboot", &obj->has_reboot)) {
        if (!visit_type_RebootAction(v, "reboot", &obj->reboot, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "shutdown", &obj->has_shutdown)) {
        if (!visit_type_ShutdownAction(v, "shutdown", &obj->shutdown, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "panic", &obj->has_panic)) {
        if (!visit_type_PanicAction(v, "panic", &obj->panic, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "watchdog", &obj->has_watchdog)) {
        if (!visit_type_WatchdogAction(v, "watchdog", &obj->watchdog, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_set_action_arg(Visitor *v, const char *name,
                 q_obj_set_action_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_set_action_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_set_action_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_set_action_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_GUEST_PANICKED_arg_members(Visitor *v, q_obj_GUEST_PANICKED_arg *obj, Error **errp)
{
    if (!visit_type_GuestPanicAction(v, "action", &obj->action, errp)) {
        return false;
    }
    if (visit_optional(v, "info", &obj->has_info)) {
        if (!visit_type_GuestPanicInformation(v, "info", &obj->info, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_GUEST_PANICKED_arg(Visitor *v, const char *name,
                 q_obj_GUEST_PANICKED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_GUEST_PANICKED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_GUEST_PANICKED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_GUEST_PANICKED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_GUEST_CRASHLOADED_arg_members(Visitor *v, q_obj_GUEST_CRASHLOADED_arg *obj, Error **errp)
{
    if (!visit_type_GuestPanicAction(v, "action", &obj->action, errp)) {
        return false;
    }
    if (visit_optional(v, "info", &obj->has_info)) {
        if (!visit_type_GuestPanicInformation(v, "info", &obj->info, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_GUEST_CRASHLOADED_arg(Visitor *v, const char *name,
                 q_obj_GUEST_CRASHLOADED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_GUEST_CRASHLOADED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_GUEST_CRASHLOADED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_GUEST_CRASHLOADED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestPanicAction(Visitor *v, const char *name,
                 GuestPanicAction *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &GuestPanicAction_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_GuestPanicInformationType(Visitor *v, const char *name,
                 GuestPanicInformationType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &GuestPanicInformationType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_GuestPanicInformation_base_members(Visitor *v, q_obj_GuestPanicInformation_base *obj, Error **errp)
{
    if (!visit_type_GuestPanicInformationType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_GuestPanicInformation_base(Visitor *v, const char *name,
                 q_obj_GuestPanicInformation_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_GuestPanicInformation_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_GuestPanicInformation_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_GuestPanicInformation_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestPanicInformation_members(Visitor *v, GuestPanicInformation *obj, Error **errp)
{
    if (!visit_type_q_obj_GuestPanicInformation_base_members(v, (q_obj_GuestPanicInformation_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case GUEST_PANIC_INFORMATION_TYPE_HYPER_V:
        return visit_type_GuestPanicInformationHyperV_members(v, &obj->u.hyper_v, errp);
    case GUEST_PANIC_INFORMATION_TYPE_S390:
        return visit_type_GuestPanicInformationS390_members(v, &obj->u.s390, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_GuestPanicInformation(Visitor *v, const char *name,
                 GuestPanicInformation **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestPanicInformation), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestPanicInformation_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestPanicInformation(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuestPanicInformationHyperV_members(Visitor *v, GuestPanicInformationHyperV *obj, Error **errp)
{
    if (!visit_type_uint64(v, "arg1", &obj->arg1, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "arg2", &obj->arg2, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "arg3", &obj->arg3, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "arg4", &obj->arg4, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "arg5", &obj->arg5, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestPanicInformationHyperV(Visitor *v, const char *name,
                 GuestPanicInformationHyperV **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestPanicInformationHyperV), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestPanicInformationHyperV_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestPanicInformationHyperV(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_S390CrashReason(Visitor *v, const char *name,
                 S390CrashReason *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &S390CrashReason_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_GuestPanicInformationS390_members(Visitor *v, GuestPanicInformationS390 *obj, Error **errp)
{
    if (!visit_type_uint32(v, "core", &obj->core, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "psw-mask", &obj->psw_mask, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "psw-addr", &obj->psw_addr, errp)) {
        return false;
    }
    if (!visit_type_S390CrashReason(v, "reason", &obj->reason, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuestPanicInformationS390(Visitor *v, const char *name,
                 GuestPanicInformationS390 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuestPanicInformationS390), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuestPanicInformationS390_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuestPanicInformationS390(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_MEMORY_FAILURE_arg_members(Visitor *v, q_obj_MEMORY_FAILURE_arg *obj, Error **errp)
{
    if (!visit_type_MemoryFailureRecipient(v, "recipient", &obj->recipient, errp)) {
        return false;
    }
    if (!visit_type_MemoryFailureAction(v, "action", &obj->action, errp)) {
        return false;
    }
    if (!visit_type_MemoryFailureFlags(v, "flags", &obj->flags, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_MEMORY_FAILURE_arg(Visitor *v, const char *name,
                 q_obj_MEMORY_FAILURE_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_MEMORY_FAILURE_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_MEMORY_FAILURE_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_MEMORY_FAILURE_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryFailureRecipient(Visitor *v, const char *name,
                 MemoryFailureRecipient *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MemoryFailureRecipient_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_MemoryFailureAction(Visitor *v, const char *name,
                 MemoryFailureAction *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MemoryFailureAction_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_MemoryFailureFlags_members(Visitor *v, MemoryFailureFlags *obj, Error **errp)
{
    if (!visit_type_bool(v, "action-required", &obj->action_required, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "recursive", &obj->recursive, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MemoryFailureFlags(Visitor *v, const char *name,
                 MemoryFailureFlags **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MemoryFailureFlags), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MemoryFailureFlags_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemoryFailureFlags(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NotifyVmexitOption(Visitor *v, const char *name,
                 NotifyVmexitOption *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NotifyVmexitOption_lookup, errp);
    *obj = value;
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_run_state_c;
