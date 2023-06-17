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

#ifndef QAPI_EVENTS_BLOCK_H
#define QAPI_EVENTS_BLOCK_H

#include "qapi-events-block-core.h"
#include "util.h"
#include "qapi-types-block.h"

typedef void (*qapi_device_tray_moved_handler)(const char *device, const char *id, bool tray_open, void *ctx);
void qapi_event_dispatch_DEVICE_TRAY_MOVED(qapi_device_tray_moved_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_pr_manager_status_changed_handler)(const char *id, bool connected, void *ctx);
void qapi_event_dispatch_PR_MANAGER_STATUS_CHANGED(qapi_pr_manager_status_changed_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_BLOCK_H */
