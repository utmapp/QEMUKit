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

#ifndef QAPI_TYPES_TRACE_H
#define QAPI_TYPES_TRACE_H

#include "qapi-builtin-types.h"

typedef enum TraceEventState {
    TRACE_EVENT_STATE_UNAVAILABLE,
    TRACE_EVENT_STATE_DISABLED,
    TRACE_EVENT_STATE_ENABLED,
    TRACE_EVENT_STATE__MAX,
} TraceEventState;

#define TraceEventState_str(val) \
    qapi_enum_lookup(&TraceEventState_lookup, (val))

extern const QEnumLookup TraceEventState_lookup;

typedef struct TraceEventInfo TraceEventInfo;

typedef struct q_obj_trace_event_get_state_arg q_obj_trace_event_get_state_arg;

typedef struct TraceEventInfoList TraceEventInfoList;

typedef struct q_obj_trace_event_set_state_arg q_obj_trace_event_set_state_arg;

struct TraceEventInfo {
    char *name;
    TraceEventState state;
    bool vcpu;
};

void qapi_free_TraceEventInfo(TraceEventInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TraceEventInfo, qapi_free_TraceEventInfo)

struct q_obj_trace_event_get_state_arg {
    char *name;
    bool has_vcpu;
    int64_t vcpu;
};

void qapi_free_q_obj_trace_event_get_state_arg(q_obj_trace_event_get_state_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_trace_event_get_state_arg, qapi_free_q_obj_trace_event_get_state_arg)

struct TraceEventInfoList {
    TraceEventInfoList *next;
    TraceEventInfo *value;
};

void qapi_free_TraceEventInfoList(TraceEventInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TraceEventInfoList, qapi_free_TraceEventInfoList)

struct q_obj_trace_event_set_state_arg {
    char *name;
    bool enable;
    bool has_ignore_unavailable;
    bool ignore_unavailable;
    bool has_vcpu;
    int64_t vcpu;
};

void qapi_free_q_obj_trace_event_set_state_arg(q_obj_trace_event_set_state_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_trace_event_set_state_arg, qapi_free_q_obj_trace_event_set_state_arg)

#endif /* QAPI_TYPES_TRACE_H */
