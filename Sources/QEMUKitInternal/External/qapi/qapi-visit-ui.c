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

#include "qemu-compat.h"
#include "error.h"
#include "qerror.h"
#include "qapi-visit-ui.h"

bool visit_type_DisplayProtocol(Visitor *v, const char *name,
                 DisplayProtocol *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DisplayProtocol_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_SetPasswordAction(Visitor *v, const char *name,
                 SetPasswordAction *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SetPasswordAction_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_SetPasswordOptions_base_members(Visitor *v, q_obj_SetPasswordOptions_base *obj, Error **errp)
{
    if (!visit_type_DisplayProtocol(v, "protocol", &obj->protocol, errp)) {
        return false;
    }
    if (!visit_type_str(v, "password", &obj->password, errp)) {
        return false;
    }
    if (visit_optional(v, "connected", &obj->has_connected)) {
        if (!visit_type_SetPasswordAction(v, "connected", &obj->connected, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_SetPasswordOptions_base(Visitor *v, const char *name,
                 q_obj_SetPasswordOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SetPasswordOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SetPasswordOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SetPasswordOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SetPasswordOptions_members(Visitor *v, SetPasswordOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_SetPasswordOptions_base_members(v, (q_obj_SetPasswordOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->protocol) {
    case DISPLAY_PROTOCOL_VNC:
        return visit_type_SetPasswordOptionsVnc_members(v, &obj->u.vnc, errp);
    case DISPLAY_PROTOCOL_SPICE:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_SetPasswordOptions(Visitor *v, const char *name,
                 SetPasswordOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SetPasswordOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SetPasswordOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SetPasswordOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SetPasswordOptionsVnc_members(Visitor *v, SetPasswordOptionsVnc *obj, Error **errp)
{
    if (visit_optional(v, "display", &obj->has_display)) {
        if (!visit_type_str(v, "display", &obj->display, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SetPasswordOptionsVnc(Visitor *v, const char *name,
                 SetPasswordOptionsVnc **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SetPasswordOptionsVnc), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SetPasswordOptionsVnc_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SetPasswordOptionsVnc(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_ExpirePasswordOptions_base_members(Visitor *v, q_obj_ExpirePasswordOptions_base *obj, Error **errp)
{
    if (!visit_type_DisplayProtocol(v, "protocol", &obj->protocol, errp)) {
        return false;
    }
    if (!visit_type_str(v, "time", &obj->time, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ExpirePasswordOptions_base(Visitor *v, const char *name,
                 q_obj_ExpirePasswordOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_ExpirePasswordOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_ExpirePasswordOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_ExpirePasswordOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ExpirePasswordOptions_members(Visitor *v, ExpirePasswordOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_ExpirePasswordOptions_base_members(v, (q_obj_ExpirePasswordOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->protocol) {
    case DISPLAY_PROTOCOL_VNC:
        return visit_type_ExpirePasswordOptionsVnc_members(v, &obj->u.vnc, errp);
    case DISPLAY_PROTOCOL_SPICE:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_ExpirePasswordOptions(Visitor *v, const char *name,
                 ExpirePasswordOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ExpirePasswordOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ExpirePasswordOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ExpirePasswordOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ExpirePasswordOptionsVnc_members(Visitor *v, ExpirePasswordOptionsVnc *obj, Error **errp)
{
    if (visit_optional(v, "display", &obj->has_display)) {
        if (!visit_type_str(v, "display", &obj->display, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ExpirePasswordOptionsVnc(Visitor *v, const char *name,
                 ExpirePasswordOptionsVnc **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ExpirePasswordOptionsVnc), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ExpirePasswordOptionsVnc_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ExpirePasswordOptionsVnc(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageFormat(Visitor *v, const char *name,
                 ImageFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ImageFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_screendump_arg_members(Visitor *v, q_obj_screendump_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (visit_optional(v, "device", &obj->has_device)) {
        if (!visit_type_str(v, "device", &obj->device, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "head", &obj->has_head)) {
        if (!visit_type_int(v, "head", &obj->head, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_ImageFormat(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_screendump_arg(Visitor *v, const char *name,
                 q_obj_screendump_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_screendump_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_screendump_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_screendump_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_SPICE)
bool visit_type_SpiceBasicInfo_members(Visitor *v, SpiceBasicInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "host", &obj->host, errp)) {
        return false;
    }
    if (!visit_type_str(v, "port", &obj->port, errp)) {
        return false;
    }
    if (!visit_type_NetworkAddressFamily(v, "family", &obj->family, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SpiceBasicInfo(Visitor *v, const char *name,
                 SpiceBasicInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SpiceBasicInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SpiceBasicInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SpiceBasicInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceServerInfo_members(Visitor *v, SpiceServerInfo *obj, Error **errp)
{
    if (!visit_type_SpiceBasicInfo_members(v, (SpiceBasicInfo *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "auth", &obj->has_auth)) {
        if (!visit_type_str(v, "auth", &obj->auth, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SpiceServerInfo(Visitor *v, const char *name,
                 SpiceServerInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SpiceServerInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SpiceServerInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SpiceServerInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceChannel_members(Visitor *v, SpiceChannel *obj, Error **errp)
{
    if (!visit_type_SpiceBasicInfo_members(v, (SpiceBasicInfo *)obj, errp)) {
        return false;
    }
    if (!visit_type_int(v, "connection-id", &obj->connection_id, errp)) {
        return false;
    }
    if (!visit_type_int(v, "channel-type", &obj->channel_type, errp)) {
        return false;
    }
    if (!visit_type_int(v, "channel-id", &obj->channel_id, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "tls", &obj->tls, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SpiceChannel(Visitor *v, const char *name,
                 SpiceChannel **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SpiceChannel), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SpiceChannel_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SpiceChannel(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceQueryMouseMode(Visitor *v, const char *name,
                 SpiceQueryMouseMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SpiceQueryMouseMode_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceChannelList(Visitor *v, const char *name,
                 SpiceChannelList **obj, Error **errp)
{
    bool ok = false;
    SpiceChannelList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SpiceChannelList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SpiceChannel(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SpiceChannelList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_SpiceInfo_members(Visitor *v, SpiceInfo *obj, Error **errp)
{
    if (!visit_type_bool(v, "enabled", &obj->enabled, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "migrated", &obj->migrated, errp)) {
        return false;
    }
    if (visit_optional(v, "host", &obj->has_host)) {
        if (!visit_type_str(v, "host", &obj->host, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "port", &obj->has_port)) {
        if (!visit_type_int(v, "port", &obj->port, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-port", &obj->has_tls_port)) {
        if (!visit_type_int(v, "tls-port", &obj->tls_port, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auth", &obj->has_auth)) {
        if (!visit_type_str(v, "auth", &obj->auth, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compiled-version", &obj->has_compiled_version)) {
        if (!visit_type_str(v, "compiled-version", &obj->compiled_version, errp)) {
            return false;
        }
    }
    if (!visit_type_SpiceQueryMouseMode(v, "mouse-mode", &obj->mouse_mode, errp)) {
        return false;
    }
    if (visit_optional(v, "channels", &obj->has_channels)) {
        if (!visit_type_SpiceChannelList(v, "channels", &obj->channels, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SpiceInfo(Visitor *v, const char *name,
                 SpiceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SpiceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SpiceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SpiceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_q_obj_SPICE_CONNECTED_arg_members(Visitor *v, q_obj_SPICE_CONNECTED_arg *obj, Error **errp)
{
    if (!visit_type_SpiceBasicInfo(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_SpiceBasicInfo(v, "client", &obj->client, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_SPICE_CONNECTED_arg(Visitor *v, const char *name,
                 q_obj_SPICE_CONNECTED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SPICE_CONNECTED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SPICE_CONNECTED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SPICE_CONNECTED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_q_obj_SPICE_INITIALIZED_arg_members(Visitor *v, q_obj_SPICE_INITIALIZED_arg *obj, Error **errp)
{
    if (!visit_type_SpiceServerInfo(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_SpiceChannel(v, "client", &obj->client, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_SPICE_INITIALIZED_arg(Visitor *v, const char *name,
                 q_obj_SPICE_INITIALIZED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SPICE_INITIALIZED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SPICE_INITIALIZED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SPICE_INITIALIZED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
bool visit_type_q_obj_SPICE_DISCONNECTED_arg_members(Visitor *v, q_obj_SPICE_DISCONNECTED_arg *obj, Error **errp)
{
    if (!visit_type_SpiceBasicInfo(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_SpiceBasicInfo(v, "client", &obj->client, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_SPICE_DISCONNECTED_arg(Visitor *v, const char *name,
                 q_obj_SPICE_DISCONNECTED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SPICE_DISCONNECTED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SPICE_DISCONNECTED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SPICE_DISCONNECTED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
bool visit_type_VncBasicInfo_members(Visitor *v, VncBasicInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "host", &obj->host, errp)) {
        return false;
    }
    if (!visit_type_str(v, "service", &obj->service, errp)) {
        return false;
    }
    if (!visit_type_NetworkAddressFamily(v, "family", &obj->family, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "websocket", &obj->websocket, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VncBasicInfo(Visitor *v, const char *name,
                 VncBasicInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VncBasicInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VncBasicInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncBasicInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncServerInfo_members(Visitor *v, VncServerInfo *obj, Error **errp)
{
    if (!visit_type_VncBasicInfo_members(v, (VncBasicInfo *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "auth", &obj->has_auth)) {
        if (!visit_type_str(v, "auth", &obj->auth, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VncServerInfo(Visitor *v, const char *name,
                 VncServerInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VncServerInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VncServerInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncServerInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncClientInfo_members(Visitor *v, VncClientInfo *obj, Error **errp)
{
    if (!visit_type_VncBasicInfo_members(v, (VncBasicInfo *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "x509_dname", &obj->has_x509_dname)) {
        if (!visit_type_str(v, "x509_dname", &obj->x509_dname, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "sasl_username", &obj->has_sasl_username)) {
        if (!visit_type_str(v, "sasl_username", &obj->sasl_username, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VncClientInfo(Visitor *v, const char *name,
                 VncClientInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VncClientInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VncClientInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncClientInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncClientInfoList(Visitor *v, const char *name,
                 VncClientInfoList **obj, Error **errp)
{
    bool ok = false;
    VncClientInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (VncClientInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_VncClientInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncClientInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncInfo_members(Visitor *v, VncInfo *obj, Error **errp)
{
    if (!visit_type_bool(v, "enabled", &obj->enabled, errp)) {
        return false;
    }
    if (visit_optional(v, "host", &obj->has_host)) {
        if (!visit_type_str(v, "host", &obj->host, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "family", &obj->has_family)) {
        if (!visit_type_NetworkAddressFamily(v, "family", &obj->family, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "service", &obj->has_service)) {
        if (!visit_type_str(v, "service", &obj->service, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auth", &obj->has_auth)) {
        if (!visit_type_str(v, "auth", &obj->auth, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "clients", &obj->has_clients)) {
        if (!visit_type_VncClientInfoList(v, "clients", &obj->clients, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VncInfo(Visitor *v, const char *name,
                 VncInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VncInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VncInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncPrimaryAuth(Visitor *v, const char *name,
                 VncPrimaryAuth *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &VncPrimaryAuth_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncVencryptSubAuth(Visitor *v, const char *name,
                 VncVencryptSubAuth *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &VncVencryptSubAuth_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncServerInfo2_members(Visitor *v, VncServerInfo2 *obj, Error **errp)
{
    if (!visit_type_VncBasicInfo_members(v, (VncBasicInfo *)obj, errp)) {
        return false;
    }
    if (!visit_type_VncPrimaryAuth(v, "auth", &obj->auth, errp)) {
        return false;
    }
    if (visit_optional(v, "vencrypt", &obj->has_vencrypt)) {
        if (!visit_type_VncVencryptSubAuth(v, "vencrypt", &obj->vencrypt, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VncServerInfo2(Visitor *v, const char *name,
                 VncServerInfo2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VncServerInfo2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VncServerInfo2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncServerInfo2(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncServerInfo2List(Visitor *v, const char *name,
                 VncServerInfo2List **obj, Error **errp)
{
    bool ok = false;
    VncServerInfo2List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (VncServerInfo2List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_VncServerInfo2(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncServerInfo2List(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncInfo2_members(Visitor *v, VncInfo2 *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_VncServerInfo2List(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_VncClientInfoList(v, "clients", &obj->clients, errp)) {
        return false;
    }
    if (!visit_type_VncPrimaryAuth(v, "auth", &obj->auth, errp)) {
        return false;
    }
    if (visit_optional(v, "vencrypt", &obj->has_vencrypt)) {
        if (!visit_type_VncVencryptSubAuth(v, "vencrypt", &obj->vencrypt, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "display", &obj->has_display)) {
        if (!visit_type_str(v, "display", &obj->display, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VncInfo2(Visitor *v, const char *name,
                 VncInfo2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VncInfo2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VncInfo2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncInfo2(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_VncInfo2List(Visitor *v, const char *name,
                 VncInfo2List **obj, Error **errp)
{
    bool ok = false;
    VncInfo2List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (VncInfo2List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_VncInfo2(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VncInfo2List(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_q_obj_change_vnc_password_arg_members(Visitor *v, q_obj_change_vnc_password_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "password", &obj->password, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_change_vnc_password_arg(Visitor *v, const char *name,
                 q_obj_change_vnc_password_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_change_vnc_password_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_change_vnc_password_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_change_vnc_password_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_q_obj_VNC_CONNECTED_arg_members(Visitor *v, q_obj_VNC_CONNECTED_arg *obj, Error **errp)
{
    if (!visit_type_VncServerInfo(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_VncBasicInfo(v, "client", &obj->client, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_VNC_CONNECTED_arg(Visitor *v, const char *name,
                 q_obj_VNC_CONNECTED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_VNC_CONNECTED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_VNC_CONNECTED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_VNC_CONNECTED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_q_obj_VNC_INITIALIZED_arg_members(Visitor *v, q_obj_VNC_INITIALIZED_arg *obj, Error **errp)
{
    if (!visit_type_VncServerInfo(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_VncClientInfo(v, "client", &obj->client, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_VNC_INITIALIZED_arg(Visitor *v, const char *name,
                 q_obj_VNC_INITIALIZED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_VNC_INITIALIZED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_VNC_INITIALIZED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_VNC_INITIALIZED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
bool visit_type_q_obj_VNC_DISCONNECTED_arg_members(Visitor *v, q_obj_VNC_DISCONNECTED_arg *obj, Error **errp)
{
    if (!visit_type_VncServerInfo(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_VncClientInfo(v, "client", &obj->client, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_VNC_DISCONNECTED_arg(Visitor *v, const char *name,
                 q_obj_VNC_DISCONNECTED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_VNC_DISCONNECTED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_VNC_DISCONNECTED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_VNC_DISCONNECTED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VNC) */

bool visit_type_MouseInfo_members(Visitor *v, MouseInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_int(v, "index", &obj->index, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "current", &obj->current, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "absolute", &obj->absolute, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MouseInfo(Visitor *v, const char *name,
                 MouseInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MouseInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MouseInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MouseInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MouseInfoList(Visitor *v, const char *name,
                 MouseInfoList **obj, Error **errp)
{
    bool ok = false;
    MouseInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (MouseInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_MouseInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MouseInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QKeyCode(Visitor *v, const char *name,
                 QKeyCode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QKeyCode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_KeyValueKind(Visitor *v, const char *name,
                 KeyValueKind *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &KeyValueKind_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_IntWrapper_members(Visitor *v, IntWrapper *obj, Error **errp)
{
    if (!visit_type_int(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_IntWrapper(Visitor *v, const char *name,
                 IntWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(IntWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_IntWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_IntWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QKeyCodeWrapper_members(Visitor *v, QKeyCodeWrapper *obj, Error **errp)
{
    if (!visit_type_QKeyCode(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QKeyCodeWrapper(Visitor *v, const char *name,
                 QKeyCodeWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QKeyCodeWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QKeyCodeWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QKeyCodeWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_KeyValue_base_members(Visitor *v, q_obj_KeyValue_base *obj, Error **errp)
{
    if (!visit_type_KeyValueKind(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_KeyValue_base(Visitor *v, const char *name,
                 q_obj_KeyValue_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_KeyValue_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_KeyValue_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_KeyValue_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_KeyValue_members(Visitor *v, KeyValue *obj, Error **errp)
{
    if (!visit_type_q_obj_KeyValue_base_members(v, (q_obj_KeyValue_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case KEY_VALUE_KIND_NUMBER:
        return visit_type_IntWrapper_members(v, &obj->u.number, errp);
    case KEY_VALUE_KIND_QCODE:
        return visit_type_QKeyCodeWrapper_members(v, &obj->u.qcode, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_KeyValue(Visitor *v, const char *name,
                 KeyValue **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(KeyValue), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_KeyValue_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_KeyValue(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_KeyValueList(Visitor *v, const char *name,
                 KeyValueList **obj, Error **errp)
{
    bool ok = false;
    KeyValueList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (KeyValueList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_KeyValue(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_KeyValueList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_send_key_arg_members(Visitor *v, q_obj_send_key_arg *obj, Error **errp)
{
    if (!visit_type_KeyValueList(v, "keys", &obj->keys, errp)) {
        return false;
    }
    if (visit_optional(v, "hold-time", &obj->has_hold_time)) {
        if (!visit_type_int(v, "hold-time", &obj->hold_time, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_send_key_arg(Visitor *v, const char *name,
                 q_obj_send_key_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_send_key_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_send_key_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_send_key_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputButton(Visitor *v, const char *name,
                 InputButton *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &InputButton_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_InputAxis(Visitor *v, const char *name,
                 InputAxis *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &InputAxis_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_InputKeyEvent_members(Visitor *v, InputKeyEvent *obj, Error **errp)
{
    if (!visit_type_KeyValue(v, "key", &obj->key, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "down", &obj->down, errp)) {
        return false;
    }
    return true;
}

bool visit_type_InputKeyEvent(Visitor *v, const char *name,
                 InputKeyEvent **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputKeyEvent), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputKeyEvent_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputKeyEvent(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputBtnEvent_members(Visitor *v, InputBtnEvent *obj, Error **errp)
{
    if (!visit_type_InputButton(v, "button", &obj->button, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "down", &obj->down, errp)) {
        return false;
    }
    return true;
}

bool visit_type_InputBtnEvent(Visitor *v, const char *name,
                 InputBtnEvent **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputBtnEvent), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputBtnEvent_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputBtnEvent(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputMoveEvent_members(Visitor *v, InputMoveEvent *obj, Error **errp)
{
    if (!visit_type_InputAxis(v, "axis", &obj->axis, errp)) {
        return false;
    }
    if (!visit_type_int(v, "value", &obj->value, errp)) {
        return false;
    }
    return true;
}

bool visit_type_InputMoveEvent(Visitor *v, const char *name,
                 InputMoveEvent **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputMoveEvent), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputMoveEvent_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputMoveEvent(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputEventKind(Visitor *v, const char *name,
                 InputEventKind *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &InputEventKind_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_InputKeyEventWrapper_members(Visitor *v, InputKeyEventWrapper *obj, Error **errp)
{
    if (!visit_type_InputKeyEvent(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_InputKeyEventWrapper(Visitor *v, const char *name,
                 InputKeyEventWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputKeyEventWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputKeyEventWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputKeyEventWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputBtnEventWrapper_members(Visitor *v, InputBtnEventWrapper *obj, Error **errp)
{
    if (!visit_type_InputBtnEvent(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_InputBtnEventWrapper(Visitor *v, const char *name,
                 InputBtnEventWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputBtnEventWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputBtnEventWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputBtnEventWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputMoveEventWrapper_members(Visitor *v, InputMoveEventWrapper *obj, Error **errp)
{
    if (!visit_type_InputMoveEvent(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_InputMoveEventWrapper(Visitor *v, const char *name,
                 InputMoveEventWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputMoveEventWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputMoveEventWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputMoveEventWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_InputEvent_base_members(Visitor *v, q_obj_InputEvent_base *obj, Error **errp)
{
    if (!visit_type_InputEventKind(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_InputEvent_base(Visitor *v, const char *name,
                 q_obj_InputEvent_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_InputEvent_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_InputEvent_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_InputEvent_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputEvent_members(Visitor *v, InputEvent *obj, Error **errp)
{
    if (!visit_type_q_obj_InputEvent_base_members(v, (q_obj_InputEvent_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case INPUT_EVENT_KIND_KEY:
        return visit_type_InputKeyEventWrapper_members(v, &obj->u.key, errp);
    case INPUT_EVENT_KIND_BTN:
        return visit_type_InputBtnEventWrapper_members(v, &obj->u.btn, errp);
    case INPUT_EVENT_KIND_REL:
        return visit_type_InputMoveEventWrapper_members(v, &obj->u.rel, errp);
    case INPUT_EVENT_KIND_ABS:
        return visit_type_InputMoveEventWrapper_members(v, &obj->u.abs, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_InputEvent(Visitor *v, const char *name,
                 InputEvent **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InputEvent), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InputEvent_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputEvent(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InputEventList(Visitor *v, const char *name,
                 InputEventList **obj, Error **errp)
{
    bool ok = false;
    InputEventList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (InputEventList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_InputEvent(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InputEventList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_input_send_event_arg_members(Visitor *v, q_obj_input_send_event_arg *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (!visit_type_str(v, "device", &obj->device, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "head", &obj->has_head)) {
        if (!visit_type_int(v, "head", &obj->head, errp)) {
            return false;
        }
    }
    if (!visit_type_InputEventList(v, "events", &obj->events, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_input_send_event_arg(Visitor *v, const char *name,
                 q_obj_input_send_event_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_input_send_event_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_input_send_event_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_input_send_event_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayGTK_members(Visitor *v, DisplayGTK *obj, Error **errp)
{
    if (visit_optional(v, "grab-on-hover", &obj->has_grab_on_hover)) {
        if (!visit_type_bool(v, "grab-on-hover", &obj->grab_on_hover, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "zoom-to-fit", &obj->has_zoom_to_fit)) {
        if (!visit_type_bool(v, "zoom-to-fit", &obj->zoom_to_fit, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "show-tabs", &obj->has_show_tabs)) {
        if (!visit_type_bool(v, "show-tabs", &obj->show_tabs, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "show-menubar", &obj->has_show_menubar)) {
        if (!visit_type_bool(v, "show-menubar", &obj->show_menubar, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DisplayGTK(Visitor *v, const char *name,
                 DisplayGTK **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayGTK), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayGTK_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayGTK(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayEGLHeadless_members(Visitor *v, DisplayEGLHeadless *obj, Error **errp)
{
    if (visit_optional(v, "rendernode", &obj->has_rendernode)) {
        if (!visit_type_str(v, "rendernode", &obj->rendernode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DisplayEGLHeadless(Visitor *v, const char *name,
                 DisplayEGLHeadless **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayEGLHeadless), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayEGLHeadless_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayEGLHeadless(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayDBus_members(Visitor *v, DisplayDBus *obj, Error **errp)
{
    if (visit_optional(v, "rendernode", &obj->has_rendernode)) {
        if (!visit_type_str(v, "rendernode", &obj->rendernode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "addr", &obj->has_addr)) {
        if (!visit_type_str(v, "addr", &obj->addr, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "p2p", &obj->has_p2p)) {
        if (!visit_type_bool(v, "p2p", &obj->p2p, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "audiodev", &obj->has_audiodev)) {
        if (!visit_type_str(v, "audiodev", &obj->audiodev, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DisplayDBus(Visitor *v, const char *name,
                 DisplayDBus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayDBus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayDBus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayDBus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayGLMode(Visitor *v, const char *name,
                 DisplayGLMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DisplayGLMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_DisplayCurses_members(Visitor *v, DisplayCurses *obj, Error **errp)
{
    if (visit_optional(v, "charset", &obj->has_charset)) {
        if (!visit_type_str(v, "charset", &obj->charset, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DisplayCurses(Visitor *v, const char *name,
                 DisplayCurses **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayCurses), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayCurses_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayCurses(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayCocoa_members(Visitor *v, DisplayCocoa *obj, Error **errp)
{
    if (visit_optional(v, "left-command-key", &obj->has_left_command_key)) {
        if (!visit_type_bool(v, "left-command-key", &obj->left_command_key, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "full-grab", &obj->has_full_grab)) {
        if (!visit_type_bool(v, "full-grab", &obj->full_grab, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "swap-opt-cmd", &obj->has_swap_opt_cmd)) {
        if (!visit_type_bool(v, "swap-opt-cmd", &obj->swap_opt_cmd, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DisplayCocoa(Visitor *v, const char *name,
                 DisplayCocoa **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayCocoa), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayCocoa_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayCocoa(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HotKeyMod(Visitor *v, const char *name,
                 HotKeyMod *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HotKeyMod_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_DisplaySDL_members(Visitor *v, DisplaySDL *obj, Error **errp)
{
    if (visit_optional(v, "grab-mod", &obj->has_grab_mod)) {
        if (!visit_type_HotKeyMod(v, "grab-mod", &obj->grab_mod, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DisplaySDL(Visitor *v, const char *name,
                 DisplaySDL **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplaySDL), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplaySDL_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplaySDL(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayType(Visitor *v, const char *name,
                 DisplayType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DisplayType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_DisplayOptions_base_members(Visitor *v, q_obj_DisplayOptions_base *obj, Error **errp)
{
    if (!visit_type_DisplayType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "full-screen", &obj->has_full_screen)) {
        if (!visit_type_bool(v, "full-screen", &obj->full_screen, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "window-close", &obj->has_window_close)) {
        if (!visit_type_bool(v, "window-close", &obj->window_close, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "show-cursor", &obj->has_show_cursor)) {
        if (!visit_type_bool(v, "show-cursor", &obj->show_cursor, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "gl", &obj->has_gl)) {
        if (!visit_type_DisplayGLMode(v, "gl", &obj->gl, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_DisplayOptions_base(Visitor *v, const char *name,
                 q_obj_DisplayOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_DisplayOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_DisplayOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_DisplayOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayOptions_members(Visitor *v, DisplayOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_DisplayOptions_base_members(v, (q_obj_DisplayOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
#if defined(CONFIG_GTK)
    case DISPLAY_TYPE_GTK:
        return visit_type_DisplayGTK_members(v, &obj->u.gtk, errp);
#endif /* defined(CONFIG_GTK) */
#if defined(CONFIG_COCOA)
    case DISPLAY_TYPE_COCOA:
        return visit_type_DisplayCocoa_members(v, &obj->u.cocoa, errp);
#endif /* defined(CONFIG_COCOA) */
#if defined(CONFIG_CURSES)
    case DISPLAY_TYPE_CURSES:
        return visit_type_DisplayCurses_members(v, &obj->u.curses, errp);
#endif /* defined(CONFIG_CURSES) */
#if defined(CONFIG_OPENGL)
    case DISPLAY_TYPE_EGL_HEADLESS:
        return visit_type_DisplayEGLHeadless_members(v, &obj->u.egl_headless, errp);
#endif /* defined(CONFIG_OPENGL) */
#if defined(CONFIG_DBUS_DISPLAY)
    case DISPLAY_TYPE_DBUS:
        return visit_type_DisplayDBus_members(v, &obj->u.dbus, errp);
#endif /* defined(CONFIG_DBUS_DISPLAY) */
#if defined(CONFIG_SDL)
    case DISPLAY_TYPE_SDL:
        return visit_type_DisplaySDL_members(v, &obj->u.sdl, errp);
#endif /* defined(CONFIG_SDL) */
    case DISPLAY_TYPE_DEFAULT:
        break;
    case DISPLAY_TYPE_NONE:
        break;
#if defined(CONFIG_SPICE)
    case DISPLAY_TYPE_SPICE_APP:
        break;
#endif /* defined(CONFIG_SPICE) */
    default:
        abort();
    }
    return true;
}

bool visit_type_DisplayOptions(Visitor *v, const char *name,
                 DisplayOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayReloadType(Visitor *v, const char *name,
                 DisplayReloadType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DisplayReloadType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_DisplayReloadOptionsVNC_members(Visitor *v, DisplayReloadOptionsVNC *obj, Error **errp)
{
    if (visit_optional(v, "tls-certs", &obj->has_tls_certs)) {
        if (!visit_type_bool(v, "tls-certs", &obj->tls_certs, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DisplayReloadOptionsVNC(Visitor *v, const char *name,
                 DisplayReloadOptionsVNC **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayReloadOptionsVNC), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayReloadOptionsVNC_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayReloadOptionsVNC(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_DisplayReloadOptions_base_members(Visitor *v, q_obj_DisplayReloadOptions_base *obj, Error **errp)
{
    if (!visit_type_DisplayReloadType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_DisplayReloadOptions_base(Visitor *v, const char *name,
                 q_obj_DisplayReloadOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_DisplayReloadOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_DisplayReloadOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_DisplayReloadOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayReloadOptions_members(Visitor *v, DisplayReloadOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_DisplayReloadOptions_base_members(v, (q_obj_DisplayReloadOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case DISPLAY_RELOAD_TYPE_VNC:
        return visit_type_DisplayReloadOptionsVNC_members(v, &obj->u.vnc, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_DisplayReloadOptions(Visitor *v, const char *name,
                 DisplayReloadOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayReloadOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayReloadOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayReloadOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayUpdateType(Visitor *v, const char *name,
                 DisplayUpdateType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DisplayUpdateType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_DisplayUpdateOptionsVNC_members(Visitor *v, DisplayUpdateOptionsVNC *obj, Error **errp)
{
    if (visit_optional(v, "addresses", &obj->has_addresses)) {
        if (!visit_type_SocketAddressList(v, "addresses", &obj->addresses, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DisplayUpdateOptionsVNC(Visitor *v, const char *name,
                 DisplayUpdateOptionsVNC **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayUpdateOptionsVNC), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayUpdateOptionsVNC_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayUpdateOptionsVNC(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_DisplayUpdateOptions_base_members(Visitor *v, q_obj_DisplayUpdateOptions_base *obj, Error **errp)
{
    if (!visit_type_DisplayUpdateType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_DisplayUpdateOptions_base(Visitor *v, const char *name,
                 q_obj_DisplayUpdateOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_DisplayUpdateOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_DisplayUpdateOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_DisplayUpdateOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DisplayUpdateOptions_members(Visitor *v, DisplayUpdateOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_DisplayUpdateOptions_base_members(v, (q_obj_DisplayUpdateOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case DISPLAY_UPDATE_TYPE_VNC:
        return visit_type_DisplayUpdateOptionsVNC_members(v, &obj->u.vnc, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_DisplayUpdateOptions(Visitor *v, const char *name,
                 DisplayUpdateOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DisplayUpdateOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DisplayUpdateOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DisplayUpdateOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_ui_c;
