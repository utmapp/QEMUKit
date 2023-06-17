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

#ifndef QAPI_EVENTS_ACPI_H
#define QAPI_EVENTS_ACPI_H

#include "util.h"
#include "qapi-types-acpi.h"

typedef void (*qapi_acpi_device_ost_handler)(ACPIOSTInfo *info, void *ctx);
void qapi_event_dispatch_ACPI_DEVICE_OST(qapi_acpi_device_ost_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_ACPI_H */
