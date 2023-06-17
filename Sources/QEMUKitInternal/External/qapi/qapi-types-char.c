/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu-compat.h"
#include "dealloc-visitor.h"
#include "qapi-types-char.h"
#include "qapi-visit-char.h"

void qapi_free_ChardevInfo(ChardevInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevInfoList(ChardevInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevBackendInfo(ChardevBackendInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevBackendInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevBackendInfoList(ChardevBackendInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevBackendInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup DataFormat_lookup = {
    .array = (const char *const[]) {
        [DATA_FORMAT_UTF8] = "utf8",
        [DATA_FORMAT_BASE64] = "base64",
    },
    .size = DATA_FORMAT__MAX
};

void qapi_free_q_obj_ringbuf_write_arg(q_obj_ringbuf_write_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_ringbuf_write_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_ringbuf_read_arg(q_obj_ringbuf_read_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_ringbuf_read_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevCommon(ChardevCommon *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevCommon(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevFile(ChardevFile *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevFile(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevHostdev(ChardevHostdev *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevHostdev(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevSocket(ChardevSocket *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevSocket(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevUdp(ChardevUdp *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevUdp(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevMux(ChardevMux *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevMux(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevStdio(ChardevStdio *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevStdio(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_SPICE)
void qapi_free_ChardevSpiceChannel(ChardevSpiceChannel *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevSpiceChannel(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_ChardevSpicePort(ChardevSpicePort *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevSpicePort(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_DBUS_DISPLAY)
void qapi_free_ChardevDBus(ChardevDBus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevDBus(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_DBUS_DISPLAY) */

void qapi_free_ChardevVC(ChardevVC *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevVC(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevRingbuf(ChardevRingbuf *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevRingbuf(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_SPICE_PROTOCOL)
void qapi_free_ChardevQemuVDAgent(ChardevQemuVDAgent *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevQemuVDAgent(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

const QEnumLookup ChardevBackendKind_lookup = {
    .array = (const char *const[]) {
        [CHARDEV_BACKEND_KIND_FILE] = "file",
        [CHARDEV_BACKEND_KIND_SERIAL] = "serial",
        [CHARDEV_BACKEND_KIND_PARALLEL] = "parallel",
        [CHARDEV_BACKEND_KIND_PIPE] = "pipe",
        [CHARDEV_BACKEND_KIND_SOCKET] = "socket",
        [CHARDEV_BACKEND_KIND_UDP] = "udp",
        [CHARDEV_BACKEND_KIND_PTY] = "pty",
        [CHARDEV_BACKEND_KIND_NULL] = "null",
        [CHARDEV_BACKEND_KIND_MUX] = "mux",
        [CHARDEV_BACKEND_KIND_MSMOUSE] = "msmouse",
        [CHARDEV_BACKEND_KIND_WCTABLET] = "wctablet",
        [CHARDEV_BACKEND_KIND_BRAILLE] = "braille",
        [CHARDEV_BACKEND_KIND_TESTDEV] = "testdev",
        [CHARDEV_BACKEND_KIND_STDIO] = "stdio",
        [CHARDEV_BACKEND_KIND_CONSOLE] = "console",
#if defined(CONFIG_SPICE)
        [CHARDEV_BACKEND_KIND_SPICEVMC] = "spicevmc",
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
        [CHARDEV_BACKEND_KIND_SPICEPORT] = "spiceport",
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE_PROTOCOL)
        [CHARDEV_BACKEND_KIND_QEMU_VDAGENT] = "qemu-vdagent",
#endif /* defined(CONFIG_SPICE_PROTOCOL) */
#if defined(CONFIG_DBUS_DISPLAY)
        [CHARDEV_BACKEND_KIND_DBUS] = "dbus",
#endif /* defined(CONFIG_DBUS_DISPLAY) */
        [CHARDEV_BACKEND_KIND_VC] = "vc",
        [CHARDEV_BACKEND_KIND_RINGBUF] = "ringbuf",
        [CHARDEV_BACKEND_KIND_MEMORY] = "memory",
    },
    .size = CHARDEV_BACKEND_KIND__MAX
};

void qapi_free_ChardevFileWrapper(ChardevFileWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevFileWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevHostdevWrapper(ChardevHostdevWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevHostdevWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevSocketWrapper(ChardevSocketWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevSocketWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevUdpWrapper(ChardevUdpWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevUdpWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevCommonWrapper(ChardevCommonWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevCommonWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevMuxWrapper(ChardevMuxWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevMuxWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevStdioWrapper(ChardevStdioWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevStdioWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_SPICE)
void qapi_free_ChardevSpiceChannelWrapper(ChardevSpiceChannelWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevSpiceChannelWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_ChardevSpicePortWrapper(ChardevSpicePortWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevSpicePortWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE_PROTOCOL)
void qapi_free_ChardevQemuVDAgentWrapper(ChardevQemuVDAgentWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevQemuVDAgentWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

#if defined(CONFIG_DBUS_DISPLAY)
void qapi_free_ChardevDBusWrapper(ChardevDBusWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevDBusWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_DBUS_DISPLAY) */

void qapi_free_ChardevVCWrapper(ChardevVCWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevVCWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevRingbufWrapper(ChardevRingbufWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevRingbufWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_ChardevBackend_base(q_obj_ChardevBackend_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_ChardevBackend_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevBackend(ChardevBackend *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevBackend(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ChardevReturn(ChardevReturn *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ChardevReturn(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_chardev_add_arg(q_obj_chardev_add_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_chardev_add_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_chardev_change_arg(q_obj_chardev_change_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_chardev_change_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_chardev_remove_arg(q_obj_chardev_remove_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_chardev_remove_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_chardev_send_break_arg(q_obj_chardev_send_break_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_chardev_send_break_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_VSERPORT_CHANGE_arg(q_obj_VSERPORT_CHANGE_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_VSERPORT_CHANGE_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_char_c;
