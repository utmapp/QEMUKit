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
#include "qapi-visit-net.h"

bool visit_type_q_obj_set_link_arg_members(Visitor *v, q_obj_set_link_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "up", &obj->up, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_set_link_arg(Visitor *v, const char *name,
                 q_obj_set_link_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_set_link_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_set_link_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_set_link_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_netdev_del_arg_members(Visitor *v, q_obj_netdev_del_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_netdev_del_arg(Visitor *v, const char *name,
                 q_obj_netdev_del_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_netdev_del_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_netdev_del_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_netdev_del_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetLegacyNicOptions_members(Visitor *v, NetLegacyNicOptions *obj, Error **errp)
{
    if (visit_optional(v, "netdev", &obj->has_netdev)) {
        if (!visit_type_str(v, "netdev", &obj->netdev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "macaddr", &obj->has_macaddr)) {
        if (!visit_type_str(v, "macaddr", &obj->macaddr, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "model", &obj->has_model)) {
        if (!visit_type_str(v, "model", &obj->model, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "addr", &obj->has_addr)) {
        if (!visit_type_str(v, "addr", &obj->addr, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vectors", &obj->has_vectors)) {
        if (!visit_type_uint32(v, "vectors", &obj->vectors, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetLegacyNicOptions(Visitor *v, const char *name,
                 NetLegacyNicOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetLegacyNicOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetLegacyNicOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetLegacyNicOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevUserOptions_members(Visitor *v, NetdevUserOptions *obj, Error **errp)
{
    if (visit_optional(v, "hostname", &obj->has_hostname)) {
        if (!visit_type_str(v, "hostname", &obj->hostname, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "restrict", &obj->has_q_restrict)) {
        if (!visit_type_bool(v, "restrict", &obj->q_restrict, errp)) {
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
    if (visit_optional(v, "ip", &obj->has_ip)) {
        if (!visit_type_str(v, "ip", &obj->ip, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "net", &obj->has_net)) {
        if (!visit_type_str(v, "net", &obj->net, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "host", &obj->has_host)) {
        if (!visit_type_str(v, "host", &obj->host, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tftp", &obj->has_tftp)) {
        if (!visit_type_str(v, "tftp", &obj->tftp, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bootfile", &obj->has_bootfile)) {
        if (!visit_type_str(v, "bootfile", &obj->bootfile, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dhcpstart", &obj->has_dhcpstart)) {
        if (!visit_type_str(v, "dhcpstart", &obj->dhcpstart, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dns", &obj->has_dns)) {
        if (!visit_type_str(v, "dns", &obj->dns, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dnssearch", &obj->has_dnssearch)) {
        if (!visit_type_StringList(v, "dnssearch", &obj->dnssearch, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "domainname", &obj->has_domainname)) {
        if (!visit_type_str(v, "domainname", &obj->domainname, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ipv6-prefix", &obj->has_ipv6_prefix)) {
        if (!visit_type_str(v, "ipv6-prefix", &obj->ipv6_prefix, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ipv6-prefixlen", &obj->has_ipv6_prefixlen)) {
        if (!visit_type_int(v, "ipv6-prefixlen", &obj->ipv6_prefixlen, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ipv6-host", &obj->has_ipv6_host)) {
        if (!visit_type_str(v, "ipv6-host", &obj->ipv6_host, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ipv6-dns", &obj->has_ipv6_dns)) {
        if (!visit_type_str(v, "ipv6-dns", &obj->ipv6_dns, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "smb", &obj->has_smb)) {
        if (!visit_type_str(v, "smb", &obj->smb, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "smbserver", &obj->has_smbserver)) {
        if (!visit_type_str(v, "smbserver", &obj->smbserver, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "hostfwd", &obj->has_hostfwd)) {
        if (!visit_type_StringList(v, "hostfwd", &obj->hostfwd, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "guestfwd", &obj->has_guestfwd)) {
        if (!visit_type_StringList(v, "guestfwd", &obj->guestfwd, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tftp-server-name", &obj->has_tftp_server_name)) {
        if (!visit_type_str(v, "tftp-server-name", &obj->tftp_server_name, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevUserOptions(Visitor *v, const char *name,
                 NetdevUserOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevUserOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevUserOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevUserOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevTapOptions_members(Visitor *v, NetdevTapOptions *obj, Error **errp)
{
    if (visit_optional(v, "ifname", &obj->has_ifname)) {
        if (!visit_type_str(v, "ifname", &obj->ifname, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "fd", &obj->has_fd)) {
        if (!visit_type_str(v, "fd", &obj->fd, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "fds", &obj->has_fds)) {
        if (!visit_type_str(v, "fds", &obj->fds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "script", &obj->has_script)) {
        if (!visit_type_str(v, "script", &obj->script, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "downscript", &obj->has_downscript)) {
        if (!visit_type_str(v, "downscript", &obj->downscript, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "br", &obj->has_br)) {
        if (!visit_type_str(v, "br", &obj->br, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "helper", &obj->has_helper)) {
        if (!visit_type_str(v, "helper", &obj->helper, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "sndbuf", &obj->has_sndbuf)) {
        if (!visit_type_size(v, "sndbuf", &obj->sndbuf, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vnet_hdr", &obj->has_vnet_hdr)) {
        if (!visit_type_bool(v, "vnet_hdr", &obj->vnet_hdr, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vhost", &obj->has_vhost)) {
        if (!visit_type_bool(v, "vhost", &obj->vhost, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vhostfd", &obj->has_vhostfd)) {
        if (!visit_type_str(v, "vhostfd", &obj->vhostfd, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vhostfds", &obj->has_vhostfds)) {
        if (!visit_type_str(v, "vhostfds", &obj->vhostfds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vhostforce", &obj->has_vhostforce)) {
        if (!visit_type_bool(v, "vhostforce", &obj->vhostforce, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "queues", &obj->has_queues)) {
        if (!visit_type_uint32(v, "queues", &obj->queues, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "poll-us", &obj->has_poll_us)) {
        if (!visit_type_uint32(v, "poll-us", &obj->poll_us, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevTapOptions(Visitor *v, const char *name,
                 NetdevTapOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevTapOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevTapOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevTapOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevSocketOptions_members(Visitor *v, NetdevSocketOptions *obj, Error **errp)
{
    if (visit_optional(v, "fd", &obj->has_fd)) {
        if (!visit_type_str(v, "fd", &obj->fd, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "listen", &obj->has_listen)) {
        if (!visit_type_str(v, "listen", &obj->listen, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "connect", &obj->has_connect)) {
        if (!visit_type_str(v, "connect", &obj->connect, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mcast", &obj->has_mcast)) {
        if (!visit_type_str(v, "mcast", &obj->mcast, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "localaddr", &obj->has_localaddr)) {
        if (!visit_type_str(v, "localaddr", &obj->localaddr, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "udp", &obj->has_udp)) {
        if (!visit_type_str(v, "udp", &obj->udp, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevSocketOptions(Visitor *v, const char *name,
                 NetdevSocketOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevSocketOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevSocketOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevSocketOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevL2TPv3Options_members(Visitor *v, NetdevL2TPv3Options *obj, Error **errp)
{
    if (!visit_type_str(v, "src", &obj->src, errp)) {
        return false;
    }
    if (!visit_type_str(v, "dst", &obj->dst, errp)) {
        return false;
    }
    if (visit_optional(v, "srcport", &obj->has_srcport)) {
        if (!visit_type_str(v, "srcport", &obj->srcport, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dstport", &obj->has_dstport)) {
        if (!visit_type_str(v, "dstport", &obj->dstport, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ipv6", &obj->has_ipv6)) {
        if (!visit_type_bool(v, "ipv6", &obj->ipv6, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "udp", &obj->has_udp)) {
        if (!visit_type_bool(v, "udp", &obj->udp, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cookie64", &obj->has_cookie64)) {
        if (!visit_type_bool(v, "cookie64", &obj->cookie64, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "counter", &obj->has_counter)) {
        if (!visit_type_bool(v, "counter", &obj->counter, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "pincounter", &obj->has_pincounter)) {
        if (!visit_type_bool(v, "pincounter", &obj->pincounter, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "txcookie", &obj->has_txcookie)) {
        if (!visit_type_uint64(v, "txcookie", &obj->txcookie, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "rxcookie", &obj->has_rxcookie)) {
        if (!visit_type_uint64(v, "rxcookie", &obj->rxcookie, errp)) {
            return false;
        }
    }
    if (!visit_type_uint32(v, "txsession", &obj->txsession, errp)) {
        return false;
    }
    if (visit_optional(v, "rxsession", &obj->has_rxsession)) {
        if (!visit_type_uint32(v, "rxsession", &obj->rxsession, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "offset", &obj->has_offset)) {
        if (!visit_type_uint32(v, "offset", &obj->offset, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevL2TPv3Options(Visitor *v, const char *name,
                 NetdevL2TPv3Options **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevL2TPv3Options), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevL2TPv3Options_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevL2TPv3Options(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevVdeOptions_members(Visitor *v, NetdevVdeOptions *obj, Error **errp)
{
    if (visit_optional(v, "sock", &obj->has_sock)) {
        if (!visit_type_str(v, "sock", &obj->sock, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "port", &obj->has_port)) {
        if (!visit_type_uint16(v, "port", &obj->port, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "group", &obj->has_group)) {
        if (!visit_type_str(v, "group", &obj->group, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_uint16(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevVdeOptions(Visitor *v, const char *name,
                 NetdevVdeOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevVdeOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevVdeOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevVdeOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevBridgeOptions_members(Visitor *v, NetdevBridgeOptions *obj, Error **errp)
{
    if (visit_optional(v, "br", &obj->has_br)) {
        if (!visit_type_str(v, "br", &obj->br, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "helper", &obj->has_helper)) {
        if (!visit_type_str(v, "helper", &obj->helper, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevBridgeOptions(Visitor *v, const char *name,
                 NetdevBridgeOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevBridgeOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevBridgeOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevBridgeOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevHubPortOptions_members(Visitor *v, NetdevHubPortOptions *obj, Error **errp)
{
    if (!visit_type_int32(v, "hubid", &obj->hubid, errp)) {
        return false;
    }
    if (visit_optional(v, "netdev", &obj->has_netdev)) {
        if (!visit_type_str(v, "netdev", &obj->netdev, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevHubPortOptions(Visitor *v, const char *name,
                 NetdevHubPortOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevHubPortOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevHubPortOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevHubPortOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevNetmapOptions_members(Visitor *v, NetdevNetmapOptions *obj, Error **errp)
{
    if (!visit_type_str(v, "ifname", &obj->ifname, errp)) {
        return false;
    }
    if (visit_optional(v, "devname", &obj->has_devname)) {
        if (!visit_type_str(v, "devname", &obj->devname, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevNetmapOptions(Visitor *v, const char *name,
                 NetdevNetmapOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevNetmapOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevNetmapOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevNetmapOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevVhostUserOptions_members(Visitor *v, NetdevVhostUserOptions *obj, Error **errp)
{
    if (!visit_type_str(v, "chardev", &obj->chardev, errp)) {
        return false;
    }
    if (visit_optional(v, "vhostforce", &obj->has_vhostforce)) {
        if (!visit_type_bool(v, "vhostforce", &obj->vhostforce, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "queues", &obj->has_queues)) {
        if (!visit_type_int(v, "queues", &obj->queues, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevVhostUserOptions(Visitor *v, const char *name,
                 NetdevVhostUserOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevVhostUserOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevVhostUserOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevVhostUserOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevVhostVDPAOptions_members(Visitor *v, NetdevVhostVDPAOptions *obj, Error **errp)
{
    if (visit_optional(v, "vhostdev", &obj->has_vhostdev)) {
        if (!visit_type_str(v, "vhostdev", &obj->vhostdev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vhostfd", &obj->has_vhostfd)) {
        if (!visit_type_str(v, "vhostfd", &obj->vhostfd, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "queues", &obj->has_queues)) {
        if (!visit_type_int(v, "queues", &obj->queues, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "x-svq", &obj->has_x_svq)) {
        if (visit_policy_reject(v, "x-svq", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-svq", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_bool(v, "x-svq", &obj->x_svq, errp)) {
                return false;
            }
        }
    }
    return true;
}

bool visit_type_NetdevVhostVDPAOptions(Visitor *v, const char *name,
                 NetdevVhostVDPAOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevVhostVDPAOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevVhostVDPAOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevVhostVDPAOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_VMNET)
bool visit_type_NetdevVmnetHostOptions_members(Visitor *v, NetdevVmnetHostOptions *obj, Error **errp)
{
    if (visit_optional(v, "start-address", &obj->has_start_address)) {
        if (!visit_type_str(v, "start-address", &obj->start_address, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "end-address", &obj->has_end_address)) {
        if (!visit_type_str(v, "end-address", &obj->end_address, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "subnet-mask", &obj->has_subnet_mask)) {
        if (!visit_type_str(v, "subnet-mask", &obj->subnet_mask, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "isolated", &obj->has_isolated)) {
        if (!visit_type_bool(v, "isolated", &obj->isolated, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "net-uuid", &obj->has_net_uuid)) {
        if (!visit_type_str(v, "net-uuid", &obj->net_uuid, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevVmnetHostOptions(Visitor *v, const char *name,
                 NetdevVmnetHostOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevVmnetHostOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevVmnetHostOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevVmnetHostOptions(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
bool visit_type_NetdevVmnetSharedOptions_members(Visitor *v, NetdevVmnetSharedOptions *obj, Error **errp)
{
    if (visit_optional(v, "start-address", &obj->has_start_address)) {
        if (!visit_type_str(v, "start-address", &obj->start_address, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "end-address", &obj->has_end_address)) {
        if (!visit_type_str(v, "end-address", &obj->end_address, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "subnet-mask", &obj->has_subnet_mask)) {
        if (!visit_type_str(v, "subnet-mask", &obj->subnet_mask, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "isolated", &obj->has_isolated)) {
        if (!visit_type_bool(v, "isolated", &obj->isolated, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "nat66-prefix", &obj->has_nat66_prefix)) {
        if (!visit_type_str(v, "nat66-prefix", &obj->nat66_prefix, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevVmnetSharedOptions(Visitor *v, const char *name,
                 NetdevVmnetSharedOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevVmnetSharedOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevVmnetSharedOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevVmnetSharedOptions(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
bool visit_type_NetdevVmnetBridgedOptions_members(Visitor *v, NetdevVmnetBridgedOptions *obj, Error **errp)
{
    if (!visit_type_str(v, "ifname", &obj->ifname, errp)) {
        return false;
    }
    if (visit_optional(v, "isolated", &obj->has_isolated)) {
        if (!visit_type_bool(v, "isolated", &obj->isolated, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevVmnetBridgedOptions(Visitor *v, const char *name,
                 NetdevVmnetBridgedOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevVmnetBridgedOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevVmnetBridgedOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevVmnetBridgedOptions(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_VMNET) */

bool visit_type_NetdevStreamOptions_members(Visitor *v, NetdevStreamOptions *obj, Error **errp)
{
    if (!visit_type_SocketAddress(v, "addr", &obj->addr, errp)) {
        return false;
    }
    if (visit_optional(v, "server", &obj->has_server)) {
        if (!visit_type_bool(v, "server", &obj->server, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "reconnect", &obj->has_reconnect)) {
        if (!visit_type_uint32(v, "reconnect", &obj->reconnect, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevStreamOptions(Visitor *v, const char *name,
                 NetdevStreamOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevStreamOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevStreamOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevStreamOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetdevDgramOptions_members(Visitor *v, NetdevDgramOptions *obj, Error **errp)
{
    if (visit_optional(v, "local", &obj->has_local)) {
        if (!visit_type_SocketAddress(v, "local", &obj->local, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "remote", &obj->has_remote)) {
        if (!visit_type_SocketAddress(v, "remote", &obj->remote, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NetdevDgramOptions(Visitor *v, const char *name,
                 NetdevDgramOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NetdevDgramOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NetdevDgramOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NetdevDgramOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NetClientDriver(Visitor *v, const char *name,
                 NetClientDriver *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NetClientDriver_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_Netdev_base_members(Visitor *v, q_obj_Netdev_base *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_NetClientDriver(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_Netdev_base(Visitor *v, const char *name,
                 q_obj_Netdev_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_Netdev_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_Netdev_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_Netdev_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Netdev_members(Visitor *v, Netdev *obj, Error **errp)
{
    if (!visit_type_q_obj_Netdev_base_members(v, (q_obj_Netdev_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case NET_CLIENT_DRIVER_NIC:
        return visit_type_NetLegacyNicOptions_members(v, &obj->u.nic, errp);
    case NET_CLIENT_DRIVER_USER:
        return visit_type_NetdevUserOptions_members(v, &obj->u.user, errp);
    case NET_CLIENT_DRIVER_TAP:
        return visit_type_NetdevTapOptions_members(v, &obj->u.tap, errp);
    case NET_CLIENT_DRIVER_L2TPV3:
        return visit_type_NetdevL2TPv3Options_members(v, &obj->u.l2tpv3, errp);
    case NET_CLIENT_DRIVER_SOCKET:
        return visit_type_NetdevSocketOptions_members(v, &obj->u.socket, errp);
    case NET_CLIENT_DRIVER_STREAM:
        return visit_type_NetdevStreamOptions_members(v, &obj->u.stream, errp);
    case NET_CLIENT_DRIVER_DGRAM:
        return visit_type_NetdevDgramOptions_members(v, &obj->u.dgram, errp);
    case NET_CLIENT_DRIVER_VDE:
        return visit_type_NetdevVdeOptions_members(v, &obj->u.vde, errp);
    case NET_CLIENT_DRIVER_BRIDGE:
        return visit_type_NetdevBridgeOptions_members(v, &obj->u.bridge, errp);
    case NET_CLIENT_DRIVER_HUBPORT:
        return visit_type_NetdevHubPortOptions_members(v, &obj->u.hubport, errp);
    case NET_CLIENT_DRIVER_NETMAP:
        return visit_type_NetdevNetmapOptions_members(v, &obj->u.netmap, errp);
    case NET_CLIENT_DRIVER_VHOST_USER:
        return visit_type_NetdevVhostUserOptions_members(v, &obj->u.vhost_user, errp);
    case NET_CLIENT_DRIVER_VHOST_VDPA:
        return visit_type_NetdevVhostVDPAOptions_members(v, &obj->u.vhost_vdpa, errp);
#if defined(CONFIG_VMNET)
    case NET_CLIENT_DRIVER_VMNET_HOST:
        return visit_type_NetdevVmnetHostOptions_members(v, &obj->u.vmnet_host, errp);
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
    case NET_CLIENT_DRIVER_VMNET_SHARED:
        return visit_type_NetdevVmnetSharedOptions_members(v, &obj->u.vmnet_shared, errp);
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
    case NET_CLIENT_DRIVER_VMNET_BRIDGED:
        return visit_type_NetdevVmnetBridgedOptions_members(v, &obj->u.vmnet_bridged, errp);
#endif /* defined(CONFIG_VMNET) */
    case NET_CLIENT_DRIVER_NONE:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_Netdev(Visitor *v, const char *name,
                 Netdev **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Netdev), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Netdev_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Netdev(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RxState(Visitor *v, const char *name,
                 RxState *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &RxState_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_RxFilterInfo_members(Visitor *v, RxFilterInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "promiscuous", &obj->promiscuous, errp)) {
        return false;
    }
    if (!visit_type_RxState(v, "multicast", &obj->multicast, errp)) {
        return false;
    }
    if (!visit_type_RxState(v, "unicast", &obj->unicast, errp)) {
        return false;
    }
    if (!visit_type_RxState(v, "vlan", &obj->vlan, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "broadcast-allowed", &obj->broadcast_allowed, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "multicast-overflow", &obj->multicast_overflow, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "unicast-overflow", &obj->unicast_overflow, errp)) {
        return false;
    }
    if (!visit_type_str(v, "main-mac", &obj->main_mac, errp)) {
        return false;
    }
    if (!visit_type_intList(v, "vlan-table", &obj->vlan_table, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "unicast-table", &obj->unicast_table, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "multicast-table", &obj->multicast_table, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RxFilterInfo(Visitor *v, const char *name,
                 RxFilterInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RxFilterInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RxFilterInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RxFilterInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_rx_filter_arg_members(Visitor *v, q_obj_query_rx_filter_arg *obj, Error **errp)
{
    if (visit_optional(v, "name", &obj->has_name)) {
        if (!visit_type_str(v, "name", &obj->name, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_query_rx_filter_arg(Visitor *v, const char *name,
                 q_obj_query_rx_filter_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_rx_filter_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_rx_filter_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_rx_filter_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RxFilterInfoList(Visitor *v, const char *name,
                 RxFilterInfoList **obj, Error **errp)
{
    bool ok = false;
    RxFilterInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (RxFilterInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_RxFilterInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RxFilterInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg_members(Visitor *v, q_obj_NIC_RX_FILTER_CHANGED_arg *obj, Error **errp)
{
    if (visit_optional(v, "name", &obj->has_name)) {
        if (!visit_type_str(v, "name", &obj->name, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg(Visitor *v, const char *name,
                 q_obj_NIC_RX_FILTER_CHANGED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_NIC_RX_FILTER_CHANGED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_NIC_RX_FILTER_CHANGED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AnnounceParameters_members(Visitor *v, AnnounceParameters *obj, Error **errp)
{
    if (!visit_type_int(v, "initial", &obj->initial, errp)) {
        return false;
    }
    if (!visit_type_int(v, "max", &obj->max, errp)) {
        return false;
    }
    if (!visit_type_int(v, "rounds", &obj->rounds, errp)) {
        return false;
    }
    if (!visit_type_int(v, "step", &obj->step, errp)) {
        return false;
    }
    if (visit_optional(v, "interfaces", &obj->has_interfaces)) {
        if (!visit_type_strList(v, "interfaces", &obj->interfaces, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AnnounceParameters(Visitor *v, const char *name,
                 AnnounceParameters **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AnnounceParameters), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AnnounceParameters_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AnnounceParameters(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_FAILOVER_NEGOTIATED_arg_members(Visitor *v, q_obj_FAILOVER_NEGOTIATED_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device-id", &obj->device_id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_FAILOVER_NEGOTIATED_arg(Visitor *v, const char *name,
                 q_obj_FAILOVER_NEGOTIATED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_FAILOVER_NEGOTIATED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_FAILOVER_NEGOTIATED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_FAILOVER_NEGOTIATED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_NETDEV_STREAM_CONNECTED_arg_members(Visitor *v, q_obj_NETDEV_STREAM_CONNECTED_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "netdev-id", &obj->netdev_id, errp)) {
        return false;
    }
    if (!visit_type_SocketAddress(v, "addr", &obj->addr, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_NETDEV_STREAM_CONNECTED_arg(Visitor *v, const char *name,
                 q_obj_NETDEV_STREAM_CONNECTED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_NETDEV_STREAM_CONNECTED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_NETDEV_STREAM_CONNECTED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_NETDEV_STREAM_CONNECTED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_NETDEV_STREAM_DISCONNECTED_arg_members(Visitor *v, q_obj_NETDEV_STREAM_DISCONNECTED_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "netdev-id", &obj->netdev_id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_NETDEV_STREAM_DISCONNECTED_arg(Visitor *v, const char *name,
                 q_obj_NETDEV_STREAM_DISCONNECTED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_NETDEV_STREAM_DISCONNECTED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_NETDEV_STREAM_DISCONNECTED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_NETDEV_STREAM_DISCONNECTED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_net_c;
