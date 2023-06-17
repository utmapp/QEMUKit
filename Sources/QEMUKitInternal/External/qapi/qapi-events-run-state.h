/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP events
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_EVENTS_RUN_STATE_H
#define QAPI_EVENTS_RUN_STATE_H

#include "util.h"
#include "qapi-types-run-state.h"

typedef void (*qapi_shutdown_handler)(bool guest, ShutdownCause reason, void *ctx);
void qapi_event_dispatch_SHUTDOWN(qapi_shutdown_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_powerdown_handler)(void *ctx);
void qapi_event_dispatch_POWERDOWN(qapi_powerdown_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_reset_handler)(bool guest, ShutdownCause reason, void *ctx);
void qapi_event_dispatch_RESET(qapi_reset_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_stop_handler)(void *ctx);
void qapi_event_dispatch_STOP(qapi_stop_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_resume_handler)(void *ctx);
void qapi_event_dispatch_RESUME(qapi_resume_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_suspend_handler)(void *ctx);
void qapi_event_dispatch_SUSPEND(qapi_suspend_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_suspend_disk_handler)(void *ctx);
void qapi_event_dispatch_SUSPEND_DISK(qapi_suspend_disk_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_wakeup_handler)(void *ctx);
void qapi_event_dispatch_WAKEUP(qapi_wakeup_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_watchdog_handler)(WatchdogAction action, void *ctx);
void qapi_event_dispatch_WATCHDOG(qapi_watchdog_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_guest_panicked_handler)(GuestPanicAction action, bool has_info, GuestPanicInformation *info, void *ctx);
void qapi_event_dispatch_GUEST_PANICKED(qapi_guest_panicked_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_guest_crashloaded_handler)(GuestPanicAction action, bool has_info, GuestPanicInformation *info, void *ctx);
void qapi_event_dispatch_GUEST_CRASHLOADED(qapi_guest_crashloaded_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_memory_failure_handler)(MemoryFailureRecipient recipient, MemoryFailureAction action, MemoryFailureFlags *flags, void *ctx);
void qapi_event_dispatch_MEMORY_FAILURE(qapi_memory_failure_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_RUN_STATE_H */
