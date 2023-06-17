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
#include "qapi-events-block-export.h"
#include "qapi-visit-block-export.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_BLOCK_EXPORT_DELETED(qapi_block_export_deleted_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_EXPORT_DELETED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_EXPORT_DELETED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->id, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_EXPORT_DELETED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_block_export_c;
