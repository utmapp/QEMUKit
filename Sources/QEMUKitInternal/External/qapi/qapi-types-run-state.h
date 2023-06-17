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

#ifndef QAPI_TYPES_RUN_STATE_H
#define QAPI_TYPES_RUN_STATE_H

#include "qapi-builtin-types.h"

typedef enum RunState {
    RUN_STATE_DEBUG,
    RUN_STATE_INMIGRATE,
    RUN_STATE_INTERNAL_ERROR,
    RUN_STATE_IO_ERROR,
    RUN_STATE_PAUSED,
    RUN_STATE_POSTMIGRATE,
    RUN_STATE_PRELAUNCH,
    RUN_STATE_FINISH_MIGRATE,
    RUN_STATE_RESTORE_VM,
    RUN_STATE_RUNNING,
    RUN_STATE_SAVE_VM,
    RUN_STATE_SHUTDOWN,
    RUN_STATE_SUSPENDED,
    RUN_STATE_WATCHDOG,
    RUN_STATE_GUEST_PANICKED,
    RUN_STATE_COLO,
    RUN_STATE__MAX,
} RunState;

#define RunState_str(val) \
    qapi_enum_lookup(&RunState_lookup, (val))

extern const QEnumLookup RunState_lookup;

typedef enum ShutdownCause {
    SHUTDOWN_CAUSE_NONE,
    SHUTDOWN_CAUSE_HOST_ERROR,
    SHUTDOWN_CAUSE_HOST_QMP_QUIT,
    SHUTDOWN_CAUSE_HOST_QMP_SYSTEM_RESET,
    SHUTDOWN_CAUSE_HOST_SIGNAL,
    SHUTDOWN_CAUSE_HOST_UI,
    SHUTDOWN_CAUSE_GUEST_SHUTDOWN,
    SHUTDOWN_CAUSE_GUEST_RESET,
    SHUTDOWN_CAUSE_GUEST_PANIC,
    SHUTDOWN_CAUSE_SUBSYSTEM_RESET,
    SHUTDOWN_CAUSE_SNAPSHOT_LOAD,
    SHUTDOWN_CAUSE__MAX,
} ShutdownCause;

#define ShutdownCause_str(val) \
    qapi_enum_lookup(&ShutdownCause_lookup, (val))

extern const QEnumLookup ShutdownCause_lookup;

typedef struct StatusInfo StatusInfo;

typedef struct q_obj_SHUTDOWN_arg q_obj_SHUTDOWN_arg;

typedef struct q_obj_RESET_arg q_obj_RESET_arg;

typedef struct q_obj_WATCHDOG_arg q_obj_WATCHDOG_arg;

typedef enum WatchdogAction {
    WATCHDOG_ACTION_RESET,
    WATCHDOG_ACTION_SHUTDOWN,
    WATCHDOG_ACTION_POWEROFF,
    WATCHDOG_ACTION_PAUSE,
    WATCHDOG_ACTION_DEBUG,
    WATCHDOG_ACTION_NONE,
    WATCHDOG_ACTION_INJECT_NMI,
    WATCHDOG_ACTION__MAX,
} WatchdogAction;

#define WatchdogAction_str(val) \
    qapi_enum_lookup(&WatchdogAction_lookup, (val))

extern const QEnumLookup WatchdogAction_lookup;

typedef enum RebootAction {
    REBOOT_ACTION_RESET,
    REBOOT_ACTION_SHUTDOWN,
    REBOOT_ACTION__MAX,
} RebootAction;

#define RebootAction_str(val) \
    qapi_enum_lookup(&RebootAction_lookup, (val))

extern const QEnumLookup RebootAction_lookup;

typedef enum ShutdownAction {
    SHUTDOWN_ACTION_POWEROFF,
    SHUTDOWN_ACTION_PAUSE,
    SHUTDOWN_ACTION__MAX,
} ShutdownAction;

#define ShutdownAction_str(val) \
    qapi_enum_lookup(&ShutdownAction_lookup, (val))

extern const QEnumLookup ShutdownAction_lookup;

typedef enum PanicAction {
    PANIC_ACTION_PAUSE,
    PANIC_ACTION_SHUTDOWN,
    PANIC_ACTION_EXIT_FAILURE,
    PANIC_ACTION_NONE,
    PANIC_ACTION__MAX,
} PanicAction;

