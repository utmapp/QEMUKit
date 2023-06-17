/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_MIGRATION_H
#define QAPI_COMMANDS_MIGRATION_H

#include "qapi-commands-common.h"
#include "qapi-commands-sockets.h"
#include "qapi-types-migration.h"

MigrationInfo *qmp_query_migrate(Error **errp, void *ctx);
void qmp_migrate_set_capabilities(MigrationCapabilityStatusList *capabilities, Error **errp, void *ctx);
MigrationCapabilityStatusList *qmp_query_migrate_capabilities(Error **errp, void *ctx);
void qmp_migrate_set_parameters(MigrateSetParameters *arg, Error **errp, void *ctx);
MigrationParameters *qmp_query_migrate_parameters(Error **errp, void *ctx);
void qmp_client_migrate_info(const char *protocol, const char *hostname, bool has_port, int64_t port, bool has_tls_port, int64_t tls_port, bool has_cert_subject, const char *cert_subject, Error **errp, void *ctx);
void qmp_migrate_start_postcopy(Error **errp, void *ctx);
void qmp_x_colo_lost_heartbeat(Error **errp, void *ctx);
void qmp_migrate_cancel(Error **errp, void *ctx);
void qmp_migrate_continue(MigrationStatus state, Error **errp, void *ctx);
void qmp_migrate(const char *uri, bool has_blk, bool blk, bool has_inc, bool inc, bool has_detach, bool detach, bool has_resume, bool resume, Error **errp, void *ctx);
void qmp_migrate_incoming(const char *uri, Error **errp, void *ctx);
void qmp_xen_save_devices_state(const char *filename, bool has_live, bool live, Error **errp, void *ctx);
void qmp_xen_set_global_dirty_log(bool enable, Error **errp, void *ctx);
void qmp_xen_load_devices_state(const char *filename, Error **errp, void *ctx);
#if defined(CONFIG_REPLICATION)
void qmp_xen_set_replication(bool enable, bool primary, bool has_failover, bool failover, Error **errp, void *ctx);
#endif /* defined(CONFIG_REPLICATION) */
#if defined(CONFIG_REPLICATION)
ReplicationStatus *qmp_query_xen_replication_status(Error **errp, void *ctx);
#endif /* defined(CONFIG_REPLICATION) */
#if defined(CONFIG_REPLICATION)
void qmp_xen_colo_do_checkpoint(Error **errp, void *ctx);
#endif /* defined(CONFIG_REPLICATION) */
COLOStatus *qmp_query_colo_status(Error **errp, void *ctx);
void qmp_migrate_recover(const char *uri, Error **errp, void *ctx);
void qmp_migrate_pause(Error **errp, void *ctx);
void qmp_calc_dirty_rate(int64_t calc_time, bool has_sample_pages, int64_t sample_pages, bool has_mode, DirtyRateMeasureMode mode, Error **errp, void *ctx);
DirtyRateInfo *qmp_query_dirty_rate(Error **errp, void *ctx);
void qmp_set_vcpu_dirty_limit(bool has_cpu_index, int64_t cpu_index, uint64_t dirty_rate, Error **errp, void *ctx);
void qmp_cancel_vcpu_dirty_limit(bool has_cpu_index, int64_t cpu_index, Error **errp, void *ctx);
DirtyLimitInfoList *qmp_query_vcpu_dirty_limit(Error **errp, void *ctx);
MigrationThreadInfoList *qmp_query_migrationthreads(Error **errp, void *ctx);
void qmp_snapshot_save(const char *job_id, const char *tag, const char *vmstate, strList *devices, Error **errp, void *ctx);
void qmp_snapshot_load(const char *job_id, const char *tag, const char *vmstate, strList *devices, Error **errp, void *ctx);
void qmp_snapshot_delete(const char *job_id, const char *tag, strList *devices, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_MIGRATION_H */
