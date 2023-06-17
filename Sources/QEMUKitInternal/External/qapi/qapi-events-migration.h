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

#ifndef QAPI_EVENTS_MIGRATION_H
#define QAPI_EVENTS_MIGRATION_H

#include "qapi-events-common.h"
#include "qapi-events-sockets.h"
#include "util.h"
#include "qapi-types-migration.h"

typedef void (*qapi_migration_handler)(MigrationStatus status, void *ctx);
void qapi_event_dispatch_MIGRATION(qapi_migration_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_migration_pass_handler)(int64_t pass, void *ctx);
void qapi_event_dispatch_MIGRATION_PASS(qapi_migration_pass_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_colo_exit_handler)(COLOMode mode, COLOExitReason reason, void *ctx);
void qapi_event_dispatch_COLO_EXIT(qapi_colo_exit_handler handler, CFDictionaryRef data, void *ctx);

typedef void (*qapi_unplug_primary_handler)(const char *device_id, void *ctx);
void qapi_event_dispatch_UNPLUG_PRIMARY(qapi_unplug_primary_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_MIGRATION_H */
