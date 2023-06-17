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
#include "qapi-events-net.h"
#include "qapi-visit-net.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


void qapi_event_dispatch_NIC_RX_FILTER_CHANGED(qapi_nic_rx_filter_changed_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_NIC_RX_FILTER_CHANGED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->has_name, arg->name, arg->path, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_FAILOVER_NEGOTIATED(qapi_failover_negotiated_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_FAILOVER_NEGOTIATED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_FAILOVER_NEGOTIATED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->device_id, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_FAILOVER_NEGOTIATED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_NETDEV_STREAM_CONNECTED(qapi_netdev_stream_connected_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_NETDEV_STREAM_CONNECTED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_NETDEV_STREAM_CONNECTED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->netdev_id, arg->addr, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_NETDEV_STREAM_CONNECTED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

void qapi_event_dispatch_NETDEV_STREAM_DISCONNECTED(qapi_netdev_stream_disconnected_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_NETDEV_STREAM_DISCONNECTED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_NETDEV_STREAM_DISCONNECTED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->netdev_id, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_NETDEV_STREAM_DISCONNECTED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_net_c;
