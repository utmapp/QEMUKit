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

#ifndef QAPI_VISIT_REPLAY_H
#define QAPI_VISIT_REPLAY_H

#include "qapi-builtin-visit.h"
#include "qapi-types-replay.h"

#include "qapi-visit-common.h"

bool visit_type_ReplayMode(Visitor *v, const char *name,
                 ReplayMode *obj, Error **errp);

bool visit_type_ReplayInfo_members(Visitor *v, ReplayInfo *obj, Error **errp);

bool visit_type_ReplayInfo(Visitor *v, const char *name,
                 ReplayInfo **obj, Error **errp);

bool visit_type_q_obj_replay_break_arg_members(Visitor *v, q_obj_replay_break_arg *obj, Error **errp);

bool visit_type_q_obj_replay_break_arg(Visitor *v, const char *name,
                 q_obj_replay_break_arg **obj, Error **errp);

bool visit_type_q_obj_replay_seek_arg_members(Visitor *v, q_obj_replay_seek_arg *obj, Error **errp);

bool visit_type_q_obj_replay_seek_arg(Visitor *v, const char *name,
                 q_obj_replay_seek_arg **obj, Error **errp);

#endif /* QAPI_VISIT_REPLAY_H */
