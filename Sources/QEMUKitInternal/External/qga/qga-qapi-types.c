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
#include "qga-qapi-types.h"
#include "qga-qapi-visit.h"

void qapi_free_q_obj_guest_sync_delimited_arg(q_obj_guest_sync_delimited_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_sync_delimited_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_sync_arg(q_obj_guest_sync_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_sync_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_set_time_arg(q_obj_guest_set_time_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_set_time_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestAgentCommandInfo(GuestAgentCommandInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestAgentCommandInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestAgentCommandInfoList(GuestAgentCommandInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestAgentCommandInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestAgentInfo(GuestAgentInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestAgentInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_shutdown_arg(q_obj_guest_shutdown_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_shutdown_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_file_open_arg(q_obj_guest_file_open_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_file_open_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_file_close_arg(q_obj_guest_file_close_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_file_close_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestFileRead(GuestFileRead *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFileRead(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_file_read_arg(q_obj_guest_file_read_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_file_read_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestFileWrite(GuestFileWrite *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFileWrite(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_file_write_arg(q_obj_guest_file_write_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_file_write_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestFileSeek(GuestFileSeek *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFileSeek(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup QGASeek_lookup = {
    .array = (const char *const[]) {
        [QGA_SEEK_SET] = "set",
        [QGA_SEEK_CUR] = "cur",
        [QGA_SEEK_END] = "end",
    },
    .size = QGA_SEEK__MAX
};

void qapi_free_GuestFileWhence(GuestFileWhence *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFileWhence(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_file_seek_arg(q_obj_guest_file_seek_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_file_seek_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_file_flush_arg(q_obj_guest_file_flush_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_file_flush_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup GuestFsfreezeStatus_lookup = {
    .array = (const char *const[]) {
        [GUEST_FSFREEZE_STATUS_THAWED] = "thawed",
        [GUEST_FSFREEZE_STATUS_FROZEN] = "frozen",
    },
    .size = GUEST_FSFREEZE_STATUS__MAX
};

void qapi_free_q_obj_guest_fsfreeze_freeze_list_arg(q_obj_guest_fsfreeze_freeze_list_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_fsfreeze_freeze_list_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestFilesystemTrimResult(GuestFilesystemTrimResult *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFilesystemTrimResult(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestFilesystemTrimResultList(GuestFilesystemTrimResultList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFilesystemTrimResultList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestFilesystemTrimResponse(GuestFilesystemTrimResponse *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFilesystemTrimResponse(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_fstrim_arg(q_obj_guest_fstrim_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_fstrim_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup GuestIpAddressType_lookup = {
    .array = (const char *const[]) {
        [GUEST_IP_ADDRESS_TYPE_IPV4] = "ipv4",
        [GUEST_IP_ADDRESS_TYPE_IPV6] = "ipv6",
    },
    .size = GUEST_IP_ADDRESS_TYPE__MAX
};

void qapi_free_GuestIpAddress(GuestIpAddress *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestIpAddress(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestNetworkInterfaceStat(GuestNetworkInterfaceStat *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestNetworkInterfaceStat(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestIpAddressList(GuestIpAddressList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestIpAddressList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestNetworkInterface(GuestNetworkInterface *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestNetworkInterface(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestNetworkInterfaceList(GuestNetworkInterfaceList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestNetworkInterfaceList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestLogicalProcessor(GuestLogicalProcessor *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestLogicalProcessor(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestLogicalProcessorList(GuestLogicalProcessorList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestLogicalProcessorList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_set_vcpus_arg(q_obj_guest_set_vcpus_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_set_vcpus_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup GuestDiskBusType_lookup = {
    .array = (const char *const[]) {
        [GUEST_DISK_BUS_TYPE_IDE] = "ide",
        [GUEST_DISK_BUS_TYPE_FDC] = "fdc",
        [GUEST_DISK_BUS_TYPE_SCSI] = "scsi",
        [GUEST_DISK_BUS_TYPE_VIRTIO] = "virtio",
        [GUEST_DISK_BUS_TYPE_XEN] = "xen",
        [GUEST_DISK_BUS_TYPE_USB] = "usb",
        [GUEST_DISK_BUS_TYPE_UML] = "uml",
        [GUEST_DISK_BUS_TYPE_SATA] = "sata",
        [GUEST_DISK_BUS_TYPE_SD] = "sd",
        [GUEST_DISK_BUS_TYPE_UNKNOWN] = "unknown",
        [GUEST_DISK_BUS_TYPE_IEEE1394] = "ieee1394",
        [GUEST_DISK_BUS_TYPE_SSA] = "ssa",
        [GUEST_DISK_BUS_TYPE_FIBRE] = "fibre",
        [GUEST_DISK_BUS_TYPE_RAID] = "raid",
        [GUEST_DISK_BUS_TYPE_ISCSI] = "iscsi",
        [GUEST_DISK_BUS_TYPE_SAS] = "sas",
        [GUEST_DISK_BUS_TYPE_MMC] = "mmc",
        [GUEST_DISK_BUS_TYPE_VIRTUAL] = "virtual",
        [GUEST_DISK_BUS_TYPE_FILE_BACKED_VIRTUAL] = "file-backed-virtual",
        [GUEST_DISK_BUS_TYPE_NVME] = "nvme",
    },
    .size = GUEST_DISK_BUS_TYPE__MAX
};

void qapi_free_GuestPCIAddress(GuestPCIAddress *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestPCIAddress(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestCCWAddress(GuestCCWAddress *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestCCWAddress(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDiskAddress(GuestDiskAddress *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDiskAddress(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestNVMeSmart(GuestNVMeSmart *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestNVMeSmart(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_GuestDiskSmart_base(q_obj_GuestDiskSmart_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_GuestDiskSmart_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDiskSmart(GuestDiskSmart *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDiskSmart(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDiskInfo(GuestDiskInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDiskInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDiskInfoList(GuestDiskInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDiskInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDiskAddressList(GuestDiskAddressList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDiskAddressList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestFilesystemInfo(GuestFilesystemInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFilesystemInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestFilesystemInfoList(GuestFilesystemInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestFilesystemInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_set_user_password_arg(q_obj_guest_set_user_password_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_set_user_password_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestMemoryBlock(GuestMemoryBlock *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestMemoryBlock(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestMemoryBlockList(GuestMemoryBlockList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestMemoryBlockList(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup GuestMemoryBlockResponseType_lookup = {
    .array = (const char *const[]) {
        [GUEST_MEMORY_BLOCK_RESPONSE_TYPE_SUCCESS] = "success",
        [GUEST_MEMORY_BLOCK_RESPONSE_TYPE_NOT_FOUND] = "not-found",
        [GUEST_MEMORY_BLOCK_RESPONSE_TYPE_OPERATION_NOT_SUPPORTED] = "operation-not-supported",
        [GUEST_MEMORY_BLOCK_RESPONSE_TYPE_OPERATION_FAILED] = "operation-failed",
    },
    .size = GUEST_MEMORY_BLOCK_RESPONSE_TYPE__MAX
};

void qapi_free_GuestMemoryBlockResponse(GuestMemoryBlockResponse *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestMemoryBlockResponse(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_set_memory_blocks_arg(q_obj_guest_set_memory_blocks_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_set_memory_blocks_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestMemoryBlockResponseList(GuestMemoryBlockResponseList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestMemoryBlockResponseList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestMemoryBlockInfo(GuestMemoryBlockInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestMemoryBlockInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestExecStatus(GuestExecStatus *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestExecStatus(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_exec_status_arg(q_obj_guest_exec_status_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_exec_status_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestExec(GuestExec *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestExec(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_guest_exec_arg(q_obj_guest_exec_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_exec_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestHostName(GuestHostName *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestHostName(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestUser(GuestUser *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestUser(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestUserList(GuestUserList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestUserList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestTimezone(GuestTimezone *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestTimezone(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestOSInfo(GuestOSInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestOSInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup GuestDeviceType_lookup = {
    .array = (const char *const[]) {
        [GUEST_DEVICE_TYPE_PCI] = "pci",
    },
    .size = GUEST_DEVICE_TYPE__MAX
};

void qapi_free_GuestDeviceIdPCI(GuestDeviceIdPCI *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDeviceIdPCI(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_GuestDeviceId_base(q_obj_GuestDeviceId_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_GuestDeviceId_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDeviceId(GuestDeviceId *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDeviceId(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDeviceInfo(GuestDeviceInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDeviceInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDeviceInfoList(GuestDeviceInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDeviceInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_POSIX)
void qapi_free_GuestAuthorizedKeys(GuestAuthorizedKeys *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestAuthorizedKeys(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
void qapi_free_q_obj_guest_ssh_get_authorized_keys_arg(q_obj_guest_ssh_get_authorized_keys_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_ssh_get_authorized_keys_arg(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
void qapi_free_q_obj_guest_ssh_add_authorized_keys_arg(q_obj_guest_ssh_add_authorized_keys_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_ssh_add_authorized_keys_arg(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
void qapi_free_q_obj_guest_ssh_remove_authorized_keys_arg(q_obj_guest_ssh_remove_authorized_keys_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_guest_ssh_remove_authorized_keys_arg(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_POSIX) */

void qapi_free_GuestDiskStats(GuestDiskStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDiskStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDiskStatsInfo(GuestDiskStatsInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDiskStatsInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestDiskStatsInfoList(GuestDiskStatsInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestDiskStatsInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup GuestCpuStatsType_lookup = {
    .array = (const char *const[]) {
        [GUEST_CPU_STATS_TYPE_LINUX] = "linux",
    },
    .size = GUEST_CPU_STATS_TYPE__MAX
};

void qapi_free_GuestLinuxCpuStats(GuestLinuxCpuStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestLinuxCpuStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_GuestCpuStats_base(q_obj_GuestCpuStats_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_GuestCpuStats_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestCpuStats(GuestCpuStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestCpuStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuestCpuStatsList(GuestCpuStatsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuestCpuStatsList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qga_qapi_types_c;
