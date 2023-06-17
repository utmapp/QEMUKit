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
#include "qapi-visit-yank.h"

bool visit_type_YankInstanceType(Visitor *v, const char *name,
                 YankInstanceType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &YankInstanceType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_YankInstanceBlockNode_members(Visitor *v, YankInstanceBlockNode *obj, Error **errp)
{
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_YankInstanceBlockNode(Visitor *v, const char *name,
                 YankInstanceBlockNode **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(YankInstanceBlockNode), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_YankInstanceBlockNode_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_YankInstanceBlockNode(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_YankInstanceChardev_members(Visitor *v, YankInstanceChardev *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_YankInstanceChardev(Visitor *v, const char *name,
                 YankInstanceChardev **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(YankInstanceChardev), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_YankInstanceChardev_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_YankInstanceChardev(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_YankInstance_base_members(Visitor *v, q_obj_YankInstance_base *obj, Error **errp)
{
    if (!visit_type_YankInstanceType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_YankInstance_base(Visitor *v, const char *name,
                 q_obj_YankInstance_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_YankInstance_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_YankInstance_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_YankInstance_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_YankInstance_members(Visitor *v, YankInstance *obj, Error **errp)
{
    if (!visit_type_q_obj_YankInstance_base_members(v, (q_obj_YankInstance_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case YANK_INSTANCE_TYPE_BLOCK_NODE:
        return visit_type_YankInstanceBlockNode_members(v, &obj->u.block_node, errp);
    case YANK_INSTANCE_TYPE_CHARDEV:
        return visit_type_YankInstanceChardev_members(v, &obj->u.chardev, errp);
    case YANK_INSTANCE_TYPE_MIGRATION:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_YankInstance(Visitor *v, const char *name,
                 YankInstance **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(YankInstance), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_YankInstance_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_YankInstance(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_YankInstanceList(Visitor *v, const char *name,
                 YankInstanceList **obj, Error **errp)
{
    bool ok = false;
    YankInstanceList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (YankInstanceList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_YankInstance(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_YankInstanceList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_yank_arg_members(Visitor *v, q_obj_yank_arg *obj, Error **errp)
{
    if (!visit_type_YankInstanceList(v, "instances", &obj->instances, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_yank_arg(Visitor *v, const char *name,
                 q_obj_yank_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_yank_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_yank_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_yank_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_yank_c;
