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

#ifndef QAPI_VISIT_MIGRATION_H
#define QAPI_VISIT_MIGRATION_H

#include "qapi-builtin-visit.h"
#include "qapi-types-migration.h"

#include "qapi-visit-common.h"
#include "qapi-visit-sockets.h"

bool visit_type_MigrationStats_members(Visitor *v, MigrationStats *obj, Error **errp);

bool visit_type_MigrationStats(Visitor *v, const char *name,
                 MigrationStats **obj, Error **errp);

bool visit_type_XBZRLECacheStats_members(Visitor *v, XBZRLECacheStats *obj, Error **errp);

bool visit_type_XBZRLECacheStats(Visitor *v, const char *name,
                 XBZRLECacheStats **obj, Error **errp);

bool visit_type_CompressionStats_members(Visitor *v, CompressionStats *obj, Error **errp);

bool visit_type_CompressionStats(Visitor *v, const char *name,
                 CompressionStats **obj, Error **errp);

bool visit_type_MigrationStatus(Visitor *v, const char *name,
                 MigrationStatus *obj, Error **errp);

bool visit_type_VfioStats_members(Visitor *v, VfioStats *obj, Error **errp);

bool visit_type_VfioStats(Visitor *v, const char *name,
                 VfioStats **obj, Error **errp);

bool visit_type_MigrationInfo_members(Visitor *v, MigrationInfo *obj, Error **errp);

bool visit_type_MigrationInfo(Visitor *v, const char *name,
                 MigrationInfo **obj, Error **errp);

bool visit_type_MigrationCapability(Visitor *v, const char *name,
                 MigrationCapability *obj, Error **errp);

bool visit_type_MigrationCapabilityStatus_members(Visitor *v, MigrationCapabilityStatus *obj, Error **errp);

bool visit_type_MigrationCapabilityStatus(Visitor *v, const char *name,
                 MigrationCapabilityStatus **obj, Error **errp);

bool visit_type_MigrationCapabilityStatusList(Visitor *v, const char *name,
                 MigrationCapabilityStatusList **obj, Error **errp);

bool visit_type_q_obj_migrate_set_capabilities_arg_members(Visitor *v, q_obj_migrate_set_capabilities_arg *obj, Error **errp);

bool visit_type_q_obj_migrate_set_capabilities_arg(Visitor *v, const char *name,
                 q_obj_migrate_set_capabilities_arg **obj, Error **errp);

bool visit_type_MultiFDCompression(Visitor *v, const char *name,
                 MultiFDCompression *obj, Error **errp);

bool visit_type_BitmapMigrationBitmapAliasTransform_members(Visitor *v, BitmapMigrationBitmapAliasTransform *obj, Error **errp);

bool visit_type_BitmapMigrationBitmapAliasTransform(Visitor *v, const char *name,
                 BitmapMigrationBitmapAliasTransform **obj, Error **errp);

bool visit_type_BitmapMigrationBitmapAlias_members(Visitor *v, BitmapMigrationBitmapAlias *obj, Error **errp);

bool visit_type_BitmapMigrationBitmapAlias(Visitor *v, const char *name,
                 BitmapMigrationBitmapAlias **obj, Error **errp);

bool visit_type_BitmapMigrationBitmapAliasList(Visitor *v, const char *name,
                 BitmapMigrationBitmapAliasList **obj, Error **errp);

bool visit_type_BitmapMigrationNodeAlias_members(Visitor *v, BitmapMigrationNodeAlias *obj, Error **errp);

bool visit_type_BitmapMigrationNodeAlias(Visitor *v, const char *name,
                 BitmapMigrationNodeAlias **obj, Error **errp);

bool visit_type_MigrationParameter(Visitor *v, const char *name,
                 MigrationParameter *obj, Error **errp);

bool visit_type_BitmapMigrationNodeAliasList(Visitor *v, const char *name,
                 BitmapMigrationNodeAliasList **obj, Error **errp);

bool visit_type_MigrateSetParameters_members(Visitor *v, MigrateSetParameters *obj, Error **errp);

bool visit_type_MigrateSetParameters(Visitor *v, const char *name,
                 MigrateSetParameters **obj, Error **errp);

bool visit_type_MigrationParameters_members(Visitor *v, MigrationParameters *obj, Error **errp);

bool visit_type_MigrationParameters(Visitor *v, const char *name,
                 MigrationParameters **obj, Error **errp);

