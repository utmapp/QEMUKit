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

#ifndef QAPI_EVENTS_QDEV_H
#define QAPI_EVENTS_QDEV_H

#include "qapi-events-qom.h"
#include "util.h"
#include "qapi-types-qdev.h"

typedef void (*qapi_device_deleted_handler)(bool has_device, const char *device, const char *path, void *ctx);
void qapi_event_dispatch_DEVICE_DELETED(qapi_device_deleted_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_device_unplug_guest_error_handler)(bool has_device, const char *device, const char *path, void *ctx);
void qapi_event_dispatch_DEVICE_UNPLUG_GUEST_ERROR(qapi_device_unplug_guest_error_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_QDEV_H */
