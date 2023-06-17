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
#include "qapi-types-net.h"
#include "qapi-visit-net.h"

void qapi_free_q_obj_set_link_arg(q_obj_set_link_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_set_link_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_netdev_del_arg(q_obj_netdev_del_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_netdev_del_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetLegacyNicOptions(NetLegacyNicOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetLegacyNicOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevUserOptions(NetdevUserOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevUserOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevTapOptions(NetdevTapOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevTapOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevSocketOptions(NetdevSocketOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevSocketOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevL2TPv3Options(NetdevL2TPv3Options *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevL2TPv3Options(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevVdeOptions(NetdevVdeOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVdeOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevBridgeOptions(NetdevBridgeOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevBridgeOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevHubPortOptions(NetdevHubPortOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevHubPortOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevNetmapOptions(NetdevNetmapOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevNetmapOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevVhostUserOptions(NetdevVhostUserOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVhostUserOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevVhostVDPAOptions(NetdevVhostVDPAOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVhostVDPAOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetHostOptions(NetdevVmnetHostOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVmnetHostOptions(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetSharedOptions(NetdevVmnetSharedOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVmnetSharedOptions(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetBridgedOptions(NetdevVmnetBridgedOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevVmnetBridgedOptions(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VMNET) */

void qapi_free_NetdevStreamOptions(NetdevStreamOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevStreamOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NetdevDgramOptions(NetdevDgramOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetdevDgramOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup NetClientDriver_lookup = {
    .array = (const char *const[]) {
        [NET_CLIENT_DRIVER_NONE] = "none",
        [NET_CLIENT_DRIVER_NIC] = "nic",
        [NET_CLIENT_DRIVER_USER] = "user",
        [NET_CLIENT_DRIVER_TAP] = "tap",
        [NET_CLIENT_DRIVER_L2TPV3] = "l2tpv3",
        [NET_CLIENT_DRIVER_SOCKET] = "socket",
        [NET_CLIENT_DRIVER_STREAM] = "stream",
        [NET_CLIENT_DRIVER_DGRAM] = "dgram",
        [NET_CLIENT_DRIVER_VDE] = "vde",
        [NET_CLIENT_DRIVER_BRIDGE] = "bridge",
        [NET_CLIENT_DRIVER_HUBPORT] = "hubport",
        [NET_CLIENT_DRIVER_NETMAP] = "netmap",
        [NET_CLIENT_DRIVER_VHOST_USER] = "vhost-user",
        [NET_CLIENT_DRIVER_VHOST_VDPA] = "vhost-vdpa",
#if defined(CONFIG_VMNET)
        [NET_CLIENT_DRIVER_VMNET_HOST] = "vmnet-host",
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
        [NET_CLIENT_DRIVER_VMNET_SHARED] = "vmnet-shared",
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
        [NET_CLIENT_DRIVER_VMNET_BRIDGED] = "vmnet-bridged",
#endif /* defined(CONFIG_VMNET) */
    },
    .size = NET_CLIENT_DRIVER__MAX
};

void qapi_free_q_obj_Netdev_base(q_obj_Netdev_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_Netdev_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_Netdev(Netdev *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Netdev(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup RxState_lookup = {
    .array = (const char *const[]) {
        [RX_STATE_NORMAL] = "normal",
        [RX_STATE_NONE] = "none",
        [RX_STATE_ALL] = "all",
    },
    .size = RX_STATE__MAX
};

void qapi_free_RxFilterInfo(RxFilterInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RxFilterInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_query_rx_filter_arg(q_obj_query_rx_filter_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_query_rx_filter_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RxFilterInfoList(RxFilterInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RxFilterInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_NIC_RX_FILTER_CHANGED_arg(q_obj_NIC_RX_FILTER_CHANGED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_AnnounceParameters(AnnounceParameters *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AnnounceParameters(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_FAILOVER_NEGOTIATED_arg(q_obj_FAILOVER_NEGOTIATED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_FAILOVER_NEGOTIATED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_NETDEV_STREAM_CONNECTED_arg(q_obj_NETDEV_STREAM_CONNECTED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_NETDEV_STREAM_CONNECTED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_NETDEV_STREAM_DISCONNECTED_arg(q_obj_NETDEV_STREAM_DISCONNECTED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_NETDEV_STREAM_DISCONNECTED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_net_c;
