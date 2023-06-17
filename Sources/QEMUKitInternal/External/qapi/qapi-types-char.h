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

#ifndef QAPI_TYPES_CHAR_H
#define QAPI_TYPES_CHAR_H

#include "qapi-builtin-types.h"
#include "qapi-types-sockets.h"

typedef struct ChardevInfo ChardevInfo;

typedef struct ChardevInfoList ChardevInfoList;

typedef struct ChardevBackendInfo ChardevBackendInfo;

typedef struct ChardevBackendInfoList ChardevBackendInfoList;

typedef enum DataFormat {
    DATA_FORMAT_UTF8,
    DATA_FORMAT_BASE64,
    DATA_FORMAT__MAX,
} DataFormat;

#define DataFormat_str(val) \
    qapi_enum_lookup(&DataFormat_lookup, (val))

extern const QEnumLookup DataFormat_lookup;

typedef struct q_obj_ringbuf_write_arg q_obj_ringbuf_write_arg;

typedef struct q_obj_ringbuf_read_arg q_obj_ringbuf_read_arg;

typedef struct ChardevCommon ChardevCommon;

typedef struct ChardevFile ChardevFile;

typedef struct ChardevHostdev ChardevHostdev;

typedef struct ChardevSocket ChardevSocket;

typedef struct ChardevUdp ChardevUdp;

typedef struct ChardevMux ChardevMux;

typedef struct ChardevStdio ChardevStdio;

#if defined(CONFIG_SPICE)
typedef struct ChardevSpiceChannel ChardevSpiceChannel;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct ChardevSpicePort ChardevSpicePort;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_DBUS_DISPLAY)
typedef struct ChardevDBus ChardevDBus;
#endif /* defined(CONFIG_DBUS_DISPLAY) */

typedef struct ChardevVC ChardevVC;

typedef struct ChardevRingbuf ChardevRingbuf;

#if defined(CONFIG_SPICE_PROTOCOL)
typedef struct ChardevQemuVDAgent ChardevQemuVDAgent;
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

typedef enum ChardevBackendKind {
    CHARDEV_BACKEND_KIND_FILE,
    CHARDEV_BACKEND_KIND_SERIAL,
    CHARDEV_BACKEND_KIND_PARALLEL,
    CHARDEV_BACKEND_KIND_PIPE,
    CHARDEV_BACKEND_KIND_SOCKET,
    CHARDEV_BACKEND_KIND_UDP,
    CHARDEV_BACKEND_KIND_PTY,
    CHARDEV_BACKEND_KIND_NULL,
    CHARDEV_BACKEND_KIND_MUX,
    CHARDEV_BACKEND_KIND_MSMOUSE,
    CHARDEV_BACKEND_KIND_WCTABLET,
    CHARDEV_BACKEND_KIND_BRAILLE,
    CHARDEV_BACKEND_KIND_TESTDEV,
    CHARDEV_BACKEND_KIND_STDIO,
    CHARDEV_BACKEND_KIND_CONSOLE,
#if defined(CONFIG_SPICE)
    CHARDEV_BACKEND_KIND_SPICEVMC,
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    CHARDEV_BACKEND_KIND_SPICEPORT,
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE_PROTOCOL)
    CHARDEV_BACKEND_KIND_QEMU_VDAGENT,
#endif /* defined(CONFIG_SPICE_PROTOCOL) */
#if defined(CONFIG_DBUS_DISPLAY)
    CHARDEV_BACKEND_KIND_DBUS,
#endif /* defined(CONFIG_DBUS_DISPLAY) */
    CHARDEV_BACKEND_KIND_VC,
    CHARDEV_BACKEND_KIND_RINGBUF,
    CHARDEV_BACKEND_KIND_MEMORY,
    CHARDEV_BACKEND_KIND__MAX,
} ChardevBackendKind;

#define ChardevBackendKind_str(val) \
    qapi_enum_lookup(&ChardevBackendKind_lookup, (val))

extern const QEnumLookup ChardevBackendKind_lookup;

typedef struct ChardevFileWrapper ChardevFileWrapper;

typedef struct ChardevHostdevWrapper ChardevHostdevWrapper;

typedef struct ChardevSocketWrapper ChardevSocketWrapper;

typedef struct ChardevUdpWrapper ChardevUdpWrapper;

typedef struct ChardevCommonWrapper ChardevCommonWrapper;

typedef struct ChardevMuxWrapper ChardevMuxWrapper;

typedef struct ChardevStdioWrapper ChardevStdioWrapper;

