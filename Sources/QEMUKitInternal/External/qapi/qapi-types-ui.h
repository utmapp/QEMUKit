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

#ifndef QAPI_TYPES_UI_H
#define QAPI_TYPES_UI_H

#include "qapi-builtin-types.h"
#include "qapi-types-common.h"
#include "qapi-types-sockets.h"

typedef enum DisplayProtocol {
    DISPLAY_PROTOCOL_VNC,
    DISPLAY_PROTOCOL_SPICE,
    DISPLAY_PROTOCOL__MAX,
} DisplayProtocol;

#define DisplayProtocol_str(val) \
    qapi_enum_lookup(&DisplayProtocol_lookup, (val))

extern const QEnumLookup DisplayProtocol_lookup;

typedef enum SetPasswordAction {
    SET_PASSWORD_ACTION_KEEP,
    SET_PASSWORD_ACTION_FAIL,
    SET_PASSWORD_ACTION_DISCONNECT,
    SET_PASSWORD_ACTION__MAX,
} SetPasswordAction;

#define SetPasswordAction_str(val) \
    qapi_enum_lookup(&SetPasswordAction_lookup, (val))

extern const QEnumLookup SetPasswordAction_lookup;

typedef struct q_obj_SetPasswordOptions_base q_obj_SetPasswordOptions_base;

typedef struct SetPasswordOptions SetPasswordOptions;

typedef struct SetPasswordOptionsVnc SetPasswordOptionsVnc;

typedef struct q_obj_ExpirePasswordOptions_base q_obj_ExpirePasswordOptions_base;

typedef struct ExpirePasswordOptions ExpirePasswordOptions;

typedef struct ExpirePasswordOptionsVnc ExpirePasswordOptionsVnc;

typedef enum ImageFormat {
    IMAGE_FORMAT_PPM,
    IMAGE_FORMAT_PNG,
    IMAGE_FORMAT__MAX,
} ImageFormat;

#define ImageFormat_str(val) \
    qapi_enum_lookup(&ImageFormat_lookup, (val))

extern const QEnumLookup ImageFormat_lookup;

typedef struct q_obj_screendump_arg q_obj_screendump_arg;

#if defined(CONFIG_SPICE)
typedef struct SpiceBasicInfo SpiceBasicInfo;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct SpiceServerInfo SpiceServerInfo;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct SpiceChannel SpiceChannel;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef enum SpiceQueryMouseMode {
    SPICE_QUERY_MOUSE_MODE_CLIENT,
    SPICE_QUERY_MOUSE_MODE_SERVER,
    SPICE_QUERY_MOUSE_MODE_UNKNOWN,
    SPICE_QUERY_MOUSE_MODE__MAX,
} SpiceQueryMouseMode;

#define SpiceQueryMouseMode_str(val) \
    qapi_enum_lookup(&SpiceQueryMouseMode_lookup, (val))

extern const QEnumLookup SpiceQueryMouseMode_lookup;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct SpiceChannelList SpiceChannelList;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct SpiceInfo SpiceInfo;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct q_obj_SPICE_CONNECTED_arg q_obj_SPICE_CONNECTED_arg;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct q_obj_SPICE_INITIALIZED_arg q_obj_SPICE_INITIALIZED_arg;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
typedef struct q_obj_SPICE_DISCONNECTED_arg q_obj_SPICE_DISCONNECTED_arg;
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
typedef struct VncBasicInfo VncBasicInfo;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncServerInfo VncServerInfo;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncClientInfo VncClientInfo;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncClientInfoList VncClientInfoList;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncInfo VncInfo;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef enum VncPrimaryAuth {
    VNC_PRIMARY_AUTH_NONE,
    VNC_PRIMARY_AUTH_VNC,
    VNC_PRIMARY_AUTH_RA2,
    VNC_PRIMARY_AUTH_RA2NE,
    VNC_PRIMARY_AUTH_TIGHT,
    VNC_PRIMARY_AUTH_ULTRA,
    VNC_PRIMARY_AUTH_TLS,
    VNC_PRIMARY_AUTH_VENCRYPT,
    VNC_PRIMARY_AUTH_SASL,
    VNC_PRIMARY_AUTH__MAX,
} VncPrimaryAuth;

#define VncPrimaryAuth_str(val) \
    qapi_enum_lookup(&VncPrimaryAuth_lookup, (val))

extern const QEnumLookup VncPrimaryAuth_lookup;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef enum VncVencryptSubAuth {
    VNC_VENCRYPT_SUB_AUTH_PLAIN,
    VNC_VENCRYPT_SUB_AUTH_TLS_NONE,
    VNC_VENCRYPT_SUB_AUTH_X509_NONE,
    VNC_VENCRYPT_SUB_AUTH_TLS_VNC,
    VNC_VENCRYPT_SUB_AUTH_X509_VNC,
    VNC_VENCRYPT_SUB_AUTH_TLS_PLAIN,
    VNC_VENCRYPT_SUB_AUTH_X509_PLAIN,
    VNC_VENCRYPT_SUB_AUTH_TLS_SASL,
    VNC_VENCRYPT_SUB_AUTH_X509_SASL,
    VNC_VENCRYPT_SUB_AUTH__MAX,
} VncVencryptSubAuth;

