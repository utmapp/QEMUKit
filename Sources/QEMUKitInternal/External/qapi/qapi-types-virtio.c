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
#include "qapi-types-virtio.h"
#include "qapi-visit-virtio.h"

void qapi_free_VirtioInfo(VirtioInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioInfoList(VirtioInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VhostStatus(VhostStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VhostStatus(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioStatus(VirtioStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioStatus(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_x_query_virtio_status_arg(q_obj_x_query_virtio_status_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_x_query_virtio_status_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioDeviceStatus(VirtioDeviceStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioDeviceStatus(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VhostDeviceProtocols(VhostDeviceProtocols *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VhostDeviceProtocols(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioDeviceFeatures(VirtioDeviceFeatures *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioDeviceFeatures(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtQueueStatus(VirtQueueStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtQueueStatus(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_x_query_virtio_queue_status_arg(q_obj_x_query_virtio_queue_status_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_x_query_virtio_queue_status_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtVhostQueueStatus(VirtVhostQueueStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtVhostQueueStatus(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_x_query_virtio_vhost_queue_status_arg(q_obj_x_query_virtio_vhost_queue_status_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_x_query_virtio_vhost_queue_status_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioRingDesc(VirtioRingDesc *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioRingDesc(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioRingAvail(VirtioRingAvail *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioRingAvail(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioRingUsed(VirtioRingUsed *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioRingUsed(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioRingDescList(VirtioRingDescList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioRingDescList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioQueueElement(VirtioQueueElement *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioQueueElement(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_x_query_virtio_queue_element_arg(q_obj_x_query_virtio_queue_element_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_x_query_virtio_queue_element_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_virtio_c;
