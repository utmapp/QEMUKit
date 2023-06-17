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

#ifndef QAPI_TYPES_NET_H
#define QAPI_TYPES_NET_H

#include "qapi-builtin-types.h"
#include "qapi-types-common.h"
#include "qapi-types-sockets.h"

typedef struct q_obj_set_link_arg q_obj_set_link_arg;

typedef struct q_obj_netdev_del_arg q_obj_netdev_del_arg;

typedef struct NetLegacyNicOptions NetLegacyNicOptions;

typedef struct NetdevUserOptions NetdevUserOptions;

typedef struct NetdevTapOptions NetdevTapOptions;

typedef struct NetdevSocketOptions NetdevSocketOptions;

typedef struct NetdevL2TPv3Options NetdevL2TPv3Options;

typedef struct NetdevVdeOptions NetdevVdeOptions;

typedef struct NetdevBridgeOptions NetdevBridgeOptions;

typedef struct NetdevHubPortOptions NetdevHubPortOptions;

typedef struct NetdevNetmapOptions NetdevNetmapOptions;

typedef struct NetdevVhostUserOptions NetdevVhostUserOptions;

typedef struct NetdevVhostVDPAOptions NetdevVhostVDPAOptions;

#if defined(CONFIG_VMNET)
typedef struct NetdevVmnetHostOptions NetdevVmnetHostOptions;
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
typedef struct NetdevVmnetSharedOptions NetdevVmnetSharedOptions;
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
typedef struct NetdevVmnetBridgedOptions NetdevVmnetBridgedOptions;
#endif /* defined(CONFIG_VMNET) */

typedef struct NetdevStreamOptions NetdevStreamOptions;

typedef struct NetdevDgramOptions NetdevDgramOptions;

typedef enum NetClientDriver {
    NET_CLIENT_DRIVER_NONE,
    NET_CLIENT_DRIVER_NIC,
    NET_CLIENT_DRIVER_USER,
    NET_CLIENT_DRIVER_TAP,
    NET_CLIENT_DRIVER_L2TPV3,
    NET_CLIENT_DRIVER_SOCKET,
    NET_CLIENT_DRIVER_STREAM,
    NET_CLIENT_DRIVER_DGRAM,
    NET_CLIENT_DRIVER_VDE,
    NET_CLIENT_DRIVER_BRIDGE,
    NET_CLIENT_DRIVER_HUBPORT,
    NET_CLIENT_DRIVER_NETMAP,
    NET_CLIENT_DRIVER_VHOST_USER,
    NET_CLIENT_DRIVER_VHOST_VDPA,
#if defined(CONFIG_VMNET)
    NET_CLIENT_DRIVER_VMNET_HOST,
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
    NET_CLIENT_DRIVER_VMNET_SHARED,
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
    NET_CLIENT_DRIVER_VMNET_BRIDGED,
#endif /* defined(CONFIG_VMNET) */
    NET_CLIENT_DRIVER__MAX,
} NetClientDriver;

#define NetClientDriver_str(val) \
    qapi_enum_lookup(&NetClientDriver_lookup, (val))

extern const QEnumLookup NetClientDriver_lookup;

typedef struct q_obj_Netdev_base q_obj_Netdev_base;

typedef struct Netdev Netdev;

typedef enum RxState {
    RX_STATE_NORMAL,
    RX_STATE_NONE,
    RX_STATE_ALL,
    RX_STATE__MAX,
} RxState;

#define RxState_str(val) \
    qapi_enum_lookup(&RxState_lookup, (val))

extern const QEnumLookup RxState_lookup;

typedef struct RxFilterInfo RxFilterInfo;

typedef struct q_obj_query_rx_filter_arg q_obj_query_rx_filter_arg;

typedef struct RxFilterInfoList RxFilterInfoList;

typedef struct q_obj_NIC_RX_FILTER_CHANGED_arg q_obj_NIC_RX_FILTER_CHANGED_arg;

typedef struct AnnounceParameters AnnounceParameters;

typedef struct q_obj_FAILOVER_NEGOTIATED_arg q_obj_FAILOVER_NEGOTIATED_arg;