#define VncVencryptSubAuth_str(val) \
    qapi_enum_lookup(&VncVencryptSubAuth_lookup, (val))

extern const QEnumLookup VncVencryptSubAuth_lookup;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncServerInfo2 VncServerInfo2;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncServerInfo2List VncServerInfo2List;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncInfo2 VncInfo2;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct VncInfo2List VncInfo2List;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct q_obj_change_vnc_password_arg q_obj_change_vnc_password_arg;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct q_obj_VNC_CONNECTED_arg q_obj_VNC_CONNECTED_arg;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct q_obj_VNC_INITIALIZED_arg q_obj_VNC_INITIALIZED_arg;
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
typedef struct q_obj_VNC_DISCONNECTED_arg q_obj_VNC_DISCONNECTED_arg;
#endif /* defined(CONFIG_VNC) */

typedef struct MouseInfo MouseInfo;

typedef struct MouseInfoList MouseInfoList;

typedef enum QKeyCode {
    Q_KEY_CODE_UNMAPPED,
    Q_KEY_CODE_SHIFT,
    Q_KEY_CODE_SHIFT_R,
    Q_KEY_CODE_ALT,
    Q_KEY_CODE_ALT_R,
    Q_KEY_CODE_CTRL,
    Q_KEY_CODE_CTRL_R,
    Q_KEY_CODE_MENU,
    Q_KEY_CODE_ESC,
    Q_KEY_CODE_1,
    Q_KEY_CODE_2,
    Q_KEY_CODE_3,
    Q_KEY_CODE_4,
    Q_KEY_CODE_5,
    Q_KEY_CODE_6,
    Q_KEY_CODE_7,
    Q_KEY_CODE_8,
    Q_KEY_CODE_9,
    Q_KEY_CODE_0,
    Q_KEY_CODE_MINUS,
    Q_KEY_CODE_EQUAL,
    Q_KEY_CODE_BACKSPACE,
    Q_KEY_CODE_TAB,
    Q_KEY_CODE_Q,
    Q_KEY_CODE_W,
    Q_KEY_CODE_E,
    Q_KEY_CODE_R,
    Q_KEY_CODE_T,
    Q_KEY_CODE_Y,
    Q_KEY_CODE_U,
    Q_KEY_CODE_I,
    Q_KEY_CODE_O,
    Q_KEY_CODE_P,
    Q_KEY_CODE_BRACKET_LEFT,
    Q_KEY_CODE_BRACKET_RIGHT,
    Q_KEY_CODE_RET,
    Q_KEY_CODE_A,
    Q_KEY_CODE_S,
    Q_KEY_CODE_D,
    Q_KEY_CODE_F,
    Q_KEY_CODE_G,
    Q_KEY_CODE_H,
    Q_KEY_CODE_J,
    Q_KEY_CODE_K,
    Q_KEY_CODE_L,
    Q_KEY_CODE_SEMICOLON,
    Q_KEY_CODE_APOSTROPHE,
    Q_KEY_CODE_GRAVE_ACCENT,
    Q_KEY_CODE_BACKSLASH,
    Q_KEY_CODE_Z,
    Q_KEY_CODE_X,
    Q_KEY_CODE_C,
    Q_KEY_CODE_V,
    Q_KEY_CODE_B,
    Q_KEY_CODE_N,
    Q_KEY_CODE_M,
    Q_KEY_CODE_COMMA,
    Q_KEY_CODE_DOT,
    Q_KEY_CODE_SLASH,
    Q_KEY_CODE_ASTERISK,
    Q_KEY_CODE_SPC,
    Q_KEY_CODE_CAPS_LOCK,
    Q_KEY_CODE_F1,
    Q_KEY_CODE_F2,
    Q_KEY_CODE_F3,
    Q_KEY_CODE_F4,
    Q_KEY_CODE_F5,
    Q_KEY_CODE_F6,
    Q_KEY_CODE_F7,
    Q_KEY_CODE_F8,
    Q_KEY_CODE_F9,
    Q_KEY_CODE_F10,
    Q_KEY_CODE_NUM_LOCK,
    Q_KEY_CODE_SCROLL_LOCK,
    Q_KEY_CODE_KP_DIVIDE,
    Q_KEY_CODE_KP_MULTIPLY,
    Q_KEY_CODE_KP_SUBTRACT,
    Q_KEY_CODE_KP_ADD,
    Q_KEY_CODE_KP_ENTER,
    Q_KEY_CODE_KP_DECIMAL,
    Q_KEY_CODE_SYSRQ,
    Q_KEY_CODE_KP_0,
    Q_KEY_CODE_KP_1,
    Q_KEY_CODE_KP_2,
    Q_KEY_CODE_KP_3,
    Q_KEY_CODE_KP_4,
    Q_KEY_CODE_KP_5,
    Q_KEY_CODE_KP_6,
    Q_KEY_CODE_KP_7,
    Q_KEY_CODE_KP_8,
    Q_KEY_CODE_KP_9,
    Q_KEY_CODE_LESS,
    Q_KEY_CODE_F11,
    Q_KEY_CODE_F12,
    Q_KEY_CODE_PRINT,
    Q_KEY_CODE_HOME,
    Q_KEY_CODE_PGUP,
    Q_KEY_CODE_PGDN,
    Q_KEY_CODE_END,
    Q_KEY_CODE_LEFT,
    Q_KEY_CODE_UP,
    Q_KEY_CODE_DOWN,
    Q_KEY_CODE_RIGHT,
    Q_KEY_CODE_INSERT,
    Q_KEY_CODE_DELETE,
    Q_KEY_CODE_STOP,
    Q_KEY_CODE_AGAIN,
    Q_KEY_CODE_PROPS,
    Q_KEY_CODE_UNDO,
    Q_KEY_CODE_FRONT,
    Q_KEY_CODE_COPY,
    Q_KEY_CODE_OPEN,
    Q_KEY_CODE_PASTE,
    Q_KEY_CODE_FIND,
    Q_KEY_CODE_CUT,
    Q_KEY_CODE_LF,
    Q_KEY_CODE_HELP,
    Q_KEY_CODE_META_L,
    Q_KEY_CODE_META_R,
    Q_KEY_CODE_COMPOSE,
    Q_KEY_CODE_PAUSE,
    Q_KEY_CODE_RO,
    Q_KEY_CODE_HIRAGANA,
    Q_KEY_CODE_HENKAN,
    Q_KEY_CODE_YEN,
    Q_KEY_CODE_MUHENKAN,
    Q_KEY_CODE_KATAKANAHIRAGANA,
    Q_KEY_CODE_KP_COMMA,
    Q_KEY_CODE_KP_EQUALS,
    Q_KEY_CODE_POWER,
    Q_KEY_CODE_SLEEP,
    Q_KEY_CODE_WAKE,
    Q_KEY_CODE_AUDIONEXT,
    Q_KEY_CODE_AUDIOPREV,
    Q_KEY_CODE_AUDIOSTOP,
    Q_KEY_CODE_AUDIOPLAY,
    Q_KEY_CODE_AUDIOMUTE,
    Q_KEY_CODE_VOLUMEUP,
    Q_KEY_CODE_VOLUMEDOWN,
    Q_KEY_CODE_MEDIASELECT,
    Q_KEY_CODE_MAIL,
    Q_KEY_CODE_CALCULATOR,
    Q_KEY_CODE_COMPUTER,
    Q_KEY_CODE_AC_HOME,
    Q_KEY_CODE_AC_BACK,
    Q_KEY_CODE_AC_FORWARD,
    Q_KEY_CODE_AC_REFRESH,
    Q_KEY_CODE_AC_BOOKMARKS,
    Q_KEY_CODE_LANG1,
    Q_KEY_CODE_LANG2,
    Q_KEY_CODE_F13,
    Q_KEY_CODE_F14,
    Q_KEY_CODE_F15,
    Q_KEY_CODE_F16,
    Q_KEY_CODE_F17,
    Q_KEY_CODE_F18,
    Q_KEY_CODE_F19,
    Q_KEY_CODE_F20,
    Q_KEY_CODE_F21,
    Q_KEY_CODE_F22,
    Q_KEY_CODE_F23,
    Q_KEY_CODE_F24,
    Q_KEY_CODE__MAX,
} QKeyCode;

