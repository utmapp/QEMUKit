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
#include "qapi-events-block-core.h"
#include "qapi-visit-block-core.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_BLOCK_IMAGE_CORRUPTED(qapi_block_image_corrupted_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_IMAGE_CORRUPTED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_IMAGE_CORRUPTED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->device, arg->has_node_name, arg->node_name, arg->msg, arg->has_offset, arg->offset, arg->has_size, arg->size, arg->fatal, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_IMAGE_CORRUPTED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_BLOCK_IO_ERROR(qapi_block_io_error_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_IO_ERROR_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_IO_ERROR_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->device, arg->has_node_name, arg->node_name, arg->operation, arg->action, arg->has_nospace, arg->nospace, arg->reason, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_IO_ERROR_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_BLOCK_JOB_COMPLETED(qapi_block_job_completed_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_JOB_COMPLETED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_COMPLETED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->type, arg->device, arg->len, arg->offset, arg->speed, arg->has_error, arg->error, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_COMPLETED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_BLOCK_JOB_CANCELLED(qapi_block_job_cancelled_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_JOB_CANCELLED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_CANCELLED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->type, arg->device, arg->len, arg->offset, arg->speed, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_CANCELLED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_BLOCK_JOB_ERROR(qapi_block_job_error_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_JOB_ERROR_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_ERROR_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->device, arg->operation, arg->action, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_ERROR_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_BLOCK_JOB_READY(qapi_block_job_ready_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_JOB_READY_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_READY_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->type, arg->device, arg->len, arg->offset, arg->speed, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_READY_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_BLOCK_JOB_PENDING(qapi_block_job_pending_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_JOB_PENDING_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_PENDING_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->type, arg->id, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_PENDING_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_BLOCK_WRITE_THRESHOLD(qapi_block_write_threshold_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_BLOCK_WRITE_THRESHOLD_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_WRITE_THRESHOLD_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->node_name, arg->amount_exceeded, arg->write_threshold, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_WRITE_THRESHOLD_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_QUORUM_FAILURE(qapi_quorum_failure_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_QUORUM_FAILURE_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_QUORUM_FAILURE_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->reference, arg->sector_num, arg->sectors_count, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_QUORUM_FAILURE_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_QUORUM_REPORT_BAD(qapi_quorum_report_bad_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_QUORUM_REPORT_BAD_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_QUORUM_REPORT_BAD_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->type, arg->has_error, arg->error, arg->node_name, arg->sector_num, arg->sectors_count, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_QUORUM_REPORT_BAD_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_block_core_c;