#if defined(CONFIG_SPICE)
typedef struct ChardevSpiceChannelWrapper ChardevSpiceChannelWrapper;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct ChardevSpicePortWrapper ChardevSpicePortWrapper;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE_PROTOCOL)
typedef struct ChardevQemuVDAgentWrapper ChardevQemuVDAgentWrapper;
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

#if defined(CONFIG_DBUS_DISPLAY)
typedef struct ChardevDBusWrapper ChardevDBusWrapper;
#endif /* defined(CONFIG_DBUS_DISPLAY) */

typedef struct ChardevVCWrapper ChardevVCWrapper;

typedef struct ChardevRingbufWrapper ChardevRingbufWrapper;

typedef struct q_obj_ChardevBackend_base q_obj_ChardevBackend_base;

typedef struct ChardevBackend ChardevBackend;

typedef struct ChardevReturn ChardevReturn;

typedef struct q_obj_chardev_add_arg q_obj_chardev_add_arg;

typedef struct q_obj_chardev_change_arg q_obj_chardev_change_arg;

typedef struct q_obj_chardev_remove_arg q_obj_chardev_remove_arg;

typedef struct q_obj_chardev_send_break_arg q_obj_chardev_send_break_arg;

typedef struct q_obj_VSERPORT_CHANGE_arg q_obj_VSERPORT_CHANGE_arg;

struct ChardevInfo {
    char *label;
    char *filename;
    bool frontend_open;
};

void qapi_free_ChardevInfo(ChardevInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevInfo, qapi_free_ChardevInfo)

struct ChardevInfoList {
    ChardevInfoList *next;
    ChardevInfo *value;
};

void qapi_free_ChardevInfoList(ChardevInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevInfoList, qapi_free_ChardevInfoList)

struct ChardevBackendInfo {
    char *name;
};

void qapi_free_ChardevBackendInfo(ChardevBackendInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevBackendInfo, qapi_free_ChardevBackendInfo)

struct ChardevBackendInfoList {
    ChardevBackendInfoList *next;
    ChardevBackendInfo *value;
};

void qapi_free_ChardevBackendInfoList(ChardevBackendInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevBackendInfoList, qapi_free_ChardevBackendInfoList)

struct q_obj_ringbuf_write_arg {
    char *device;
    char *data;
    bool has_format;
    DataFormat format;
};

void qapi_free_q_obj_ringbuf_write_arg(q_obj_ringbuf_write_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_ringbuf_write_arg, qapi_free_q_obj_ringbuf_write_arg)

struct q_obj_ringbuf_read_arg {
    char *device;
    int64_t size;
    bool has_format;
    DataFormat format;
};

void qapi_free_q_obj_ringbuf_read_arg(q_obj_ringbuf_read_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_ringbuf_read_arg, qapi_free_q_obj_ringbuf_read_arg)

struct ChardevCommon {
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
};

void qapi_free_ChardevCommon(ChardevCommon *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevCommon, qapi_free_ChardevCommon)

struct ChardevFile {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_in;
    char *in;
    char *out;
    bool has_append;
    bool append;
};

