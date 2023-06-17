/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_VISIT_CHAR_H
#define QAPI_VISIT_CHAR_H

#include "qapi-builtin-visit.h"
#include "qapi-types-char.h"

#include "qapi-visit-sockets.h"

bool visit_type_ChardevInfo_members(Visitor *v, ChardevInfo *obj, Error **errp);

bool visit_type_ChardevInfo(Visitor *v, const char *name,
                 ChardevInfo **obj, Error **errp);

bool visit_type_ChardevInfoList(Visitor *v, const char *name,
                 ChardevInfoList **obj, Error **errp);

bool visit_type_ChardevBackendInfo_members(Visitor *v, ChardevBackendInfo *obj, Error **errp);

bool visit_type_ChardevBackendInfo(Visitor *v, const char *name,
                 ChardevBackendInfo **obj, Error **errp);

bool visit_type_ChardevBackendInfoList(Visitor *v, const char *name,
                 ChardevBackendInfoList **obj, Error **errp);

bool visit_type_DataFormat(Visitor *v, const char *name,
                 DataFormat *obj, Error **errp);

bool visit_type_q_obj_ringbuf_write_arg_members(Visitor *v, q_obj_ringbuf_write_arg *obj, Error **errp);

bool visit_type_q_obj_ringbuf_write_arg(Visitor *v, const char *name,
                 q_obj_ringbuf_write_arg **obj, Error **errp);

bool visit_type_q_obj_ringbuf_read_arg_members(Visitor *v, q_obj_ringbuf_read_arg *obj, Error **errp);

bool visit_type_q_obj_ringbuf_read_arg(Visitor *v, const char *name,
                 q_obj_ringbuf_read_arg **obj, Error **errp);

bool visit_type_ChardevCommon_members(Visitor *v, ChardevCommon *obj, Error **errp);

bool visit_type_ChardevCommon(Visitor *v, const char *name,
                 ChardevCommon **obj, Error **errp);

bool visit_type_ChardevFile_members(Visitor *v, ChardevFile *obj, Error **errp);

bool visit_type_ChardevFile(Visitor *v, const char *name,
                 ChardevFile **obj, Error **errp);

bool visit_type_ChardevHostdev_members(Visitor *v, ChardevHostdev *obj, Error **errp);

bool visit_type_ChardevHostdev(Visitor *v, const char *name,
                 ChardevHostdev **obj, Error **errp);

bool visit_type_ChardevSocket_members(Visitor *v, ChardevSocket *obj, Error **errp);

bool visit_type_ChardevSocket(Visitor *v, const char *name,
                 ChardevSocket **obj, Error **errp);

bool visit_type_ChardevUdp_members(Visitor *v, ChardevUdp *obj, Error **errp);

bool visit_type_ChardevUdp(Visitor *v, const char *name,
                 ChardevUdp **obj, Error **errp);

bool visit_type_ChardevMux_members(Visitor *v, ChardevMux *obj, Error **errp);

bool visit_type_ChardevMux(Visitor *v, const char *name,
                 ChardevMux **obj, Error **errp);

bool visit_type_ChardevStdio_members(Visitor *v, ChardevStdio *obj, Error **errp);

bool visit_type_ChardevStdio(Visitor *v, const char *name,
                 ChardevStdio **obj, Error **errp);

#if defined(CONFIG_SPICE)
bool visit_type_ChardevSpiceChannel_members(Visitor *v, ChardevSpiceChannel *obj, Error **errp);

