/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI Events emission
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_EMIT_EVENTS_H
#define QAPI_EMIT_EVENTS_H

#include "qapi-events.h"
#include "util.h"

typedef enum QAPIEvent {
    QAPI_EVENT_SHUTDOWN,
    QAPI_EVENT_POWERDOWN,
    QAPI_EVENT_RESET,
    QAPI_EVENT_STOP,
    QAPI_EVENT_RESUME,
    QAPI_EVENT_SUSPEND,
    QAPI_EVENT_SUSPEND_DISK,
    QAPI_EVENT_WAKEUP,
    QAPI_EVENT_WATCHDOG,
    QAPI_EVENT_GUEST_PANICKED,
    QAPI_EVENT_GUEST_CRASHLOADED,
    QAPI_EVENT_MEMORY_FAILURE,
    QAPI_EVENT_DEVICE_TRAY_MOVED,
    QAPI_EVENT_PR_MANAGER_STATUS_CHANGED,
    QAPI_EVENT_BLOCK_IMAGE_CORRUPTED,
    QAPI_EVENT_BLOCK_IO_ERROR,
    QAPI_EVENT_BLOCK_JOB_COMPLETED,
    QAPI_EVENT_BLOCK_JOB_CANCELLED,
    QAPI_EVENT_BLOCK_JOB_ERROR,
    QAPI_EVENT_BLOCK_JOB_READY,
    QAPI_EVENT_BLOCK_JOB_PENDING,
    QAPI_EVENT_BLOCK_WRITE_THRESHOLD,
    QAPI_EVENT_QUORUM_FAILURE,
    QAPI_EVENT_QUORUM_REPORT_BAD,
    QAPI_EVENT_JOB_STATUS_CHANGE,
    QAPI_EVENT_BLOCK_EXPORT_DELETED,
    QAPI_EVENT_VSERPORT_CHANGE,
    QAPI_EVENT_DUMP_COMPLETED,
    QAPI_EVENT_NIC_RX_FILTER_CHANGED,
    QAPI_EVENT_FAILOVER_NEGOTIATED,
    QAPI_EVENT_NETDEV_STREAM_CONNECTED,
    QAPI_EVENT_NETDEV_STREAM_DISCONNECTED,
    QAPI_EVENT_RDMA_GID_STATUS_CHANGED,
    QAPI_EVENT_SPICE_CONNECTED,
    QAPI_EVENT_SPICE_INITIALIZED,
    QAPI_EVENT_SPICE_DISCONNECTED,
    QAPI_EVENT_SPICE_MIGRATE_COMPLETED,
    QAPI_EVENT_VNC_CONNECTED,
    QAPI_EVENT_VNC_INITIALIZED,
    QAPI_EVENT_VNC_DISCONNECTED,
    QAPI_EVENT_MIGRATION,
    QAPI_EVENT_MIGRATION_PASS,
    QAPI_EVENT_COLO_EXIT,
    QAPI_EVENT_UNPLUG_PRIMARY,
    QAPI_EVENT_DEVICE_DELETED,
    QAPI_EVENT_DEVICE_UNPLUG_GUEST_ERROR,
    QAPI_EVENT_BALLOON_CHANGE,
    QAPI_EVENT_MEMORY_DEVICE_SIZE_CHANGE,
    QAPI_EVENT_MEM_UNPLUG_ERROR,
    QAPI_EVENT_RTC_CHANGE,
    QAPI_EVENT_VFU_CLIENT_HANGUP,
    QAPI_EVENT_ACPI_DEVICE_OST,
    QAPI_EVENT__MAX,
} QAPIEvent;

#define QAPIEvent_str(val) \
    qapi_enum_lookup(&QAPIEvent_lookup, (val))

extern const QEnumLookup QAPIEvent_lookup;

