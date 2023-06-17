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

#include "qemu-compat.h"
#include "qga-qapi-emit-events.h"
#include "error.h"

const QEnumLookup qga_QAPIEvent_lookup = {
    .array = (const char *const[]) {
    },
    .size = QGA_QAPI_EVENT__MAX
};

void qga_qapi_event_dispatch(const char *event, CFDictionaryRef data, void *ctx)
{
    qga_QAPIEvent num;

    num = (qga_QAPIEvent)qapi_enum_parse(&qga_QAPIEvent_lookup, event, 0, &error_abort);
    switch (num) {
        default:
            assert(0);
            break;
    }
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qga_qapi_emit_events_c;
