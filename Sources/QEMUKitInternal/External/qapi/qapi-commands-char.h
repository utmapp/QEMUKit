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

#ifndef QAPI_COMMANDS_CHAR_H
#define QAPI_COMMANDS_CHAR_H

#include "qapi-commands-sockets.h"
#include "qapi-types-char.h"

ChardevInfoList *qmp_query_chardev(Error **errp, void *ctx);
ChardevBackendInfoList *qmp_query_chardev_backends(Error **errp, void *ctx);
void qmp_ringbuf_write(const char *device, const char *data, bool has_format, DataFormat format, Error **errp, void *ctx);
char *qmp_ringbuf_read(const char *device, int64_t size, bool has_format, DataFormat format, Error **errp, void *ctx);
ChardevReturn *qmp_chardev_add(const char *id, ChardevBackend *backend, Error **errp, void *ctx);
ChardevReturn *qmp_chardev_change(const char *id, ChardevBackend *backend, Error **errp, void *ctx);
void qmp_chardev_remove(const char *id, Error **errp, void *ctx);
void qmp_chardev_send_break(const char *id, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_CHAR_H */
