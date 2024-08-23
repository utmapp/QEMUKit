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

#ifndef QAPI_VISIT_BLOCK_H
#define QAPI_VISIT_BLOCK_H

#include "qapi-builtin-visit.h"
#include "qapi-types-block.h"

#include "qapi-visit-block-core.h"

bool visit_type_BiosAtaTranslation(Visitor *v, const char *name,
                 BiosAtaTranslation *obj, Error **errp);

bool visit_type_FloppyDriveType(Visitor *v, const char *name,
                 FloppyDriveType *obj, Error **errp);

bool visit_type_PRManagerInfo_members(Visitor *v, PRManagerInfo *obj, Error **errp);

bool visit_type_PRManagerInfo(Visitor *v, const char *name,
                 PRManagerInfo **obj, Error **errp);

bool visit_type_PRManagerInfoList(Visitor *v, const char *name,
                 PRManagerInfoList **obj, Error **errp);

bool visit_type_q_obj_eject_arg_members(Visitor *v, q_obj_eject_arg *obj, Error **errp);

bool visit_type_q_obj_eject_arg(Visitor *v, const char *name,
                 q_obj_eject_arg **obj, Error **errp);

bool visit_type_q_obj_blockdev_open_tray_arg_members(Visitor *v, q_obj_blockdev_open_tray_arg *obj, Error **errp);

bool visit_type_q_obj_blockdev_open_tray_arg(Visitor *v, const char *name,
                 q_obj_blockdev_open_tray_arg **obj, Error **errp);

bool visit_type_q_obj_blockdev_close_tray_arg_members(Visitor *v, q_obj_blockdev_close_tray_arg *obj, Error **errp);

bool visit_type_q_obj_blockdev_close_tray_arg(Visitor *v, const char *name,
                 q_obj_blockdev_close_tray_arg **obj, Error **errp);

bool visit_type_q_obj_blockdev_remove_medium_arg_members(Visitor *v, q_obj_blockdev_remove_medium_arg *obj, Error **errp);

bool visit_type_q_obj_blockdev_remove_medium_arg(Visitor *v, const char *name,
                 q_obj_blockdev_remove_medium_arg **obj, Error **errp);

bool visit_type_q_obj_blockdev_insert_medium_arg_members(Visitor *v, q_obj_blockdev_insert_medium_arg *obj, Error **errp);

bool visit_type_q_obj_blockdev_insert_medium_arg(Visitor *v, const char *name,
                 q_obj_blockdev_insert_medium_arg **obj, Error **errp);

bool visit_type_BlockdevChangeReadOnlyMode(Visitor *v, const char *name,
                 BlockdevChangeReadOnlyMode *obj, Error **errp);

bool visit_type_BlockdevChangeFileLockingMode(Visitor *v, const char *name,
                 BlockdevChangeFileLockingMode *obj, Error **errp);

bool visit_type_q_obj_blockdev_change_medium_arg_members(Visitor *v, q_obj_blockdev_change_medium_arg *obj, Error **errp);

bool visit_type_q_obj_blockdev_change_medium_arg(Visitor *v, const char *name,
                 q_obj_blockdev_change_medium_arg **obj, Error **errp);

bool visit_type_q_obj_DEVICE_TRAY_MOVED_arg_members(Visitor *v, q_obj_DEVICE_TRAY_MOVED_arg *obj, Error **errp);

bool visit_type_q_obj_DEVICE_TRAY_MOVED_arg(Visitor *v, const char *name,
                 q_obj_DEVICE_TRAY_MOVED_arg **obj, Error **errp);

bool visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg_members(Visitor *v, q_obj_PR_MANAGER_STATUS_CHANGED_arg *obj, Error **errp);

bool visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg(Visitor *v, const char *name,
                 q_obj_PR_MANAGER_STATUS_CHANGED_arg **obj, Error **errp);

bool visit_type_q_obj_block_latency_histogram_set_arg_members(Visitor *v, q_obj_block_latency_histogram_set_arg *obj, Error **errp);

bool visit_type_q_obj_block_latency_histogram_set_arg(Visitor *v, const char *name,
                 q_obj_block_latency_histogram_set_arg **obj, Error **errp);

#endif /* QAPI_VISIT_BLOCK_H */
