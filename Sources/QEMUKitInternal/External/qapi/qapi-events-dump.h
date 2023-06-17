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

#ifndef QAPI_EVENTS_DUMP_H
#define QAPI_EVENTS_DUMP_H

#include "util.h"
#include "qapi-types-dump.h"

typedef void (*qapi_dump_completed_handler)(DumpQueryResult *result, bool has_error, const char *error, void *ctx);
void qapi_event_dispatch_DUMP_COMPLETED(qapi_dump_completed_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_DUMP_H */
