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

#ifndef QAPI_EVENTS_JOB_H
#define QAPI_EVENTS_JOB_H

#include "util.h"
#include "qapi-types-job.h"

typedef void (*qapi_job_status_change_handler)(const char *id, JobStatus status, void *ctx);
void qapi_event_dispatch_JOB_STATUS_CHANGE(qapi_job_status_change_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_JOB_H */
