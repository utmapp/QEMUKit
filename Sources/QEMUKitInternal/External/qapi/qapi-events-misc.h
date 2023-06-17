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

#ifndef QAPI_EVENTS_MISC_H
#define QAPI_EVENTS_MISC_H

#include "qapi-events-common.h"
#include "util.h"
#include "qapi-types-misc.h"

typedef void (*qapi_rtc_change_handler)(int64_t offset, const char *qom_path, void *ctx);
void qapi_event_dispatch_RTC_CHANGE(qapi_rtc_change_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_vfu_client_hangup_handler)(const char *vfu_id, const char *vfu_qom_path, const char *dev_id, const char *dev_qom_path, void *ctx);
void qapi_event_dispatch_VFU_CLIENT_HANGUP(qapi_vfu_client_hangup_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_MISC_H */
