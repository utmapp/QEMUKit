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
#include "qapi-events-block.h"
#include "qapi-visit-block.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_DEVICE_TRAY_MOVED(qapi_device_tray_moved_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_DEVICE_TRAY_MOVED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_DEVICE_TRAY_MOVED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->device, arg->id, arg->tray_open, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_DEVICE_TRAY_MOVED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_PR_MANAGER_STATUS_CHANGED(qapi_pr_manager_status_changed_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_PR_MANAGER_STATUS_CHANGED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->id, arg->connected, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_block_c;
