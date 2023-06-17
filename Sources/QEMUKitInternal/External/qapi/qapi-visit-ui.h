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

#ifndef QAPI_VISIT_UI_H
#define QAPI_VISIT_UI_H

#include "qapi-builtin-visit.h"
#include "qapi-types-ui.h"

#include "qapi-visit-common.h"
#include "qapi-visit-sockets.h"

bool visit_type_DisplayProtocol(Visitor *v, const char *name,
                 DisplayProtocol *obj, Error **errp);

bool visit_type_SetPasswordAction(Visitor *v, const char *name,
                 SetPasswordAction *obj, Error **errp);

bool visit_type_q_obj_SetPasswordOptions_base_members(Visitor *v, q_obj_SetPasswordOptions_base *obj, Error **errp);

bool visit_type_q_obj_SetPasswordOptions_base(Visitor *v, const char *name,
                 q_obj_SetPasswordOptions_base **obj, Error **errp);

bool visit_type_SetPasswordOptions_members(Visitor *v, SetPasswordOptions *obj, Error **errp);

bool visit_type_SetPasswordOptions(Visitor *v, const char *name,
                 SetPasswordOptions **obj, Error **errp);

bool visit_type_SetPasswordOptionsVnc_members(Visitor *v, SetPasswordOptionsVnc *obj, Error **errp);

bool visit_type_SetPasswordOptionsVnc(Visitor *v, const char *name,
                 SetPasswordOptionsVnc **obj, Error **errp);

bool visit_type_q_obj_ExpirePasswordOptions_base_members(Visitor *v, q_obj_ExpirePasswordOptions_base *obj, Error **errp);

bool visit_type_q_obj_ExpirePasswordOptions_base(Visitor *v, const char *name,
                 q_obj_ExpirePasswordOptions_base **obj, Error **errp);

bool visit_type_ExpirePasswordOptions_members(Visitor *v, ExpirePasswordOptions *obj, Error **errp);

bool visit_type_ExpirePasswordOptions(Visitor *v, const char *name,
                 ExpirePasswordOptions **obj, Error **errp);

bool visit_type_ExpirePasswordOptionsVnc_members(Visitor *v, ExpirePasswordOptionsVnc *obj, Error **errp);

bool visit_type_ExpirePasswordOptionsVnc(Visitor *v, const char *name,
                 ExpirePasswordOptionsVnc **obj, Error **errp);

bool visit_type_ImageFormat(Visitor *v, const char *name,
                 ImageFormat *obj, Error **errp);

bool visit_type_q_obj_screendump_arg_members(Visitor *v, q_obj_screendump_arg *obj, Error **errp);

bool visit_type_q_obj_screendump_arg(Visitor *v, const char *name,
                 q_obj_screendump_arg **obj, Error **errp);

#if defined(CONFIG_SPICE)
bool visit_type_SpiceBasicInfo_members(Visitor *v, SpiceBasicInfo *obj, Error **errp);