#define QKeyCode_str(val) \
    qapi_enum_lookup(&QKeyCode_lookup, (val))

extern const QEnumLookup QKeyCode_lookup;

typedef enum KeyValueKind {
    KEY_VALUE_KIND_NUMBER,
    KEY_VALUE_KIND_QCODE,
    KEY_VALUE_KIND__MAX,
} KeyValueKind;

#define KeyValueKind_str(val) \
    qapi_enum_lookup(&KeyValueKind_lookup, (val))

extern const QEnumLookup KeyValueKind_lookup;

typedef struct IntWrapper IntWrapper;

typedef struct QKeyCodeWrapper QKeyCodeWrapper;

typedef struct q_obj_KeyValue_base q_obj_KeyValue_base;

typedef struct KeyValue KeyValue;

typedef struct KeyValueList KeyValueList;

typedef struct q_obj_send_key_arg q_obj_send_key_arg;

typedef enum InputButton {
    INPUT_BUTTON_LEFT,
    INPUT_BUTTON_MIDDLE,
    INPUT_BUTTON_RIGHT,
    INPUT_BUTTON_WHEEL_UP,
    INPUT_BUTTON_WHEEL_DOWN,
    INPUT_BUTTON_SIDE,
    INPUT_BUTTON_EXTRA,
    INPUT_BUTTON_WHEEL_LEFT,
    INPUT_BUTTON_WHEEL_RIGHT,
    INPUT_BUTTON__MAX,
} InputButton;