typedef struct q_obj_NETDEV_STREAM_CONNECTED_arg q_obj_NETDEV_STREAM_CONNECTED_arg;

typedef struct q_obj_NETDEV_STREAM_DISCONNECTED_arg q_obj_NETDEV_STREAM_DISCONNECTED_arg;

struct q_obj_set_link_arg {
    char *name;
    bool up;
};

void qapi_free_q_obj_set_link_arg(q_obj_set_link_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_set_link_arg, qapi_free_q_obj_set_link_arg)

struct q_obj_netdev_del_arg {
    char *id;
};

void qapi_free_q_obj_netdev_del_arg(q_obj_netdev_del_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_netdev_del_arg, qapi_free_q_obj_netdev_del_arg)

struct NetLegacyNicOptions {
    bool has_netdev;
    char *netdev;
    bool has_macaddr;
    char *macaddr;
    bool has_model;
    char *model;
    bool has_addr;
    char *addr;
    bool has_vectors;
    uint32_t vectors;
};

void qapi_free_NetLegacyNicOptions(NetLegacyNicOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetLegacyNicOptions, qapi_free_NetLegacyNicOptions)

struct NetdevUserOptions {
    bool has_hostname;
    char *hostname;
    bool has_q_restrict;
    bool q_restrict;
    bool has_ipv4;
    bool ipv4;
    bool has_ipv6;
    bool ipv6;
    bool has_ip;
    char *ip;
    bool has_net;
    char *net;
    bool has_host;
    char *host;
    bool has_tftp;
    char *tftp;
    bool has_bootfile;
    char *bootfile;
    bool has_dhcpstart;
    char *dhcpstart;
    bool has_dns;
    char *dns;
    bool has_dnssearch;
    StringList *dnssearch;
    bool has_domainname;
    char *domainname;
    bool has_ipv6_prefix;
    char *ipv6_prefix;
    bool has_ipv6_prefixlen;
    int64_t ipv6_prefixlen;
    bool has_ipv6_host;
    char *ipv6_host;
    bool has_ipv6_dns;
    char *ipv6_dns;
    bool has_smb;
    char *smb;
    bool has_smbserver;
    char *smbserver;
    bool has_hostfwd;
    StringList *hostfwd;
    bool has_guestfwd;
    StringList *guestfwd;
    bool has_tftp_server_name;
    char *tftp_server_name;
};

void qapi_free_NetdevUserOptions(NetdevUserOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevUserOptions, qapi_free_NetdevUserOptions)

struct NetdevTapOptions {
    bool has_ifname;
    char *ifname;
    bool has_fd;
    char *fd;
    bool has_fds;
    char *fds;
    bool has_script;
    char *script;
    bool has_downscript;
    char *downscript;
    bool has_br;
    char *br;
    bool has_helper;
    char *helper;
    bool has_sndbuf;
    uint64_t sndbuf;
    bool has_vnet_hdr;
    bool vnet_hdr;
    bool has_vhost;
    bool vhost;
    bool has_vhostfd;
    char *vhostfd;
    bool has_vhostfds;
    char *vhostfds;
    bool has_vhostforce;
    bool vhostforce;
    bool has_queues;
    uint32_t queues;
    bool has_poll_us;
    uint32_t poll_us;
};

void qapi_free_NetdevTapOptions(NetdevTapOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevTapOptions, qapi_free_NetdevTapOptions)

struct NetdevSocketOptions {
    bool has_fd;
    char *fd;
    bool has_listen;
    char *listen;
    bool has_connect;
    char *connect;
    bool has_mcast;
    char *mcast;
    bool has_localaddr;
    char *localaddr;
    bool has_udp;
    char *udp;
};

void qapi_free_NetdevSocketOptions(NetdevSocketOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevSocketOptions, qapi_free_NetdevSocketOptions)

struct NetdevL2TPv3Options {
    char *src;
    char *dst;
    bool has_srcport;
    char *srcport;
    bool has_dstport;
    char *dstport;
    bool has_ipv6;
    bool ipv6;
    bool has_udp;
    bool udp;
    bool has_cookie64;
    bool cookie64;
    bool has_counter;
    bool counter;
    bool has_pincounter;
    bool pincounter;
    bool has_txcookie;
    uint64_t txcookie;
    bool has_rxcookie;
    uint64_t rxcookie;
    uint32_t txsession;
    bool has_rxsession;
    uint32_t rxsession;
    bool has_offset;
    uint32_t offset;
};

