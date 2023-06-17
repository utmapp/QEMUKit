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

#ifndef QAPI_TYPES_VIRTIO_H
#define QAPI_TYPES_VIRTIO_H

#include "qapi-builtin-types.h"

typedef struct VirtioInfo VirtioInfo;

typedef struct VirtioInfoList VirtioInfoList;

typedef struct VhostStatus VhostStatus;

typedef struct VirtioStatus VirtioStatus;

typedef struct q_obj_x_query_virtio_status_arg q_obj_x_query_virtio_status_arg;

typedef struct VirtioDeviceStatus VirtioDeviceStatus;

typedef struct VhostDeviceProtocols VhostDeviceProtocols;

typedef struct VirtioDeviceFeatures VirtioDeviceFeatures;

typedef struct VirtQueueStatus VirtQueueStatus;

typedef struct q_obj_x_query_virtio_queue_status_arg q_obj_x_query_virtio_queue_status_arg;

typedef struct VirtVhostQueueStatus VirtVhostQueueStatus;

typedef struct q_obj_x_query_virtio_vhost_queue_status_arg q_obj_x_query_virtio_vhost_queue_status_arg;

typedef struct VirtioRingDesc VirtioRingDesc;

typedef struct VirtioRingAvail VirtioRingAvail;

typedef struct VirtioRingUsed VirtioRingUsed;

typedef struct VirtioRingDescList VirtioRingDescList;

typedef struct VirtioQueueElement VirtioQueueElement;

typedef struct q_obj_x_query_virtio_queue_element_arg q_obj_x_query_virtio_queue_element_arg;

struct VirtioInfo {
    char *path;
    char *name;
};

void qapi_free_VirtioInfo(VirtioInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioInfo, qapi_free_VirtioInfo)

struct VirtioInfoList {
    VirtioInfoList *next;
    VirtioInfo *value;
};

void qapi_free_VirtioInfoList(VirtioInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioInfoList, qapi_free_VirtioInfoList)

struct VhostStatus {
    int64_t n_mem_sections;
    int64_t n_tmp_sections;
    uint32_t nvqs;
    int64_t vq_index;
    VirtioDeviceFeatures *features;
    VirtioDeviceFeatures *acked_features;
    VirtioDeviceFeatures *backend_features;
    VhostDeviceProtocols *protocol_features;
    uint64_t max_queues;
    uint64_t backend_cap;
    bool log_enabled;
    uint64_t log_size;
};

void qapi_free_VhostStatus(VhostStatus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VhostStatus, qapi_free_VhostStatus)

struct VirtioStatus {
    char *name;
    uint16_t device_id;
    bool vhost_started;
    char *device_endian;
    VirtioDeviceFeatures *guest_features;
    VirtioDeviceFeatures *host_features;
    VirtioDeviceFeatures *backend_features;
    int64_t num_vqs;
    VirtioDeviceStatus *status;
    uint8_t isr;
    uint16_t queue_sel;
    bool vm_running;
    bool broken;
    bool disabled;
    bool use_started;
    bool started;
    bool start_on_kick;
    bool disable_legacy_check;
    char *bus_name;
    bool use_guest_notifier_mask;
    bool has_vhost_dev;
    VhostStatus *vhost_dev;
};

void qapi_free_VirtioStatus(VirtioStatus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioStatus, qapi_free_VirtioStatus)

struct q_obj_x_query_virtio_status_arg {
    char *path;
};

void qapi_free_q_obj_x_query_virtio_status_arg(q_obj_x_query_virtio_status_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_x_query_virtio_status_arg, qapi_free_q_obj_x_query_virtio_status_arg)

struct VirtioDeviceStatus {
    strList *statuses;
    bool has_unknown_statuses;
    uint8_t unknown_statuses;
};

void qapi_free_VirtioDeviceStatus(VirtioDeviceStatus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioDeviceStatus, qapi_free_VirtioDeviceStatus)

struct VhostDeviceProtocols {
    strList *protocols;
    bool has_unknown_protocols;
    uint64_t unknown_protocols;
};

