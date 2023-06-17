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

#include "qemu-compat.h"
#include "qapi-emit-events.h"
#include "error.h"

const QEnumLookup QAPIEvent_lookup = {
    .array = (const char *const[]) {
        [QAPI_EVENT_SHUTDOWN] = "SHUTDOWN",
        [QAPI_EVENT_POWERDOWN] = "POWERDOWN",
        [QAPI_EVENT_RESET] = "RESET",
        [QAPI_EVENT_STOP] = "STOP",
        [QAPI_EVENT_RESUME] = "RESUME",
        [QAPI_EVENT_SUSPEND] = "SUSPEND",
        [QAPI_EVENT_SUSPEND_DISK] = "SUSPEND_DISK",
        [QAPI_EVENT_WAKEUP] = "WAKEUP",
        [QAPI_EVENT_WATCHDOG] = "WATCHDOG",
        [QAPI_EVENT_GUEST_PANICKED] = "GUEST_PANICKED",
        [QAPI_EVENT_GUEST_CRASHLOADED] = "GUEST_CRASHLOADED",
        [QAPI_EVENT_MEMORY_FAILURE] = "MEMORY_FAILURE",
        [QAPI_EVENT_DEVICE_TRAY_MOVED] = "DEVICE_TRAY_MOVED",
        [QAPI_EVENT_PR_MANAGER_STATUS_CHANGED] = "PR_MANAGER_STATUS_CHANGED",
        [QAPI_EVENT_BLOCK_IMAGE_CORRUPTED] = "BLOCK_IMAGE_CORRUPTED",
        [QAPI_EVENT_BLOCK_IO_ERROR] = "BLOCK_IO_ERROR",
        [QAPI_EVENT_BLOCK_JOB_COMPLETED] = "BLOCK_JOB_COMPLETED",
        [QAPI_EVENT_BLOCK_JOB_CANCELLED] = "BLOCK_JOB_CANCELLED",
        [QAPI_EVENT_BLOCK_JOB_ERROR] = "BLOCK_JOB_ERROR",
        [QAPI_EVENT_BLOCK_JOB_READY] = "BLOCK_JOB_READY",
        [QAPI_EVENT_BLOCK_JOB_PENDING] = "BLOCK_JOB_PENDING",
        [QAPI_EVENT_BLOCK_WRITE_THRESHOLD] = "BLOCK_WRITE_THRESHOLD",
        [QAPI_EVENT_QUORUM_FAILURE] = "QUORUM_FAILURE",
        [QAPI_EVENT_QUORUM_REPORT_BAD] = "QUORUM_REPORT_BAD",
        [QAPI_EVENT_JOB_STATUS_CHANGE] = "JOB_STATUS_CHANGE",
        [QAPI_EVENT_BLOCK_EXPORT_DELETED] = "BLOCK_EXPORT_DELETED",
        [QAPI_EVENT_VSERPORT_CHANGE] = "VSERPORT_CHANGE",
        [QAPI_EVENT_DUMP_COMPLETED] = "DUMP_COMPLETED",
        [QAPI_EVENT_NIC_RX_FILTER_CHANGED] = "NIC_RX_FILTER_CHANGED",
        [QAPI_EVENT_FAILOVER_NEGOTIATED] = "FAILOVER_NEGOTIATED",
        [QAPI_EVENT_NETDEV_STREAM_CONNECTED] = "NETDEV_STREAM_CONNECTED",
        [QAPI_EVENT_NETDEV_STREAM_DISCONNECTED] = "NETDEV_STREAM_DISCONNECTED",
        [QAPI_EVENT_RDMA_GID_STATUS_CHANGED] = "RDMA_GID_STATUS_CHANGED",
        [QAPI_EVENT_SPICE_CONNECTED] = "SPICE_CONNECTED",
        [QAPI_EVENT_SPICE_INITIALIZED] = "SPICE_INITIALIZED",
        [QAPI_EVENT_SPICE_DISCONNECTED] = "SPICE_DISCONNECTED",
        [QAPI_EVENT_SPICE_MIGRATE_COMPLETED] = "SPICE_MIGRATE_COMPLETED",
        [QAPI_EVENT_VNC_CONNECTED] = "VNC_CONNECTED",
        [QAPI_EVENT_VNC_INITIALIZED] = "VNC_INITIALIZED",
        [QAPI_EVENT_VNC_DISCONNECTED] = "VNC_DISCONNECTED",
        [QAPI_EVENT_MIGRATION] = "MIGRATION",
        [QAPI_EVENT_MIGRATION_PASS] = "MIGRATION_PASS",
        [QAPI_EVENT_COLO_EXIT] = "COLO_EXIT",
        [QAPI_EVENT_UNPLUG_PRIMARY] = "UNPLUG_PRIMARY",
        [QAPI_EVENT_DEVICE_DELETED] = "DEVICE_DELETED",
        [QAPI_EVENT_DEVICE_UNPLUG_GUEST_ERROR] = "DEVICE_UNPLUG_GUEST_ERROR",
        [QAPI_EVENT_BALLOON_CHANGE] = "BALLOON_CHANGE",
        [QAPI_EVENT_MEMORY_DEVICE_SIZE_CHANGE] = "MEMORY_DEVICE_SIZE_CHANGE",
        [QAPI_EVENT_MEM_UNPLUG_ERROR] = "MEM_UNPLUG_ERROR",
        [QAPI_EVENT_RTC_CHANGE] = "RTC_CHANGE",
        [QAPI_EVENT_VFU_CLIENT_HANGUP] = "VFU_CLIENT_HANGUP",
        [QAPI_EVENT_ACPI_DEVICE_OST] = "ACPI_DEVICE_OST",
    },
    .size = QAPI_EVENT__MAX
};