void qapi_free_NetdevL2TPv3Options(NetdevL2TPv3Options *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevL2TPv3Options, qapi_free_NetdevL2TPv3Options)

struct NetdevVdeOptions {
    bool has_sock;
    char *sock;
    bool has_port;
    uint16_t port;
    bool has_group;
    char *group;
    bool has_mode;
    uint16_t mode;
};

void qapi_free_NetdevVdeOptions(NetdevVdeOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVdeOptions, qapi_free_NetdevVdeOptions)

struct NetdevBridgeOptions {
    bool has_br;
    char *br;
    bool has_helper;
    char *helper;
};

void qapi_free_NetdevBridgeOptions(NetdevBridgeOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevBridgeOptions, qapi_free_NetdevBridgeOptions)

struct NetdevHubPortOptions {
    int32_t hubid;
    bool has_netdev;
    char *netdev;
};

void qapi_free_NetdevHubPortOptions(NetdevHubPortOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevHubPortOptions, qapi_free_NetdevHubPortOptions)

struct NetdevNetmapOptions {
    char *ifname;
    bool has_devname;
    char *devname;
};

void qapi_free_NetdevNetmapOptions(NetdevNetmapOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevNetmapOptions, qapi_free_NetdevNetmapOptions)

struct NetdevVhostUserOptions {
    char *chardev;
    bool has_vhostforce;
    bool vhostforce;
    bool has_queues;
    int64_t queues;
};

void qapi_free_NetdevVhostUserOptions(NetdevVhostUserOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVhostUserOptions, qapi_free_NetdevVhostUserOptions)

struct NetdevVhostVDPAOptions {
    bool has_vhostdev;
    char *vhostdev;
    bool has_vhostfd;
    char *vhostfd;
    bool has_queues;
    int64_t queues;
    bool has_x_svq;
    bool x_svq;
};

void qapi_free_NetdevVhostVDPAOptions(NetdevVhostVDPAOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVhostVDPAOptions, qapi_free_NetdevVhostVDPAOptions)

#if defined(CONFIG_VMNET)
struct NetdevVmnetHostOptions {
    bool has_start_address;
    char *start_address;
    bool has_end_address;
    char *end_address;
    bool has_subnet_mask;
    char *subnet_mask;
    bool has_isolated;
    bool isolated;
    bool has_net_uuid;
    char *net_uuid;
};
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetHostOptions(NetdevVmnetHostOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVmnetHostOptions, qapi_free_NetdevVmnetHostOptions)
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
struct NetdevVmnetSharedOptions {
    bool has_start_address;
    char *start_address;
    bool has_end_address;
    char *end_address;
    bool has_subnet_mask;
    char *subnet_mask;
    bool has_isolated;
    bool isolated;
    bool has_nat66_prefix;
    char *nat66_prefix;
};
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetSharedOptions(NetdevVmnetSharedOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVmnetSharedOptions, qapi_free_NetdevVmnetSharedOptions)
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
struct NetdevVmnetBridgedOptions {
    char *ifname;
    bool has_isolated;
    bool isolated;
};
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetBridgedOptions(NetdevVmnetBridgedOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVmnetBridgedOptions, qapi_free_NetdevVmnetBridgedOptions)
#endif /* defined(CONFIG_VMNET) */

struct NetdevStreamOptions {
    SocketAddress *addr;
    bool has_server;
    bool server;
    bool has_reconnect;
    uint32_t reconnect;
};

void qapi_free_NetdevStreamOptions(NetdevStreamOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevStreamOptions, qapi_free_NetdevStreamOptions)

struct NetdevDgramOptions {
    bool has_local;
    SocketAddress *local;
    bool has_remote;
    SocketAddress *remote;
};

void qapi_free_NetdevDgramOptions(NetdevDgramOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevDgramOptions, qapi_free_NetdevDgramOptions)

struct q_obj_Netdev_base {
    char *id;
    NetClientDriver type;
};

