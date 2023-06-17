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

#ifndef QAPI_VISIT_QDEV_H
#define QAPI_VISIT_QDEV_H

#include "qapi-builtin-visit.h"
#include "qapi-types-qdev.h"

#include "qapi-visit-qom.h"

bool visit_type_q_obj_device_list_properties_arg_members(Visitor *v, q_obj_device_list_properties_arg *obj, Error **errp);

bool visit_type_q_obj_device_list_properties_arg(Visitor *v, const char *name,
                 q_obj_device_list_properties_arg **obj, Error **errp);

bool visit_type_q_obj_device_add_arg_members(Visitor *v, q_obj_device_add_arg *obj, Error **errp);

bool visit_type_q_obj_device_add_arg(Visitor *v, const char *name,
                 q_obj_device_add_arg **obj, Error **errp);

bool visit_type_q_obj_device_del_arg_members(Visitor *v, q_obj_device_del_arg *obj, Error **errp);

bool visit_type_q_obj_device_del_arg(Visitor *v, const char *name,
                 q_obj_device_del_arg **obj, Error **errp);

bool visit_type_q_obj_DEVICE_DELETED_arg_members(Visitor *v, q_obj_DEVICE_DELETED_arg *obj, Error **errp);

bool visit_type_q_obj_DEVICE_DELETED_arg(Visitor *v, const char *name,
                 q_obj_DEVICE_DELETED_arg **obj, Error **errp);

bool visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg_members(Visitor *v, q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg *obj, Error **errp);

bool visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg(Visitor *v, const char *name,
                 q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg **obj, Error **errp);

#endif /* QAPI_VISIT_QDEV_H */