#define PanicAction_str(val) \
    qapi_enum_lookup(&PanicAction_lookup, (val))

extern const QEnumLookup PanicAction_lookup;

typedef struct q_obj_watchdog_set_action_arg q_obj_watchdog_set_action_arg;

typedef struct q_obj_set_action_arg q_obj_set_action_arg;

typedef struct q_obj_GUEST_PANICKED_arg q_obj_GUEST_PANICKED_arg;

typedef struct q_obj_GUEST_CRASHLOADED_arg q_obj_GUEST_CRASHLOADED_arg;

typedef enum GuestPanicAction {
    GUEST_PANIC_ACTION_PAUSE,
    GUEST_PANIC_ACTION_POWEROFF,
    GUEST_PANIC_ACTION_RUN,
    GUEST_PANIC_ACTION__MAX,
} GuestPanicAction;

#define GuestPanicAction_str(val) \
    qapi_enum_lookup(&GuestPanicAction_lookup, (val))

extern const QEnumLookup GuestPanicAction_lookup;

typedef enum GuestPanicInformationType {
    GUEST_PANIC_INFORMATION_TYPE_HYPER_V,
    GUEST_PANIC_INFORMATION_TYPE_S390,
    GUEST_PANIC_INFORMATION_TYPE__MAX,
} GuestPanicInformationType;

#define GuestPanicInformationType_str(val) \
    qapi_enum_lookup(&GuestPanicInformationType_lookup, (val))

extern const QEnumLookup GuestPanicInformationType_lookup;

typedef struct q_obj_GuestPanicInformation_base q_obj_GuestPanicInformation_base;

typedef struct GuestPanicInformation GuestPanicInformation;

typedef struct GuestPanicInformationHyperV GuestPanicInformationHyperV;

typedef enum S390CrashReason {
    S390_CRASH_REASON_UNKNOWN,
    S390_CRASH_REASON_DISABLED_WAIT,
    S390_CRASH_REASON_EXTINT_LOOP,
    S390_CRASH_REASON_PGMINT_LOOP,
    S390_CRASH_REASON_OPINT_LOOP,
    S390_CRASH_REASON__MAX,
} S390CrashReason;

#define S390CrashReason_str(val) \
    qapi_enum_lookup(&S390CrashReason_lookup, (val))

extern const QEnumLookup S390CrashReason_lookup;

typedef struct GuestPanicInformationS390 GuestPanicInformationS390;

typedef struct q_obj_MEMORY_FAILURE_arg q_obj_MEMORY_FAILURE_arg;

typedef enum MemoryFailureRecipient {
    MEMORY_FAILURE_RECIPIENT_HYPERVISOR,
    MEMORY_FAILURE_RECIPIENT_GUEST,
    MEMORY_FAILURE_RECIPIENT__MAX,
} MemoryFailureRecipient;

#define MemoryFailureRecipient_str(val) \
    qapi_enum_lookup(&MemoryFailureRecipient_lookup, (val))

extern const QEnumLookup MemoryFailureRecipient_lookup;

typedef enum MemoryFailureAction {
    MEMORY_FAILURE_ACTION_IGNORE,
    MEMORY_FAILURE_ACTION_INJECT,
    MEMORY_FAILURE_ACTION_FATAL,
    MEMORY_FAILURE_ACTION_RESET,
    MEMORY_FAILURE_ACTION__MAX,
} MemoryFailureAction;

#define MemoryFailureAction_str(val) \
    qapi_enum_lookup(&MemoryFailureAction_lookup, (val))

extern const QEnumLookup MemoryFailureAction_lookup;

typedef struct MemoryFailureFlags MemoryFailureFlags;

typedef enum NotifyVmexitOption {
    NOTIFY_VMEXIT_OPTION_RUN,
    NOTIFY_VMEXIT_OPTION_INTERNAL_ERROR,
    NOTIFY_VMEXIT_OPTION_DISABLE,
    NOTIFY_VMEXIT_OPTION__MAX,
} NotifyVmexitOption;

#define NotifyVmexitOption_str(val) \
    qapi_enum_lookup(&NotifyVmexitOption_lookup, (val))

extern const QEnumLookup NotifyVmexitOption_lookup;

struct StatusInfo {
    bool running;
    bool singlestep;
    RunState status;
};