bool visit_type_SpiceBasicInfo(Visitor *v, const char *name,
                 SpiceBasicInfo **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceServerInfo_members(Visitor *v, SpiceServerInfo *obj, Error **errp);

bool visit_type_SpiceServerInfo(Visitor *v, const char *name,
                 SpiceServerInfo **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceChannel_members(Visitor *v, SpiceChannel *obj, Error **errp);

bool visit_type_SpiceChannel(Visitor *v, const char *name,
                 SpiceChannel **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceQueryMouseMode(Visitor *v, const char *name,
                 SpiceQueryMouseMode *obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceChannelList(Visitor *v, const char *name,
                 SpiceChannelList **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceInfo_members(Visitor *v, SpiceInfo *obj, Error **errp);

bool visit_type_SpiceInfo(Visitor *v, const char *name,
                 SpiceInfo **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_q_obj_SPICE_CONNECTED_arg_members(Visitor *v, q_obj_SPICE_CONNECTED_arg *obj, Error **errp);

bool visit_type_q_obj_SPICE_CONNECTED_arg(Visitor *v, const char *name,
                 q_obj_SPICE_CONNECTED_arg **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_q_obj_SPICE_INITIALIZED_arg_members(Visitor *v, q_obj_SPICE_INITIALIZED_arg *obj, Error **errp);

bool visit_type_q_obj_SPICE_INITIALIZED_arg(Visitor *v, const char *name,
                 q_obj_SPICE_INITIALIZED_arg **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_q_obj_SPICE_DISCONNECTED_arg_members(Visitor *v, q_obj_SPICE_DISCONNECTED_arg *obj, Error **errp);

bool visit_type_q_obj_SPICE_DISCONNECTED_arg(Visitor *v, const char *name,
                 q_obj_SPICE_DISCONNECTED_arg **obj, Error **errp);
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
bool visit_type_VncBasicInfo_members(Visitor *v, VncBasicInfo *obj, Error **errp);

bool visit_type_VncBasicInfo(Visitor *v, const char *name,
                 VncBasicInfo **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncServerInfo_members(Visitor *v, VncServerInfo *obj, Error **errp);

bool visit_type_VncServerInfo(Visitor *v, const char *name,
                 VncServerInfo **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncClientInfo_members(Visitor *v, VncClientInfo *obj, Error **errp);

bool visit_type_VncClientInfo(Visitor *v, const char *name,
                 VncClientInfo **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncClientInfoList(Visitor *v, const char *name,
                 VncClientInfoList **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncInfo_members(Visitor *v, VncInfo *obj, Error **errp);

bool visit_type_VncInfo(Visitor *v, const char *name,
                 VncInfo **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncPrimaryAuth(Visitor *v, const char *name,
                 VncPrimaryAuth *obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncVencryptSubAuth(Visitor *v, const char *name,
                 VncVencryptSubAuth *obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncServerInfo2_members(Visitor *v, VncServerInfo2 *obj, Error **errp);

bool visit_type_VncServerInfo2(Visitor *v, const char *name,
                 VncServerInfo2 **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncServerInfo2List(Visitor *v, const char *name,
                 VncServerInfo2List **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncInfo2_members(Visitor *v, VncInfo2 *obj, Error **errp);

bool visit_type_VncInfo2(Visitor *v, const char *name,
                 VncInfo2 **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncInfo2List(Visitor *v, const char *name,
                 VncInfo2List **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_q_obj_change_vnc_password_arg_members(Visitor *v, q_obj_change_vnc_password_arg *obj, Error **errp);

bool visit_type_q_obj_change_vnc_password_arg(Visitor *v, const char *name,
                 q_obj_change_vnc_password_arg **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_q_obj_VNC_CONNECTED_arg_members(Visitor *v, q_obj_VNC_CONNECTED_arg *obj, Error **errp);

bool visit_type_q_obj_VNC_CONNECTED_arg(Visitor *v, const char *name,
                 q_obj_VNC_CONNECTED_arg **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_q_obj_VNC_INITIALIZED_arg_members(Visitor *v, q_obj_VNC_INITIALIZED_arg *obj, Error **errp);

bool visit_type_q_obj_VNC_INITIALIZED_arg(Visitor *v, const char *name,
                 q_obj_VNC_INITIALIZED_arg **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_q_obj_VNC_DISCONNECTED_arg_members(Visitor *v, q_obj_VNC_DISCONNECTED_arg *obj, Error **errp);

bool visit_type_q_obj_VNC_DISCONNECTED_arg(Visitor *v, const char *name,
                 q_obj_VNC_DISCONNECTED_arg **obj, Error **errp);
#endif /* defined(CONFIG_VNC) */

bool visit_type_MouseInfo_members(Visitor *v, MouseInfo *obj, Error **errp);

bool visit_type_MouseInfo(Visitor *v, const char *name,
                 MouseInfo **obj, Error **errp);

bool visit_type_MouseInfoList(Visitor *v, const char *name,
                 MouseInfoList **obj, Error **errp);

bool visit_type_QKeyCode(Visitor *v, const char *name,
                 QKeyCode *obj, Error **errp);

bool visit_type_KeyValueKind(Visitor *v, const char *name,
                 KeyValueKind *obj, Error **errp);

bool visit_type_IntWrapper_members(Visitor *v, IntWrapper *obj, Error **errp);

bool visit_type_IntWrapper(Visitor *v, const char *name,
                 IntWrapper **obj, Error **errp);

bool visit_type_QKeyCodeWrapper_members(Visitor *v, QKeyCodeWrapper *obj, Error **errp);

bool visit_type_QKeyCodeWrapper(Visitor *v, const char *name,
                 QKeyCodeWrapper **obj, Error **errp);

bool visit_type_q_obj_KeyValue_base_members(Visitor *v, q_obj_KeyValue_base *obj, Error **errp);

bool visit_type_q_obj_KeyValue_base(Visitor *v, const char *name,
                 q_obj_KeyValue_base **obj, Error **errp);

bool visit_type_KeyValue_members(Visitor *v, KeyValue *obj, Error **errp);

bool visit_type_KeyValue(Visitor *v, const char *name,
                 KeyValue **obj, Error **errp);

bool visit_type_KeyValueList(Visitor *v, const char *name,
                 KeyValueList **obj, Error **errp);

bool visit_type_q_obj_send_key_arg_members(Visitor *v, q_obj_send_key_arg *obj, Error **errp);

bool visit_type_q_obj_send_key_arg(Visitor *v, const char *name,
                 q_obj_send_key_arg **obj, Error **errp);

bool visit_type_InputButton(Visitor *v, const char *name,
                 InputButton *obj, Error **errp);

bool visit_type_InputAxis(Visitor *v, const char *name,
                 InputAxis *obj, Error **errp);

bool visit_type_InputKeyEvent_members(Visitor *v, InputKeyEvent *obj, Error **errp);

bool visit_type_InputKeyEvent(Visitor *v, const char *name,
                 InputKeyEvent **obj, Error **errp);

bool visit_type_InputBtnEvent_members(Visitor *v, InputBtnEvent *obj, Error **errp);

bool visit_type_InputBtnEvent(Visitor *v, const char *name,
                 InputBtnEvent **obj, Error **errp);

bool visit_type_InputMoveEvent_members(Visitor *v, InputMoveEvent *obj, Error **errp);

bool visit_type_InputMoveEvent(Visitor *v, const char *name,
                 InputMoveEvent **obj, Error **errp);

bool visit_type_InputEventKind(Visitor *v, const char *name,
                 InputEventKind *obj, Error **errp);

bool visit_type_InputKeyEventWrapper_members(Visitor *v, InputKeyEventWrapper *obj, Error **errp);

bool visit_type_InputKeyEventWrapper(Visitor *v, const char *name,
                 InputKeyEventWrapper **obj, Error **errp);

bool visit_type_InputBtnEventWrapper_members(Visitor *v, InputBtnEventWrapper *obj, Error **errp);

bool visit_type_InputBtnEventWrapper(Visitor *v, const char *name,
                 InputBtnEventWrapper **obj, Error **errp);

bool visit_type_InputMoveEventWrapper_members(Visitor *v, InputMoveEventWrapper *obj, Error **errp);

bool visit_type_InputMoveEventWrapper(Visitor *v, const char *name,
                 InputMoveEventWrapper **obj, Error **errp);

bool visit_type_q_obj_InputEvent_base_members(Visitor *v, q_obj_InputEvent_base *obj, Error **errp);

bool visit_type_q_obj_InputEvent_base(Visitor *v, const char *name,
                 q_obj_InputEvent_base **obj, Error **errp);

bool visit_type_InputEvent_members(Visitor *v, InputEvent *obj, Error **errp);

bool visit_type_InputEvent(Visitor *v, const char *name,
                 InputEvent **obj, Error **errp);

bool visit_type_InputEventList(Visitor *v, const char *name,
                 InputEventList **obj, Error **errp);

bool visit_type_q_obj_input_send_event_arg_members(Visitor *v, q_obj_input_send_event_arg *obj, Error **errp);

bool visit_type_q_obj_input_send_event_arg(Visitor *v, const char *name,
                 q_obj_input_send_event_arg **obj, Error **errp);

bool visit_type_DisplayGTK_members(Visitor *v, DisplayGTK *obj, Error **errp);

bool visit_type_DisplayGTK(Visitor *v, const char *name,
                 DisplayGTK **obj, Error **errp);

bool visit_type_DisplayEGLHeadless_members(Visitor *v, DisplayEGLHeadless *obj, Error **errp);

bool visit_type_DisplayEGLHeadless(Visitor *v, const char *name,
                 DisplayEGLHeadless **obj, Error **errp);

bool visit_type_DisplayDBus_members(Visitor *v, DisplayDBus *obj, Error **errp);

bool visit_type_DisplayDBus(Visitor *v, const char *name,
                 DisplayDBus **obj, Error **errp);

bool visit_type_DisplayGLMode(Visitor *v, const char *name,
                 DisplayGLMode *obj, Error **errp);

bool visit_type_DisplayCurses_members(Visitor *v, DisplayCurses *obj, Error **errp);

bool visit_type_DisplayCurses(Visitor *v, const char *name,
                 DisplayCurses **obj, Error **errp);

bool visit_type_DisplayCocoa_members(Visitor *v, DisplayCocoa *obj, Error **errp);

bool visit_type_DisplayCocoa(Visitor *v, const char *name,
                 DisplayCocoa **obj, Error **errp);

bool visit_type_HotKeyMod(Visitor *v, const char *name,
                 HotKeyMod *obj, Error **errp);

bool visit_type_DisplaySDL_members(Visitor *v, DisplaySDL *obj, Error **errp);

bool visit_type_DisplaySDL(Visitor *v, const char *name,
                 DisplaySDL **obj, Error **errp);

bool visit_type_DisplayType(Visitor *v, const char *name,
                 DisplayType *obj, Error **errp);

bool visit_type_q_obj_DisplayOptions_base_members(Visitor *v, q_obj_DisplayOptions_base *obj, Error **errp);

bool visit_type_q_obj_DisplayOptions_base(Visitor *v, const char *name,
                 q_obj_DisplayOptions_base **obj, Error **errp);

bool visit_type_DisplayOptions_members(Visitor *v, DisplayOptions *obj, Error **errp);

bool visit_type_DisplayOptions(Visitor *v, const char *name,
                 DisplayOptions **obj, Error **errp);

bool visit_type_DisplayReloadType(Visitor *v, const char *name,
                 DisplayReloadType *obj, Error **errp);

bool visit_type_DisplayReloadOptionsVNC_members(Visitor *v, DisplayReloadOptionsVNC *obj, Error **errp);

bool visit_type_DisplayReloadOptionsVNC(Visitor *v, const char *name,
                 DisplayReloadOptionsVNC **obj, Error **errp);

bool visit_type_q_obj_DisplayReloadOptions_base_members(Visitor *v, q_obj_DisplayReloadOptions_base *obj, Error **errp);

bool visit_type_q_obj_DisplayReloadOptions_base(Visitor *v, const char *name,
                 q_obj_DisplayReloadOptions_base **obj, Error **errp);

bool visit_type_DisplayReloadOptions_members(Visitor *v, DisplayReloadOptions *obj, Error **errp);

bool visit_type_DisplayReloadOptions(Visitor *v, const char *name,
                 DisplayReloadOptions **obj, Error **errp);

bool visit_type_DisplayUpdateType(Visitor *v, const char *name,
                 DisplayUpdateType *obj, Error **errp);

bool visit_type_DisplayUpdateOptionsVNC_members(Visitor *v, DisplayUpdateOptionsVNC *obj, Error **errp);

bool visit_type_DisplayUpdateOptionsVNC(Visitor *v, const char *name,
                 DisplayUpdateOptionsVNC **obj, Error **errp);

bool visit_type_q_obj_DisplayUpdateOptions_base_members(Visitor *v, q_obj_DisplayUpdateOptions_base *obj, Error **errp);

bool visit_type_q_obj_DisplayUpdateOptions_base(Visitor *v, const char *name,
                 q_obj_DisplayUpdateOptions_base **obj, Error **errp);

bool visit_type_DisplayUpdateOptions_members(Visitor *v, DisplayUpdateOptions *obj, Error **errp);

bool visit_type_DisplayUpdateOptions(Visitor *v, const char *name,
                 DisplayUpdateOptions **obj, Error **errp);

#endif /* QAPI_VISIT_UI_H */