void qapi_event_dispatch(const char *event, CFDictionaryRef data, void *ctx)
{
    QAPIEvent num;

    num = (QAPIEvent)qapi_enum_parse(&QAPIEvent_lookup, event, 0, &error_abort);
    switch (num) {
        default:
            assert(0);
            break;
        case QAPI_EVENT_SHUTDOWN:
            if (qapi_enum_handler_registry_data.qapi_shutdown_handler) {
                qapi_event_dispatch_SHUTDOWN(qapi_enum_handler_registry_data.qapi_shutdown_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_POWERDOWN:
            if (qapi_enum_handler_registry_data.qapi_powerdown_handler) {
                qapi_event_dispatch_POWERDOWN(qapi_enum_handler_registry_data.qapi_powerdown_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_RESET:
            if (qapi_enum_handler_registry_data.qapi_reset_handler) {
                qapi_event_dispatch_RESET(qapi_enum_handler_registry_data.qapi_reset_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_STOP:
            if (qapi_enum_handler_registry_data.qapi_stop_handler) {
                qapi_event_dispatch_STOP(qapi_enum_handler_registry_data.qapi_stop_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_RESUME:
            if (qapi_enum_handler_registry_data.qapi_resume_handler) {
                qapi_event_dispatch_RESUME(qapi_enum_handler_registry_data.qapi_resume_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_SUSPEND:
            if (qapi_enum_handler_registry_data.qapi_suspend_handler) {
                qapi_event_dispatch_SUSPEND(qapi_enum_handler_registry_data.qapi_suspend_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_SUSPEND_DISK:
            if (qapi_enum_handler_registry_data.qapi_suspend_disk_handler) {
                qapi_event_dispatch_SUSPEND_DISK(qapi_enum_handler_registry_data.qapi_suspend_disk_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_WAKEUP:
            if (qapi_enum_handler_registry_data.qapi_wakeup_handler) {
                qapi_event_dispatch_WAKEUP(qapi_enum_handler_registry_data.qapi_wakeup_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_WATCHDOG:
            if (qapi_enum_handler_registry_data.qapi_watchdog_handler) {
                qapi_event_dispatch_WATCHDOG(qapi_enum_handler_registry_data.qapi_watchdog_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_GUEST_PANICKED:
            if (qapi_enum_handler_registry_data.qapi_guest_panicked_handler) {
                qapi_event_dispatch_GUEST_PANICKED(qapi_enum_handler_registry_data.qapi_guest_panicked_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_GUEST_CRASHLOADED:
            if (qapi_enum_handler_registry_data.qapi_guest_crashloaded_handler) {
                qapi_event_dispatch_GUEST_CRASHLOADED(qapi_enum_handler_registry_data.qapi_guest_crashloaded_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_MEMORY_FAILURE:
            if (qapi_enum_handler_registry_data.qapi_memory_failure_handler) {
                qapi_event_dispatch_MEMORY_FAILURE(qapi_enum_handler_registry_data.qapi_memory_failure_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_DEVICE_TRAY_MOVED:
            if (qapi_enum_handler_registry_data.qapi_device_tray_moved_handler) {
                qapi_event_dispatch_DEVICE_TRAY_MOVED(qapi_enum_handler_registry_data.qapi_device_tray_moved_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_PR_MANAGER_STATUS_CHANGED:
            if (qapi_enum_handler_registry_data.qapi_pr_manager_status_changed_handler) {
                qapi_event_dispatch_PR_MANAGER_STATUS_CHANGED(qapi_enum_handler_registry_data.qapi_pr_manager_status_changed_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_IMAGE_CORRUPTED:
            if (qapi_enum_handler_registry_data.qapi_block_image_corrupted_handler) {
                qapi_event_dispatch_BLOCK_IMAGE_CORRUPTED(qapi_enum_handler_registry_data.qapi_block_image_corrupted_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_IO_ERROR:
            if (qapi_enum_handler_registry_data.qapi_block_io_error_handler) {
                qapi_event_dispatch_BLOCK_IO_ERROR(qapi_enum_handler_registry_data.qapi_block_io_error_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_JOB_COMPLETED:
            if (qapi_enum_handler_registry_data.qapi_block_job_completed_handler) {
                qapi_event_dispatch_BLOCK_JOB_COMPLETED(qapi_enum_handler_registry_data.qapi_block_job_completed_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_JOB_CANCELLED:
            if (qapi_enum_handler_registry_data.qapi_block_job_cancelled_handler) {
                qapi_event_dispatch_BLOCK_JOB_CANCELLED(qapi_enum_handler_registry_data.qapi_block_job_cancelled_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_JOB_ERROR:
            if (qapi_enum_handler_registry_data.qapi_block_job_error_handler) {
                qapi_event_dispatch_BLOCK_JOB_ERROR(qapi_enum_handler_registry_data.qapi_block_job_error_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_JOB_READY:
            if (qapi_enum_handler_registry_data.qapi_block_job_ready_handler) {
                qapi_event_dispatch_BLOCK_JOB_READY(qapi_enum_handler_registry_data.qapi_block_job_ready_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_JOB_PENDING:
            if (qapi_enum_handler_registry_data.qapi_block_job_pending_handler) {
                qapi_event_dispatch_BLOCK_JOB_PENDING(qapi_enum_handler_registry_data.qapi_block_job_pending_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_WRITE_THRESHOLD:
            if (qapi_enum_handler_registry_data.qapi_block_write_threshold_handler) {
                qapi_event_dispatch_BLOCK_WRITE_THRESHOLD(qapi_enum_handler_registry_data.qapi_block_write_threshold_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_QUORUM_FAILURE:
            if (qapi_enum_handler_registry_data.qapi_quorum_failure_handler) {
                qapi_event_dispatch_QUORUM_FAILURE(qapi_enum_handler_registry_data.qapi_quorum_failure_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_QUORUM_REPORT_BAD:
            if (qapi_enum_handler_registry_data.qapi_quorum_report_bad_handler) {
                qapi_event_dispatch_QUORUM_REPORT_BAD(qapi_enum_handler_registry_data.qapi_quorum_report_bad_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_JOB_STATUS_CHANGE:
            if (qapi_enum_handler_registry_data.qapi_job_status_change_handler) {
                qapi_event_dispatch_JOB_STATUS_CHANGE(qapi_enum_handler_registry_data.qapi_job_status_change_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BLOCK_EXPORT_DELETED:
            if (qapi_enum_handler_registry_data.qapi_block_export_deleted_handler) {
                qapi_event_dispatch_BLOCK_EXPORT_DELETED(qapi_enum_handler_registry_data.qapi_block_export_deleted_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_VSERPORT_CHANGE:
            if (qapi_enum_handler_registry_data.qapi_vserport_change_handler) {
                qapi_event_dispatch_VSERPORT_CHANGE(qapi_enum_handler_registry_data.qapi_vserport_change_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_DUMP_COMPLETED:
            if (qapi_enum_handler_registry_data.qapi_dump_completed_handler) {
                qapi_event_dispatch_DUMP_COMPLETED(qapi_enum_handler_registry_data.qapi_dump_completed_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_NIC_RX_FILTER_CHANGED:
            if (qapi_enum_handler_registry_data.qapi_nic_rx_filter_changed_handler) {
                qapi_event_dispatch_NIC_RX_FILTER_CHANGED(qapi_enum_handler_registry_data.qapi_nic_rx_filter_changed_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_FAILOVER_NEGOTIATED:
            if (qapi_enum_handler_registry_data.qapi_failover_negotiated_handler) {
                qapi_event_dispatch_FAILOVER_NEGOTIATED(qapi_enum_handler_registry_data.qapi_failover_negotiated_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_NETDEV_STREAM_CONNECTED:
            if (qapi_enum_handler_registry_data.qapi_netdev_stream_connected_handler) {
                qapi_event_dispatch_NETDEV_STREAM_CONNECTED(qapi_enum_handler_registry_data.qapi_netdev_stream_connected_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_NETDEV_STREAM_DISCONNECTED:
            if (qapi_enum_handler_registry_data.qapi_netdev_stream_disconnected_handler) {
                qapi_event_dispatch_NETDEV_STREAM_DISCONNECTED(qapi_enum_handler_registry_data.qapi_netdev_stream_disconnected_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_RDMA_GID_STATUS_CHANGED:
            if (qapi_enum_handler_registry_data.qapi_rdma_gid_status_changed_handler) {
                qapi_event_dispatch_RDMA_GID_STATUS_CHANGED(qapi_enum_handler_registry_data.qapi_rdma_gid_status_changed_handler, data, ctx);
            }
            break;
#if defined(CONFIG_SPICE)
        case QAPI_EVENT_SPICE_CONNECTED:
            if (qapi_enum_handler_registry_data.qapi_spice_connected_handler) {
                qapi_event_dispatch_SPICE_CONNECTED(qapi_enum_handler_registry_data.qapi_spice_connected_handler, data, ctx);
            }
            break;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
        case QAPI_EVENT_SPICE_INITIALIZED:
            if (qapi_enum_handler_registry_data.qapi_spice_initialized_handler) {
                qapi_event_dispatch_SPICE_INITIALIZED(qapi_enum_handler_registry_data.qapi_spice_initialized_handler, data, ctx);
            }
            break;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
        case QAPI_EVENT_SPICE_DISCONNECTED:
            if (qapi_enum_handler_registry_data.qapi_spice_disconnected_handler) {
                qapi_event_dispatch_SPICE_DISCONNECTED(qapi_enum_handler_registry_data.qapi_spice_disconnected_handler, data, ctx);
            }
            break;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
        case QAPI_EVENT_SPICE_MIGRATE_COMPLETED:
            if (qapi_enum_handler_registry_data.qapi_spice_migrate_completed_handler) {
                qapi_event_dispatch_SPICE_MIGRATE_COMPLETED(qapi_enum_handler_registry_data.qapi_spice_migrate_completed_handler, data, ctx);
            }
            break;
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_VNC)
        case QAPI_EVENT_VNC_CONNECTED:
            if (qapi_enum_handler_registry_data.qapi_vnc_connected_handler) {
                qapi_event_dispatch_VNC_CONNECTED(qapi_enum_handler_registry_data.qapi_vnc_connected_handler, data, ctx);
            }
            break;
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
        case QAPI_EVENT_VNC_INITIALIZED:
            if (qapi_enum_handler_registry_data.qapi_vnc_initialized_handler) {
                qapi_event_dispatch_VNC_INITIALIZED(qapi_enum_handler_registry_data.qapi_vnc_initialized_handler, data, ctx);
            }
            break;
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
        case QAPI_EVENT_VNC_DISCONNECTED:
            if (qapi_enum_handler_registry_data.qapi_vnc_disconnected_handler) {
                qapi_event_dispatch_VNC_DISCONNECTED(qapi_enum_handler_registry_data.qapi_vnc_disconnected_handler, data, ctx);
            }
            break;
#endif /* defined(CONFIG_VNC) */
        case QAPI_EVENT_MIGRATION:
            if (qapi_enum_handler_registry_data.qapi_migration_handler) {
                qapi_event_dispatch_MIGRATION(qapi_enum_handler_registry_data.qapi_migration_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_MIGRATION_PASS:
            if (qapi_enum_handler_registry_data.qapi_migration_pass_handler) {
                qapi_event_dispatch_MIGRATION_PASS(qapi_enum_handler_registry_data.qapi_migration_pass_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_COLO_EXIT:
            if (qapi_enum_handler_registry_data.qapi_colo_exit_handler) {
                qapi_event_dispatch_COLO_EXIT(qapi_enum_handler_registry_data.qapi_colo_exit_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_UNPLUG_PRIMARY:
            if (qapi_enum_handler_registry_data.qapi_unplug_primary_handler) {
                qapi_event_dispatch_UNPLUG_PRIMARY(qapi_enum_handler_registry_data.qapi_unplug_primary_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_DEVICE_DELETED:
            if (qapi_enum_handler_registry_data.qapi_device_deleted_handler) {
                qapi_event_dispatch_DEVICE_DELETED(qapi_enum_handler_registry_data.qapi_device_deleted_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_DEVICE_UNPLUG_GUEST_ERROR:
            if (qapi_enum_handler_registry_data.qapi_device_unplug_guest_error_handler) {
                qapi_event_dispatch_DEVICE_UNPLUG_GUEST_ERROR(qapi_enum_handler_registry_data.qapi_device_unplug_guest_error_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_BALLOON_CHANGE:
            if (qapi_enum_handler_registry_data.qapi_balloon_change_handler) {
                qapi_event_dispatch_BALLOON_CHANGE(qapi_enum_handler_registry_data.qapi_balloon_change_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_MEMORY_DEVICE_SIZE_CHANGE:
            if (qapi_enum_handler_registry_data.qapi_memory_device_size_change_handler) {
                qapi_event_dispatch_MEMORY_DEVICE_SIZE_CHANGE(qapi_enum_handler_registry_data.qapi_memory_device_size_change_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_MEM_UNPLUG_ERROR:
            if (qapi_enum_handler_registry_data.qapi_mem_unplug_error_handler) {
                qapi_event_dispatch_MEM_UNPLUG_ERROR(qapi_enum_handler_registry_data.qapi_mem_unplug_error_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_RTC_CHANGE:
            if (qapi_enum_handler_registry_data.qapi_rtc_change_handler) {
                qapi_event_dispatch_RTC_CHANGE(qapi_enum_handler_registry_data.qapi_rtc_change_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_VFU_CLIENT_HANGUP:
            if (qapi_enum_handler_registry_data.qapi_vfu_client_hangup_handler) {
                qapi_event_dispatch_VFU_CLIENT_HANGUP(qapi_enum_handler_registry_data.qapi_vfu_client_hangup_handler, data, ctx);
            }
            break;
        case QAPI_EVENT_ACPI_DEVICE_OST:
            if (qapi_enum_handler_registry_data.qapi_acpi_device_ost_handler) {
                qapi_event_dispatch_ACPI_DEVICE_OST(qapi_enum_handler_registry_data.qapi_acpi_device_ost_handler, data, ctx);
            }
            break;
    }
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_emit_events_c;
