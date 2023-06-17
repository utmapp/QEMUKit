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
#include "qapi-events-acpi.h"
#include "qapi-visit-acpi.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_ACPI_DEVICE_OST(qapi_acpi_device_ost_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_ACPI_DEVICE_OST_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_ACPI_DEVICE_OST_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->info, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_ACPI_DEVICE_OST_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_acpi_c;
