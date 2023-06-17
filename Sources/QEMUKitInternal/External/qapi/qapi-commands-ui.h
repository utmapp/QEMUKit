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

#ifndef QAPI_COMMANDS_UI_H
#define QAPI_COMMANDS_UI_H

#include "qapi-commands-common.h"
#include "qapi-commands-sockets.h"
#include "qapi-types-ui.h"

void qmp_set_password(SetPasswordOptions *arg, Error **errp, void *ctx);
void qmp_expire_password(ExpirePasswordOptions *arg, Error **errp, void *ctx);
void qmp_screendump(const char *filename, bool has_device, const char *device, bool has_head, int64_t head, bool has_format, ImageFormat format, Error **errp, void *ctx);
#if defined(CONFIG_SPICE)
SpiceInfo *qmp_query_spice(Error **errp, void *ctx);
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_VNC)
VncInfo *qmp_query_vnc(Error **errp, void *ctx);
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
VncInfo2List *qmp_query_vnc_servers(Error **errp, void *ctx);
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
void qmp_change_vnc_password(const char *password, Error **errp, void *ctx);
#endif /* defined(CONFIG_VNC) */
MouseInfoList *qmp_query_mice(Error **errp, void *ctx);
void qmp_send_key(KeyValueList *keys, bool has_hold_time, int64_t hold_time, Error **errp, void *ctx);
void qmp_input_send_event(bool has_device, const char *device, bool has_head, int64_t head, InputEventList *events, Error **errp, void *ctx);
DisplayOptions *qmp_query_display_options(Error **errp, void *ctx);
void qmp_display_reload(DisplayReloadOptions *arg, Error **errp, void *ctx);
void qmp_display_update(DisplayUpdateOptions *arg, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_UI_H */
