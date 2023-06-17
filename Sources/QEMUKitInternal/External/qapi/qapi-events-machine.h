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

#ifndef QAPI_EVENTS_MACHINE_H
#define QAPI_EVENTS_MACHINE_H

#include "qapi-events-common.h"
#include "util.h"
#include "qapi-types-machine.h"

typedef void (*qapi_balloon_change_handler)(int64_t actual, void *ctx);
void qapi_event_dispatch_BALLOON_CHANGE(qapi_balloon_change_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_memory_device_size_change_handler)(bool has_id, const char *id, uint64_t size, const char *qom_path, void *ctx);
void qapi_event_dispatch_MEMORY_DEVICE_SIZE_CHANGE(qapi_memory_device_size_change_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_mem_unplug_error_handler)(const char *device, const char *msg, void *ctx);
void qapi_event_dispatch_MEM_UNPLUG_ERROR(qapi_mem_unplug_error_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_MACHINE_H */
