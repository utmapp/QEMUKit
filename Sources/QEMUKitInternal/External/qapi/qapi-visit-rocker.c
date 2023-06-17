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
#include "qapi-visit-rocker.h"

bool visit_type_RockerSwitch_members(Visitor *v, RockerSwitch *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "ports", &obj->ports, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RockerSwitch(Visitor *v, const char *name,
                 RockerSwitch **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RockerSwitch), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RockerSwitch_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerSwitch(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_rocker_arg_members(Visitor *v, q_obj_query_rocker_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_query_rocker_arg(Visitor *v, const char *name,
                 q_obj_query_rocker_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_rocker_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_rocker_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_rocker_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerPortDuplex(Visitor *v, const char *name,
                 RockerPortDuplex *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &RockerPortDuplex_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_RockerPortAutoneg(Visitor *v, const char *name,
                 RockerPortAutoneg *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &RockerPortAutoneg_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_RockerPort_members(Visitor *v, RockerPort *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "enabled", &obj->enabled, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "link-up", &obj->link_up, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "speed", &obj->speed, errp)) {
        return false;
    }
    if (!visit_type_RockerPortDuplex(v, "duplex", &obj->duplex, errp)) {
        return false;
    }
    if (!visit_type_RockerPortAutoneg(v, "autoneg", &obj->autoneg, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RockerPort(Visitor *v, const char *name,
                 RockerPort **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RockerPort), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RockerPort_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerPort(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_rocker_ports_arg_members(Visitor *v, q_obj_query_rocker_ports_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_query_rocker_ports_arg(Visitor *v, const char *name,
                 q_obj_query_rocker_ports_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_rocker_ports_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_rocker_ports_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_rocker_ports_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerPortList(Visitor *v, const char *name,
                 RockerPortList **obj, Error **errp)
{
    bool ok = false;
    RockerPortList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (RockerPortList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_RockerPort(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerPortList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerOfDpaFlowKey_members(Visitor *v, RockerOfDpaFlowKey *obj, Error **errp)
{
    if (!visit_type_uint32(v, "priority", &obj->priority, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "tbl-id", &obj->tbl_id, errp)) {
        return false;
    }
    if (visit_optional(v, "in-pport", &obj->has_in_pport)) {
        if (!visit_type_uint32(v, "in-pport", &obj->in_pport, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tunnel-id", &obj->has_tunnel_id)) {
        if (!visit_type_uint32(v, "tunnel-id", &obj->tunnel_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vlan-id", &obj->has_vlan_id)) {
        if (!visit_type_uint16(v, "vlan-id", &obj->vlan_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "eth-type", &obj->has_eth_type)) {
        if (!visit_type_uint16(v, "eth-type", &obj->eth_type, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "eth-src", &obj->has_eth_src)) {
        if (!visit_type_str(v, "eth-src", &obj->eth_src, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "eth-dst", &obj->has_eth_dst)) {
        if (!visit_type_str(v, "eth-dst", &obj->eth_dst, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ip-proto", &obj->has_ip_proto)) {
        if (!visit_type_uint8(v, "ip-proto", &obj->ip_proto, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ip-tos", &obj->has_ip_tos)) {
        if (!visit_type_uint8(v, "ip-tos", &obj->ip_tos, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ip-dst", &obj->has_ip_dst)) {
        if (!visit_type_str(v, "ip-dst", &obj->ip_dst, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_RockerOfDpaFlowKey(Visitor *v, const char *name,
                 RockerOfDpaFlowKey **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RockerOfDpaFlowKey), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RockerOfDpaFlowKey_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerOfDpaFlowKey(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerOfDpaFlowMask_members(Visitor *v, RockerOfDpaFlowMask *obj, Error **errp)
{
    if (visit_optional(v, "in-pport", &obj->has_in_pport)) {
        if (!visit_type_uint32(v, "in-pport", &obj->in_pport, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tunnel-id", &obj->has_tunnel_id)) {
        if (!visit_type_uint32(v, "tunnel-id", &obj->tunnel_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vlan-id", &obj->has_vlan_id)) {
        if (!visit_type_uint16(v, "vlan-id", &obj->vlan_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "eth-src", &obj->has_eth_src)) {
        if (!visit_type_str(v, "eth-src", &obj->eth_src, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "eth-dst", &obj->has_eth_dst)) {
        if (!visit_type_str(v, "eth-dst", &obj->eth_dst, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ip-proto", &obj->has_ip_proto)) {
        if (!visit_type_uint8(v, "ip-proto", &obj->ip_proto, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ip-tos", &obj->has_ip_tos)) {
        if (!visit_type_uint8(v, "ip-tos", &obj->ip_tos, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_RockerOfDpaFlowMask(Visitor *v, const char *name,
                 RockerOfDpaFlowMask **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RockerOfDpaFlowMask), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RockerOfDpaFlowMask_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerOfDpaFlowMask(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerOfDpaFlowAction_members(Visitor *v, RockerOfDpaFlowAction *obj, Error **errp)
{
    if (visit_optional(v, "goto-tbl", &obj->has_goto_tbl)) {
        if (!visit_type_uint32(v, "goto-tbl", &obj->goto_tbl, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "group-id", &obj->has_group_id)) {
        if (!visit_type_uint32(v, "group-id", &obj->group_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tunnel-lport", &obj->has_tunnel_lport)) {
        if (!visit_type_uint32(v, "tunnel-lport", &obj->tunnel_lport, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vlan-id", &obj->has_vlan_id)) {
        if (!visit_type_uint16(v, "vlan-id", &obj->vlan_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "new-vlan-id", &obj->has_new_vlan_id)) {
        if (!visit_type_uint16(v, "new-vlan-id", &obj->new_vlan_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out-pport", &obj->has_out_pport)) {
        if (!visit_type_uint32(v, "out-pport", &obj->out_pport, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_RockerOfDpaFlowAction(Visitor *v, const char *name,
                 RockerOfDpaFlowAction **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RockerOfDpaFlowAction), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RockerOfDpaFlowAction_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerOfDpaFlowAction(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerOfDpaFlow_members(Visitor *v, RockerOfDpaFlow *obj, Error **errp)
{
    if (!visit_type_uint64(v, "cookie", &obj->cookie, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "hits", &obj->hits, errp)) {
        return false;
    }
    if (!visit_type_RockerOfDpaFlowKey(v, "key", &obj->key, errp)) {
        return false;
    }
    if (!visit_type_RockerOfDpaFlowMask(v, "mask", &obj->mask, errp)) {
        return false;
    }
    if (!visit_type_RockerOfDpaFlowAction(v, "action", &obj->action, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RockerOfDpaFlow(Visitor *v, const char *name,
                 RockerOfDpaFlow **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RockerOfDpaFlow), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RockerOfDpaFlow_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerOfDpaFlow(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_rocker_of_dpa_flows_arg_members(Visitor *v, q_obj_query_rocker_of_dpa_flows_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "tbl-id", &obj->has_tbl_id)) {
        if (!visit_type_uint32(v, "tbl-id", &obj->tbl_id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_query_rocker_of_dpa_flows_arg(Visitor *v, const char *name,
                 q_obj_query_rocker_of_dpa_flows_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_rocker_of_dpa_flows_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_rocker_of_dpa_flows_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_rocker_of_dpa_flows_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerOfDpaFlowList(Visitor *v, const char *name,
                 RockerOfDpaFlowList **obj, Error **errp)
{
    bool ok = false;
    RockerOfDpaFlowList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (RockerOfDpaFlowList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_RockerOfDpaFlow(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerOfDpaFlowList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerOfDpaGroup_members(Visitor *v, RockerOfDpaGroup *obj, Error **errp)
{
    if (!visit_type_uint32(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "vlan-id", &obj->has_vlan_id)) {
        if (!visit_type_uint16(v, "vlan-id", &obj->vlan_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "pport", &obj->has_pport)) {
        if (!visit_type_uint32(v, "pport", &obj->pport, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "index", &obj->has_index)) {
        if (!visit_type_uint32(v, "index", &obj->index, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out-pport", &obj->has_out_pport)) {
        if (!visit_type_uint32(v, "out-pport", &obj->out_pport, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "group-id", &obj->has_group_id)) {
        if (!visit_type_uint32(v, "group-id", &obj->group_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "set-vlan-id", &obj->has_set_vlan_id)) {
        if (!visit_type_uint16(v, "set-vlan-id", &obj->set_vlan_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "pop-vlan", &obj->has_pop_vlan)) {
        if (!visit_type_uint8(v, "pop-vlan", &obj->pop_vlan, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "group-ids", &obj->has_group_ids)) {
        if (!visit_type_uint32List(v, "group-ids", &obj->group_ids, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "set-eth-src", &obj->has_set_eth_src)) {
        if (!visit_type_str(v, "set-eth-src", &obj->set_eth_src, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "set-eth-dst", &obj->has_set_eth_dst)) {
        if (!visit_type_str(v, "set-eth-dst", &obj->set_eth_dst, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ttl-check", &obj->has_ttl_check)) {
        if (!visit_type_uint8(v, "ttl-check", &obj->ttl_check, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_RockerOfDpaGroup(Visitor *v, const char *name,
                 RockerOfDpaGroup **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RockerOfDpaGroup), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RockerOfDpaGroup_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerOfDpaGroup(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_rocker_of_dpa_groups_arg_members(Visitor *v, q_obj_query_rocker_of_dpa_groups_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "type", &obj->has_type)) {
        if (!visit_type_uint8(v, "type", &obj->type, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_query_rocker_of_dpa_groups_arg(Visitor *v, const char *name,
                 q_obj_query_rocker_of_dpa_groups_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_rocker_of_dpa_groups_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_rocker_of_dpa_groups_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_rocker_of_dpa_groups_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RockerOfDpaGroupList(Visitor *v, const char *name,
                 RockerOfDpaGroupList **obj, Error **errp)
{
    bool ok = false;
    RockerOfDpaGroupList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (RockerOfDpaGroupList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_RockerOfDpaGroup(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RockerOfDpaGroupList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_rocker_c;
