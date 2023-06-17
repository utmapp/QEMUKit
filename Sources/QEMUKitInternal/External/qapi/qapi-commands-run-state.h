/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_RUN_STATE_H
#define QAPI_COMMANDS_RUN_STATE_H

#include "qapi-types-run-state.h"

StatusInfo *qmp_query_status(Error **errp, void *ctx);
void qmp_watchdog_set_action(WatchdogAction action, Error **errp, void *ctx);
void qmp_set_action(bool has_reboot, RebootAction reboot, bool has_shutdown, ShutdownAction shutdown, bool has_panic, PanicAction panic, bool has_watchdog, WatchdogAction watchdog, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_RUN_STATE_H */
