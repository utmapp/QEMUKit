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

#ifndef QAPI_EVENTS_BLOCK_CORE_H
#define QAPI_EVENTS_BLOCK_CORE_H

#include "qapi-events-common.h"
#include "qapi-events-crypto.h"
#include "qapi-events-job.h"
#include "qapi-events-sockets.h"
#include "util.h"
#include "qapi-types-block-core.h"

typedef void (*qapi_block_image_corrupted_handler)(const char *device, bool has_node_name, const char *node_name, const char *msg, bool has_offset, int64_t offset, bool has_size, int64_t size, bool fatal, void *ctx);
void qapi_event_dispatch_BLOCK_IMAGE_CORRUPTED(qapi_block_image_corrupted_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_block_io_error_handler)(const char *device, bool has_node_name, const char *node_name, IoOperationType operation, BlockErrorAction action, bool has_nospace, bool nospace, const char *reason, void *ctx);
void qapi_event_dispatch_BLOCK_IO_ERROR(qapi_block_io_error_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_block_job_completed_handler)(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed, bool has_error, const char *error, void *ctx);
void qapi_event_dispatch_BLOCK_JOB_COMPLETED(qapi_block_job_completed_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_block_job_cancelled_handler)(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed, void *ctx);
void qapi_event_dispatch_BLOCK_JOB_CANCELLED(qapi_block_job_cancelled_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_block_job_error_handler)(const char *device, IoOperationType operation, BlockErrorAction action, void *ctx);
void qapi_event_dispatch_BLOCK_JOB_ERROR(qapi_block_job_error_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_block_job_ready_handler)(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed, void *ctx);
void qapi_event_dispatch_BLOCK_JOB_READY(qapi_block_job_ready_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_block_job_pending_handler)(JobType type, const char *id, void *ctx);
void qapi_event_dispatch_BLOCK_JOB_PENDING(qapi_block_job_pending_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_block_write_threshold_handler)(const char *node_name, uint64_t amount_exceeded, uint64_t write_threshold, void *ctx);
void qapi_event_dispatch_BLOCK_WRITE_THRESHOLD(qapi_block_write_threshold_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_quorum_failure_handler)(const char *reference, int64_t sector_num, int64_t sectors_count, void *ctx);
void qapi_event_dispatch_QUORUM_FAILURE(qapi_quorum_failure_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_quorum_report_bad_handler)(QuorumOpType type, bool has_error, const char *error, const char *node_name, int64_t sector_num, int64_t sectors_count, void *ctx);
void qapi_event_dispatch_QUORUM_REPORT_BAD(qapi_quorum_report_bad_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_BLOCK_CORE_H */
