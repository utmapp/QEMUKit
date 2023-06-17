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
#include "qapi-events-misc.h"
#include "qapi-visit-misc.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_RTC_CHANGE(qapi_rtc_change_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_RTC_CHANGE_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_RTC_CHANGE_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->offset, arg->qom_path, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_RTC_CHANGE_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_VFU_CLIENT_HANGUP(qapi_vfu_client_hangup_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_VFU_CLIENT_HANGUP_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_VFU_CLIENT_HANGUP_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->vfu_id, arg->vfu_qom_path, arg->dev_id, arg->dev_qom_path, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_VFU_CLIENT_HANGUP_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_misc_c;