typedef struct {
    qapi_shutdown_handler qapi_shutdown_handler;
    qapi_powerdown_handler qapi_powerdown_handler;
    qapi_reset_handler qapi_reset_handler;
    qapi_stop_handler qapi_stop_handler;
    qapi_resume_handler qapi_resume_handler;
    qapi_suspend_handler qapi_suspend_handler;
    qapi_suspend_disk_handler qapi_suspend_disk_handler;
    qapi_wakeup_handler qapi_wakeup_handler;
    qapi_watchdog_handler qapi_watchdog_handler;
    qapi_guest_panicked_handler qapi_guest_panicked_handler;
    qapi_guest_crashloaded_handler qapi_guest_crashloaded_handler;
    qapi_memory_failure_handler qapi_memory_failure_handler;
    qapi_device_tray_moved_handler qapi_device_tray_moved_handler;
    qapi_pr_manager_status_changed_handler qapi_pr_manager_status_changed_handler;
    qapi_block_image_corrupted_handler qapi_block_image_corrupted_handler;
    qapi_block_io_error_handler qapi_block_io_error_handler;
    qapi_block_job_completed_handler qapi_block_job_completed_handler;
    qapi_block_job_cancelled_handler qapi_block_job_cancelled_handler;
    qapi_block_job_error_handler qapi_block_job_error_handler;
    qapi_block_job_ready_handler qapi_block_job_ready_handler;
    qapi_block_job_pending_handler qapi_block_job_pending_handler;
    qapi_block_write_threshold_handler qapi_block_write_threshold_handler;
    qapi_quorum_failure_handler qapi_quorum_failure_handler;
    qapi_quorum_report_bad_handler qapi_quorum_report_bad_handler;
    qapi_job_status_change_handler qapi_job_status_change_handler;
    qapi_block_export_deleted_handler qapi_block_export_deleted_handler;
    qapi_vserport_change_handler qapi_vserport_change_handler;
    qapi_dump_completed_handler qapi_dump_completed_handler;
    qapi_nic_rx_filter_changed_handler qapi_nic_rx_filter_changed_handler;
    qapi_failover_negotiated_handler qapi_failover_negotiated_handler;
    qapi_netdev_stream_connected_handler qapi_netdev_stream_connected_handler;
    qapi_netdev_stream_disconnected_handler qapi_netdev_stream_disconnected_handler;
    qapi_rdma_gid_status_changed_handler qapi_rdma_gid_status_changed_handler;
#if defined(CONFIG_SPICE)
    qapi_spice_connected_handler qapi_spice_connected_handler;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    qapi_spice_initialized_handler qapi_spice_initialized_handler;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    qapi_spice_disconnected_handler qapi_spice_disconnected_handler;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    qapi_spice_migrate_completed_handler qapi_spice_migrate_completed_handler;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_VNC)
    qapi_vnc_connected_handler qapi_vnc_connected_handler;
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    qapi_vnc_initialized_handler qapi_vnc_initialized_handler;
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    qapi_vnc_disconnected_handler qapi_vnc_disconnected_handler;
#endif /* defined(CONFIG_VNC) */
    qapi_migration_handler qapi_migration_handler;
    qapi_migration_pass_handler qapi_migration_pass_handler;
    qapi_colo_exit_handler qapi_colo_exit_handler;
    qapi_unplug_primary_handler qapi_unplug_primary_handler;
    qapi_device_deleted_handler qapi_device_deleted_handler;
    qapi_device_unplug_guest_error_handler qapi_device_unplug_guest_error_handler;
    qapi_balloon_change_handler qapi_balloon_change_handler;
    qapi_memory_device_size_change_handler qapi_memory_device_size_change_handler;
    qapi_mem_unplug_error_handler qapi_mem_unplug_error_handler;
    qapi_rtc_change_handler qapi_rtc_change_handler;
    qapi_vfu_client_hangup_handler qapi_vfu_client_hangup_handler;
    qapi_acpi_device_ost_handler qapi_acpi_device_ost_handler;
} qapi_enum_handler_registry;

extern qapi_enum_handler_registry qapi_enum_handler_registry_data;

void qapi_event_dispatch(const char *event, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EMIT_EVENTS_H */
