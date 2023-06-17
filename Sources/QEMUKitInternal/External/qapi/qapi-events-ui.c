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
#include "qapi-events-ui.h"
#include "qapi-visit-ui.h"
#include "error.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"


#if defined(CONFIG_SPICE)
void qapi_event_dispatch_SPICE_CONNECTED(qapi_spice_connected_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_SPICE_CONNECTED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_SPICE_CONNECTED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->server, arg->client, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_SPICE_CONNECTED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_dispatch_SPICE_INITIALIZED(qapi_spice_initialized_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_SPICE_INITIALIZED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_SPICE_INITIALIZED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->server, arg->client, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_SPICE_INITIALIZED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_dispatch_SPICE_DISCONNECTED(qapi_spice_disconnected_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_SPICE_DISCONNECTED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_SPICE_DISCONNECTED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->server, arg->client, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_SPICE_DISCONNECTED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_dispatch_SPICE_MIGRATE_COMPLETED(qapi_spice_migrate_completed_handler handler, CFDictionaryRef data, void *ctx)
{
    handler(ctx);

}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
void qapi_event_dispatch_VNC_CONNECTED(qapi_vnc_connected_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_VNC_CONNECTED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_VNC_CONNECTED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->server, arg->client, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_VNC_CONNECTED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_event_dispatch_VNC_INITIALIZED(qapi_vnc_initialized_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_VNC_INITIALIZED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_VNC_INITIALIZED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->server, arg->client, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_VNC_INITIALIZED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_event_dispatch_VNC_DISCONNECTED(qapi_vnc_disconnected_handler handler, CFDictionaryRef data, void *ctx)
{
    q_obj_VNC_DISCONNECTED_arg *arg;
    Visitor *v;
    v = cf_input_visitor_new(data);
    visit_start_struct(v, "event", NULL, 0, &error_abort);
    visit_type_q_obj_VNC_DISCONNECTED_arg(v, "data", &arg, &error_abort);
    visit_end_struct(v, NULL);
    handler(arg->server, arg->client, ctx);

    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_VNC_DISCONNECTED_arg(v, "unused", &arg, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VNC) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_ui_c;
