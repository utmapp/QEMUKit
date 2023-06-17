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

#ifndef QAPI_COMMANDS_REPLAY_H
#define QAPI_COMMANDS_REPLAY_H

#include "qapi-commands-common.h"
#include "qapi-types-replay.h"

ReplayInfo *qmp_query_replay(Error **errp, void *ctx);
void qmp_replay_break(int64_t icount, Error **errp, void *ctx);
void qmp_replay_delete_break(Error **errp, void *ctx);
void qmp_replay_seek(int64_t icount, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_REPLAY_H */
