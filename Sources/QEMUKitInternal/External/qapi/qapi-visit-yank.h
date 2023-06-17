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

#ifndef QAPI_VISIT_YANK_H
#define QAPI_VISIT_YANK_H

#include "qapi-builtin-visit.h"
#include "qapi-types-yank.h"


bool visit_type_YankInstanceType(Visitor *v, const char *name,
                 YankInstanceType *obj, Error **errp);

bool visit_type_YankInstanceBlockNode_members(Visitor *v, YankInstanceBlockNode *obj, Error **errp);

bool visit_type_YankInstanceBlockNode(Visitor *v, const char *name,
                 YankInstanceBlockNode **obj, Error **errp);

bool visit_type_YankInstanceChardev_members(Visitor *v, YankInstanceChardev *obj, Error **errp);

bool visit_type_YankInstanceChardev(Visitor *v, const char *name,
                 YankInstanceChardev **obj, Error **errp);

bool visit_type_q_obj_YankInstance_base_members(Visitor *v, q_obj_YankInstance_base *obj, Error **errp);

bool visit_type_q_obj_YankInstance_base(Visitor *v, const char *name,
                 q_obj_YankInstance_base **obj, Error **errp);

bool visit_type_YankInstance_members(Visitor *v, YankInstance *obj, Error **errp);

bool visit_type_YankInstance(Visitor *v, const char *name,
                 YankInstance **obj, Error **errp);

bool visit_type_YankInstanceList(Visitor *v, const char *name,
                 YankInstanceList **obj, Error **errp);

bool visit_type_q_obj_yank_arg_members(Visitor *v, q_obj_yank_arg *obj, Error **errp);

bool visit_type_q_obj_yank_arg(Visitor *v, const char *name,
                 q_obj_yank_arg **obj, Error **errp);

#endif /* QAPI_VISIT_YANK_H */