bool visit_type_q_obj_client_migrate_info_arg_members(Visitor *v, q_obj_client_migrate_info_arg *obj, Error **errp);

bool visit_type_q_obj_client_migrate_info_arg(Visitor *v, const char *name,
                 q_obj_client_migrate_info_arg **obj, Error **errp);

bool visit_type_q_obj_MIGRATION_arg_members(Visitor *v, q_obj_MIGRATION_arg *obj, Error **errp);

bool visit_type_q_obj_MIGRATION_arg(Visitor *v, const char *name,
                 q_obj_MIGRATION_arg **obj, Error **errp);

bool visit_type_q_obj_MIGRATION_PASS_arg_members(Visitor *v, q_obj_MIGRATION_PASS_arg *obj, Error **errp);

bool visit_type_q_obj_MIGRATION_PASS_arg(Visitor *v, const char *name,
                 q_obj_MIGRATION_PASS_arg **obj, Error **errp);

bool visit_type_COLOMessage(Visitor *v, const char *name,
                 COLOMessage *obj, Error **errp);

bool visit_type_COLOMode(Visitor *v, const char *name,
                 COLOMode *obj, Error **errp);

bool visit_type_FailoverStatus(Visitor *v, const char *name,
                 FailoverStatus *obj, Error **errp);

bool visit_type_q_obj_COLO_EXIT_arg_members(Visitor *v, q_obj_COLO_EXIT_arg *obj, Error **errp);

bool visit_type_q_obj_COLO_EXIT_arg(Visitor *v, const char *name,
                 q_obj_COLO_EXIT_arg **obj, Error **errp);

bool visit_type_COLOExitReason(Visitor *v, const char *name,
                 COLOExitReason *obj, Error **errp);

bool visit_type_q_obj_migrate_continue_arg_members(Visitor *v, q_obj_migrate_continue_arg *obj, Error **errp);

bool visit_type_q_obj_migrate_continue_arg(Visitor *v, const char *name,
                 q_obj_migrate_continue_arg **obj, Error **errp);

bool visit_type_q_obj_migrate_arg_members(Visitor *v, q_obj_migrate_arg *obj, Error **errp);

bool visit_type_q_obj_migrate_arg(Visitor *v, const char *name,
                 q_obj_migrate_arg **obj, Error **errp);

bool visit_type_q_obj_migrate_incoming_arg_members(Visitor *v, q_obj_migrate_incoming_arg *obj, Error **errp);

bool visit_type_q_obj_migrate_incoming_arg(Visitor *v, const char *name,
                 q_obj_migrate_incoming_arg **obj, Error **errp);

bool visit_type_q_obj_xen_save_devices_state_arg_members(Visitor *v, q_obj_xen_save_devices_state_arg *obj, Error **errp);

bool visit_type_q_obj_xen_save_devices_state_arg(Visitor *v, const char *name,
                 q_obj_xen_save_devices_state_arg **obj, Error **errp);

bool visit_type_q_obj_xen_set_global_dirty_log_arg_members(Visitor *v, q_obj_xen_set_global_dirty_log_arg *obj, Error **errp);

bool visit_type_q_obj_xen_set_global_dirty_log_arg(Visitor *v, const char *name,
                 q_obj_xen_set_global_dirty_log_arg **obj, Error **errp);

bool visit_type_q_obj_xen_load_devices_state_arg_members(Visitor *v, q_obj_xen_load_devices_state_arg *obj, Error **errp);

bool visit_type_q_obj_xen_load_devices_state_arg(Visitor *v, const char *name,
                 q_obj_xen_load_devices_state_arg **obj, Error **errp);

#if defined(CONFIG_REPLICATION)
bool visit_type_q_obj_xen_set_replication_arg_members(Visitor *v, q_obj_xen_set_replication_arg *obj, Error **errp);

bool visit_type_q_obj_xen_set_replication_arg(Visitor *v, const char *name,
                 q_obj_xen_set_replication_arg **obj, Error **errp);
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
bool visit_type_ReplicationStatus_members(Visitor *v, ReplicationStatus *obj, Error **errp);

bool visit_type_ReplicationStatus(Visitor *v, const char *name,
                 ReplicationStatus **obj, Error **errp);
#endif /* defined(CONFIG_REPLICATION) */

bool visit_type_COLOStatus_members(Visitor *v, COLOStatus *obj, Error **errp);

bool visit_type_COLOStatus(Visitor *v, const char *name,
                 COLOStatus **obj, Error **errp);

