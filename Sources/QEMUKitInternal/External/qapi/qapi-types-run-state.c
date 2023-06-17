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

#include "qemu-compat.h"
#include "dealloc-visitor.h"
#include "qapi-types-run-state.h"
#include "qapi-visit-run-state.h"

const QEnumLookup RunState_lookup = {
    .array = (const char *const[]) {
        [RUN_STATE_DEBUG] = "debug",
        [RUN_STATE_INMIGRATE] = "inmigrate",
        [RUN_STATE_INTERNAL_ERROR] = "internal-error",
        [RUN_STATE_IO_ERROR] = "io-error",
        [RUN_STATE_PAUSED] = "paused",
        [RUN_STATE_POSTMIGRATE] = "postmigrate",
        [RUN_STATE_PRELAUNCH] = "prelaunch",
        [RUN_STATE_FINISH_MIGRATE] = "finish-migrate",
        [RUN_STATE_RESTORE_VM] = "restore-vm",
        [RUN_STATE_RUNNING] = "running",
        [RUN_STATE_SAVE_VM] = "save-vm",
        [RUN_STATE_SHUTDOWN] = "shutdown",
        [RUN_STATE_SUSPENDED] = "suspended",
        [RUN_STATE_WATCHDOG] = "watchdog",
        [RUN_STATE_GUEST_PANICKED] = "guest-panicked",
        [RUN_STATE_COLO] = "colo",
    },
    .size = RUN_STATE__MAX
};

const QEnumLookup ShutdownCause_lookup = {
    .array = (const char *const[]) {
        [SHUTDOWN_CAUSE_NONE] = "none",
        [SHUTDOWN_CAUSE_HOST_ERROR] = "host-error",
        [SHUTDOWN_CAUSE_HOST_QMP_QUIT] = "host-qmp-quit",
        [SHUTDOWN_CAUSE_HOST_QMP_SYSTEM_RESET] = "host-qmp-system-reset",
        [SHUTDOWN_CAUSE_HOST_SIGNAL] = "host-signal",
        [SHUTDOWN_CAUSE_HOST_UI] = "host-ui",
        [SHUTDOWN_CAUSE_GUEST_SHUTDOWN] = "guest-shutdown",
        [SHUTDOWN_CAUSE_GUEST_RESET] = "guest-reset",
        [SHUTDOWN_CAUSE_GUEST_PANIC] = "guest-panic",
        [SHUTDOWN_CAUSE_SUBSYSTEM_RESET] = "subsystem-reset",
        [SHUTDOWN_CAUSE_SNAPSHOT_LOAD] = "snapshot-load",
    },
    .size = SHUTDOWN_CAUSE__MAX
};

