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
#include "qapi-visit-migration.h"

bool visit_type_MigrationStats_members(Visitor *v, MigrationStats *obj, Error **errp)
{
    if (!visit_type_int(v, "transferred", &obj->transferred, errp)) {
        return false;
    }
    if (!visit_type_int(v, "remaining", &obj->remaining, errp)) {
        return false;
    }
    if (!visit_type_int(v, "total", &obj->total, errp)) {
        return false;
    }
    if (!visit_type_int(v, "duplicate", &obj->duplicate, errp)) {
        return false;
    }
    if (!visit_type_int(v, "skipped", &obj->skipped, errp)) {
        return false;
    }
    if (!visit_type_int(v, "normal", &obj->normal, errp)) {
        return false;
    }
    if (!visit_type_int(v, "normal-bytes", &obj->normal_bytes, errp)) {
        return false;
    }
    if (!visit_type_int(v, "dirty-pages-rate", &obj->dirty_pages_rate, errp)) {
        return false;
    }
    if (!visit_type_number(v, "mbps", &obj->mbps, errp)) {
        return false;
    }
    if (!visit_type_int(v, "dirty-sync-count", &obj->dirty_sync_count, errp)) {
        return false;
    }
    if (!visit_type_int(v, "postcopy-requests", &obj->postcopy_requests, errp)) {
        return false;
    }
    if (!visit_type_int(v, "page-size", &obj->page_size, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "multifd-bytes", &obj->multifd_bytes, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "pages-per-second", &obj->pages_per_second, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "precopy-bytes", &obj->precopy_bytes, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "downtime-bytes", &obj->downtime_bytes, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "postcopy-bytes", &obj->postcopy_bytes, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "dirty-sync-missed-zero-copy", &obj->dirty_sync_missed_zero_copy, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MigrationStats(Visitor *v, const char *name,
                 MigrationStats **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MigrationStats), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MigrationStats_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MigrationStats(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_XBZRLECacheStats_members(Visitor *v, XBZRLECacheStats *obj, Error **errp)
{
    if (!visit_type_size(v, "cache-size", &obj->cache_size, errp)) {
        return false;
    }
    if (!visit_type_int(v, "bytes", &obj->bytes, errp)) {
        return false;
    }
    if (!visit_type_int(v, "pages", &obj->pages, errp)) {
        return false;
    }
    if (!visit_type_int(v, "cache-miss", &obj->cache_miss, errp)) {
        return false;
    }
    if (!visit_type_number(v, "cache-miss-rate", &obj->cache_miss_rate, errp)) {
        return false;
    }
    if (!visit_type_number(v, "encoding-rate", &obj->encoding_rate, errp)) {
        return false;
    }
    if (!visit_type_int(v, "overflow", &obj->overflow, errp)) {
        return false;
    }
    return true;
}

bool visit_type_XBZRLECacheStats(Visitor *v, const char *name,
                 XBZRLECacheStats **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(XBZRLECacheStats), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_XBZRLECacheStats_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_XBZRLECacheStats(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CompressionStats_members(Visitor *v, CompressionStats *obj, Error **errp)
{
    if (!visit_type_int(v, "pages", &obj->pages, errp)) {
        return false;
    }
    if (!visit_type_int(v, "busy", &obj->busy, errp)) {
        return false;
    }
    if (!visit_type_number(v, "busy-rate", &obj->busy_rate, errp)) {
        return false;
    }
    if (!visit_type_int(v, "compressed-size", &obj->compressed_size, errp)) {
        return false;
    }
    if (!visit_type_number(v, "compression-rate", &obj->compression_rate, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CompressionStats(Visitor *v, const char *name,
                 CompressionStats **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CompressionStats), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CompressionStats_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CompressionStats(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrationStatus(Visitor *v, const char *name,
                 MigrationStatus *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MigrationStatus_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_VfioStats_members(Visitor *v, VfioStats *obj, Error **errp)
{
    if (!visit_type_int(v, "transferred", &obj->transferred, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VfioStats(Visitor *v, const char *name,
                 VfioStats **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VfioStats), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VfioStats_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VfioStats(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrationInfo_members(Visitor *v, MigrationInfo *obj, Error **errp)
{
    if (visit_optional(v, "status", &obj->has_status)) {
        if (!visit_type_MigrationStatus(v, "status", &obj->status, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ram", &obj->has_ram)) {
        if (!visit_type_MigrationStats(v, "ram", &obj->ram, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "disk", &obj->has_disk)) {
        if (!visit_type_MigrationStats(v, "disk", &obj->disk, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "vfio", &obj->has_vfio)) {
        if (!visit_type_VfioStats(v, "vfio", &obj->vfio, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "xbzrle-cache", &obj->has_xbzrle_cache)) {
        if (!visit_type_XBZRLECacheStats(v, "xbzrle-cache", &obj->xbzrle_cache, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "total-time", &obj->has_total_time)) {
        if (!visit_type_int(v, "total-time", &obj->total_time, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "expected-downtime", &obj->has_expected_downtime)) {
        if (!visit_type_int(v, "expected-downtime", &obj->expected_downtime, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "downtime", &obj->has_downtime)) {
        if (!visit_type_int(v, "downtime", &obj->downtime, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "setup-time", &obj->has_setup_time)) {
        if (!visit_type_int(v, "setup-time", &obj->setup_time, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpu-throttle-percentage", &obj->has_cpu_throttle_percentage)) {
        if (!visit_type_int(v, "cpu-throttle-percentage", &obj->cpu_throttle_percentage, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "error-desc", &obj->has_error_desc)) {
        if (!visit_type_str(v, "error-desc", &obj->error_desc, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "blocked-reasons", &obj->has_blocked_reasons)) {
        if (!visit_type_strList(v, "blocked-reasons", &obj->blocked_reasons, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "postcopy-blocktime", &obj->has_postcopy_blocktime)) {
        if (!visit_type_uint32(v, "postcopy-blocktime", &obj->postcopy_blocktime, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "postcopy-vcpu-blocktime", &obj->has_postcopy_vcpu_blocktime)) {
        if (!visit_type_uint32List(v, "postcopy-vcpu-blocktime", &obj->postcopy_vcpu_blocktime, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compression", &obj->has_compression)) {
        if (!visit_type_CompressionStats(v, "compression", &obj->compression, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "socket-address", &obj->has_socket_address)) {
        if (!visit_type_SocketAddressList(v, "socket-address", &obj->socket_address, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MigrationInfo(Visitor *v, const char *name,
                 MigrationInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MigrationInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MigrationInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MigrationInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrationCapability(Visitor *v, const char *name,
                 MigrationCapability *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MigrationCapability_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_MigrationCapabilityStatus_members(Visitor *v, MigrationCapabilityStatus *obj, Error **errp)
{
    if (!visit_type_MigrationCapability(v, "capability", &obj->capability, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "state", &obj->state, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MigrationCapabilityStatus(Visitor *v, const char *name,
                 MigrationCapabilityStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MigrationCapabilityStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MigrationCapabilityStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MigrationCapabilityStatus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrationCapabilityStatusList(Visitor *v, const char *name,
                 MigrationCapabilityStatusList **obj, Error **errp)
{
    bool ok = false;
    MigrationCapabilityStatusList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (MigrationCapabilityStatusList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_MigrationCapabilityStatus(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MigrationCapabilityStatusList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_migrate_set_capabilities_arg_members(Visitor *v, q_obj_migrate_set_capabilities_arg *obj, Error **errp)
{
    if (!visit_type_MigrationCapabilityStatusList(v, "capabilities", &obj->capabilities, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_migrate_set_capabilities_arg(Visitor *v, const char *name,
                 q_obj_migrate_set_capabilities_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_migrate_set_capabilities_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_migrate_set_capabilities_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_migrate_set_capabilities_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MultiFDCompression(Visitor *v, const char *name,
                 MultiFDCompression *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MultiFDCompression_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BitmapMigrationBitmapAliasTransform_members(Visitor *v, BitmapMigrationBitmapAliasTransform *obj, Error **errp)
{
    if (visit_optional(v, "persistent", &obj->has_persistent)) {
        if (!visit_type_bool(v, "persistent", &obj->persistent, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BitmapMigrationBitmapAliasTransform(Visitor *v, const char *name,
                 BitmapMigrationBitmapAliasTransform **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BitmapMigrationBitmapAliasTransform), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BitmapMigrationBitmapAliasTransform_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BitmapMigrationBitmapAliasTransform(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BitmapMigrationBitmapAlias_members(Visitor *v, BitmapMigrationBitmapAlias *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_str(v, "alias", &obj->alias, errp)) {
        return false;
    }
    if (visit_optional(v, "transform", &obj->has_transform)) {
        if (!visit_type_BitmapMigrationBitmapAliasTransform(v, "transform", &obj->transform, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BitmapMigrationBitmapAlias(Visitor *v, const char *name,
                 BitmapMigrationBitmapAlias **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BitmapMigrationBitmapAlias), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BitmapMigrationBitmapAlias_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BitmapMigrationBitmapAlias(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BitmapMigrationBitmapAliasList(Visitor *v, const char *name,
                 BitmapMigrationBitmapAliasList **obj, Error **errp)
{
    bool ok = false;
    BitmapMigrationBitmapAliasList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BitmapMigrationBitmapAliasList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BitmapMigrationBitmapAlias(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BitmapMigrationBitmapAliasList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BitmapMigrationNodeAlias_members(Visitor *v, BitmapMigrationNodeAlias *obj, Error **errp)
{
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    if (!visit_type_str(v, "alias", &obj->alias, errp)) {
        return false;
    }
    if (!visit_type_BitmapMigrationBitmapAliasList(v, "bitmaps", &obj->bitmaps, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BitmapMigrationNodeAlias(Visitor *v, const char *name,
                 BitmapMigrationNodeAlias **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BitmapMigrationNodeAlias), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BitmapMigrationNodeAlias_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BitmapMigrationNodeAlias(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrationParameter(Visitor *v, const char *name,
                 MigrationParameter *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MigrationParameter_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BitmapMigrationNodeAliasList(Visitor *v, const char *name,
                 BitmapMigrationNodeAliasList **obj, Error **errp)
{
    bool ok = false;
    BitmapMigrationNodeAliasList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BitmapMigrationNodeAliasList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BitmapMigrationNodeAlias(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BitmapMigrationNodeAliasList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrateSetParameters_members(Visitor *v, MigrateSetParameters *obj, Error **errp)
{
    if (visit_optional(v, "announce-initial", &obj->has_announce_initial)) {
        if (!visit_type_size(v, "announce-initial", &obj->announce_initial, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "announce-max", &obj->has_announce_max)) {
        if (!visit_type_size(v, "announce-max", &obj->announce_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "announce-rounds", &obj->has_announce_rounds)) {
        if (!visit_type_size(v, "announce-rounds", &obj->announce_rounds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "announce-step", &obj->has_announce_step)) {
        if (!visit_type_size(v, "announce-step", &obj->announce_step, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compress-level", &obj->has_compress_level)) {
        if (!visit_type_uint8(v, "compress-level", &obj->compress_level, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compress-threads", &obj->has_compress_threads)) {
        if (!visit_type_uint8(v, "compress-threads", &obj->compress_threads, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compress-wait-thread", &obj->has_compress_wait_thread)) {
        if (!visit_type_bool(v, "compress-wait-thread", &obj->compress_wait_thread, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "decompress-threads", &obj->has_decompress_threads)) {
        if (!visit_type_uint8(v, "decompress-threads", &obj->decompress_threads, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "throttle-trigger-threshold", &obj->has_throttle_trigger_threshold)) {
        if (!visit_type_uint8(v, "throttle-trigger-threshold", &obj->throttle_trigger_threshold, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpu-throttle-initial", &obj->has_cpu_throttle_initial)) {
        if (!visit_type_uint8(v, "cpu-throttle-initial", &obj->cpu_throttle_initial, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpu-throttle-increment", &obj->has_cpu_throttle_increment)) {
        if (!visit_type_uint8(v, "cpu-throttle-increment", &obj->cpu_throttle_increment, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpu-throttle-tailslow", &obj->has_cpu_throttle_tailslow)) {
        if (!visit_type_bool(v, "cpu-throttle-tailslow", &obj->cpu_throttle_tailslow, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        if (!visit_type_StrOrNull(v, "tls-creds", &obj->tls_creds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-hostname", &obj->has_tls_hostname)) {
        if (!visit_type_StrOrNull(v, "tls-hostname", &obj->tls_hostname, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-authz", &obj->has_tls_authz)) {
        if (!visit_type_StrOrNull(v, "tls-authz", &obj->tls_authz, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-bandwidth", &obj->has_max_bandwidth)) {
        if (!visit_type_size(v, "max-bandwidth", &obj->max_bandwidth, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "downtime-limit", &obj->has_downtime_limit)) {
        if (!visit_type_uint64(v, "downtime-limit", &obj->downtime_limit, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "x-checkpoint-delay", &obj->has_x_checkpoint_delay)) {
        if (visit_policy_reject(v, "x-checkpoint-delay", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-checkpoint-delay", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_uint32(v, "x-checkpoint-delay", &obj->x_checkpoint_delay, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "block-incremental", &obj->has_block_incremental)) {
        if (!visit_type_bool(v, "block-incremental", &obj->block_incremental, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "multifd-channels", &obj->has_multifd_channels)) {
        if (!visit_type_uint8(v, "multifd-channels", &obj->multifd_channels, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "xbzrle-cache-size", &obj->has_xbzrle_cache_size)) {
        if (!visit_type_size(v, "xbzrle-cache-size", &obj->xbzrle_cache_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-postcopy-bandwidth", &obj->has_max_postcopy_bandwidth)) {
        if (!visit_type_size(v, "max-postcopy-bandwidth", &obj->max_postcopy_bandwidth, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-cpu-throttle", &obj->has_max_cpu_throttle)) {
        if (!visit_type_uint8(v, "max-cpu-throttle", &obj->max_cpu_throttle, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "multifd-compression", &obj->has_multifd_compression)) {
        if (!visit_type_MultiFDCompression(v, "multifd-compression", &obj->multifd_compression, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "multifd-zlib-level", &obj->has_multifd_zlib_level)) {
        if (!visit_type_uint8(v, "multifd-zlib-level", &obj->multifd_zlib_level, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "multifd-zstd-level", &obj->has_multifd_zstd_level)) {
        if (!visit_type_uint8(v, "multifd-zstd-level", &obj->multifd_zstd_level, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "block-bitmap-mapping", &obj->has_block_bitmap_mapping)) {
        if (!visit_type_BitmapMigrationNodeAliasList(v, "block-bitmap-mapping", &obj->block_bitmap_mapping, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MigrateSetParameters(Visitor *v, const char *name,
                 MigrateSetParameters **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MigrateSetParameters), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MigrateSetParameters_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MigrateSetParameters(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrationParameters_members(Visitor *v, MigrationParameters *obj, Error **errp)
{
    if (visit_optional(v, "announce-initial", &obj->has_announce_initial)) {
        if (!visit_type_size(v, "announce-initial", &obj->announce_initial, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "announce-max", &obj->has_announce_max)) {
        if (!visit_type_size(v, "announce-max", &obj->announce_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "announce-rounds", &obj->has_announce_rounds)) {
        if (!visit_type_size(v, "announce-rounds", &obj->announce_rounds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "announce-step", &obj->has_announce_step)) {
        if (!visit_type_size(v, "announce-step", &obj->announce_step, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compress-level", &obj->has_compress_level)) {
        if (!visit_type_uint8(v, "compress-level", &obj->compress_level, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compress-threads", &obj->has_compress_threads)) {
        if (!visit_type_uint8(v, "compress-threads", &obj->compress_threads, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compress-wait-thread", &obj->has_compress_wait_thread)) {
        if (!visit_type_bool(v, "compress-wait-thread", &obj->compress_wait_thread, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "decompress-threads", &obj->has_decompress_threads)) {
        if (!visit_type_uint8(v, "decompress-threads", &obj->decompress_threads, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "throttle-trigger-threshold", &obj->has_throttle_trigger_threshold)) {
        if (!visit_type_uint8(v, "throttle-trigger-threshold", &obj->throttle_trigger_threshold, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpu-throttle-initial", &obj->has_cpu_throttle_initial)) {
        if (!visit_type_uint8(v, "cpu-throttle-initial", &obj->cpu_throttle_initial, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpu-throttle-increment", &obj->has_cpu_throttle_increment)) {
        if (!visit_type_uint8(v, "cpu-throttle-increment", &obj->cpu_throttle_increment, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpu-throttle-tailslow", &obj->has_cpu_throttle_tailslow)) {
        if (!visit_type_bool(v, "cpu-throttle-tailslow", &obj->cpu_throttle_tailslow, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        if (!visit_type_str(v, "tls-creds", &obj->tls_creds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-hostname", &obj->has_tls_hostname)) {
        if (!visit_type_str(v, "tls-hostname", &obj->tls_hostname, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-authz", &obj->has_tls_authz)) {
        if (!visit_type_str(v, "tls-authz", &obj->tls_authz, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-bandwidth", &obj->has_max_bandwidth)) {
        if (!visit_type_size(v, "max-bandwidth", &obj->max_bandwidth, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "downtime-limit", &obj->has_downtime_limit)) {
        if (!visit_type_uint64(v, "downtime-limit", &obj->downtime_limit, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "x-checkpoint-delay", &obj->has_x_checkpoint_delay)) {
        if (visit_policy_reject(v, "x-checkpoint-delay", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-checkpoint-delay", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_uint32(v, "x-checkpoint-delay", &obj->x_checkpoint_delay, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "block-incremental", &obj->has_block_incremental)) {
        if (!visit_type_bool(v, "block-incremental", &obj->block_incremental, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "multifd-channels", &obj->has_multifd_channels)) {
        if (!visit_type_uint8(v, "multifd-channels", &obj->multifd_channels, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "xbzrle-cache-size", &obj->has_xbzrle_cache_size)) {
        if (!visit_type_size(v, "xbzrle-cache-size", &obj->xbzrle_cache_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-postcopy-bandwidth", &obj->has_max_postcopy_bandwidth)) {
        if (!visit_type_size(v, "max-postcopy-bandwidth", &obj->max_postcopy_bandwidth, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-cpu-throttle", &obj->has_max_cpu_throttle)) {
        if (!visit_type_uint8(v, "max-cpu-throttle", &obj->max_cpu_throttle, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "multifd-compression", &obj->has_multifd_compression)) {
        if (!visit_type_MultiFDCompression(v, "multifd-compression", &obj->multifd_compression, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "multifd-zlib-level", &obj->has_multifd_zlib_level)) {
        if (!visit_type_uint8(v, "multifd-zlib-level", &obj->multifd_zlib_level, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "multifd-zstd-level", &obj->has_multifd_zstd_level)) {
        if (!visit_type_uint8(v, "multifd-zstd-level", &obj->multifd_zstd_level, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "block-bitmap-mapping", &obj->has_block_bitmap_mapping)) {
        if (!visit_type_BitmapMigrationNodeAliasList(v, "block-bitmap-mapping", &obj->block_bitmap_mapping, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MigrationParameters(Visitor *v, const char *name,
                 MigrationParameters **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MigrationParameters), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MigrationParameters_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MigrationParameters(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_client_migrate_info_arg_members(Visitor *v, q_obj_client_migrate_info_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "protocol", &obj->protocol, errp)) {
        return false;
    }
    if (!visit_type_str(v, "hostname", &obj->hostname, errp)) {
        return false;
    }
    if (visit_optional(v, "port", &obj->has_port)) {
        if (!visit_type_int(v, "port", &obj->port, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-port", &obj->has_tls_port)) {
        if (!visit_type_int(v, "tls-port", &obj->tls_port, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cert-subject", &obj->has_cert_subject)) {
        if (!visit_type_str(v, "cert-subject", &obj->cert_subject, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_client_migrate_info_arg(Visitor *v, const char *name,
                 q_obj_client_migrate_info_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_client_migrate_info_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_client_migrate_info_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_client_migrate_info_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_MIGRATION_arg_members(Visitor *v, q_obj_MIGRATION_arg *obj, Error **errp)
{
    if (!visit_type_MigrationStatus(v, "status", &obj->status, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_MIGRATION_arg(Visitor *v, const char *name,
                 q_obj_MIGRATION_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_MIGRATION_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_MIGRATION_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_MIGRATION_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_MIGRATION_PASS_arg_members(Visitor *v, q_obj_MIGRATION_PASS_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "pass", &obj->pass, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_MIGRATION_PASS_arg(Visitor *v, const char *name,
                 q_obj_MIGRATION_PASS_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_MIGRATION_PASS_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_MIGRATION_PASS_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_MIGRATION_PASS_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_COLOMessage(Visitor *v, const char *name,
                 COLOMessage *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &COLOMessage_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_COLOMode(Visitor *v, const char *name,
                 COLOMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &COLOMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_FailoverStatus(Visitor *v, const char *name,
                 FailoverStatus *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &FailoverStatus_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_COLO_EXIT_arg_members(Visitor *v, q_obj_COLO_EXIT_arg *obj, Error **errp)
{
    if (!visit_type_COLOMode(v, "mode", &obj->mode, errp)) {
        return false;
    }
    if (!visit_type_COLOExitReason(v, "reason", &obj->reason, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_COLO_EXIT_arg(Visitor *v, const char *name,
                 q_obj_COLO_EXIT_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_COLO_EXIT_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_COLO_EXIT_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_COLO_EXIT_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_COLOExitReason(Visitor *v, const char *name,
                 COLOExitReason *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &COLOExitReason_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_migrate_continue_arg_members(Visitor *v, q_obj_migrate_continue_arg *obj, Error **errp)
{
    if (!visit_type_MigrationStatus(v, "state", &obj->state, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_migrate_continue_arg(Visitor *v, const char *name,
                 q_obj_migrate_continue_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_migrate_continue_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_migrate_continue_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_migrate_continue_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_migrate_arg_members(Visitor *v, q_obj_migrate_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "uri", &obj->uri, errp)) {
        return false;
    }
    if (visit_optional(v, "blk", &obj->has_blk)) {
        if (!visit_type_bool(v, "blk", &obj->blk, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "inc", &obj->has_inc)) {
        if (!visit_type_bool(v, "inc", &obj->inc, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "detach", &obj->has_detach)) {
        if (!visit_type_bool(v, "detach", &obj->detach, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "resume", &obj->has_resume)) {
        if (!visit_type_bool(v, "resume", &obj->resume, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_migrate_arg(Visitor *v, const char *name,
                 q_obj_migrate_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_migrate_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_migrate_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_migrate_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_migrate_incoming_arg_members(Visitor *v, q_obj_migrate_incoming_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "uri", &obj->uri, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_migrate_incoming_arg(Visitor *v, const char *name,
                 q_obj_migrate_incoming_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_migrate_incoming_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_migrate_incoming_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_migrate_incoming_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_xen_save_devices_state_arg_members(Visitor *v, q_obj_xen_save_devices_state_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (visit_optional(v, "live", &obj->has_live)) {
        if (!visit_type_bool(v, "live", &obj->live, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_xen_save_devices_state_arg(Visitor *v, const char *name,
                 q_obj_xen_save_devices_state_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_xen_save_devices_state_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_xen_save_devices_state_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_xen_save_devices_state_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_xen_set_global_dirty_log_arg_members(Visitor *v, q_obj_xen_set_global_dirty_log_arg *obj, Error **errp)
{
    if (!visit_type_bool(v, "enable", &obj->enable, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_xen_set_global_dirty_log_arg(Visitor *v, const char *name,
                 q_obj_xen_set_global_dirty_log_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_xen_set_global_dirty_log_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_xen_set_global_dirty_log_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_xen_set_global_dirty_log_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_xen_load_devices_state_arg_members(Visitor *v, q_obj_xen_load_devices_state_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_xen_load_devices_state_arg(Visitor *v, const char *name,
                 q_obj_xen_load_devices_state_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_xen_load_devices_state_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_xen_load_devices_state_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_xen_load_devices_state_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_REPLICATION)
bool visit_type_q_obj_xen_set_replication_arg_members(Visitor *v, q_obj_xen_set_replication_arg *obj, Error **errp)
{
    if (!visit_type_bool(v, "enable", &obj->enable, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "primary", &obj->primary, errp)) {
        return false;
    }
    if (visit_optional(v, "failover", &obj->has_failover)) {
        if (!visit_type_bool(v, "failover", &obj->failover, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_xen_set_replication_arg(Visitor *v, const char *name,
                 q_obj_xen_set_replication_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_xen_set_replication_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_xen_set_replication_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_xen_set_replication_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
bool visit_type_ReplicationStatus_members(Visitor *v, ReplicationStatus *obj, Error **errp)
{
    if (!visit_type_bool(v, "error", &obj->error, errp)) {
        return false;
    }
    if (visit_optional(v, "desc", &obj->has_desc)) {
        if (!visit_type_str(v, "desc", &obj->desc, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ReplicationStatus(Visitor *v, const char *name,
                 ReplicationStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ReplicationStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ReplicationStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ReplicationStatus(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_REPLICATION) */

bool visit_type_COLOStatus_members(Visitor *v, COLOStatus *obj, Error **errp)
{
    if (!visit_type_COLOMode(v, "mode", &obj->mode, errp)) {
        return false;
    }
    if (!visit_type_COLOMode(v, "last-mode", &obj->last_mode, errp)) {
        return false;
    }
    if (!visit_type_COLOExitReason(v, "reason", &obj->reason, errp)) {
        return false;
    }
    return true;
}

bool visit_type_COLOStatus(Visitor *v, const char *name,
                 COLOStatus **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(COLOStatus), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_COLOStatus_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_COLOStatus(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_migrate_recover_arg_members(Visitor *v, q_obj_migrate_recover_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "uri", &obj->uri, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_migrate_recover_arg(Visitor *v, const char *name,
                 q_obj_migrate_recover_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_migrate_recover_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_migrate_recover_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_migrate_recover_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_UNPLUG_PRIMARY_arg_members(Visitor *v, q_obj_UNPLUG_PRIMARY_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device-id", &obj->device_id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_UNPLUG_PRIMARY_arg(Visitor *v, const char *name,
                 q_obj_UNPLUG_PRIMARY_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_UNPLUG_PRIMARY_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_UNPLUG_PRIMARY_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_UNPLUG_PRIMARY_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DirtyRateVcpu_members(Visitor *v, DirtyRateVcpu *obj, Error **errp)
{
    if (!visit_type_int(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_int64(v, "dirty-rate", &obj->dirty_rate, errp)) {
        return false;
    }
    return true;
}

bool visit_type_DirtyRateVcpu(Visitor *v, const char *name,
                 DirtyRateVcpu **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DirtyRateVcpu), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DirtyRateVcpu_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DirtyRateVcpu(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DirtyRateStatus(Visitor *v, const char *name,
                 DirtyRateStatus *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DirtyRateStatus_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_DirtyRateMeasureMode(Visitor *v, const char *name,
                 DirtyRateMeasureMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &DirtyRateMeasureMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_DirtyRateVcpuList(Visitor *v, const char *name,
                 DirtyRateVcpuList **obj, Error **errp)
{
    bool ok = false;
    DirtyRateVcpuList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (DirtyRateVcpuList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_DirtyRateVcpu(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DirtyRateVcpuList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DirtyRateInfo_members(Visitor *v, DirtyRateInfo *obj, Error **errp)
{
    if (visit_optional(v, "dirty-rate", &obj->has_dirty_rate)) {
        if (!visit_type_int64(v, "dirty-rate", &obj->dirty_rate, errp)) {
            return false;
        }
    }
    if (!visit_type_DirtyRateStatus(v, "status", &obj->status, errp)) {
        return false;
    }
    if (!visit_type_int64(v, "start-time", &obj->start_time, errp)) {
        return false;
    }
    if (!visit_type_int64(v, "calc-time", &obj->calc_time, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "sample-pages", &obj->sample_pages, errp)) {
        return false;
    }
    if (!visit_type_DirtyRateMeasureMode(v, "mode", &obj->mode, errp)) {
        return false;
    }
    if (visit_optional(v, "vcpu-dirty-rate", &obj->has_vcpu_dirty_rate)) {
        if (!visit_type_DirtyRateVcpuList(v, "vcpu-dirty-rate", &obj->vcpu_dirty_rate, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DirtyRateInfo(Visitor *v, const char *name,
                 DirtyRateInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DirtyRateInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DirtyRateInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DirtyRateInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_calc_dirty_rate_arg_members(Visitor *v, q_obj_calc_dirty_rate_arg *obj, Error **errp)
{
    if (!visit_type_int64(v, "calc-time", &obj->calc_time, errp)) {
        return false;
    }
    if (visit_optional(v, "sample-pages", &obj->has_sample_pages)) {
        if (!visit_type_int(v, "sample-pages", &obj->sample_pages, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_DirtyRateMeasureMode(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_calc_dirty_rate_arg(Visitor *v, const char *name,
                 q_obj_calc_dirty_rate_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_calc_dirty_rate_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_calc_dirty_rate_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_calc_dirty_rate_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DirtyLimitInfo_members(Visitor *v, DirtyLimitInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "cpu-index", &obj->cpu_index, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "limit-rate", &obj->limit_rate, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "current-rate", &obj->current_rate, errp)) {
        return false;
    }
    return true;
}

bool visit_type_DirtyLimitInfo(Visitor *v, const char *name,
                 DirtyLimitInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DirtyLimitInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DirtyLimitInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DirtyLimitInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_set_vcpu_dirty_limit_arg_members(Visitor *v, q_obj_set_vcpu_dirty_limit_arg *obj, Error **errp)
{
    if (visit_optional(v, "cpu-index", &obj->has_cpu_index)) {
        if (!visit_type_int(v, "cpu-index", &obj->cpu_index, errp)) {
            return false;
        }
    }
    if (!visit_type_uint64(v, "dirty-rate", &obj->dirty_rate, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_set_vcpu_dirty_limit_arg(Visitor *v, const char *name,
                 q_obj_set_vcpu_dirty_limit_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_set_vcpu_dirty_limit_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_set_vcpu_dirty_limit_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_set_vcpu_dirty_limit_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_cancel_vcpu_dirty_limit_arg_members(Visitor *v, q_obj_cancel_vcpu_dirty_limit_arg *obj, Error **errp)
{
    if (visit_optional(v, "cpu-index", &obj->has_cpu_index)) {
        if (!visit_type_int(v, "cpu-index", &obj->cpu_index, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_cancel_vcpu_dirty_limit_arg(Visitor *v, const char *name,
                 q_obj_cancel_vcpu_dirty_limit_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_cancel_vcpu_dirty_limit_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_cancel_vcpu_dirty_limit_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_cancel_vcpu_dirty_limit_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DirtyLimitInfoList(Visitor *v, const char *name,
                 DirtyLimitInfoList **obj, Error **errp)
{
    bool ok = false;
    DirtyLimitInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (DirtyLimitInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_DirtyLimitInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DirtyLimitInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrationThreadInfo_members(Visitor *v, MigrationThreadInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_int(v, "thread-id", &obj->thread_id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MigrationThreadInfo(Visitor *v, const char *name,
                 MigrationThreadInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MigrationThreadInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MigrationThreadInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MigrationThreadInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MigrationThreadInfoList(Visitor *v, const char *name,
                 MigrationThreadInfoList **obj, Error **errp)
{
    bool ok = false;
    MigrationThreadInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (MigrationThreadInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_MigrationThreadInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MigrationThreadInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_snapshot_save_arg_members(Visitor *v, q_obj_snapshot_save_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
        return false;
    }
    if (!visit_type_str(v, "tag", &obj->tag, errp)) {
        return false;
    }
    if (!visit_type_str(v, "vmstate", &obj->vmstate, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "devices", &obj->devices, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_snapshot_save_arg(Visitor *v, const char *name,
                 q_obj_snapshot_save_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_snapshot_save_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_snapshot_save_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_snapshot_save_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_snapshot_load_arg_members(Visitor *v, q_obj_snapshot_load_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
        return false;
    }
    if (!visit_type_str(v, "tag", &obj->tag, errp)) {
        return false;
    }
    if (!visit_type_str(v, "vmstate", &obj->vmstate, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "devices", &obj->devices, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_snapshot_load_arg(Visitor *v, const char *name,
                 q_obj_snapshot_load_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_snapshot_load_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_snapshot_load_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_snapshot_load_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_snapshot_delete_arg_members(Visitor *v, q_obj_snapshot_delete_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
        return false;
    }
    if (!visit_type_str(v, "tag", &obj->tag, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "devices", &obj->devices, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_snapshot_delete_arg(Visitor *v, const char *name,
                 q_obj_snapshot_delete_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_snapshot_delete_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_snapshot_delete_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_snapshot_delete_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_migration_c;