static inline ChardevCommon *qapi_ChardevFile_base(const ChardevFile *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevFile(ChardevFile *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevFile, qapi_free_ChardevFile)

struct ChardevHostdev {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *device;
};

static inline ChardevCommon *qapi_ChardevHostdev_base(const ChardevHostdev *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevHostdev(ChardevHostdev *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevHostdev, qapi_free_ChardevHostdev)

struct ChardevSocket {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    SocketAddressLegacy *addr;
    bool has_tls_creds;
    char *tls_creds;
    bool has_tls_authz;
    char *tls_authz;
    bool has_server;
    bool server;
    bool has_wait;
    bool wait;
    bool has_nodelay;
    bool nodelay;
    bool has_telnet;
    bool telnet;
    bool has_tn3270;
    bool tn3270;
    bool has_websocket;
    bool websocket;
    bool has_reconnect;
    int64_t reconnect;
};

static inline ChardevCommon *qapi_ChardevSocket_base(const ChardevSocket *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSocket(ChardevSocket *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSocket, qapi_free_ChardevSocket)

struct ChardevUdp {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    SocketAddressLegacy *remote;
    bool has_local;
    SocketAddressLegacy *local;
};

static inline ChardevCommon *qapi_ChardevUdp_base(const ChardevUdp *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevUdp(ChardevUdp *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevUdp, qapi_free_ChardevUdp)

struct ChardevMux {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *chardev;
};

static inline ChardevCommon *qapi_ChardevMux_base(const ChardevMux *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevMux(ChardevMux *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevMux, qapi_free_ChardevMux)

struct ChardevStdio {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_signal;
    bool signal;
};

static inline ChardevCommon *qapi_ChardevStdio_base(const ChardevStdio *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevStdio(ChardevStdio *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevStdio, qapi_free_ChardevStdio)

#if defined(CONFIG_SPICE)
struct ChardevSpiceChannel {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *type;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
static inline ChardevCommon *qapi_ChardevSpiceChannel_base(const ChardevSpiceChannel *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSpiceChannel(ChardevSpiceChannel *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSpiceChannel, qapi_free_ChardevSpiceChannel)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct ChardevSpicePort {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *fqdn;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
static inline ChardevCommon *qapi_ChardevSpicePort_base(const ChardevSpicePort *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevSpicePort(ChardevSpicePort *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSpicePort, qapi_free_ChardevSpicePort)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_DBUS_DISPLAY)
struct ChardevDBus {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    char *name;
};
#endif /* defined(CONFIG_DBUS_DISPLAY) */

#if defined(CONFIG_DBUS_DISPLAY)
static inline ChardevCommon *qapi_ChardevDBus_base(const ChardevDBus *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevDBus(ChardevDBus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevDBus, qapi_free_ChardevDBus)
#endif /* defined(CONFIG_DBUS_DISPLAY) */

struct ChardevVC {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_width;
    int64_t width;
    bool has_height;
    int64_t height;
    bool has_cols;
    int64_t cols;
    bool has_rows;
    int64_t rows;
};

static inline ChardevCommon *qapi_ChardevVC_base(const ChardevVC *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevVC(ChardevVC *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevVC, qapi_free_ChardevVC)

struct ChardevRingbuf {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_size;
    int64_t size;
};

static inline ChardevCommon *qapi_ChardevRingbuf_base(const ChardevRingbuf *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevRingbuf(ChardevRingbuf *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevRingbuf, qapi_free_ChardevRingbuf)

#if defined(CONFIG_SPICE_PROTOCOL)
struct ChardevQemuVDAgent {
    /* Members inherited from ChardevCommon: */
    bool has_logfile;
    char *logfile;
    bool has_logappend;
    bool logappend;
    /* Own members: */
    bool has_mouse;
    bool mouse;
    bool has_clipboard;
    bool clipboard;
};
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

#if defined(CONFIG_SPICE_PROTOCOL)
static inline ChardevCommon *qapi_ChardevQemuVDAgent_base(const ChardevQemuVDAgent *obj)
{
    return (ChardevCommon *)obj;
}

void qapi_free_ChardevQemuVDAgent(ChardevQemuVDAgent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevQemuVDAgent, qapi_free_ChardevQemuVDAgent)
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

struct ChardevFileWrapper {
    ChardevFile *data;
};

void qapi_free_ChardevFileWrapper(ChardevFileWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevFileWrapper, qapi_free_ChardevFileWrapper)

struct ChardevHostdevWrapper {
    ChardevHostdev *data;
};

void qapi_free_ChardevHostdevWrapper(ChardevHostdevWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevHostdevWrapper, qapi_free_ChardevHostdevWrapper)

struct ChardevSocketWrapper {
    ChardevSocket *data;
};

void qapi_free_ChardevSocketWrapper(ChardevSocketWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSocketWrapper, qapi_free_ChardevSocketWrapper)

struct ChardevUdpWrapper {
    ChardevUdp *data;
};

void qapi_free_ChardevUdpWrapper(ChardevUdpWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevUdpWrapper, qapi_free_ChardevUdpWrapper)

struct ChardevCommonWrapper {
    ChardevCommon *data;
};

void qapi_free_ChardevCommonWrapper(ChardevCommonWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevCommonWrapper, qapi_free_ChardevCommonWrapper)

struct ChardevMuxWrapper {
    ChardevMux *data;
};

void qapi_free_ChardevMuxWrapper(ChardevMuxWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevMuxWrapper, qapi_free_ChardevMuxWrapper)

struct ChardevStdioWrapper {
    ChardevStdio *data;
};

void qapi_free_ChardevStdioWrapper(ChardevStdioWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevStdioWrapper, qapi_free_ChardevStdioWrapper)

#if defined(CONFIG_SPICE)
struct ChardevSpiceChannelWrapper {
    ChardevSpiceChannel *data;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_ChardevSpiceChannelWrapper(ChardevSpiceChannelWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSpiceChannelWrapper, qapi_free_ChardevSpiceChannelWrapper)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct ChardevSpicePortWrapper {
    ChardevSpicePort *data;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_ChardevSpicePortWrapper(ChardevSpicePortWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevSpicePortWrapper, qapi_free_ChardevSpicePortWrapper)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE_PROTOCOL)
struct ChardevQemuVDAgentWrapper {
    ChardevQemuVDAgent *data;
};
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

#if defined(CONFIG_SPICE_PROTOCOL)
void qapi_free_ChardevQemuVDAgentWrapper(ChardevQemuVDAgentWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevQemuVDAgentWrapper, qapi_free_ChardevQemuVDAgentWrapper)
#endif /* defined(CONFIG_SPICE_PROTOCOL) */

#if defined(CONFIG_DBUS_DISPLAY)
struct ChardevDBusWrapper {
    ChardevDBus *data;
};
#endif /* defined(CONFIG_DBUS_DISPLAY) */

#if defined(CONFIG_DBUS_DISPLAY)
void qapi_free_ChardevDBusWrapper(ChardevDBusWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevDBusWrapper, qapi_free_ChardevDBusWrapper)
#endif /* defined(CONFIG_DBUS_DISPLAY) */

struct ChardevVCWrapper {
    ChardevVC *data;
};

void qapi_free_ChardevVCWrapper(ChardevVCWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevVCWrapper, qapi_free_ChardevVCWrapper)

struct ChardevRingbufWrapper {
    ChardevRingbuf *data;
};

void qapi_free_ChardevRingbufWrapper(ChardevRingbufWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevRingbufWrapper, qapi_free_ChardevRingbufWrapper)

struct q_obj_ChardevBackend_base {
    ChardevBackendKind type;
};

void qapi_free_q_obj_ChardevBackend_base(q_obj_ChardevBackend_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_ChardevBackend_base, qapi_free_q_obj_ChardevBackend_base)

struct ChardevBackend {
    ChardevBackendKind type;
    union { /* union tag is @type */
        ChardevFileWrapper file;
        ChardevHostdevWrapper serial;
        ChardevHostdevWrapper parallel;
        ChardevHostdevWrapper pipe;
        ChardevSocketWrapper socket;
        ChardevUdpWrapper udp;
        ChardevCommonWrapper pty;
        ChardevCommonWrapper null;
        ChardevMuxWrapper mux;
        ChardevCommonWrapper msmouse;
        ChardevCommonWrapper wctablet;
        ChardevCommonWrapper braille;
        ChardevCommonWrapper testdev;
        ChardevStdioWrapper stdio;
        ChardevCommonWrapper console;
#if defined(CONFIG_SPICE)
        ChardevSpiceChannelWrapper spicevmc;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
        ChardevSpicePortWrapper spiceport;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE_PROTOCOL)
        ChardevQemuVDAgentWrapper qemu_vdagent;
#endif /* defined(CONFIG_SPICE_PROTOCOL) */
#if defined(CONFIG_DBUS_DISPLAY)
        ChardevDBusWrapper dbus;
#endif /* defined(CONFIG_DBUS_DISPLAY) */
        ChardevVCWrapper vc;
        ChardevRingbufWrapper ringbuf;
        ChardevRingbufWrapper memory;
    } u;
};

void qapi_free_ChardevBackend(ChardevBackend *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevBackend, qapi_free_ChardevBackend)

struct ChardevReturn {
    bool has_pty;
    char *pty;
};

void qapi_free_ChardevReturn(ChardevReturn *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ChardevReturn, qapi_free_ChardevReturn)

struct q_obj_chardev_add_arg {
    char *id;
    ChardevBackend *backend;
};

void qapi_free_q_obj_chardev_add_arg(q_obj_chardev_add_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_chardev_add_arg, qapi_free_q_obj_chardev_add_arg)

struct q_obj_chardev_change_arg {
    char *id;
    ChardevBackend *backend;
};

void qapi_free_q_obj_chardev_change_arg(q_obj_chardev_change_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_chardev_change_arg, qapi_free_q_obj_chardev_change_arg)

struct q_obj_chardev_remove_arg {
    char *id;
};

void qapi_free_q_obj_chardev_remove_arg(q_obj_chardev_remove_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_chardev_remove_arg, qapi_free_q_obj_chardev_remove_arg)

struct q_obj_chardev_send_break_arg {
    char *id;
};

void qapi_free_q_obj_chardev_send_break_arg(q_obj_chardev_send_break_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_chardev_send_break_arg, qapi_free_q_obj_chardev_send_break_arg)

struct q_obj_VSERPORT_CHANGE_arg {
    char *id;
    bool open;
};

void qapi_free_q_obj_VSERPORT_CHANGE_arg(q_obj_VSERPORT_CHANGE_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_VSERPORT_CHANGE_arg, qapi_free_q_obj_VSERPORT_CHANGE_arg)

#endif /* QAPI_TYPES_CHAR_H */
