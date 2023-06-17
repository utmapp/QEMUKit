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

#ifndef QAPI_COMMANDS_TRANSACTION_H
#define QAPI_COMMANDS_TRANSACTION_H

#include "qapi-commands-block-core.h"
#include "qapi-types-transaction.h"

void qmp_transaction(TransactionActionList *actions, bool has_properties, TransactionProperties *properties, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_TRANSACTION_H */
