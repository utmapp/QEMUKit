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

#ifndef QAPI_EVENTS_RDMA_H
#define QAPI_EVENTS_RDMA_H

#include "util.h"
#include "qapi-types-rdma.h"

typedef void (*qapi_rdma_gid_status_changed_handler)(const char *netdev, bool gid_status, uint64_t subnet_prefix, uint64_t interface_id, void *ctx);
void qapi_event_dispatch_RDMA_GID_STATUS_CHANGED(qapi_rdma_gid_status_changed_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_RDMA_H */
