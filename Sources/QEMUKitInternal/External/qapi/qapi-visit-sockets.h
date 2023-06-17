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

#ifndef QAPI_VISIT_SOCKETS_H
#define QAPI_VISIT_SOCKETS_H

#include "qapi-builtin-visit.h"
#include "qapi-types-sockets.h"

#include "qapi-visit-common.h"

bool visit_type_NetworkAddressFamily(Visitor *v, const char *name,
                 NetworkAddressFamily *obj, Error **errp);

bool visit_type_InetSocketAddressBase_members(Visitor *v, InetSocketAddressBase *obj, Error **errp);

bool visit_type_InetSocketAddressBase(Visitor *v, const char *name,
                 InetSocketAddressBase **obj, Error **errp);

bool visit_type_InetSocketAddress_members(Visitor *v, InetSocketAddress *obj, Error **errp);

bool visit_type_InetSocketAddress(Visitor *v, const char *name,
                 InetSocketAddress **obj, Error **errp);

bool visit_type_UnixSocketAddress_members(Visitor *v, UnixSocketAddress *obj, Error **errp);

bool visit_type_UnixSocketAddress(Visitor *v, const char *name,
                 UnixSocketAddress **obj, Error **errp);

bool visit_type_VsockSocketAddress_members(Visitor *v, VsockSocketAddress *obj, Error **errp);

bool visit_type_VsockSocketAddress(Visitor *v, const char *name,
                 VsockSocketAddress **obj, Error **errp);

bool visit_type_InetSocketAddressWrapper_members(Visitor *v, InetSocketAddressWrapper *obj, Error **errp);

bool visit_type_InetSocketAddressWrapper(Visitor *v, const char *name,
                 InetSocketAddressWrapper **obj, Error **errp);

bool visit_type_UnixSocketAddressWrapper_members(Visitor *v, UnixSocketAddressWrapper *obj, Error **errp);

bool visit_type_UnixSocketAddressWrapper(Visitor *v, const char *name,
                 UnixSocketAddressWrapper **obj, Error **errp);

bool visit_type_VsockSocketAddressWrapper_members(Visitor *v, VsockSocketAddressWrapper *obj, Error **errp);

bool visit_type_VsockSocketAddressWrapper(Visitor *v, const char *name,
                 VsockSocketAddressWrapper **obj, Error **errp);

bool visit_type_StringWrapper_members(Visitor *v, StringWrapper *obj, Error **errp);

bool visit_type_StringWrapper(Visitor *v, const char *name,
                 StringWrapper **obj, Error **errp);

bool visit_type_q_obj_SocketAddressLegacy_base_members(Visitor *v, q_obj_SocketAddressLegacy_base *obj, Error **errp);

bool visit_type_q_obj_SocketAddressLegacy_base(Visitor *v, const char *name,
                 q_obj_SocketAddressLegacy_base **obj, Error **errp);

bool visit_type_SocketAddressLegacy_members(Visitor *v, SocketAddressLegacy *obj, Error **errp);

bool visit_type_SocketAddressLegacy(Visitor *v, const char *name,
                 SocketAddressLegacy **obj, Error **errp);

bool visit_type_SocketAddressType(Visitor *v, const char *name,
                 SocketAddressType *obj, Error **errp);

bool visit_type_q_obj_SocketAddress_base_members(Visitor *v, q_obj_SocketAddress_base *obj, Error **errp);

bool visit_type_q_obj_SocketAddress_base(Visitor *v, const char *name,
                 q_obj_SocketAddress_base **obj, Error **errp);

bool visit_type_SocketAddress_members(Visitor *v, SocketAddress *obj, Error **errp);

bool visit_type_SocketAddress(Visitor *v, const char *name,
                 SocketAddress **obj, Error **errp);

bool visit_type_SocketAddressList(Visitor *v, const char *name,
                 SocketAddressList **obj, Error **errp);

bool visit_type_InetSocketAddressBaseList(Visitor *v, const char *name,
                 InetSocketAddressBaseList **obj, Error **errp);

#endif /* QAPI_VISIT_SOCKETS_H */
