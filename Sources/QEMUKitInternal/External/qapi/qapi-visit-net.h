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

#ifndef QAPI_VISIT_NET_H
#define QAPI_VISIT_NET_H

#include "qapi-builtin-visit.h"
#include "qapi-types-net.h"

#include "qapi-visit-common.h"
#include "qapi-visit-sockets.h"

bool visit_type_q_obj_set_link_arg_members(Visitor *v, q_obj_set_link_arg *obj, Error **errp);

bool visit_type_q_obj_set_link_arg(Visitor *v, const char *name,
                 q_obj_set_link_arg **obj, Error **errp);

bool visit_type_q_obj_netdev_del_arg_members(Visitor *v, q_obj_netdev_del_arg *obj, Error **errp);

bool visit_type_q_obj_netdev_del_arg(Visitor *v, const char *name,
                 q_obj_netdev_del_arg **obj, Error **errp);

bool visit_type_NetLegacyNicOptions_members(Visitor *v, NetLegacyNicOptions *obj, Error **errp);

bool visit_type_NetLegacyNicOptions(Visitor *v, const char *name,
                 NetLegacyNicOptions **obj, Error **errp);

bool visit_type_NetdevUserOptions_members(Visitor *v, NetdevUserOptions *obj, Error **errp);

bool visit_type_NetdevUserOptions(Visitor *v, const char *name,
                 NetdevUserOptions **obj, Error **errp);

bool visit_type_NetdevTapOptions_members(Visitor *v, NetdevTapOptions *obj, Error **errp);

bool visit_type_NetdevTapOptions(Visitor *v, const char *name,
                 NetdevTapOptions **obj, Error **errp);

bool visit_type_NetdevSocketOptions_members(Visitor *v, NetdevSocketOptions *obj, Error **errp);

bool visit_type_NetdevSocketOptions(Visitor *v, const char *name,
                 NetdevSocketOptions **obj, Error **errp);

bool visit_type_NetdevL2TPv3Options_members(Visitor *v, NetdevL2TPv3Options *obj, Error **errp);

bool visit_type_NetdevL2TPv3Options(Visitor *v, const char *name,
                 NetdevL2TPv3Options **obj, Error **errp);

bool visit_type_NetdevVdeOptions_members(Visitor *v, NetdevVdeOptions *obj, Error **errp);

bool visit_type_NetdevVdeOptions(Visitor *v, const char *name,
                 NetdevVdeOptions **obj, Error **errp);

bool visit_type_NetdevBridgeOptions_members(Visitor *v, NetdevBridgeOptions *obj, Error **errp);

bool visit_type_NetdevBridgeOptions(Visitor *v, const char *name,
                 NetdevBridgeOptions **obj, Error **errp);

bool visit_type_NetdevHubPortOptions_members(Visitor *v, NetdevHubPortOptions *obj, Error **errp);

bool visit_type_NetdevHubPortOptions(Visitor *v, const char *name,
                 NetdevHubPortOptions **obj, Error **errp);

bool visit_type_NetdevNetmapOptions_members(Visitor *v, NetdevNetmapOptions *obj, Error **errp);

bool visit_type_NetdevNetmapOptions(Visitor *v, const char *name,
                 NetdevNetmapOptions **obj, Error **errp);

bool visit_type_NetdevVhostUserOptions_members(Visitor *v, NetdevVhostUserOptions *obj, Error **errp);

bool visit_type_NetdevVhostUserOptions(Visitor *v, const char *name,
                 NetdevVhostUserOptions **obj, Error **errp);

bool visit_type_NetdevVhostVDPAOptions_members(Visitor *v, NetdevVhostVDPAOptions *obj, Error **errp);

bool visit_type_NetdevVhostVDPAOptions(Visitor *v, const char *name,
                 NetdevVhostVDPAOptions **obj, Error **errp);

#if defined(CONFIG_VMNET)
bool visit_type_NetdevVmnetHostOptions_members(Visitor *v, NetdevVmnetHostOptions *obj, Error **errp);

bool visit_type_NetdevVmnetHostOptions(Visitor *v, const char *name,
                 NetdevVmnetHostOptions **obj, Error **errp);
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
bool visit_type_NetdevVmnetSharedOptions_members(Visitor *v, NetdevVmnetSharedOptions *obj, Error **errp);

