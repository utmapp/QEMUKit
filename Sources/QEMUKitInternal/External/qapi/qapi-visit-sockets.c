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
#include "qapi-visit-sockets.h"

bool visit_type_NetworkAddressFamily(Visitor *v, const char *name,
                 NetworkAddressFamily *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NetworkAddressFamily_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_InetSocketAddressBase_members(Visitor *v, InetSocketAddressBase *obj, Error **errp)
{
    if (!visit_type_str(v, "host", &obj->host, errp)) {
        return false;
    }
    if (!visit_type_str(v, "port", &obj->port, errp)) {
        return false;
    }
    return true;
}

bool visit_type_InetSocketAddressBase(Visitor *v, const char *name,
                 InetSocketAddressBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InetSocketAddressBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InetSocketAddressBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InetSocketAddressBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InetSocketAddress_members(Visitor *v, InetSocketAddress *obj, Error **errp)
{
    if (!visit_type_InetSocketAddressBase_members(v, (InetSocketAddressBase *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "numeric", &obj->has_numeric)) {
        if (!visit_type_bool(v, "numeric", &obj->numeric, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "to", &obj->has_to)) {
        if (!visit_type_uint16(v, "to", &obj->to, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ipv4", &obj->has_ipv4)) {
        if (!visit_type_bool(v, "ipv4", &obj->ipv4, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ipv6", &obj->has_ipv6)) {
        if (!visit_type_bool(v, "ipv6", &obj->ipv6, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "keep-alive", &obj->has_keep_alive)) {
        if (!visit_type_bool(v, "keep-alive", &obj->keep_alive, errp)) {
            return false;
        }
    }
#if defined(HAVE_IPPROTO_MPTCP)
    if (visit_optional(v, "mptcp", &obj->has_mptcp)) {
        if (!visit_type_bool(v, "mptcp", &obj->mptcp, errp)) {
            return false;
        }
    }
#endif /* defined(HAVE_IPPROTO_MPTCP) */
    return true;
}

bool visit_type_InetSocketAddress(Visitor *v, const char *name,
                 InetSocketAddress **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InetSocketAddress), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InetSocketAddress_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InetSocketAddress(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UnixSocketAddress_members(Visitor *v, UnixSocketAddress *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
#if defined(CONFIG_LINUX)
    if (visit_optional(v, "abstract", &obj->has_abstract)) {
        if (!visit_type_bool(v, "abstract", &obj->abstract, errp)) {
            return false;
        }
    }
#endif /* defined(CONFIG_LINUX) */
#if defined(CONFIG_LINUX)
    if (visit_optional(v, "tight", &obj->has_tight)) {
        if (!visit_type_bool(v, "tight", &obj->tight, errp)) {
            return false;
        }
    }
#endif /* defined(CONFIG_LINUX) */
    return true;
}

bool visit_type_UnixSocketAddress(Visitor *v, const char *name,
                 UnixSocketAddress **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UnixSocketAddress), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UnixSocketAddress_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UnixSocketAddress(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VsockSocketAddress_members(Visitor *v, VsockSocketAddress *obj, Error **errp)
{
    if (!visit_type_str(v, "cid", &obj->cid, errp)) {
        return false;
    }
    if (!visit_type_str(v, "port", &obj->port, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VsockSocketAddress(Visitor *v, const char *name,
                 VsockSocketAddress **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VsockSocketAddress), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VsockSocketAddress_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VsockSocketAddress(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InetSocketAddressWrapper_members(Visitor *v, InetSocketAddressWrapper *obj, Error **errp)
{
    if (!visit_type_InetSocketAddress(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_InetSocketAddressWrapper(Visitor *v, const char *name,
                 InetSocketAddressWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(InetSocketAddressWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_InetSocketAddressWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InetSocketAddressWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UnixSocketAddressWrapper_members(Visitor *v, UnixSocketAddressWrapper *obj, Error **errp)
{
    if (!visit_type_UnixSocketAddress(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UnixSocketAddressWrapper(Visitor *v, const char *name,
                 UnixSocketAddressWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UnixSocketAddressWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UnixSocketAddressWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UnixSocketAddressWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VsockSocketAddressWrapper_members(Visitor *v, VsockSocketAddressWrapper *obj, Error **errp)
{
    if (!visit_type_VsockSocketAddress(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VsockSocketAddressWrapper(Visitor *v, const char *name,
                 VsockSocketAddressWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VsockSocketAddressWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VsockSocketAddressWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VsockSocketAddressWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_StringWrapper_members(Visitor *v, StringWrapper *obj, Error **errp)
{
    if (!visit_type_String(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_StringWrapper(Visitor *v, const char *name,
                 StringWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(StringWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_StringWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_StringWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_SocketAddressLegacy_base_members(Visitor *v, q_obj_SocketAddressLegacy_base *obj, Error **errp)
{
    if (!visit_type_SocketAddressType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_SocketAddressLegacy_base(Visitor *v, const char *name,
                 q_obj_SocketAddressLegacy_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SocketAddressLegacy_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SocketAddressLegacy_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SocketAddressLegacy_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SocketAddressLegacy_members(Visitor *v, SocketAddressLegacy *obj, Error **errp)
{
    if (!visit_type_q_obj_SocketAddressLegacy_base_members(v, (q_obj_SocketAddressLegacy_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case SOCKET_ADDRESS_TYPE_INET:
        return visit_type_InetSocketAddressWrapper_members(v, &obj->u.inet, errp);
    case SOCKET_ADDRESS_TYPE_UNIX:
        return visit_type_UnixSocketAddressWrapper_members(v, &obj->u.q_unix, errp);
    case SOCKET_ADDRESS_TYPE_VSOCK:
        return visit_type_VsockSocketAddressWrapper_members(v, &obj->u.vsock, errp);
    case SOCKET_ADDRESS_TYPE_FD:
        return visit_type_StringWrapper_members(v, &obj->u.fd, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_SocketAddressLegacy(Visitor *v, const char *name,
                 SocketAddressLegacy **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SocketAddressLegacy), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SocketAddressLegacy_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SocketAddressLegacy(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SocketAddressType(Visitor *v, const char *name,
                 SocketAddressType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SocketAddressType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_SocketAddress_base_members(Visitor *v, q_obj_SocketAddress_base *obj, Error **errp)
{
    if (!visit_type_SocketAddressType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_SocketAddress_base(Visitor *v, const char *name,
                 q_obj_SocketAddress_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SocketAddress_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SocketAddress_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SocketAddress_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SocketAddress_members(Visitor *v, SocketAddress *obj, Error **errp)
{
    if (!visit_type_q_obj_SocketAddress_base_members(v, (q_obj_SocketAddress_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case SOCKET_ADDRESS_TYPE_INET:
        return visit_type_InetSocketAddress_members(v, &obj->u.inet, errp);
    case SOCKET_ADDRESS_TYPE_UNIX:
        return visit_type_UnixSocketAddress_members(v, &obj->u.q_unix, errp);
    case SOCKET_ADDRESS_TYPE_VSOCK:
        return visit_type_VsockSocketAddress_members(v, &obj->u.vsock, errp);
    case SOCKET_ADDRESS_TYPE_FD:
        return visit_type_String_members(v, &obj->u.fd, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_SocketAddress(Visitor *v, const char *name,
                 SocketAddress **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SocketAddress), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SocketAddress_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SocketAddress(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SocketAddressList(Visitor *v, const char *name,
                 SocketAddressList **obj, Error **errp)
{
    bool ok = false;
    SocketAddressList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SocketAddressList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SocketAddress(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SocketAddressList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_InetSocketAddressBaseList(Visitor *v, const char *name,
                 InetSocketAddressBaseList **obj, Error **errp)
{
    bool ok = false;
    InetSocketAddressBaseList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (InetSocketAddressBaseList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_InetSocketAddressBase(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_InetSocketAddressBaseList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_sockets_c;
