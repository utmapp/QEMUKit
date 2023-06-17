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

#include "qemu-compat.h"
#include "error.h"
#include "qerror.h"
#include "qapi-visit-virtio.h"

bool visit_type_VirtioInfo_members(Visitor *v, VirtioInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioInfo(Visitor *v, const char *name,
                 VirtioInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioInfoList(Visitor *v, const char *name,
                 VirtioInfoList **obj, Error **errp)
{
    bool ok = false;
    VirtioInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (VirtioInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_VirtioInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VhostStatus_members(Visitor *v, VhostStatus *obj, Error **errp)
{
    if (!visit_type_int(v, "n-mem-sections", &obj->n_mem_sections, errp)) {
        return false;
    }
    if (!visit_type_int(v, "n-tmp-sections", &obj->n_tmp_sections, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "nvqs", &obj->nvqs, errp)) {
        return false;
    }
    if (!visit_type_int(v, "vq-index", &obj->vq_index, errp)) {
        return false;
    }
    if (!visit_type_VirtioDeviceFeatures(v, "features", &obj->features, errp)) {
        return false;
    }
    if (!visit_type_VirtioDeviceFeatures(v, "acked-features", &obj->acked_features, errp)) {
        return false;
    }
    if (!visit_type_VirtioDeviceFeatures(v, "backend-features", &obj->backend_features, errp)) {
        return false;
    }
    if (!visit_type_VhostDeviceProtocols(v, "protocol-features", &obj->protocol_features, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "max-queues", &obj->max_queues, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "backend-cap", &obj->backend_cap, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "log-enabled", &obj->log_enabled, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "log-size", &obj->log_size, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VhostStatus(Visitor *v, const char *name,
                 VhostStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VhostStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VhostStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VhostStatus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioStatus_members(Visitor *v, VirtioStatus *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "device-id", &obj->device_id, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "vhost-started", &obj->vhost_started, errp)) {
        return false;
    }
    if (!visit_type_str(v, "device-endian", &obj->device_endian, errp)) {
        return false;
    }
    if (!visit_type_VirtioDeviceFeatures(v, "guest-features", &obj->guest_features, errp)) {
        return false;
    }
    if (!visit_type_VirtioDeviceFeatures(v, "host-features", &obj->host_features, errp)) {
        return false;
    }
    if (!visit_type_VirtioDeviceFeatures(v, "backend-features", &obj->backend_features, errp)) {
        return false;
    }
    if (!visit_type_int(v, "num-vqs", &obj->num_vqs, errp)) {
        return false;
    }
    if (!visit_type_VirtioDeviceStatus(v, "status", &obj->status, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "isr", &obj->isr, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "queue-sel", &obj->queue_sel, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "vm-running", &obj->vm_running, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "broken", &obj->broken, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "disabled", &obj->disabled, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "use-started", &obj->use_started, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "started", &obj->started, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "start-on-kick", &obj->start_on_kick, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "disable-legacy-check", &obj->disable_legacy_check, errp)) {
        return false;
    }
    if (!visit_type_str(v, "bus-name", &obj->bus_name, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "use-guest-notifier-mask", &obj->use_guest_notifier_mask, errp)) {
        return false;
    }
    if (visit_optional(v, "vhost-dev", &obj->has_vhost_dev)) {
        if (!visit_type_VhostStatus(v, "vhost-dev", &obj->vhost_dev, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VirtioStatus(Visitor *v, const char *name,
                 VirtioStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioStatus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_x_query_virtio_status_arg_members(Visitor *v, q_obj_x_query_virtio_status_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_x_query_virtio_status_arg(Visitor *v, const char *name,
                 q_obj_x_query_virtio_status_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_x_query_virtio_status_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_x_query_virtio_status_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_x_query_virtio_status_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioDeviceStatus_members(Visitor *v, VirtioDeviceStatus *obj, Error **errp)
{
    if (!visit_type_strList(v, "statuses", &obj->statuses, errp)) {
        return false;
    }
    if (visit_optional(v, "unknown-statuses", &obj->has_unknown_statuses)) {
        if (!visit_type_uint8(v, "unknown-statuses", &obj->unknown_statuses, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VirtioDeviceStatus(Visitor *v, const char *name,
                 VirtioDeviceStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioDeviceStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioDeviceStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioDeviceStatus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VhostDeviceProtocols_members(Visitor *v, VhostDeviceProtocols *obj, Error **errp)
{
    if (!visit_type_strList(v, "protocols", &obj->protocols, errp)) {
        return false;
    }
    if (visit_optional(v, "unknown-protocols", &obj->has_unknown_protocols)) {
        if (!visit_type_uint64(v, "unknown-protocols", &obj->unknown_protocols, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VhostDeviceProtocols(Visitor *v, const char *name,
                 VhostDeviceProtocols **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VhostDeviceProtocols), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VhostDeviceProtocols_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VhostDeviceProtocols(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioDeviceFeatures_members(Visitor *v, VirtioDeviceFeatures *obj, Error **errp)
{
    if (!visit_type_strList(v, "transports", &obj->transports, errp)) {
        return false;
    }
    if (visit_optional(v, "dev-features", &obj->has_dev_features)) {
        if (!visit_type_strList(v, "dev-features", &obj->dev_features, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "unknown-dev-features", &obj->has_unknown_dev_features)) {
        if (!visit_type_uint64(v, "unknown-dev-features", &obj->unknown_dev_features, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VirtioDeviceFeatures(Visitor *v, const char *name,
                 VirtioDeviceFeatures **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioDeviceFeatures), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioDeviceFeatures_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioDeviceFeatures(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtQueueStatus_members(Visitor *v, VirtQueueStatus *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "queue-index", &obj->queue_index, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "inuse", &obj->inuse, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "vring-num", &obj->vring_num, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "vring-num-default", &obj->vring_num_default, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "vring-align", &obj->vring_align, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "vring-desc", &obj->vring_desc, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "vring-avail", &obj->vring_avail, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "vring-used", &obj->vring_used, errp)) {
        return false;
    }
    if (visit_optional(v, "last-avail-idx", &obj->has_last_avail_idx)) {
        if (!visit_type_uint16(v, "last-avail-idx", &obj->last_avail_idx, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "shadow-avail-idx", &obj->has_shadow_avail_idx)) {
        if (!visit_type_uint16(v, "shadow-avail-idx", &obj->shadow_avail_idx, errp)) {
            return false;
        }
    }
    if (!visit_type_uint16(v, "used-idx", &obj->used_idx, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "signalled-used", &obj->signalled_used, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "signalled-used-valid", &obj->signalled_used_valid, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtQueueStatus(Visitor *v, const char *name,
                 VirtQueueStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtQueueStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtQueueStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtQueueStatus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_x_query_virtio_queue_status_arg_members(Visitor *v, q_obj_x_query_virtio_queue_status_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "queue", &obj->queue, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_x_query_virtio_queue_status_arg(Visitor *v, const char *name,
                 q_obj_x_query_virtio_queue_status_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_x_query_virtio_queue_status_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_x_query_virtio_queue_status_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_x_query_virtio_queue_status_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtVhostQueueStatus_members(Visitor *v, VirtVhostQueueStatus *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_int(v, "kick", &obj->kick, errp)) {
        return false;
    }
    if (!visit_type_int(v, "call", &obj->call, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "desc", &obj->desc, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "avail", &obj->avail, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "used", &obj->used, errp)) {
        return false;
    }
    if (!visit_type_int(v, "num", &obj->num, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "desc-phys", &obj->desc_phys, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "desc-size", &obj->desc_size, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "avail-phys", &obj->avail_phys, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "avail-size", &obj->avail_size, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "used-phys", &obj->used_phys, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "used-size", &obj->used_size, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtVhostQueueStatus(Visitor *v, const char *name,
                 VirtVhostQueueStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtVhostQueueStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtVhostQueueStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtVhostQueueStatus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_x_query_virtio_vhost_queue_status_arg_members(Visitor *v, q_obj_x_query_virtio_vhost_queue_status_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "queue", &obj->queue, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_x_query_virtio_vhost_queue_status_arg(Visitor *v, const char *name,
                 q_obj_x_query_virtio_vhost_queue_status_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_x_query_virtio_vhost_queue_status_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_x_query_virtio_vhost_queue_status_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_x_query_virtio_vhost_queue_status_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioRingDesc_members(Visitor *v, VirtioRingDesc *obj, Error **errp)
{
    if (!visit_type_uint64(v, "addr", &obj->addr, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "len", &obj->len, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "flags", &obj->flags, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioRingDesc(Visitor *v, const char *name,
                 VirtioRingDesc **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioRingDesc), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioRingDesc_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioRingDesc(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioRingAvail_members(Visitor *v, VirtioRingAvail *obj, Error **errp)
{
    if (!visit_type_uint16(v, "flags", &obj->flags, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "idx", &obj->idx, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "ring", &obj->ring, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioRingAvail(Visitor *v, const char *name,
                 VirtioRingAvail **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioRingAvail), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioRingAvail_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioRingAvail(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioRingUsed_members(Visitor *v, VirtioRingUsed *obj, Error **errp)
{
    if (!visit_type_uint16(v, "flags", &obj->flags, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "idx", &obj->idx, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioRingUsed(Visitor *v, const char *name,
                 VirtioRingUsed **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioRingUsed), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioRingUsed_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioRingUsed(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioRingDescList(Visitor *v, const char *name,
                 VirtioRingDescList **obj, Error **errp)
{
    bool ok = false;
    VirtioRingDescList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (VirtioRingDescList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_VirtioRingDesc(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioRingDescList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioQueueElement_members(Visitor *v, VirtioQueueElement *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "index", &obj->index, errp)) {
        return false;
    }
    if (!visit_type_VirtioRingDescList(v, "descs", &obj->descs, errp)) {
        return false;
    }
    if (!visit_type_VirtioRingAvail(v, "avail", &obj->avail, errp)) {
        return false;
    }
    if (!visit_type_VirtioRingUsed(v, "used", &obj->used, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioQueueElement(Visitor *v, const char *name,
                 VirtioQueueElement **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioQueueElement), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioQueueElement_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioQueueElement(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_x_query_virtio_queue_element_arg_members(Visitor *v, q_obj_x_query_virtio_queue_element_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "queue", &obj->queue, errp)) {
        return false;
    }
    if (visit_optional(v, "index", &obj->has_index)) {
        if (!visit_type_uint16(v, "index", &obj->index, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_x_query_virtio_queue_element_arg(Visitor *v, const char *name,
                 q_obj_x_query_virtio_queue_element_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_x_query_virtio_queue_element_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_x_query_virtio_queue_element_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_x_query_virtio_queue_element_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_virtio_c;
