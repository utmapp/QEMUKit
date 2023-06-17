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
#include "qapi-types-control.h"
#include "qapi-visit-control.h"

void qapi_free_QMPCapabilityList(QMPCapabilityList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_QMPCapabilityList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_qmp_capabilities_arg(q_obj_qmp_capabilities_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_qmp_capabilities_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup QMPCapability_lookup = {
    .array = (const char *const[]) {
        [QMP_CAPABILITY_OOB] = "oob",
    },
    .size = QMP_CAPABILITY__MAX
};

void qapi_free_VersionTriple(VersionTriple *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VersionTriple(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VersionInfo(VersionInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VersionInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CommandInfo(CommandInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CommandInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CommandInfoList(CommandInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CommandInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup MonitorMode_lookup = {
    .array = (const char *const[]) {
        [MONITOR_MODE_READLINE] = "readline",
        [MONITOR_MODE_CONTROL] = "control",
    },
    .size = MONITOR_MODE__MAX
};

void qapi_free_MonitorOptions(MonitorOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MonitorOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_control_c;
