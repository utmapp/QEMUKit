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
#include "qapi-visit-control.h"

bool visit_type_QMPCapabilityList(Visitor *v, const char *name,
                 QMPCapabilityList **obj, Error **errp)
{
    bool ok = false;
    QMPCapabilityList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (QMPCapabilityList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_QMPCapability(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QMPCapabilityList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_qmp_capabilities_arg_members(Visitor *v, q_obj_qmp_capabilities_arg *obj, Error **errp)
{
    if (visit_optional(v, "enable", &obj->has_enable)) {
        if (!visit_type_QMPCapabilityList(v, "enable", &obj->enable, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_qmp_capabilities_arg(Visitor *v, const char *name,
                 q_obj_qmp_capabilities_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_qmp_capabilities_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_qmp_capabilities_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_qmp_capabilities_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QMPCapability(Visitor *v, const char *name,
                 QMPCapability *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QMPCapability_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_VersionTriple_members(Visitor *v, VersionTriple *obj, Error **errp)
{
    if (!visit_type_int(v, "major", &obj->major, errp)) {
        return false;
    }
    if (!visit_type_int(v, "minor", &obj->minor, errp)) {
        return false;
    }
    if (!visit_type_int(v, "micro", &obj->micro, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VersionTriple(Visitor *v, const char *name,
                 VersionTriple **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VersionTriple), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VersionTriple_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VersionTriple(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VersionInfo_members(Visitor *v, VersionInfo *obj, Error **errp)
{
    if (!visit_type_VersionTriple(v, "qemu", &obj->qemu, errp)) {
        return false;
    }
    if (!visit_type_str(v, "package", &obj->package, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VersionInfo(Visitor *v, const char *name,
                 VersionInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VersionInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VersionInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VersionInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CommandInfo_members(Visitor *v, CommandInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CommandInfo(Visitor *v, const char *name,
                 CommandInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CommandInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CommandInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CommandInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CommandInfoList(Visitor *v, const char *name,
                 CommandInfoList **obj, Error **errp)
{
    bool ok = false;
    CommandInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CommandInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CommandInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CommandInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MonitorMode(Visitor *v, const char *name,
                 MonitorMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MonitorMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_MonitorOptions_members(Visitor *v, MonitorOptions *obj, Error **errp)
{
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_MonitorMode(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "pretty", &obj->has_pretty)) {
        if (!visit_type_bool(v, "pretty", &obj->pretty, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "chardev", &obj->chardev, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MonitorOptions(Visitor *v, const char *name,
                 MonitorOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MonitorOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MonitorOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MonitorOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_control_c;