bool visit_type_q_obj_migrate_recover_arg_members(Visitor *v, q_obj_migrate_recover_arg *obj, Error **errp);

bool visit_type_q_obj_migrate_recover_arg(Visitor *v, const char *name,
                 q_obj_migrate_recover_arg **obj, Error **errp);

bool visit_type_q_obj_UNPLUG_PRIMARY_arg_members(Visitor *v, q_obj_UNPLUG_PRIMARY_arg *obj, Error **errp);

bool visit_type_q_obj_UNPLUG_PRIMARY_arg(Visitor *v, const char *name,
                 q_obj_UNPLUG_PRIMARY_arg **obj, Error **errp);

bool visit_type_DirtyRateVcpu_members(Visitor *v, DirtyRateVcpu *obj, Error **errp);

bool visit_type_DirtyRateVcpu(Visitor *v, const char *name,
                 DirtyRateVcpu **obj, Error **errp);

bool visit_type_DirtyRateStatus(Visitor *v, const char *name,
                 DirtyRateStatus *obj, Error **errp);

bool visit_type_DirtyRateMeasureMode(Visitor *v, const char *name,
                 DirtyRateMeasureMode *obj, Error **errp);

bool visit_type_DirtyRateVcpuList(Visitor *v, const char *name,
                 DirtyRateVcpuList **obj, Error **errp);

bool visit_type_DirtyRateInfo_members(Visitor *v, DirtyRateInfo *obj, Error **errp);

bool visit_type_DirtyRateInfo(Visitor *v, const char *name,
                 DirtyRateInfo **obj, Error **errp);

bool visit_type_q_obj_calc_dirty_rate_arg_members(Visitor *v, q_obj_calc_dirty_rate_arg *obj, Error **errp);

bool visit_type_q_obj_calc_dirty_rate_arg(Visitor *v, const char *name,
                 q_obj_calc_dirty_rate_arg **obj, Error **errp);

bool visit_type_DirtyLimitInfo_members(Visitor *v, DirtyLimitInfo *obj, Error **errp);

bool visit_type_DirtyLimitInfo(Visitor *v, const char *name,
                 DirtyLimitInfo **obj, Error **errp);

bool visit_type_q_obj_set_vcpu_dirty_limit_arg_members(Visitor *v, q_obj_set_vcpu_dirty_limit_arg *obj, Error **errp);

bool visit_type_q_obj_set_vcpu_dirty_limit_arg(Visitor *v, const char *name,
                 q_obj_set_vcpu_dirty_limit_arg **obj, Error **errp);

bool visit_type_q_obj_cancel_vcpu_dirty_limit_arg_members(Visitor *v, q_obj_cancel_vcpu_dirty_limit_arg *obj, Error **errp);

bool visit_type_q_obj_cancel_vcpu_dirty_limit_arg(Visitor *v, const char *name,
                 q_obj_cancel_vcpu_dirty_limit_arg **obj, Error **errp);

bool visit_type_DirtyLimitInfoList(Visitor *v, const char *name,
                 DirtyLimitInfoList **obj, Error **errp);

bool visit_type_MigrationThreadInfo_members(Visitor *v, MigrationThreadInfo *obj, Error **errp);

bool visit_type_MigrationThreadInfo(Visitor *v, const char *name,
                 MigrationThreadInfo **obj, Error **errp);

bool visit_type_MigrationThreadInfoList(Visitor *v, const char *name,
                 MigrationThreadInfoList **obj, Error **errp);

bool visit_type_q_obj_snapshot_save_arg_members(Visitor *v, q_obj_snapshot_save_arg *obj, Error **errp);

bool visit_type_q_obj_snapshot_save_arg(Visitor *v, const char *name,
                 q_obj_snapshot_save_arg **obj, Error **errp);

bool visit_type_q_obj_snapshot_load_arg_members(Visitor *v, q_obj_snapshot_load_arg *obj, Error **errp);

bool visit_type_q_obj_snapshot_load_arg(Visitor *v, const char *name,
                 q_obj_snapshot_load_arg **obj, Error **errp);

bool visit_type_q_obj_snapshot_delete_arg_members(Visitor *v, q_obj_snapshot_delete_arg *obj, Error **errp);

bool visit_type_q_obj_snapshot_delete_arg(Visitor *v, const char *name,
                 q_obj_snapshot_delete_arg **obj, Error **errp);

#endif /* QAPI_VISIT_MIGRATION_H */