#define InputButton_str(val) \
    qapi_enum_lookup(&InputButton_lookup, (val))

extern const QEnumLookup InputButton_lookup;

typedef enum InputAxis {
    INPUT_AXIS_X,
    INPUT_AXIS_Y,
    INPUT_AXIS__MAX,
} InputAxis;

#define InputAxis_str(val) \
    qapi_enum_lookup(&InputAxis_lookup, (val))

extern const QEnumLookup InputAxis_lookup;

typedef struct InputKeyEvent InputKeyEvent;

typedef struct InputBtnEvent InputBtnEvent;

typedef struct InputMoveEvent InputMoveEvent;

typedef enum InputEventKind {
    INPUT_EVENT_KIND_KEY,
    INPUT_EVENT_KIND_BTN,
    INPUT_EVENT_KIND_REL,
    INPUT_EVENT_KIND_ABS,
    INPUT_EVENT_KIND__MAX,
} InputEventKind;

#define InputEventKind_str(val) \
    qapi_enum_lookup(&InputEventKind_lookup, (val))

extern const QEnumLookup InputEventKind_lookup;

typedef struct InputKeyEventWrapper InputKeyEventWrapper;

typedef struct InputBtnEventWrapper InputBtnEventWrapper;

typedef struct InputMoveEventWrapper InputMoveEventWrapper;

typedef struct q_obj_InputEvent_base q_obj_InputEvent_base;

typedef struct InputEvent InputEvent;

typedef struct InputEventList InputEventList;

typedef struct q_obj_input_send_event_arg q_obj_input_send_event_arg;

typedef struct DisplayGTK DisplayGTK;

typedef struct DisplayEGLHeadless DisplayEGLHeadless;

typedef struct DisplayDBus DisplayDBus;

typedef enum DisplayGLMode {
    DISPLAYGL_MODE_OFF,
    DISPLAYGL_MODE_ON,
    DISPLAYGL_MODE_CORE,
    DISPLAYGL_MODE_ES,
    DISPLAYGL_MODE__MAX,
} DisplayGLMode;

#define DisplayGLMode_str(val) \
    qapi_enum_lookup(&DisplayGLMode_lookup, (val))

extern const QEnumLookup DisplayGLMode_lookup;

typedef struct DisplayCurses DisplayCurses;

typedef struct DisplayCocoa DisplayCocoa;

typedef enum HotKeyMod {
    HOT_KEY_MOD_LCTRL_LALT,
    HOT_KEY_MOD_LSHIFT_LCTRL_LALT,
    HOT_KEY_MOD_RCTRL,
    HOT_KEY_MOD__MAX,
} HotKeyMod;

#define HotKeyMod_str(val) \
    qapi_enum_lookup(&HotKeyMod_lookup, (val))

extern const QEnumLookup HotKeyMod_lookup;

typedef struct DisplaySDL DisplaySDL;

typedef enum DisplayType {
    DISPLAY_TYPE_DEFAULT,
    DISPLAY_TYPE_NONE,
#if defined(CONFIG_GTK)
    DISPLAY_TYPE_GTK,
#endif /* defined(CONFIG_GTK) */
#if defined(CONFIG_SDL)
    DISPLAY_TYPE_SDL,
#endif /* defined(CONFIG_SDL) */
#if defined(CONFIG_OPENGL)
    DISPLAY_TYPE_EGL_HEADLESS,
#endif /* defined(CONFIG_OPENGL) */
#if defined(CONFIG_CURSES)
    DISPLAY_TYPE_CURSES,
#endif /* defined(CONFIG_CURSES) */
#if defined(CONFIG_COCOA)
    DISPLAY_TYPE_COCOA,
#endif /* defined(CONFIG_COCOA) */
#if defined(CONFIG_SPICE)
    DISPLAY_TYPE_SPICE_APP,
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_DBUS_DISPLAY)
    DISPLAY_TYPE_DBUS,
#endif /* defined(CONFIG_DBUS_DISPLAY) */
    DISPLAY_TYPE__MAX,
} DisplayType;

#define DisplayType_str(val) \
    qapi_enum_lookup(&DisplayType_lookup, (val))

extern const QEnumLookup DisplayType_lookup;

typedef struct q_obj_DisplayOptions_base q_obj_DisplayOptions_base;

typedef struct DisplayOptions DisplayOptions;

typedef enum DisplayReloadType {
    DISPLAY_RELOAD_TYPE_VNC,
    DISPLAY_RELOAD_TYPE__MAX,
} DisplayReloadType;

#define DisplayReloadType_str(val) \
    qapi_enum_lookup(&DisplayReloadType_lookup, (val))

extern const QEnumLookup DisplayReloadType_lookup;