void qapi_free_StatusInfo(StatusInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StatusInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_SHUTDOWN_arg(q_obj_SHUTDOWN_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_SHUTDOWN_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_RESET_arg(q_obj_RESET_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_RESET_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_WATCHDOG_arg(q_obj_WATCHDOG_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_WATCHDOG_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup WatchdogAction_lookup = {
    .array = (const char *const[]) {
        [WATCHDOG_ACTION_RESET] = "reset",
        [WATCHDOG_ACTION_SHUTDOWN] = "shutdown",
        [WATCHDOG_ACTION_POWEROFF] = "poweroff",
        [WATCHDOG_ACTION_PAUSE] = "pause",
        [WATCHDOG_ACTION_DEBUG] = "debug",
        [WATCHDOG_ACTION_NONE] = "none",
        [WATCHDOG_ACTION_INJECT_NMI] = "inject-nmi",
    },
    .size = WATCHDOG_ACTION__MAX
};

const QEnumLookup RebootAction_lookup = {
    .array = (const char *const[]) {
        [REBOOT_ACTION_RESET] = "reset",
        [REBOOT_ACTION_SHUTDOWN] = "shutdown",
    },
    .size = REBOOT_ACTION__MAX
};

const QEnumLookup ShutdownAction_lookup = {
    .array = (const char *const[]) {
        [SHUTDOWN_ACTION_POWEROFF] = "poweroff",
        [SHUTDOWN_ACTION_PAUSE] = "pause",
    },
    .size = SHUTDOWN_ACTION__MAX
};

const QEnumLookup PanicAction_lookup = {
    .array = (const char *const[]) {
        [PANIC_ACTION_PAUSE] = "pause",
        [PANIC_ACTION_SHUTDOWN] = "shutdown",
        [PANIC_ACTION_EXIT_FAILURE] = "exit-failure",
        [PANIC_ACTION_NONE] = "none",
    },
    .size = PANIC_ACTION__MAX
};

void qapi_free_q_obj_watchdog_set_action_arg(q_obj_watchdog_set_action_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_watchdog_set_action_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_set_action_arg(q_obj_set_action_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_set_action_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_GUEST_PANICKED_arg(q_obj_GUEST_PANICKED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_GUEST_PANICKED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_GUEST_CRASHLOADED_arg(q_obj_GUEST_CRASHLOADED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_GUEST_CRASHLOADED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup GuestPanicAction_lookup = {
    .array = (const char *const[]) {
        [GUEST_PANIC_ACTION_PAUSE] = "pause",
        [GUEST_PANIC_ACTION_POWEROFF] = "poweroff",
        [GUEST_PANIC_ACTION_RUN] = "run",
    },
    .size = GUEST_PANIC_ACTION__MAX
};

const QEnumLookup GuestPanicInformationType_lookup = {
    .array = (const char *const[]) {
        [GUEST_PANIC_INFORMATION_TYPE_HYPER_V] = "hyper-v",
        [GUEST_PANIC_INFORMATION_TYPE_S390] = "s390",
    },
    .size = GUEST_PANIC_INFORMATION_TYPE__MAX
};

void qapi_free_q_obj_GuestPanicInformation_base(q_obj_GuestPanicInformation_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_GuestPanicInformation_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestPanicInformation(GuestPanicInformation *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestPanicInformation(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestPanicInformationHyperV(GuestPanicInformationHyperV *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestPanicInformationHyperV(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup S390CrashReason_lookup = {
    .array = (const char *const[]) {
        [S390_CRASH_REASON_UNKNOWN] = "unknown",
        [S390_CRASH_REASON_DISABLED_WAIT] = "disabled-wait",
        [S390_CRASH_REASON_EXTINT_LOOP] = "extint-loop",
        [S390_CRASH_REASON_PGMINT_LOOP] = "pgmint-loop",
        [S390_CRASH_REASON_OPINT_LOOP] = "opint-loop",
    },
    .size = S390_CRASH_REASON__MAX
};

void qapi_free_GuestPanicInformationS390(GuestPanicInformationS390 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestPanicInformationS390(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_MEMORY_FAILURE_arg(q_obj_MEMORY_FAILURE_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MEMORY_FAILURE_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup MemoryFailureRecipient_lookup = {
    .array = (const char *const[]) {
        [MEMORY_FAILURE_RECIPIENT_HYPERVISOR] = "hypervisor",
        [MEMORY_FAILURE_RECIPIENT_GUEST] = "guest",
    },
    .size = MEMORY_FAILURE_RECIPIENT__MAX
};

const QEnumLookup MemoryFailureAction_lookup = {
    .array = (const char *const[]) {
        [MEMORY_FAILURE_ACTION_IGNORE] = "ignore",
        [MEMORY_FAILURE_ACTION_INJECT] = "inject",
        [MEMORY_FAILURE_ACTION_FATAL] = "fatal",
        [MEMORY_FAILURE_ACTION_RESET] = "reset",
    },
    .size = MEMORY_FAILURE_ACTION__MAX
};

void qapi_free_MemoryFailureFlags(MemoryFailureFlags *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemoryFailureFlags(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup NotifyVmexitOption_lookup = {
    .array = (const char *const[]) {
        [NOTIFY_VMEXIT_OPTION_RUN] = "run",
        [NOTIFY_VMEXIT_OPTION_INTERNAL_ERROR] = "internal-error",
        [NOTIFY_VMEXIT_OPTION_DISABLE] = "disable",
    },
    .size = NOTIFY_VMEXIT_OPTION__MAX
};

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_run_state_c;
