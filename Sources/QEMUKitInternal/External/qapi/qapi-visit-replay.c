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
#include "qapi-visit-replay.h"

bool visit_type_ReplayMode(Visitor *v, const char *name,
                 ReplayMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ReplayMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_ReplayInfo_members(Visitor *v, ReplayInfo *obj, Error **errp)
{
    if (!visit_type_ReplayMode(v, "mode", &obj->mode, errp)) {
        return false;
    }
    if (visit_optional(v, "filename", &obj->has_filename)) {
        if (!visit_type_str(v, "filename", &obj->filename, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "icount", &obj->icount, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ReplayInfo(Visitor *v, const char *name,
                 ReplayInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ReplayInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ReplayInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ReplayInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_replay_break_arg_members(Visitor *v, q_obj_replay_break_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "icount", &obj->icount, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_replay_break_arg(Visitor *v, const char *name,
                 q_obj_replay_break_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_replay_break_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_replay_break_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_replay_break_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_replay_seek_arg_members(Visitor *v, q_obj_replay_seek_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "icount", &obj->icount, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_replay_seek_arg(Visitor *v, const char *name,
                 q_obj_replay_seek_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_replay_seek_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_replay_seek_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_replay_seek_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_replay_c;
