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

#ifndef QAPI_EVENTS_UI_H
#define QAPI_EVENTS_UI_H

#include "qapi-events-common.h"
#include "qapi-events-sockets.h"
#include "util.h"
#include "qapi-types-ui.h"

#if defined(CONFIG_SPICE)
typedef void (*qapi_spice_connected_handler)(SpiceBasicInfo *server, SpiceBasicInfo *client, void *ctx);
void qapi_event_dispatch_SPICE_CONNECTED(qapi_spice_connected_handler handler, CFDictionaryRef data, void *ctx);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef void (*qapi_spice_initialized_handler)(SpiceServerInfo *server, SpiceChannel *client, void *ctx);
void qapi_event_dispatch_SPICE_INITIALIZED(qapi_spice_initialized_handler handler, CFDictionaryRef data, void *ctx);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef void (*qapi_spice_disconnected_handler)(SpiceBasicInfo *server, SpiceBasicInfo *client, void *ctx);
void qapi_event_dispatch_SPICE_DISCONNECTED(qapi_spice_disconnected_handler handler, CFDictionaryRef data, void *ctx);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef void (*qapi_spice_migrate_completed_handler)(void *ctx);
void qapi_event_dispatch_SPICE_MIGRATE_COMPLETED(qapi_spice_migrate_completed_handler handler, CFDictionaryRef data, void *ctx);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
typedef void (*qapi_vnc_connected_handler)(VncServerInfo *server, VncBasicInfo *client, void *ctx);
void qapi_event_dispatch_VNC_CONNECTED(qapi_vnc_connected_handler handler, CFDictionaryRef data, void *ctx);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef void (*qapi_vnc_initialized_handler)(VncServerInfo *server, VncClientInfo *client, void *ctx);
void qapi_event_dispatch_VNC_INITIALIZED(qapi_vnc_initialized_handler handler, CFDictionaryRef data, void *ctx);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef void (*qapi_vnc_disconnected_handler)(VncServerInfo *server, VncClientInfo *client, void *ctx);
void qapi_event_dispatch_VNC_DISCONNECTED(qapi_vnc_disconnected_handler handler, CFDictionaryRef data, void *ctx);
#endif /* defined(CONFIG_VNC) */

#endif /* QAPI_EVENTS_UI_H */
