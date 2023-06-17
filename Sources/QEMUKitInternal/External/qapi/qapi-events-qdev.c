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
#include "qapi-events-qdev.h"
#include "qapi-visit-qdev.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_DEVICE_DELETED(qapi_device_deleted_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_DEVICE_DELETED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_DEVICE_DELETED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->has_device, arg->device, arg->path, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_DEVICE_DELETED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_DEVICE_UNPLUG_GUEST_ERROR(qapi_device_unplug_guest_error_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->has_device, arg->device, arg->path, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_qdev_c;
