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

#ifndef QAPI_COMMANDS_YANK_H
#define QAPI_COMMANDS_YANK_H

#include "qapi-types-yank.h"

void qmp_yank(YankInstanceList *instances, Error **errp, void *ctx);
YankInstanceList *qmp_query_yank(Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_YANK_H */
