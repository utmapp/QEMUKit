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

#ifndef QAPI_TYPES_REPLAY_H
#define QAPI_TYPES_REPLAY_H

#include "qapi-builtin-types.h"
#include "qapi-types-common.h"

typedef enum ReplayMode {
    REPLAY_MODE_NONE,
    REPLAY_MODE_RECORD,
    REPLAY_MODE_PLAY,
    REPLAY_MODE__MAX,
} ReplayMode;

#define ReplayMode_str(val) \
    qapi_enum_lookup(&ReplayMode_lookup, (val))

extern const QEnumLookup ReplayMode_lookup;

typedef struct ReplayInfo ReplayInfo;

typedef struct q_obj_replay_break_arg q_obj_replay_break_arg;

typedef struct q_obj_replay_seek_arg q_obj_replay_seek_arg;

struct ReplayInfo {
    ReplayMode mode;
    bool has_filename;
    char *filename;
    int64_t icount;
};

void qapi_free_ReplayInfo(ReplayInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ReplayInfo, qapi_free_ReplayInfo)

struct q_obj_replay_break_arg {
    int64_t icount;
};

void qapi_free_q_obj_replay_break_arg(q_obj_replay_break_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_replay_break_arg, qapi_free_q_obj_replay_break_arg)

struct q_obj_replay_seek_arg {
    int64_t icount;
};

void qapi_free_q_obj_replay_seek_arg(q_obj_replay_seek_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_replay_seek_arg, qapi_free_q_obj_replay_seek_arg)

#endif /* QAPI_TYPES_REPLAY_H */