bool visit_type_ChardevSpiceChannel(Visitor *v, const char *name,
                 ChardevSpiceChannel **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_ChardevSpicePort_members(Visitor *v, ChardevSpicePort *obj, Error **errp);

bool visit_type_ChardevSpicePort(Visitor *v, const char *name,
                 ChardevSpicePort **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_DBUS_DISPLAY)
bool visit_type_ChardevDBus_members(Visitor *v, ChardevDBus *obj, Error **errp);

bool visit_type_ChardevDBus(Visitor *v, const char *name,
                 ChardevDBus **obj, Error **errp);
#endif /* defined(CONFIG_DBUS_DISPLAY) */

bool visit_type_ChardevVC_members(Visitor *v, ChardevVC *obj, Error **errp);

bool visit_type_ChardevVC(Visitor *v, const char *name,
                 ChardevVC **obj, Error **errp);

bool visit_type_ChardevRingbuf_members(Visitor *v, ChardevRingbuf *obj, Error **errp);

bool visit_type_ChardevRingbuf(Visitor *v, const char *name,
                 ChardevRingbuf **obj, Error **errp);

#if defined(CONFIG_SPICE_PROTOCOL)
bool visit_type_ChardevQemuVDAgent_members(Visitor *v, ChardevQemuVDAgent *obj, Error **errp);

bool visit_type_ChardevQemuVDAgent(Visitor *v, const char *name,
                 ChardevQemuVDAgent **obj, Error **errp);
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

bool visit_type_ChardevBackendKind(Visitor *v, const char *name,
                 ChardevBackendKind *obj, Error **errp);

bool visit_type_ChardevFileWrapper_members(Visitor *v, ChardevFileWrapper *obj, Error **errp);

bool visit_type_ChardevFileWrapper(Visitor *v, const char *name,
                 ChardevFileWrapper **obj, Error **errp);

bool visit_type_ChardevHostdevWrapper_members(Visitor *v, ChardevHostdevWrapper *obj, Error **errp);

bool visit_type_ChardevHostdevWrapper(Visitor *v, const char *name,
                 ChardevHostdevWrapper **obj, Error **errp);

bool visit_type_ChardevSocketWrapper_members(Visitor *v, ChardevSocketWrapper *obj, Error **errp);

bool visit_type_ChardevSocketWrapper(Visitor *v, const char *name,
                 ChardevSocketWrapper **obj, Error **errp);

bool visit_type_ChardevUdpWrapper_members(Visitor *v, ChardevUdpWrapper *obj, Error **errp);

bool visit_type_ChardevUdpWrapper(Visitor *v, const char *name,
                 ChardevUdpWrapper **obj, Error **errp);

bool visit_type_ChardevCommonWrapper_members(Visitor *v, ChardevCommonWrapper *obj, Error **errp);

bool visit_type_ChardevCommonWrapper(Visitor *v, const char *name,
                 ChardevCommonWrapper **obj, Error **errp);

bool visit_type_ChardevMuxWrapper_members(Visitor *v, ChardevMuxWrapper *obj, Error **errp);

bool visit_type_ChardevMuxWrapper(Visitor *v, const char *name,
                 ChardevMuxWrapper **obj, Error **errp);

bool visit_type_ChardevStdioWrapper_members(Visitor *v, ChardevStdioWrapper *obj, Error **errp);

bool visit_type_ChardevStdioWrapper(Visitor *v, const char *name,
                 ChardevStdioWrapper **obj, Error **errp);

#if defined(CONFIG_SPICE)
bool visit_type_ChardevSpiceChannelWrapper_members(Visitor *v, ChardevSpiceChannelWrapper *obj, Error **errp);

bool visit_type_ChardevSpiceChannelWrapper(Visitor *v, const char *name,
                 ChardevSpiceChannelWrapper **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_ChardevSpicePortWrapper_members(Visitor *v, ChardevSpicePortWrapper *obj, Error **errp);

bool visit_type_ChardevSpicePortWrapper(Visitor *v, const char *name,
                 ChardevSpicePortWrapper **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE_PROTOCOL)
bool visit_type_ChardevQemuVDAgentWrapper_members(Visitor *v, ChardevQemuVDAgentWrapper *obj, Error **errp);

bool visit_type_ChardevQemuVDAgentWrapper(Visitor *v, const char *name,
                 ChardevQemuVDAgentWrapper **obj, Error **errp);
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

#if defined(CONFIG_DBUS_DISPLAY)
bool visit_type_ChardevDBusWrapper_members(Visitor *v, ChardevDBusWrapper *obj, Error **errp);

bool visit_type_ChardevDBusWrapper(Visitor *v, const char *name,
                 ChardevDBusWrapper **obj, Error **errp);
#endif /* defined(CONFIG_DBUS_DISPLAY) */

bool visit_type_ChardevVCWrapper_members(Visitor *v, ChardevVCWrapper *obj, Error **errp);

bool visit_type_ChardevVCWrapper(Visitor *v, const char *name,
                 ChardevVCWrapper **obj, Error **errp);

bool visit_type_ChardevRingbufWrapper_members(Visitor *v, ChardevRingbufWrapper *obj, Error **errp);

bool visit_type_ChardevRingbufWrapper(Visitor *v, const char *name,
                 ChardevRingbufWrapper **obj, Error **errp);

bool visit_type_q_obj_ChardevBackend_base_members(Visitor *v, q_obj_ChardevBackend_base *obj, Error **errp);

bool visit_type_q_obj_ChardevBackend_base(Visitor *v, const char *name,
                 q_obj_ChardevBackend_base **obj, Error **errp);

bool visit_type_ChardevBackend_members(Visitor *v, ChardevBackend *obj, Error **errp);

bool visit_type_ChardevBackend(Visitor *v, const char *name,
                 ChardevBackend **obj, Error **errp);

bool visit_type_ChardevReturn_members(Visitor *v, ChardevReturn *obj, Error **errp);

bool visit_type_ChardevReturn(Visitor *v, const char *name,
                 ChardevReturn **obj, Error **errp);

bool visit_type_q_obj_chardev_add_arg_members(Visitor *v, q_obj_chardev_add_arg *obj, Error **errp);

bool visit_type_q_obj_chardev_add_arg(Visitor *v, const char *name,
                 q_obj_chardev_add_arg **obj, Error **errp);

bool visit_type_q_obj_chardev_change_arg_members(Visitor *v, q_obj_chardev_change_arg *obj, Error **errp);

bool visit_type_q_obj_chardev_change_arg(Visitor *v, const char *name,
                 q_obj_chardev_change_arg **obj, Error **errp);

bool visit_type_q_obj_chardev_remove_arg_members(Visitor *v, q_obj_chardev_remove_arg *obj, Error **errp);

bool visit_type_q_obj_chardev_remove_arg(Visitor *v, const char *name,
                 q_obj_chardev_remove_arg **obj, Error **errp);

bool visit_type_q_obj_chardev_send_break_arg_members(Visitor *v, q_obj_chardev_send_break_arg *obj, Error **errp);

bool visit_type_q_obj_chardev_send_break_arg(Visitor *v, const char *name,
                 q_obj_chardev_send_break_arg **obj, Error **errp);

bool visit_type_q_obj_VSERPORT_CHANGE_arg_members(Visitor *v, q_obj_VSERPORT_CHANGE_arg *obj, Error **errp);

bool visit_type_q_obj_VSERPORT_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_VSERPORT_CHANGE_arg **obj, Error **errp);

#endif /* QAPI_VISIT_CHAR_H */
