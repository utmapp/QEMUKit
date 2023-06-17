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

#ifndef QAPI_COMMANDS_BLOCK_EXPORT_H
#define QAPI_COMMANDS_BLOCK_EXPORT_H

#include "qapi-commands-sockets.h"
#include "qapi-commands-block-core.h"
#include "qapi-types-block-export.h"

void qmp_nbd_server_start(SocketAddressLegacy *addr, bool has_tls_creds, const char *tls_creds, bool has_tls_authz, const char *tls_authz, bool has_max_connections, uint32_t max_connections, Error **errp, void *ctx);
void qmp_nbd_server_add(NbdServerAddOptions *arg, Error **errp, void *ctx);
void qmp_nbd_server_remove(const char *name, bool has_mode, BlockExportRemoveMode mode, Error **errp, void *ctx);
void qmp_nbd_server_stop(Error **errp, void *ctx);
void qmp_block_export_add(BlockExportOptions *arg, Error **errp, void *ctx);
void qmp_block_export_del(const char *id, bool has_mode, BlockExportRemoveMode mode, Error **errp, void *ctx);
BlockExportInfoList *qmp_query_block_exports(Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_BLOCK_EXPORT_H */
