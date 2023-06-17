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
#include "qapi-types-replay.h"
#include "qapi-visit-replay.h"

const QEnumLookup ReplayMode_lookup = {
    .array = (const char *const[]) {
        [REPLAY_MODE_NONE] = "none",
        [REPLAY_MODE_RECORD] = "record",
        [REPLAY_MODE_PLAY] = "play",
    },
    .size = REPLAY_MODE__MAX
};

void qapi_free_ReplayInfo(ReplayInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ReplayInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_replay_break_arg(q_obj_replay_break_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_replay_break_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_replay_seek_arg(q_obj_replay_seek_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_replay_seek_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_replay_c;
