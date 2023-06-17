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

#ifndef QAPI_TYPES_YANK_H
#define QAPI_TYPES_YANK_H

#include "qapi-builtin-types.h"

typedef enum YankInstanceType {
    YANK_INSTANCE_TYPE_BLOCK_NODE,
    YANK_INSTANCE_TYPE_CHARDEV,
    YANK_INSTANCE_TYPE_MIGRATION,
    YANK_INSTANCE_TYPE__MAX,
} YankInstanceType;

#define YankInstanceType_str(val) \
    qapi_enum_lookup(&YankInstanceType_lookup, (val))

extern const QEnumLookup YankInstanceType_lookup;

typedef struct YankInstanceBlockNode YankInstanceBlockNode;

typedef struct YankInstanceChardev YankInstanceChardev;

typedef struct q_obj_YankInstance_base q_obj_YankInstance_base;

typedef struct YankInstance YankInstance;

typedef struct YankInstanceList YankInstanceList;

typedef struct q_obj_yank_arg q_obj_yank_arg;

struct YankInstanceBlockNode {
    char *node_name;
};

void qapi_free_YankInstanceBlockNode(YankInstanceBlockNode *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(YankInstanceBlockNode, qapi_free_YankInstanceBlockNode)

struct YankInstanceChardev {
    char *id;
};

void qapi_free_YankInstanceChardev(YankInstanceChardev *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(YankInstanceChardev, qapi_free_YankInstanceChardev)

struct q_obj_YankInstance_base {
    YankInstanceType type;
};

void qapi_free_q_obj_YankInstance_base(q_obj_YankInstance_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_YankInstance_base, qapi_free_q_obj_YankInstance_base)

struct YankInstance {
    YankInstanceType type;
    union { /* union tag is @type */
        YankInstanceBlockNode block_node;
        YankInstanceChardev chardev;
    } u;
};

void qapi_free_YankInstance(YankInstance *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(YankInstance, qapi_free_YankInstance)

struct YankInstanceList {
    YankInstanceList *next;
    YankInstance *value;
};

void qapi_free_YankInstanceList(YankInstanceList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(YankInstanceList, qapi_free_YankInstanceList)

struct q_obj_yank_arg {
    YankInstanceList *instances;
};

void qapi_free_q_obj_yank_arg(q_obj_yank_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_yank_arg, qapi_free_q_obj_yank_arg)

#endif /* QAPI_TYPES_YANK_H */
