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
#include "qapi-visit-trace.h"

bool visit_type_TraceEventState(Visitor *v, const char *name,
                 TraceEventState *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &TraceEventState_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_TraceEventInfo_members(Visitor *v, TraceEventInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_TraceEventState(v, "state", &obj->state, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "vcpu", &obj->vcpu, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TraceEventInfo(Visitor *v, const char *name,
                 TraceEventInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TraceEventInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TraceEventInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TraceEventInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_trace_event_get_state_arg_members(Visitor *v, q_obj_trace_event_get_state_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "vcpu", &obj->has_vcpu)) {
        if (!visit_type_int(v, "vcpu", &obj->vcpu, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_trace_event_get_state_arg(Visitor *v, const char *name,
                 q_obj_trace_event_get_state_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_trace_event_get_state_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_trace_event_get_state_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_trace_event_get_state_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TraceEventInfoList(Visitor *v, const char *name,
                 TraceEventInfoList **obj, Error **errp)
{
    bool ok = false;
    TraceEventInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (TraceEventInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_TraceEventInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TraceEventInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_trace_event_set_state_arg_members(Visitor *v, q_obj_trace_event_set_state_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "enable", &obj->enable, errp)) {
        return false;
    }
    if (visit_optional(v, "ignore-unavailable", &obj->has_ignore_unavailable)) {
        if (!visit_type_bool(v, "ignore-unavailable", &obj->ignore_unavailable, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vcpu", &obj->has_vcpu)) {
        if (!visit_type_int(v, "vcpu", &obj->vcpu, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_trace_event_set_state_arg(Visitor *v, const char *name,
                 q_obj_trace_event_set_state_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_trace_event_set_state_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_trace_event_set_state_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_trace_event_set_state_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_trace_c;