void qapi_free_StatusInfo(StatusInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StatusInfo, qapi_free_StatusInfo)

struct q_obj_SHUTDOWN_arg {
    bool guest;
    ShutdownCause reason;
};

void qapi_free_q_obj_SHUTDOWN_arg(q_obj_SHUTDOWN_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_SHUTDOWN_arg, qapi_free_q_obj_SHUTDOWN_arg)

struct q_obj_RESET_arg {
    bool guest;
    ShutdownCause reason;
};

void qapi_free_q_obj_RESET_arg(q_obj_RESET_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_RESET_arg, qapi_free_q_obj_RESET_arg)

struct q_obj_WATCHDOG_arg {
    WatchdogAction action;
};

void qapi_free_q_obj_WATCHDOG_arg(q_obj_WATCHDOG_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_WATCHDOG_arg, qapi_free_q_obj_WATCHDOG_arg)

struct q_obj_watchdog_set_action_arg {
    WatchdogAction action;
};

void qapi_free_q_obj_watchdog_set_action_arg(q_obj_watchdog_set_action_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_watchdog_set_action_arg, qapi_free_q_obj_watchdog_set_action_arg)

struct q_obj_set_action_arg {
    bool has_reboot;
    RebootAction reboot;
    bool has_shutdown;
    ShutdownAction shutdown;
    bool has_panic;
    PanicAction panic;
    bool has_watchdog;
    WatchdogAction watchdog;
};

void qapi_free_q_obj_set_action_arg(q_obj_set_action_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_set_action_arg, qapi_free_q_obj_set_action_arg)

struct q_obj_GUEST_PANICKED_arg {
    GuestPanicAction action;
    bool has_info;
    GuestPanicInformation *info;
};

void qapi_free_q_obj_GUEST_PANICKED_arg(q_obj_GUEST_PANICKED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_GUEST_PANICKED_arg, qapi_free_q_obj_GUEST_PANICKED_arg)

struct q_obj_GUEST_CRASHLOADED_arg {
    GuestPanicAction action;
    bool has_info;
    GuestPanicInformation *info;
};

void qapi_free_q_obj_GUEST_CRASHLOADED_arg(q_obj_GUEST_CRASHLOADED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_GUEST_CRASHLOADED_arg, qapi_free_q_obj_GUEST_CRASHLOADED_arg)

struct q_obj_GuestPanicInformation_base {
    GuestPanicInformationType type;
};

void qapi_free_q_obj_GuestPanicInformation_base(q_obj_GuestPanicInformation_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_GuestPanicInformation_base, qapi_free_q_obj_GuestPanicInformation_base)

struct GuestPanicInformationHyperV {
    uint64_t arg1;
    uint64_t arg2;
    uint64_t arg3;
    uint64_t arg4;
    uint64_t arg5;
};

struct GuestPanicInformationS390 {
    uint32_t core;
    uint64_t psw_mask;
    uint64_t psw_addr;
    S390CrashReason reason;
};

struct GuestPanicInformation {
    GuestPanicInformationType type;
    union { /* union tag is @type */
        GuestPanicInformationHyperV hyper_v;
        GuestPanicInformationS390 s390;
    } u;
};

void qapi_free_GuestPanicInformation(GuestPanicInformation *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestPanicInformation, qapi_free_GuestPanicInformation)

void qapi_free_GuestPanicInformationHyperV(GuestPanicInformationHyperV *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestPanicInformationHyperV, qapi_free_GuestPanicInformationHyperV)

void qapi_free_GuestPanicInformationS390(GuestPanicInformationS390 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestPanicInformationS390, qapi_free_GuestPanicInformationS390)

struct q_obj_MEMORY_FAILURE_arg {
    MemoryFailureRecipient recipient;
    MemoryFailureAction action;
    MemoryFailureFlags *flags;
};

void qapi_free_q_obj_MEMORY_FAILURE_arg(q_obj_MEMORY_FAILURE_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_MEMORY_FAILURE_arg, qapi_free_q_obj_MEMORY_FAILURE_arg)

struct MemoryFailureFlags {
    bool action_required;
    bool recursive;
};

void qapi_free_MemoryFailureFlags(MemoryFailureFlags *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemoryFailureFlags, qapi_free_MemoryFailureFlags)

#endif /* QAPI_TYPES_RUN_STATE_H */
