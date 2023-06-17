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

#ifndef QAPI_COMMANDS_MISC_H
#define QAPI_COMMANDS_MISC_H

#include "qapi-commands-common.h"
#include "qapi-types-misc.h"

void qmp_add_client(const char *protocol, const char *fdname, bool has_skipauth, bool skipauth, bool has_tls, bool tls, Error **errp, void *ctx);
NameInfo *qmp_query_name(Error **errp, void *ctx);
IOThreadInfoList *qmp_query_iothreads(Error **errp, void *ctx);
void qmp_stop(Error **errp, void *ctx);
void qmp_cont(Error **errp, void *ctx);
void qmp_x_exit_preconfig(Error **errp, void *ctx);
char *qmp_human_monitor_command(const char *command_line, bool has_cpu_index, int64_t cpu_index, Error **errp, void *ctx);
#if defined(CONFIG_POSIX)
void qmp_getfd(const char *fdname, Error **errp, void *ctx);
#endif /* defined(CONFIG_POSIX) */
#if defined(CONFIG_WIN32)
void qmp_get_win32_socket(const char *info, const char *fdname, Error **errp, void *ctx);
#endif /* defined(CONFIG_WIN32) */
void qmp_closefd(const char *fdname, Error **errp, void *ctx);
AddfdInfo *qmp_add_fd(bool has_fdset_id, int64_t fdset_id, bool has_opaque, const char *opaque, Error **errp, void *ctx);
void qmp_remove_fd(int64_t fdset_id, bool has_fd, int64_t fd, Error **errp, void *ctx);
FdsetInfoList *qmp_query_fdsets(Error **errp, void *ctx);
CommandLineOptionInfoList *qmp_query_command_line_options(bool has_option, const char *option, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_MISC_H */
