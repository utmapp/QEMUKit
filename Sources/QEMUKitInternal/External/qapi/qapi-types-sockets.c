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
#include "qapi-types-sockets.h"
#include "qapi-visit-sockets.h"

const QEnumLookup NetworkAddressFamily_lookup = {
    .array = (const char *const[]) {
        [NETWORK_ADDRESS_FAMILY_IPV4] = "ipv4",
        [NETWORK_ADDRESS_FAMILY_IPV6] = "ipv6",
        [NETWORK_ADDRESS_FAMILY_UNIX] = "unix",
        [NETWORK_ADDRESS_FAMILY_VSOCK] = "vsock",
        [NETWORK_ADDRESS_FAMILY_UNKNOWN] = "unknown",
    },
    .size = NETWORK_ADDRESS_FAMILY__MAX
};

void qapi_free_InetSocketAddressBase(InetSocketAddressBase *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_InetSocketAddressBase(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_InetSocketAddress(InetSocketAddress *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_InetSocketAddress(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_UnixSocketAddress(UnixSocketAddress *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_UnixSocketAddress(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VsockSocketAddress(VsockSocketAddress *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VsockSocketAddress(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_InetSocketAddressWrapper(InetSocketAddressWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_InetSocketAddressWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_UnixSocketAddressWrapper(UnixSocketAddressWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_UnixSocketAddressWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VsockSocketAddressWrapper(VsockSocketAddressWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VsockSocketAddressWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StringWrapper(StringWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StringWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_SocketAddressLegacy_base(q_obj_SocketAddressLegacy_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_SocketAddressLegacy_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SocketAddressLegacy(SocketAddressLegacy *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SocketAddressLegacy(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup SocketAddressType_lookup = {
    .array = (const char *const[]) {
        [SOCKET_ADDRESS_TYPE_INET] = "inet",
        [SOCKET_ADDRESS_TYPE_UNIX] = "unix",
        [SOCKET_ADDRESS_TYPE_VSOCK] = "vsock",
        [SOCKET_ADDRESS_TYPE_FD] = "fd",
    },
    .size = SOCKET_ADDRESS_TYPE__MAX
};

void qapi_free_q_obj_SocketAddress_base(q_obj_SocketAddress_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_SocketAddress_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SocketAddress(SocketAddress *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SocketAddress(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SocketAddressList(SocketAddressList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SocketAddressList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_InetSocketAddressBaseList(InetSocketAddressBaseList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_InetSocketAddressBaseList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_sockets_c;