void qapi_free_q_obj_Netdev_base(q_obj_Netdev_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_Netdev_base, qapi_free_q_obj_Netdev_base)

struct Netdev {
    char *id;
    NetClientDriver type;
    union { /* union tag is @type */
        NetLegacyNicOptions nic;
        NetdevUserOptions user;
        NetdevTapOptions tap;
        NetdevL2TPv3Options l2tpv3;
        NetdevSocketOptions socket;
        NetdevStreamOptions stream;
        NetdevDgramOptions dgram;
        NetdevVdeOptions vde;
        NetdevBridgeOptions bridge;
        NetdevHubPortOptions hubport;
        NetdevNetmapOptions netmap;
        NetdevVhostUserOptions vhost_user;
        NetdevVhostVDPAOptions vhost_vdpa;
#if defined(CONFIG_VMNET)
        NetdevVmnetHostOptions vmnet_host;
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
        NetdevVmnetSharedOptions vmnet_shared;
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
        NetdevVmnetBridgedOptions vmnet_bridged;
#endif /* defined(CONFIG_VMNET) */
    } u;
};

void qapi_free_Netdev(Netdev *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Netdev, qapi_free_Netdev)

struct RxFilterInfo {
    char *name;
    bool promiscuous;
    RxState multicast;
    RxState unicast;
    RxState vlan;
    bool broadcast_allowed;
    bool multicast_overflow;
    bool unicast_overflow;
    char *main_mac;
    intList *vlan_table;
    strList *unicast_table;
    strList *multicast_table;
};

void qapi_free_RxFilterInfo(RxFilterInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RxFilterInfo, qapi_free_RxFilterInfo)

struct q_obj_query_rx_filter_arg {
    bool has_name;
    char *name;
};

void qapi_free_q_obj_query_rx_filter_arg(q_obj_query_rx_filter_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_rx_filter_arg, qapi_free_q_obj_query_rx_filter_arg)

struct RxFilterInfoList {
    RxFilterInfoList *next;
    RxFilterInfo *value;
};

void qapi_free_RxFilterInfoList(RxFilterInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RxFilterInfoList, qapi_free_RxFilterInfoList)

struct q_obj_NIC_RX_FILTER_CHANGED_arg {
    bool has_name;
    char *name;
    char *path;
};

void qapi_free_q_obj_NIC_RX_FILTER_CHANGED_arg(q_obj_NIC_RX_FILTER_CHANGED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_NIC_RX_FILTER_CHANGED_arg, qapi_free_q_obj_NIC_RX_FILTER_CHANGED_arg)

struct AnnounceParameters {
    int64_t initial;
    int64_t max;
    int64_t rounds;
    int64_t step;
    bool has_interfaces;
    strList *interfaces;
    bool has_id;
    char *id;
};

void qapi_free_AnnounceParameters(AnnounceParameters *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AnnounceParameters, qapi_free_AnnounceParameters)

struct q_obj_FAILOVER_NEGOTIATED_arg {
    char *device_id;
};

void qapi_free_q_obj_FAILOVER_NEGOTIATED_arg(q_obj_FAILOVER_NEGOTIATED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_FAILOVER_NEGOTIATED_arg, qapi_free_q_obj_FAILOVER_NEGOTIATED_arg)

struct q_obj_NETDEV_STREAM_CONNECTED_arg {
    char *netdev_id;
    SocketAddress *addr;
};

void qapi_free_q_obj_NETDEV_STREAM_CONNECTED_arg(q_obj_NETDEV_STREAM_CONNECTED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_NETDEV_STREAM_CONNECTED_arg, qapi_free_q_obj_NETDEV_STREAM_CONNECTED_arg)

struct q_obj_NETDEV_STREAM_DISCONNECTED_arg {
    char *netdev_id;
};

void qapi_free_q_obj_NETDEV_STREAM_DISCONNECTED_arg(q_obj_NETDEV_STREAM_DISCONNECTED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_NETDEV_STREAM_DISCONNECTED_arg, qapi_free_q_obj_NETDEV_STREAM_DISCONNECTED_arg)

#endif /* QAPI_TYPES_NET_H */
