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

#ifndef QAPI_TYPES_QDEV_H
#define QAPI_TYPES_QDEV_H

#include "qapi-builtin-types.h"
#include "qapi-types-qom.h"

typedef struct q_obj_device_list_properties_arg q_obj_device_list_properties_arg;

typedef struct q_obj_device_add_arg q_obj_device_add_arg;

typedef struct q_obj_device_del_arg q_obj_device_del_arg;

typedef struct q_obj_DEVICE_DELETED_arg q_obj_DEVICE_DELETED_arg;

typedef struct q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg;

struct q_obj_device_list_properties_arg {
    char *q_typename;
};

void qapi_free_q_obj_device_list_properties_arg(q_obj_device_list_properties_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_device_list_properties_arg, qapi_free_q_obj_device_list_properties_arg)

struct q_obj_device_add_arg {
    char *driver;
    bool has_bus;
    char *bus;
    bool has_id;
    char *id;
};

void qapi_free_q_obj_device_add_arg(q_obj_device_add_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_device_add_arg, qapi_free_q_obj_device_add_arg)

struct q_obj_device_del_arg {
    char *id;
};

void qapi_free_q_obj_device_del_arg(q_obj_device_del_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_device_del_arg, qapi_free_q_obj_device_del_arg)

struct q_obj_DEVICE_DELETED_arg {
    bool has_device;
    char *device;
    char *path;
};

void qapi_free_q_obj_DEVICE_DELETED_arg(q_obj_DEVICE_DELETED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_DEVICE_DELETED_arg, qapi_free_q_obj_DEVICE_DELETED_arg)

struct q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg {
    bool has_device;
    char *device;
    char *path;
};

void qapi_free_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg(q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg, qapi_free_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg)

#endif /* QAPI_TYPES_QDEV_H */
