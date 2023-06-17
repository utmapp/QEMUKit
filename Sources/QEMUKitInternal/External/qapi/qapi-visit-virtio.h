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

#ifndef QAPI_VISIT_VIRTIO_H
#define QAPI_VISIT_VIRTIO_H

#include "qapi-builtin-visit.h"
#include "qapi-types-virtio.h"


bool visit_type_VirtioInfo_members(Visitor *v, VirtioInfo *obj, Error **errp);

bool visit_type_VirtioInfo(Visitor *v, const char *name,
                 VirtioInfo **obj, Error **errp);

bool visit_type_VirtioInfoList(Visitor *v, const char *name,
                 VirtioInfoList **obj, Error **errp);

bool visit_type_VhostStatus_members(Visitor *v, VhostStatus *obj, Error **errp);

bool visit_type_VhostStatus(Visitor *v, const char *name,
                 VhostStatus **obj, Error **errp);

bool visit_type_VirtioStatus_members(Visitor *v, VirtioStatus *obj, Error **errp);

bool visit_type_VirtioStatus(Visitor *v, const char *name,
                 VirtioStatus **obj, Error **errp);

bool visit_type_q_obj_x_query_virtio_status_arg_members(Visitor *v, q_obj_x_query_virtio_status_arg *obj, Error **errp);

bool visit_type_q_obj_x_query_virtio_status_arg(Visitor *v, const char *name,
                 q_obj_x_query_virtio_status_arg **obj, Error **errp);

bool visit_type_VirtioDeviceStatus_members(Visitor *v, VirtioDeviceStatus *obj, Error **errp);

bool visit_type_VirtioDeviceStatus(Visitor *v, const char *name,
                 VirtioDeviceStatus **obj, Error **errp);

bool visit_type_VhostDeviceProtocols_members(Visitor *v, VhostDeviceProtocols *obj, Error **errp);

bool visit_type_VhostDeviceProtocols(Visitor *v, const char *name,
                 VhostDeviceProtocols **obj, Error **errp);

bool visit_type_VirtioDeviceFeatures_members(Visitor *v, VirtioDeviceFeatures *obj, Error **errp);

bool visit_type_VirtioDeviceFeatures(Visitor *v, const char *name,
                 VirtioDeviceFeatures **obj, Error **errp);

bool visit_type_VirtQueueStatus_members(Visitor *v, VirtQueueStatus *obj, Error **errp);

bool visit_type_VirtQueueStatus(Visitor *v, const char *name,
                 VirtQueueStatus **obj, Error **errp);

bool visit_type_q_obj_x_query_virtio_queue_status_arg_members(Visitor *v, q_obj_x_query_virtio_queue_status_arg *obj, Error **errp);

bool visit_type_q_obj_x_query_virtio_queue_status_arg(Visitor *v, const char *name,
                 q_obj_x_query_virtio_queue_status_arg **obj, Error **errp);

bool visit_type_VirtVhostQueueStatus_members(Visitor *v, VirtVhostQueueStatus *obj, Error **errp);

bool visit_type_VirtVhostQueueStatus(Visitor *v, const char *name,
                 VirtVhostQueueStatus **obj, Error **errp);

bool visit_type_q_obj_x_query_virtio_vhost_queue_status_arg_members(Visitor *v, q_obj_x_query_virtio_vhost_queue_status_arg *obj, Error **errp);

bool visit_type_q_obj_x_query_virtio_vhost_queue_status_arg(Visitor *v, const char *name,
                 q_obj_x_query_virtio_vhost_queue_status_arg **obj, Error **errp);

bool visit_type_VirtioRingDesc_members(Visitor *v, VirtioRingDesc *obj, Error **errp);

bool visit_type_VirtioRingDesc(Visitor *v, const char *name,
                 VirtioRingDesc **obj, Error **errp);

bool visit_type_VirtioRingAvail_members(Visitor *v, VirtioRingAvail *obj, Error **errp);

bool visit_type_VirtioRingAvail(Visitor *v, const char *name,
                 VirtioRingAvail **obj, Error **errp);

bool visit_type_VirtioRingUsed_members(Visitor *v, VirtioRingUsed *obj, Error **errp);

bool visit_type_VirtioRingUsed(Visitor *v, const char *name,
                 VirtioRingUsed **obj, Error **errp);

bool visit_type_VirtioRingDescList(Visitor *v, const char *name,
                 VirtioRingDescList **obj, Error **errp);

bool visit_type_VirtioQueueElement_members(Visitor *v, VirtioQueueElement *obj, Error **errp);

bool visit_type_VirtioQueueElement(Visitor *v, const char *name,
                 VirtioQueueElement **obj, Error **errp);

bool visit_type_q_obj_x_query_virtio_queue_element_arg_members(Visitor *v, q_obj_x_query_virtio_queue_element_arg *obj, Error **errp);

bool visit_type_q_obj_x_query_virtio_queue_element_arg(Visitor *v, const char *name,
                 q_obj_x_query_virtio_queue_element_arg **obj, Error **errp);

#endif /* QAPI_VISIT_VIRTIO_H */