typedef struct DisplayReloadOptionsVNC DisplayReloadOptionsVNC;

typedef struct q_obj_DisplayReloadOptions_base q_obj_DisplayReloadOptions_base;

typedef struct DisplayReloadOptions DisplayReloadOptions;

typedef enum DisplayUpdateType {
    DISPLAY_UPDATE_TYPE_VNC,
    DISPLAY_UPDATE_TYPE__MAX,
} DisplayUpdateType;

#define DisplayUpdateType_str(val) \
    qapi_enum_lookup(&DisplayUpdateType_lookup, (val))

extern const QEnumLookup DisplayUpdateType_lookup;

typedef struct DisplayUpdateOptionsVNC DisplayUpdateOptionsVNC;

typedef struct q_obj_DisplayUpdateOptions_base q_obj_DisplayUpdateOptions_base;

typedef struct DisplayUpdateOptions DisplayUpdateOptions;

struct q_obj_SetPasswordOptions_base {
    DisplayProtocol protocol;
    char *password;
    bool has_connected;
    SetPasswordAction connected;
};

void qapi_free_q_obj_SetPasswordOptions_base(q_obj_SetPasswordOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_SetPasswordOptions_base, qapi_free_q_obj_SetPasswordOptions_base)

struct SetPasswordOptionsVnc {
    bool has_display;
    char *display;
};

struct SetPasswordOptions {
    DisplayProtocol protocol;
    char *password;
    bool has_connected;
    SetPasswordAction connected;
    union { /* union tag is @protocol */
        SetPasswordOptionsVnc vnc;
    } u;
};

void qapi_free_SetPasswordOptions(SetPasswordOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SetPasswordOptions, qapi_free_SetPasswordOptions)

void qapi_free_SetPasswordOptionsVnc(SetPasswordOptionsVnc *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SetPasswordOptionsVnc, qapi_free_SetPasswordOptionsVnc)

struct q_obj_ExpirePasswordOptions_base {
    DisplayProtocol protocol;
    char *time;
};

void qapi_free_q_obj_ExpirePasswordOptions_base(q_obj_ExpirePasswordOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_ExpirePasswordOptions_base, qapi_free_q_obj_ExpirePasswordOptions_base)

struct ExpirePasswordOptionsVnc {
    bool has_display;
    char *display;
};

struct ExpirePasswordOptions {
    DisplayProtocol protocol;
    char *time;
    union { /* union tag is @protocol */
        ExpirePasswordOptionsVnc vnc;
    } u;
};

void qapi_free_ExpirePasswordOptions(ExpirePasswordOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ExpirePasswordOptions, qapi_free_ExpirePasswordOptions)

void qapi_free_ExpirePasswordOptionsVnc(ExpirePasswordOptionsVnc *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ExpirePasswordOptionsVnc, qapi_free_ExpirePasswordOptionsVnc)

struct q_obj_screendump_arg {
    char *filename;
    bool has_device;
    char *device;
    bool has_head;
    int64_t head;
    bool has_format;
    ImageFormat format;
};

void qapi_free_q_obj_screendump_arg(q_obj_screendump_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_screendump_arg, qapi_free_q_obj_screendump_arg)

