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

#ifndef QAPI_TYPES_SOCKETS_H
#define QAPI_TYPES_SOCKETS_H

#include "qapi-builtin-types.h"
#include "qapi-types-common.h"

typedef enum NetworkAddressFamily {
    NETWORK_ADDRESS_FAMILY_IPV4,
    NETWORK_ADDRESS_FAMILY_IPV6,
    NETWORK_ADDRESS_FAMILY_UNIX,
    NETWORK_ADDRESS_FAMILY_VSOCK,
    NETWORK_ADDRESS_FAMILY_UNKNOWN,
    NETWORK_ADDRESS_FAMILY__MAX,
} NetworkAddressFamily;

#define NetworkAddressFamily_str(val) \
    qapi_enum_lookup(&NetworkAddressFamily_lookup, (val))

extern const QEnumLookup NetworkAddressFamily_lookup;

typedef struct InetSocketAddressBase InetSocketAddressBase;

typedef struct InetSocketAddress InetSocketAddress;

typedef struct UnixSocketAddress UnixSocketAddress;

typedef struct VsockSocketAddress VsockSocketAddress;

typedef struct InetSocketAddressWrapper InetSocketAddressWrapper;

typedef struct UnixSocketAddressWrapper UnixSocketAddressWrapper;

typedef struct VsockSocketAddressWrapper VsockSocketAddressWrapper;

typedef struct StringWrapper StringWrapper;

typedef struct q_obj_SocketAddressLegacy_base q_obj_SocketAddressLegacy_base;

typedef struct SocketAddressLegacy SocketAddressLegacy;

typedef enum SocketAddressType {
    SOCKET_ADDRESS_TYPE_INET,
    SOCKET_ADDRESS_TYPE_UNIX,
    SOCKET_ADDRESS_TYPE_VSOCK,
    SOCKET_ADDRESS_TYPE_FD,
    SOCKET_ADDRESS_TYPE__MAX,
} SocketAddressType;

#define SocketAddressType_str(val) \
    qapi_enum_lookup(&SocketAddressType_lookup, (val))

extern const QEnumLookup SocketAddressType_lookup;

typedef struct q_obj_SocketAddress_base q_obj_SocketAddress_base;

typedef struct SocketAddress SocketAddress;

typedef struct SocketAddressList SocketAddressList;

typedef struct InetSocketAddressBaseList InetSocketAddressBaseList;

struct InetSocketAddressBase {
    char *host;
    char *port;
};

void qapi_free_InetSocketAddressBase(InetSocketAddressBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InetSocketAddressBase, qapi_free_InetSocketAddressBase)

struct InetSocketAddress {
    /* Members inherited from InetSocketAddressBase: */
    char *host;
    char *port;
    /* Own members: */
    bool has_numeric;
    bool numeric;
    bool has_to;
    uint16_t to;
    bool has_ipv4;
    bool ipv4;
    bool has_ipv6;
    bool ipv6;
    bool has_keep_alive;
    bool keep_alive;
#if defined(HAVE_IPPROTO_MPTCP)
    bool has_mptcp;
    bool mptcp;
#endif /* defined(HAVE_IPPROTO_MPTCP) */
};

static inline InetSocketAddressBase *qapi_InetSocketAddress_base(const InetSocketAddress *obj)
{
    return (InetSocketAddressBase *)obj;
}

void qapi_free_InetSocketAddress(InetSocketAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InetSocketAddress, qapi_free_InetSocketAddress)

struct UnixSocketAddress {
    char *path;
#if defined(CONFIG_LINUX)
    bool has_abstract;
    bool abstract;
#endif /* defined(CONFIG_LINUX) */
#if defined(CONFIG_LINUX)
    bool has_tight;
    bool tight;
#endif /* defined(CONFIG_LINUX) */
};

void qapi_free_UnixSocketAddress(UnixSocketAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UnixSocketAddress, qapi_free_UnixSocketAddress)

struct VsockSocketAddress {
    char *cid;
    char *port;
};

void qapi_free_VsockSocketAddress(VsockSocketAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VsockSocketAddress, qapi_free_VsockSocketAddress)

struct InetSocketAddressWrapper {
    InetSocketAddress *data;
};

void qapi_free_InetSocketAddressWrapper(InetSocketAddressWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InetSocketAddressWrapper, qapi_free_InetSocketAddressWrapper)

struct UnixSocketAddressWrapper {
    UnixSocketAddress *data;
};

void qapi_free_UnixSocketAddressWrapper(UnixSocketAddressWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UnixSocketAddressWrapper, qapi_free_UnixSocketAddressWrapper)

struct VsockSocketAddressWrapper {
    VsockSocketAddress *data;
};

void qapi_free_VsockSocketAddressWrapper(VsockSocketAddressWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VsockSocketAddressWrapper, qapi_free_VsockSocketAddressWrapper)

struct StringWrapper {
    String *data;
};

void qapi_free_StringWrapper(StringWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StringWrapper, qapi_free_StringWrapper)

struct q_obj_SocketAddressLegacy_base {
    SocketAddressType type;
};

void qapi_free_q_obj_SocketAddressLegacy_base(q_obj_SocketAddressLegacy_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_SocketAddressLegacy_base, qapi_free_q_obj_SocketAddressLegacy_base)

struct SocketAddressLegacy {
    SocketAddressType type;
    union { /* union tag is @type */
        InetSocketAddressWrapper inet;
        UnixSocketAddressWrapper q_unix;
        VsockSocketAddressWrapper vsock;
        StringWrapper fd;
    } u;
};

void qapi_free_SocketAddressLegacy(SocketAddressLegacy *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SocketAddressLegacy, qapi_free_SocketAddressLegacy)

struct q_obj_SocketAddress_base {
    SocketAddressType type;
};

void qapi_free_q_obj_SocketAddress_base(q_obj_SocketAddress_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_SocketAddress_base, qapi_free_q_obj_SocketAddress_base)

struct SocketAddress {
    SocketAddressType type;
    union { /* union tag is @type */
        InetSocketAddress inet;
        UnixSocketAddress q_unix;
        VsockSocketAddress vsock;
        String fd;
    } u;
};

void qapi_free_SocketAddress(SocketAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SocketAddress, qapi_free_SocketAddress)

struct SocketAddressList {
    SocketAddressList *next;
    SocketAddress *value;
};

void qapi_free_SocketAddressList(SocketAddressList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SocketAddressList, qapi_free_SocketAddressList)

struct InetSocketAddressBaseList {
    InetSocketAddressBaseList *next;
    InetSocketAddressBase *value;
};

void qapi_free_InetSocketAddressBaseList(InetSocketAddressBaseList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InetSocketAddressBaseList, qapi_free_InetSocketAddressBaseList)

#endif /* QAPI_TYPES_SOCKETS_H */
