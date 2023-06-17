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

#ifndef QAPI_EVENTS_NET_H
#define QAPI_EVENTS_NET_H

#include "qapi-events-common.h"
#include "qapi-events-sockets.h"
#include "util.h"
#include "qapi-types-net.h"

typedef void (*qapi_nic_rx_filter_changed_handler)(bool has_name, const char *name, const char *path, void *ctx);
void qapi_event_dispatch_NIC_RX_FILTER_CHANGED(qapi_nic_rx_filter_changed_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_failover_negotiated_handler)(const char *device_id, void *ctx);
void qapi_event_dispatch_FAILOVER_NEGOTIATED(qapi_failover_negotiated_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_netdev_stream_connected_handler)(const char *netdev_id, SocketAddress *addr, void *ctx);
void qapi_event_dispatch_NETDEV_STREAM_CONNECTED(qapi_netdev_stream_connected_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_netdev_stream_disconnected_handler)(const char *netdev_id, void *ctx);
void qapi_event_dispatch_NETDEV_STREAM_DISCONNECTED(qapi_netdev_stream_disconnected_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_NET_H */
