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
#include "qapi-types-migration.h"
#include "qapi-visit-migration.h"

void qapi_free_MigrationStats(MigrationStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MigrationStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_XBZRLECacheStats(XBZRLECacheStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_XBZRLECacheStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CompressionStats(CompressionStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CompressionStats(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup MigrationStatus_lookup = {
    .array = (const char *const[]) {
        [MIGRATION_STATUS_NONE] = "none",
        [MIGRATION_STATUS_SETUP] = "setup",
        [MIGRATION_STATUS_CANCELLING] = "cancelling",
        [MIGRATION_STATUS_CANCELLED] = "cancelled",
        [MIGRATION_STATUS_ACTIVE] = "active",
        [MIGRATION_STATUS_POSTCOPY_ACTIVE] = "postcopy-active",
        [MIGRATION_STATUS_POSTCOPY_PAUSED] = "postcopy-paused",
        [MIGRATION_STATUS_POSTCOPY_RECOVER] = "postcopy-recover",
        [MIGRATION_STATUS_COMPLETED] = "completed",
        [MIGRATION_STATUS_FAILED] = "failed",
        [MIGRATION_STATUS_COLO] = "colo",
        [MIGRATION_STATUS_PRE_SWITCHOVER] = "pre-switchover",
        [MIGRATION_STATUS_DEVICE] = "device",
        [MIGRATION_STATUS_WAIT_UNPLUG] = "wait-unplug",
    },
    .size = MIGRATION_STATUS__MAX
};

void qapi_free_VfioStats(VfioStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VfioStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MigrationInfo(MigrationInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MigrationInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup MigrationCapability_lookup = {
    .array = (const char *const[]) {
        [MIGRATION_CAPABILITY_XBZRLE] = "xbzrle",
        [MIGRATION_CAPABILITY_RDMA_PIN_ALL] = "rdma-pin-all",
        [MIGRATION_CAPABILITY_AUTO_CONVERGE] = "auto-converge",
        [MIGRATION_CAPABILITY_ZERO_BLOCKS] = "zero-blocks",
        [MIGRATION_CAPABILITY_COMPRESS] = "compress",
        [MIGRATION_CAPABILITY_EVENTS] = "events",
        [MIGRATION_CAPABILITY_POSTCOPY_RAM] = "postcopy-ram",
        [MIGRATION_CAPABILITY_X_COLO] = "x-colo",
        [MIGRATION_CAPABILITY_RELEASE_RAM] = "release-ram",
        [MIGRATION_CAPABILITY_BLOCK] = "block",
        [MIGRATION_CAPABILITY_RETURN_PATH] = "return-path",
        [MIGRATION_CAPABILITY_PAUSE_BEFORE_SWITCHOVER] = "pause-before-switchover",
        [MIGRATION_CAPABILITY_MULTIFD] = "multifd",
        [MIGRATION_CAPABILITY_DIRTY_BITMAPS] = "dirty-bitmaps",
        [MIGRATION_CAPABILITY_POSTCOPY_BLOCKTIME] = "postcopy-blocktime",
        [MIGRATION_CAPABILITY_LATE_BLOCK_ACTIVATE] = "late-block-activate",
        [MIGRATION_CAPABILITY_X_IGNORE_SHARED] = "x-ignore-shared",
        [MIGRATION_CAPABILITY_VALIDATE_UUID] = "validate-uuid",
        [MIGRATION_CAPABILITY_BACKGROUND_SNAPSHOT] = "background-snapshot",
        [MIGRATION_CAPABILITY_ZERO_COPY_SEND] = "zero-copy-send",
        [MIGRATION_CAPABILITY_POSTCOPY_PREEMPT] = "postcopy-preempt",
    },
    .special_features = (const unsigned char[MIGRATION_CAPABILITY__MAX]) {
        [MIGRATION_CAPABILITY_X_COLO] = 1u << QAPI_UNSTABLE,
        [MIGRATION_CAPABILITY_X_IGNORE_SHARED] = 1u << QAPI_UNSTABLE,
    },
    .size = MIGRATION_CAPABILITY__MAX
};

void qapi_free_MigrationCapabilityStatus(MigrationCapabilityStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MigrationCapabilityStatus(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MigrationCapabilityStatusList(MigrationCapabilityStatusList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MigrationCapabilityStatusList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_migrate_set_capabilities_arg(q_obj_migrate_set_capabilities_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_migrate_set_capabilities_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup MultiFDCompression_lookup = {
    .array = (const char *const[]) {
        [MULTIFD_COMPRESSION_NONE] = "none",
        [MULTIFD_COMPRESSION_ZLIB] = "zlib",
#if defined(CONFIG_ZSTD)
        [MULTIFD_COMPRESSION_ZSTD] = "zstd",
#endif /* defined(CONFIG_ZSTD) */
    },
    .size = MULTIFD_COMPRESSION__MAX
};

void qapi_free_BitmapMigrationBitmapAliasTransform(BitmapMigrationBitmapAliasTransform *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BitmapMigrationBitmapAliasTransform(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BitmapMigrationBitmapAlias(BitmapMigrationBitmapAlias *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BitmapMigrationBitmapAlias(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BitmapMigrationBitmapAliasList(BitmapMigrationBitmapAliasList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BitmapMigrationBitmapAliasList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BitmapMigrationNodeAlias(BitmapMigrationNodeAlias *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BitmapMigrationNodeAlias(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup MigrationParameter_lookup = {
    .array = (const char *const[]) {
        [MIGRATION_PARAMETER_ANNOUNCE_INITIAL] = "announce-initial",
        [MIGRATION_PARAMETER_ANNOUNCE_MAX] = "announce-max",
        [MIGRATION_PARAMETER_ANNOUNCE_ROUNDS] = "announce-rounds",
        [MIGRATION_PARAMETER_ANNOUNCE_STEP] = "announce-step",
        [MIGRATION_PARAMETER_COMPRESS_LEVEL] = "compress-level",
        [MIGRATION_PARAMETER_COMPRESS_THREADS] = "compress-threads",
        [MIGRATION_PARAMETER_DECOMPRESS_THREADS] = "decompress-threads",
        [MIGRATION_PARAMETER_COMPRESS_WAIT_THREAD] = "compress-wait-thread",
        [MIGRATION_PARAMETER_THROTTLE_TRIGGER_THRESHOLD] = "throttle-trigger-threshold",
        [MIGRATION_PARAMETER_CPU_THROTTLE_INITIAL] = "cpu-throttle-initial",
        [MIGRATION_PARAMETER_CPU_THROTTLE_INCREMENT] = "cpu-throttle-increment",
        [MIGRATION_PARAMETER_CPU_THROTTLE_TAILSLOW] = "cpu-throttle-tailslow",
        [MIGRATION_PARAMETER_TLS_CREDS] = "tls-creds",
        [MIGRATION_PARAMETER_TLS_HOSTNAME] = "tls-hostname",
        [MIGRATION_PARAMETER_TLS_AUTHZ] = "tls-authz",
        [MIGRATION_PARAMETER_MAX_BANDWIDTH] = "max-bandwidth",
        [MIGRATION_PARAMETER_DOWNTIME_LIMIT] = "downtime-limit",
        [MIGRATION_PARAMETER_X_CHECKPOINT_DELAY] = "x-checkpoint-delay",
        [MIGRATION_PARAMETER_BLOCK_INCREMENTAL] = "block-incremental",
        [MIGRATION_PARAMETER_MULTIFD_CHANNELS] = "multifd-channels",
        [MIGRATION_PARAMETER_XBZRLE_CACHE_SIZE] = "xbzrle-cache-size",
        [MIGRATION_PARAMETER_MAX_POSTCOPY_BANDWIDTH] = "max-postcopy-bandwidth",
        [MIGRATION_PARAMETER_MAX_CPU_THROTTLE] = "max-cpu-throttle",
        [MIGRATION_PARAMETER_MULTIFD_COMPRESSION] = "multifd-compression",
        [MIGRATION_PARAMETER_MULTIFD_ZLIB_LEVEL] = "multifd-zlib-level",
        [MIGRATION_PARAMETER_MULTIFD_ZSTD_LEVEL] = "multifd-zstd-level",
        [MIGRATION_PARAMETER_BLOCK_BITMAP_MAPPING] = "block-bitmap-mapping",
    },
    .special_features = (const unsigned char[MIGRATION_PARAMETER__MAX]) {
        [MIGRATION_PARAMETER_X_CHECKPOINT_DELAY] = 1u << QAPI_UNSTABLE,
    },
    .size = MIGRATION_PARAMETER__MAX
};

void qapi_free_BitmapMigrationNodeAliasList(BitmapMigrationNodeAliasList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BitmapMigrationNodeAliasList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MigrateSetParameters(MigrateSetParameters *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MigrateSetParameters(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MigrationParameters(MigrationParameters *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MigrationParameters(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_client_migrate_info_arg(q_obj_client_migrate_info_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_client_migrate_info_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_MIGRATION_arg(q_obj_MIGRATION_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MIGRATION_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_MIGRATION_PASS_arg(q_obj_MIGRATION_PASS_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MIGRATION_PASS_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup COLOMessage_lookup = {
    .array = (const char *const[]) {
        [COLO_MESSAGE_CHECKPOINT_READY] = "checkpoint-ready",
        [COLO_MESSAGE_CHECKPOINT_REQUEST] = "checkpoint-request",
        [COLO_MESSAGE_CHECKPOINT_REPLY] = "checkpoint-reply",
        [COLO_MESSAGE_VMSTATE_SEND] = "vmstate-send",
        [COLO_MESSAGE_VMSTATE_SIZE] = "vmstate-size",
        [COLO_MESSAGE_VMSTATE_RECEIVED] = "vmstate-received",
        [COLO_MESSAGE_VMSTATE_LOADED] = "vmstate-loaded",
    },
    .size = COLO_MESSAGE__MAX
};

const QEnumLookup COLOMode_lookup = {
    .array = (const char *const[]) {
        [COLO_MODE_NONE] = "none",
        [COLO_MODE_PRIMARY] = "primary",
        [COLO_MODE_SECONDARY] = "secondary",
    },
    .size = COLO_MODE__MAX
};

const QEnumLookup FailoverStatus_lookup = {
    .array = (const char *const[]) {
        [FAILOVER_STATUS_NONE] = "none",
        [FAILOVER_STATUS_REQUIRE] = "require",
        [FAILOVER_STATUS_ACTIVE] = "active",
        [FAILOVER_STATUS_COMPLETED] = "completed",
        [FAILOVER_STATUS_RELAUNCH] = "relaunch",
    },
    .size = FAILOVER_STATUS__MAX
};

void qapi_free_q_obj_COLO_EXIT_arg(q_obj_COLO_EXIT_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_COLO_EXIT_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup COLOExitReason_lookup = {
    .array = (const char *const[]) {
        [COLO_EXIT_REASON_NONE] = "none",
        [COLO_EXIT_REASON_REQUEST] = "request",
        [COLO_EXIT_REASON_ERROR] = "error",
        [COLO_EXIT_REASON_PROCESSING] = "processing",
    },
    .size = COLO_EXIT_REASON__MAX
};

void qapi_free_q_obj_migrate_continue_arg(q_obj_migrate_continue_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_migrate_continue_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_migrate_arg(q_obj_migrate_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_migrate_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_migrate_incoming_arg(q_obj_migrate_incoming_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_migrate_incoming_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_xen_save_devices_state_arg(q_obj_xen_save_devices_state_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_xen_save_devices_state_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_xen_set_global_dirty_log_arg(q_obj_xen_set_global_dirty_log_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_xen_set_global_dirty_log_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_xen_load_devices_state_arg(q_obj_xen_load_devices_state_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_xen_load_devices_state_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_REPLICATION)
void qapi_free_q_obj_xen_set_replication_arg(q_obj_xen_set_replication_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_xen_set_replication_arg(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
void qapi_free_ReplicationStatus(ReplicationStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ReplicationStatus(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_REPLICATION) */

void qapi_free_COLOStatus(COLOStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_COLOStatus(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_migrate_recover_arg(q_obj_migrate_recover_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_migrate_recover_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_UNPLUG_PRIMARY_arg(q_obj_UNPLUG_PRIMARY_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_UNPLUG_PRIMARY_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DirtyRateVcpu(DirtyRateVcpu *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DirtyRateVcpu(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup DirtyRateStatus_lookup = {
    .array = (const char *const[]) {
        [DIRTY_RATE_STATUS_UNSTARTED] = "unstarted",
        [DIRTY_RATE_STATUS_MEASURING] = "measuring",
        [DIRTY_RATE_STATUS_MEASURED] = "measured",
    },
    .size = DIRTY_RATE_STATUS__MAX
};

const QEnumLookup DirtyRateMeasureMode_lookup = {
    .array = (const char *const[]) {
        [DIRTY_RATE_MEASURE_MODE_PAGE_SAMPLING] = "page-sampling",
        [DIRTY_RATE_MEASURE_MODE_DIRTY_RING] = "dirty-ring",
        [DIRTY_RATE_MEASURE_MODE_DIRTY_BITMAP] = "dirty-bitmap",
    },
    .size = DIRTY_RATE_MEASURE_MODE__MAX
};

void qapi_free_DirtyRateVcpuList(DirtyRateVcpuList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DirtyRateVcpuList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DirtyRateInfo(DirtyRateInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DirtyRateInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_calc_dirty_rate_arg(q_obj_calc_dirty_rate_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_calc_dirty_rate_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DirtyLimitInfo(DirtyLimitInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DirtyLimitInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_set_vcpu_dirty_limit_arg(q_obj_set_vcpu_dirty_limit_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_set_vcpu_dirty_limit_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_cancel_vcpu_dirty_limit_arg(q_obj_cancel_vcpu_dirty_limit_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_cancel_vcpu_dirty_limit_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DirtyLimitInfoList(DirtyLimitInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DirtyLimitInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MigrationThreadInfo(MigrationThreadInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MigrationThreadInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MigrationThreadInfoList(MigrationThreadInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MigrationThreadInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_snapshot_save_arg(q_obj_snapshot_save_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_snapshot_save_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_snapshot_load_arg(q_obj_snapshot_load_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_snapshot_load_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_snapshot_delete_arg(q_obj_snapshot_delete_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_snapshot_delete_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_migration_c;
