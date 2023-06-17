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

#ifndef QAPI_TYPES_CONTROL_H
#define QAPI_TYPES_CONTROL_H

#include "qapi-builtin-types.h"

typedef struct QMPCapabilityList QMPCapabilityList;

typedef struct q_obj_qmp_capabilities_arg q_obj_qmp_capabilities_arg;

typedef enum QMPCapability {
    QMP_CAPABILITY_OOB,
    QMP_CAPABILITY__MAX,
} QMPCapability;

#define QMPCapability_str(val) \
    qapi_enum_lookup(&QMPCapability_lookup, (val))

extern const QEnumLookup QMPCapability_lookup;

typedef struct VersionTriple VersionTriple;

typedef struct VersionInfo VersionInfo;

typedef struct CommandInfo CommandInfo;

typedef struct CommandInfoList CommandInfoList;

typedef enum MonitorMode {
    MONITOR_MODE_READLINE,
    MONITOR_MODE_CONTROL,
    MONITOR_MODE__MAX,
} MonitorMode;

#define MonitorMode_str(val) \
    qapi_enum_lookup(&MonitorMode_lookup, (val))

extern const QEnumLookup MonitorMode_lookup;

typedef struct MonitorOptions MonitorOptions;

struct QMPCapabilityList {
    QMPCapabilityList *next;
    QMPCapability value;
};

void qapi_free_QMPCapabilityList(QMPCapabilityList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QMPCapabilityList, qapi_free_QMPCapabilityList)

struct q_obj_qmp_capabilities_arg {
    bool has_enable;
    QMPCapabilityList *enable;
};

void qapi_free_q_obj_qmp_capabilities_arg(q_obj_qmp_capabilities_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_qmp_capabilities_arg, qapi_free_q_obj_qmp_capabilities_arg)

struct VersionTriple {
    int64_t major;
    int64_t minor;
    int64_t micro;
};

void qapi_free_VersionTriple(VersionTriple *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VersionTriple, qapi_free_VersionTriple)

struct VersionInfo {
    VersionTriple *qemu;
    char *package;
};

void qapi_free_VersionInfo(VersionInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VersionInfo, qapi_free_VersionInfo)

struct CommandInfo {
    char *name;
};

void qapi_free_CommandInfo(CommandInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CommandInfo, qapi_free_CommandInfo)

struct CommandInfoList {
    CommandInfoList *next;
    CommandInfo *value;
};

void qapi_free_CommandInfoList(CommandInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CommandInfoList, qapi_free_CommandInfoList)

struct MonitorOptions {
    bool has_id;
    char *id;
    bool has_mode;
    MonitorMode mode;
    bool has_pretty;
    bool pretty;
    char *chardev;
};

void qapi_free_MonitorOptions(MonitorOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MonitorOptions, qapi_free_MonitorOptions)

#endif /* QAPI_TYPES_CONTROL_H */