void qapi_free_VhostDeviceProtocols(VhostDeviceProtocols *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VhostDeviceProtocols, qapi_free_VhostDeviceProtocols)

struct VirtioDeviceFeatures {
    strList *transports;
    bool has_dev_features;
    strList *dev_features;
    bool has_unknown_dev_features;
    uint64_t unknown_dev_features;
};

void qapi_free_VirtioDeviceFeatures(VirtioDeviceFeatures *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioDeviceFeatures, qapi_free_VirtioDeviceFeatures)

struct VirtQueueStatus {
    char *name;
    uint16_t queue_index;
    uint32_t inuse;
    uint32_t vring_num;
    uint32_t vring_num_default;
    uint32_t vring_align;
    uint64_t vring_desc;
    uint64_t vring_avail;
    uint64_t vring_used;
    bool has_last_avail_idx;
    uint16_t last_avail_idx;
    bool has_shadow_avail_idx;
    uint16_t shadow_avail_idx;
    uint16_t used_idx;
    uint16_t signalled_used;
    bool signalled_used_valid;
};

void qapi_free_VirtQueueStatus(VirtQueueStatus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtQueueStatus, qapi_free_VirtQueueStatus)

struct q_obj_x_query_virtio_queue_status_arg {
    char *path;
    uint16_t queue;
};

void qapi_free_q_obj_x_query_virtio_queue_status_arg(q_obj_x_query_virtio_queue_status_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_x_query_virtio_queue_status_arg, qapi_free_q_obj_x_query_virtio_queue_status_arg)

struct VirtVhostQueueStatus {
    char *name;
    int64_t kick;
    int64_t call;
    uint64_t desc;
    uint64_t avail;
    uint64_t used;
    int64_t num;
    uint64_t desc_phys;
    uint32_t desc_size;
    uint64_t avail_phys;
    uint32_t avail_size;
    uint64_t used_phys;
    uint32_t used_size;
};

void qapi_free_VirtVhostQueueStatus(VirtVhostQueueStatus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtVhostQueueStatus, qapi_free_VirtVhostQueueStatus)

struct q_obj_x_query_virtio_vhost_queue_status_arg {
    char *path;
    uint16_t queue;
};

void qapi_free_q_obj_x_query_virtio_vhost_queue_status_arg(q_obj_x_query_virtio_vhost_queue_status_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_x_query_virtio_vhost_queue_status_arg, qapi_free_q_obj_x_query_virtio_vhost_queue_status_arg)

struct VirtioRingDesc {
    uint64_t addr;
    uint32_t len;
    strList *flags;
};

void qapi_free_VirtioRingDesc(VirtioRingDesc *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioRingDesc, qapi_free_VirtioRingDesc)

struct VirtioRingAvail {
    uint16_t flags;
    uint16_t idx;
    uint16_t ring;
};

void qapi_free_VirtioRingAvail(VirtioRingAvail *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioRingAvail, qapi_free_VirtioRingAvail)

struct VirtioRingUsed {
    uint16_t flags;
    uint16_t idx;
};

void qapi_free_VirtioRingUsed(VirtioRingUsed *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioRingUsed, qapi_free_VirtioRingUsed)

struct VirtioRingDescList {
    VirtioRingDescList *next;
    VirtioRingDesc *value;
};

void qapi_free_VirtioRingDescList(VirtioRingDescList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioRingDescList, qapi_free_VirtioRingDescList)

struct VirtioQueueElement {
    char *name;
    uint32_t index;
    VirtioRingDescList *descs;
    VirtioRingAvail *avail;
    VirtioRingUsed *used;
};

void qapi_free_VirtioQueueElement(VirtioQueueElement *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioQueueElement, qapi_free_VirtioQueueElement)

struct q_obj_x_query_virtio_queue_element_arg {
    char *path;
    uint16_t queue;
    bool has_index;
    uint16_t index;
};

void qapi_free_q_obj_x_query_virtio_queue_element_arg(q_obj_x_query_virtio_queue_element_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_x_query_virtio_queue_element_arg, qapi_free_q_obj_x_query_virtio_queue_element_arg)

#endif /* QAPI_TYPES_VIRTIO_H */
