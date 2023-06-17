/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI Events emission
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QGA_QAPI_EMIT_EVENTS_H
#define QGA_QAPI_EMIT_EVENTS_H

#include "qapi-events.h"
#include "util.h"

typedef enum qga_QAPIEvent {
    QGA_QAPI_EVENT__MAX,
} qga_QAPIEvent;

#define qga_QAPIEvent_str(val) \
    qapi_enum_lookup(&qga_QAPIEvent_lookup, (val))

extern const QEnumLookup qga_QAPIEvent_lookup;

typedef struct {
} qapi_enum_handler_registry;

extern qapi_enum_handler_registry qapi_enum_handler_registry_data;

void qga_qapi_event_dispatch(const char *event, CFDictionaryRef data, void *ctx);

#endif /* QGA_QAPI_EMIT_EVENTS_H */
