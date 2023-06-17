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
#include "qapi-events-migration.h"
#include "qapi-visit-migration.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_MIGRATION(qapi_migration_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_MIGRATION_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_MIGRATION_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->status, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MIGRATION_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_MIGRATION_PASS(qapi_migration_pass_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_MIGRATION_PASS_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_MIGRATION_PASS_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->pass, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MIGRATION_PASS_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_COLO_EXIT(qapi_colo_exit_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_COLO_EXIT_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_COLO_EXIT_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->mode, arg->reason, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_COLO_EXIT_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_UNPLUG_PRIMARY(qapi_unplug_primary_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_UNPLUG_PRIMARY_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_UNPLUG_PRIMARY_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->device_id, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_UNPLUG_PRIMARY_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_migration_c;