bool visit_type_NetdevVmnetSharedOptions(Visitor *v, const char *name,
                 NetdevVmnetSharedOptions **obj, Error **errp);
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
bool visit_type_NetdevVmnetBridgedOptions_members(Visitor *v, NetdevVmnetBridgedOptions *obj, Error **errp);

bool visit_type_NetdevVmnetBridgedOptions(Visitor *v, const char *name,
                 NetdevVmnetBridgedOptions **obj, Error **errp);
#endif /* defined(CONFIG_VMNET) */

bool visit_type_NetdevStreamOptions_members(Visitor *v, NetdevStreamOptions *obj, Error **errp);

bool visit_type_NetdevStreamOptions(Visitor *v, const char *name,
                 NetdevStreamOptions **obj, Error **errp);

bool visit_type_NetdevDgramOptions_members(Visitor *v, NetdevDgramOptions *obj, Error **errp);

bool visit_type_NetdevDgramOptions(Visitor *v, const char *name,
                 NetdevDgramOptions **obj, Error **errp);

bool visit_type_NetClientDriver(Visitor *v, const char *name,
                 NetClientDriver *obj, Error **errp);

bool visit_type_q_obj_Netdev_base_members(Visitor *v, q_obj_Netdev_base *obj, Error **errp);

bool visit_type_q_obj_Netdev_base(Visitor *v, const char *name,
                 q_obj_Netdev_base **obj, Error **errp);

bool visit_type_Netdev_members(Visitor *v, Netdev *obj, Error **errp);

bool visit_type_Netdev(Visitor *v, const char *name,
                 Netdev **obj, Error **errp);

bool visit_type_RxState(Visitor *v, const char *name,
                 RxState *obj, Error **errp);

bool visit_type_RxFilterInfo_members(Visitor *v, RxFilterInfo *obj, Error **errp);

bool visit_type_RxFilterInfo(Visitor *v, const char *name,
                 RxFilterInfo **obj, Error **errp);

bool visit_type_q_obj_query_rx_filter_arg_members(Visitor *v, q_obj_query_rx_filter_arg *obj, Error **errp);

bool visit_type_q_obj_query_rx_filter_arg(Visitor *v, const char *name,
                 q_obj_query_rx_filter_arg **obj, Error **errp);

bool visit_type_RxFilterInfoList(Visitor *v, const char *name,
                 RxFilterInfoList **obj, Error **errp);

bool visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg_members(Visitor *v, q_obj_NIC_RX_FILTER_CHANGED_arg *obj, Error **errp);

bool visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg(Visitor *v, const char *name,
                 q_obj_NIC_RX_FILTER_CHANGED_arg **obj, Error **errp);

bool visit_type_AnnounceParameters_members(Visitor *v, AnnounceParameters *obj, Error **errp);

bool visit_type_AnnounceParameters(Visitor *v, const char *name,
                 AnnounceParameters **obj, Error **errp);

bool visit_type_q_obj_FAILOVER_NEGOTIATED_arg_members(Visitor *v, q_obj_FAILOVER_NEGOTIATED_arg *obj, Error **errp);

bool visit_type_q_obj_FAILOVER_NEGOTIATED_arg(Visitor *v, const char *name,
                 q_obj_FAILOVER_NEGOTIATED_arg **obj, Error **errp);

bool visit_type_q_obj_NETDEV_STREAM_CONNECTED_arg_members(Visitor *v, q_obj_NETDEV_STREAM_CONNECTED_arg *obj, Error **errp);

bool visit_type_q_obj_NETDEV_STREAM_CONNECTED_arg(Visitor *v, const char *name,
                 q_obj_NETDEV_STREAM_CONNECTED_arg **obj, Error **errp);

bool visit_type_q_obj_NETDEV_STREAM_DISCONNECTED_arg_members(Visitor *v, q_obj_NETDEV_STREAM_DISCONNECTED_arg *obj, Error **errp);

bool visit_type_q_obj_NETDEV_STREAM_DISCONNECTED_arg(Visitor *v, const char *name,
                 q_obj_NETDEV_STREAM_DISCONNECTED_arg **obj, Error **errp);

#endif /* QAPI_VISIT_NET_H */
