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

#include "qemu-compat.h"
#include "qapi-emit-events.h"
#include "qapi-events-run-state.h"
#include "qapi-visit-run-state.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_SHUTDOWN(qapi_shutdown_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_SHUTDOWN_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_SHUTDOWN_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->guest, arg->reason, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_SHUTDOWN_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_POWERDOWN(qapi_powerdown_handler handler, CFDictionaryRef data, void *ctx)
{
    handler(ctx);

}

void qapi_event_dispatch_RESET(qapi_reset_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_RESET_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_RESET_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->guest, arg->reason, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_RESET_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_STOP(qapi_stop_handler handler, CFDictionaryRef data, void *ctx)
{
    handler(ctx);

}

void qapi_event_dispatch_RESUME(qapi_resume_handler handler, CFDictionaryRef data, void *ctx)
{
    handler(ctx);

}

void qapi_event_dispatch_SUSPEND(qapi_suspend_handler handler, CFDictionaryRef data, void *ctx)
{
    handler(ctx);

}

void qapi_event_dispatch_SUSPEND_DISK(qapi_suspend_disk_handler handler, CFDictionaryRef data, void *ctx)
{
    handler(ctx);

}

void qapi_event_dispatch_WAKEUP(qapi_wakeup_handler handler, CFDictionaryRef data, void *ctx)
{
    handler(ctx);

}

void qapi_event_dispatch_WATCHDOG(qapi_watchdog_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_WATCHDOG_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_WATCHDOG_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->action, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_WATCHDOG_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_GUEST_PANICKED(qapi_guest_panicked_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_GUEST_PANICKED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_GUEST_PANICKED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->action, arg->has_info, arg->info, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_GUEST_PANICKED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_GUEST_CRASHLOADED(qapi_guest_crashloaded_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_GUEST_CRASHLOADED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_GUEST_CRASHLOADED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->action, arg->has_info, arg->info, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_GUEST_CRASHLOADED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_MEMORY_FAILURE(qapi_memory_failure_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_MEMORY_FAILURE_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_MEMORY_FAILURE_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->recipient, arg->action, arg->flags, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MEMORY_FAILURE_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_run_state_c;