#if defined(CONFIG_SPICE)
struct SpiceBasicInfo {
    char *host;
    char *port;
    NetworkAddressFamily family;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_SpiceBasicInfo(SpiceBasicInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceBasicInfo, qapi_free_SpiceBasicInfo)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct SpiceServerInfo {
    /* Members inherited from SpiceBasicInfo: */
    char *host;
    char *port;
    NetworkAddressFamily family;
    /* Own members: */
    bool has_auth;
    char *auth;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
static inline SpiceBasicInfo *qapi_SpiceServerInfo_base(const SpiceServerInfo *obj)
{
    return (SpiceBasicInfo *)obj;
}

void qapi_free_SpiceServerInfo(SpiceServerInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceServerInfo, qapi_free_SpiceServerInfo)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct SpiceChannel {
    /* Members inherited from SpiceBasicInfo: */
    char *host;
    char *port;
    NetworkAddressFamily family;
    /* Own members: */
    int64_t connection_id;
    int64_t channel_type;
    int64_t channel_id;
    bool tls;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
static inline SpiceBasicInfo *qapi_SpiceChannel_base(const SpiceChannel *obj)
{
    return (SpiceBasicInfo *)obj;
}

void qapi_free_SpiceChannel(SpiceChannel *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceChannel, qapi_free_SpiceChannel)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct SpiceChannelList {
    SpiceChannelList *next;
    SpiceChannel *value;
};

void qapi_free_SpiceChannelList(SpiceChannelList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceChannelList, qapi_free_SpiceChannelList)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct SpiceInfo {
    bool enabled;
    bool migrated;
    bool has_host;
    char *host;
    bool has_port;
    int64_t port;
    bool has_tls_port;
    int64_t tls_port;
    bool has_auth;
    char *auth;
    bool has_compiled_version;
    char *compiled_version;
    SpiceQueryMouseMode mouse_mode;
    bool has_channels;
    SpiceChannelList *channels;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_SpiceInfo(SpiceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SpiceInfo, qapi_free_SpiceInfo)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct q_obj_SPICE_CONNECTED_arg {
    SpiceBasicInfo *server;
    SpiceBasicInfo *client;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_q_obj_SPICE_CONNECTED_arg(q_obj_SPICE_CONNECTED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_SPICE_CONNECTED_arg, qapi_free_q_obj_SPICE_CONNECTED_arg)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct q_obj_SPICE_INITIALIZED_arg {
    SpiceServerInfo *server;
    SpiceChannel *client;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_q_obj_SPICE_INITIALIZED_arg(q_obj_SPICE_INITIALIZED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_SPICE_INITIALIZED_arg, qapi_free_q_obj_SPICE_INITIALIZED_arg)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
struct q_obj_SPICE_DISCONNECTED_arg {
    SpiceBasicInfo *server;
    SpiceBasicInfo *client;
};
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_free_q_obj_SPICE_DISCONNECTED_arg(q_obj_SPICE_DISCONNECTED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_SPICE_DISCONNECTED_arg, qapi_free_q_obj_SPICE_DISCONNECTED_arg)
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
struct VncBasicInfo {
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_VncBasicInfo(VncBasicInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncBasicInfo, qapi_free_VncBasicInfo)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncServerInfo {
    /* Members inherited from VncBasicInfo: */
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
    /* Own members: */
    bool has_auth;
    char *auth;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
static inline VncBasicInfo *qapi_VncServerInfo_base(const VncServerInfo *obj)
{
    return (VncBasicInfo *)obj;
}

void qapi_free_VncServerInfo(VncServerInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncServerInfo, qapi_free_VncServerInfo)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncClientInfo {
    /* Members inherited from VncBasicInfo: */
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
    /* Own members: */
    bool has_x509_dname;
    char *x509_dname;
    bool has_sasl_username;
    char *sasl_username;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
static inline VncBasicInfo *qapi_VncClientInfo_base(const VncClientInfo *obj)
{
    return (VncBasicInfo *)obj;
}

void qapi_free_VncClientInfo(VncClientInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncClientInfo, qapi_free_VncClientInfo)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncClientInfoList {
    VncClientInfoList *next;
    VncClientInfo *value;
};

void qapi_free_VncClientInfoList(VncClientInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncClientInfoList, qapi_free_VncClientInfoList)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncInfo {
    bool enabled;
    bool has_host;
    char *host;
    bool has_family;
    NetworkAddressFamily family;
    bool has_service;
    char *service;
    bool has_auth;
    char *auth;
    bool has_clients;
    VncClientInfoList *clients;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_VncInfo(VncInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncInfo, qapi_free_VncInfo)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncServerInfo2 {
    /* Members inherited from VncBasicInfo: */
    char *host;
    char *service;
    NetworkAddressFamily family;
    bool websocket;
    /* Own members: */
    VncPrimaryAuth auth;
    bool has_vencrypt;
    VncVencryptSubAuth vencrypt;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
static inline VncBasicInfo *qapi_VncServerInfo2_base(const VncServerInfo2 *obj)
{
    return (VncBasicInfo *)obj;
}

void qapi_free_VncServerInfo2(VncServerInfo2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncServerInfo2, qapi_free_VncServerInfo2)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncServerInfo2List {
    VncServerInfo2List *next;
    VncServerInfo2 *value;
};

void qapi_free_VncServerInfo2List(VncServerInfo2List *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncServerInfo2List, qapi_free_VncServerInfo2List)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncInfo2 {
    char *id;
    VncServerInfo2List *server;
    VncClientInfoList *clients;
    VncPrimaryAuth auth;
    bool has_vencrypt;
    VncVencryptSubAuth vencrypt;
    bool has_display;
    char *display;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_VncInfo2(VncInfo2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncInfo2, qapi_free_VncInfo2)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct VncInfo2List {
    VncInfo2List *next;
    VncInfo2 *value;
};

void qapi_free_VncInfo2List(VncInfo2List *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VncInfo2List, qapi_free_VncInfo2List)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct q_obj_change_vnc_password_arg {
    char *password;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_q_obj_change_vnc_password_arg(q_obj_change_vnc_password_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_change_vnc_password_arg, qapi_free_q_obj_change_vnc_password_arg)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct q_obj_VNC_CONNECTED_arg {
    VncServerInfo *server;
    VncBasicInfo *client;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_q_obj_VNC_CONNECTED_arg(q_obj_VNC_CONNECTED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_VNC_CONNECTED_arg, qapi_free_q_obj_VNC_CONNECTED_arg)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct q_obj_VNC_INITIALIZED_arg {
    VncServerInfo *server;
    VncClientInfo *client;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_q_obj_VNC_INITIALIZED_arg(q_obj_VNC_INITIALIZED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_VNC_INITIALIZED_arg, qapi_free_q_obj_VNC_INITIALIZED_arg)
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
struct q_obj_VNC_DISCONNECTED_arg {
    VncServerInfo *server;
    VncClientInfo *client;
};
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_free_q_obj_VNC_DISCONNECTED_arg(q_obj_VNC_DISCONNECTED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_VNC_DISCONNECTED_arg, qapi_free_q_obj_VNC_DISCONNECTED_arg)
#endif /* defined(CONFIG_VNC) */

struct MouseInfo {
    char *name;
    int64_t index;
    bool current;
    bool absolute;
};

void qapi_free_MouseInfo(MouseInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MouseInfo, qapi_free_MouseInfo)

struct MouseInfoList {
    MouseInfoList *next;
    MouseInfo *value;
};

void qapi_free_MouseInfoList(MouseInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MouseInfoList, qapi_free_MouseInfoList)

struct IntWrapper {
    int64_t data;
};

void qapi_free_IntWrapper(IntWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(IntWrapper, qapi_free_IntWrapper)

struct QKeyCodeWrapper {
    QKeyCode data;
};

void qapi_free_QKeyCodeWrapper(QKeyCodeWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QKeyCodeWrapper, qapi_free_QKeyCodeWrapper)

struct q_obj_KeyValue_base {
    KeyValueKind type;
};

void qapi_free_q_obj_KeyValue_base(q_obj_KeyValue_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_KeyValue_base, qapi_free_q_obj_KeyValue_base)

struct KeyValue {
    KeyValueKind type;
    union { /* union tag is @type */
        IntWrapper number;
        QKeyCodeWrapper qcode;
    } u;
};

void qapi_free_KeyValue(KeyValue *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(KeyValue, qapi_free_KeyValue)

struct KeyValueList {
    KeyValueList *next;
    KeyValue *value;
};

void qapi_free_KeyValueList(KeyValueList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(KeyValueList, qapi_free_KeyValueList)

struct q_obj_send_key_arg {
    KeyValueList *keys;
    bool has_hold_time;
    int64_t hold_time;
};

void qapi_free_q_obj_send_key_arg(q_obj_send_key_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_send_key_arg, qapi_free_q_obj_send_key_arg)

struct InputKeyEvent {
    KeyValue *key;
    bool down;
};

void qapi_free_InputKeyEvent(InputKeyEvent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputKeyEvent, qapi_free_InputKeyEvent)

struct InputBtnEvent {
    InputButton button;
    bool down;
};

void qapi_free_InputBtnEvent(InputBtnEvent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputBtnEvent, qapi_free_InputBtnEvent)

struct InputMoveEvent {
    InputAxis axis;
    int64_t value;
};

void qapi_free_InputMoveEvent(InputMoveEvent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputMoveEvent, qapi_free_InputMoveEvent)

struct InputKeyEventWrapper {
    InputKeyEvent *data;
};

void qapi_free_InputKeyEventWrapper(InputKeyEventWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputKeyEventWrapper, qapi_free_InputKeyEventWrapper)

struct InputBtnEventWrapper {
    InputBtnEvent *data;
};

void qapi_free_InputBtnEventWrapper(InputBtnEventWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputBtnEventWrapper, qapi_free_InputBtnEventWrapper)

struct InputMoveEventWrapper {
    InputMoveEvent *data;
};

void qapi_free_InputMoveEventWrapper(InputMoveEventWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputMoveEventWrapper, qapi_free_InputMoveEventWrapper)

struct q_obj_InputEvent_base {
    InputEventKind type;
};

void qapi_free_q_obj_InputEvent_base(q_obj_InputEvent_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_InputEvent_base, qapi_free_q_obj_InputEvent_base)

struct InputEvent {
    InputEventKind type;
    union { /* union tag is @type */
        InputKeyEventWrapper key;
        InputBtnEventWrapper btn;
        InputMoveEventWrapper rel;
        InputMoveEventWrapper abs;
    } u;
};

void qapi_free_InputEvent(InputEvent *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputEvent, qapi_free_InputEvent)

struct InputEventList {
    InputEventList *next;
    InputEvent *value;
};

void qapi_free_InputEventList(InputEventList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputEventList, qapi_free_InputEventList)

struct q_obj_input_send_event_arg {
    bool has_device;
    char *device;
    bool has_head;
    int64_t head;
    InputEventList *events;
};

void qapi_free_q_obj_input_send_event_arg(q_obj_input_send_event_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_input_send_event_arg, qapi_free_q_obj_input_send_event_arg)

struct DisplayGTK {
    bool has_grab_on_hover;
    bool grab_on_hover;
    bool has_zoom_to_fit;
    bool zoom_to_fit;
    bool has_show_tabs;
    bool show_tabs;
    bool has_show_menubar;
    bool show_menubar;
};

void qapi_free_DisplayGTK(DisplayGTK *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayGTK, qapi_free_DisplayGTK)

struct DisplayEGLHeadless {
    bool has_rendernode;
    char *rendernode;
};

void qapi_free_DisplayEGLHeadless(DisplayEGLHeadless *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayEGLHeadless, qapi_free_DisplayEGLHeadless)

struct DisplayDBus {
    bool has_rendernode;
    char *rendernode;
    bool has_addr;
    char *addr;
    bool has_p2p;
    bool p2p;
    bool has_audiodev;
    char *audiodev;
};

void qapi_free_DisplayDBus(DisplayDBus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayDBus, qapi_free_DisplayDBus)

struct DisplayCurses {
    bool has_charset;
    char *charset;
};

void qapi_free_DisplayCurses(DisplayCurses *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayCurses, qapi_free_DisplayCurses)

struct DisplayCocoa {
    bool has_left_command_key;
    bool left_command_key;
    bool has_full_grab;
    bool full_grab;
    bool has_swap_opt_cmd;
    bool swap_opt_cmd;
};

void qapi_free_DisplayCocoa(DisplayCocoa *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayCocoa, qapi_free_DisplayCocoa)

struct DisplaySDL {
    bool has_grab_mod;
    HotKeyMod grab_mod;
};

void qapi_free_DisplaySDL(DisplaySDL *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplaySDL, qapi_free_DisplaySDL)

struct q_obj_DisplayOptions_base {
    DisplayType type;
    bool has_full_screen;
    bool full_screen;
    bool has_window_close;
    bool window_close;
    bool has_show_cursor;
    bool show_cursor;
    bool has_gl;
    DisplayGLMode gl;
};

void qapi_free_q_obj_DisplayOptions_base(q_obj_DisplayOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_DisplayOptions_base, qapi_free_q_obj_DisplayOptions_base)

struct DisplayOptions {
    DisplayType type;
    bool has_full_screen;
    bool full_screen;
    bool has_window_close;
    bool window_close;
    bool has_show_cursor;
    bool show_cursor;
    bool has_gl;
    DisplayGLMode gl;
    union { /* union tag is @type */
#if defined(CONFIG_GTK)
        DisplayGTK gtk;
#endif /* defined(CONFIG_GTK) */
#if defined(CONFIG_COCOA)
        DisplayCocoa cocoa;
#endif /* defined(CONFIG_COCOA) */
#if defined(CONFIG_CURSES)
        DisplayCurses curses;
#endif /* defined(CONFIG_CURSES) */
#if defined(CONFIG_OPENGL)
        DisplayEGLHeadless egl_headless;
#endif /* defined(CONFIG_OPENGL) */
#if defined(CONFIG_DBUS_DISPLAY)
        DisplayDBus dbus;
#endif /* defined(CONFIG_DBUS_DISPLAY) */
#if defined(CONFIG_SDL)
        DisplaySDL sdl;
#endif /* defined(CONFIG_SDL) */
    } u;
};

void qapi_free_DisplayOptions(DisplayOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayOptions, qapi_free_DisplayOptions)

struct DisplayReloadOptionsVNC {
    bool has_tls_certs;
    bool tls_certs;
};

void qapi_free_DisplayReloadOptionsVNC(DisplayReloadOptionsVNC *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayReloadOptionsVNC, qapi_free_DisplayReloadOptionsVNC)

struct q_obj_DisplayReloadOptions_base {
    DisplayReloadType type;
};

void qapi_free_q_obj_DisplayReloadOptions_base(q_obj_DisplayReloadOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_DisplayReloadOptions_base, qapi_free_q_obj_DisplayReloadOptions_base)

struct DisplayReloadOptions {
    DisplayReloadType type;
    union { /* union tag is @type */
        DisplayReloadOptionsVNC vnc;
    } u;
};

void qapi_free_DisplayReloadOptions(DisplayReloadOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayReloadOptions, qapi_free_DisplayReloadOptions)

struct DisplayUpdateOptionsVNC {
    bool has_addresses;
    SocketAddressList *addresses;
};

void qapi_free_DisplayUpdateOptionsVNC(DisplayUpdateOptionsVNC *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayUpdateOptionsVNC, qapi_free_DisplayUpdateOptionsVNC)

struct q_obj_DisplayUpdateOptions_base {
    DisplayUpdateType type;
};

void qapi_free_q_obj_DisplayUpdateOptions_base(q_obj_DisplayUpdateOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_DisplayUpdateOptions_base, qapi_free_q_obj_DisplayUpdateOptions_base)

struct DisplayUpdateOptions {
    DisplayUpdateType type;
    union { /* union tag is @type */
        DisplayUpdateOptionsVNC vnc;
    } u;
};

void qapi_free_DisplayUpdateOptions(DisplayUpdateOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DisplayUpdateOptions, qapi_free_DisplayUpdateOptions)

#endif /* QAPI_TYPES_UI_H */
