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

#ifndef QGA_QAPI_VISIT_H
#define QGA_QAPI_VISIT_H

#include "qapi-builtin-visit.h"
#include "qga-qapi-types.h"


bool visit_type_q_obj_guest_sync_delimited_arg_members(Visitor *v, q_obj_guest_sync_delimited_arg *obj, Error **errp);

bool visit_type_q_obj_guest_sync_delimited_arg(Visitor *v, const char *name,
                 q_obj_guest_sync_delimited_arg **obj, Error **errp);

bool visit_type_q_obj_guest_sync_arg_members(Visitor *v, q_obj_guest_sync_arg *obj, Error **errp);

bool visit_type_q_obj_guest_sync_arg(Visitor *v, const char *name,
                 q_obj_guest_sync_arg **obj, Error **errp);

bool visit_type_q_obj_guest_set_time_arg_members(Visitor *v, q_obj_guest_set_time_arg *obj, Error **errp);

bool visit_type_q_obj_guest_set_time_arg(Visitor *v, const char *name,
                 q_obj_guest_set_time_arg **obj, Error **errp);

bool visit_type_GuestAgentCommandInfo_members(Visitor *v, GuestAgentCommandInfo *obj, Error **errp);

bool visit_type_GuestAgentCommandInfo(Visitor *v, const char *name,
                 GuestAgentCommandInfo **obj, Error **errp);

bool visit_type_GuestAgentCommandInfoList(Visitor *v, const char *name,
                 GuestAgentCommandInfoList **obj, Error **errp);

bool visit_type_GuestAgentInfo_members(Visitor *v, GuestAgentInfo *obj, Error **errp);

bool visit_type_GuestAgentInfo(Visitor *v, const char *name,
                 GuestAgentInfo **obj, Error **errp);

bool visit_type_q_obj_guest_shutdown_arg_members(Visitor *v, q_obj_guest_shutdown_arg *obj, Error **errp);

bool visit_type_q_obj_guest_shutdown_arg(Visitor *v, const char *name,
                 q_obj_guest_shutdown_arg **obj, Error **errp);

bool visit_type_q_obj_guest_file_open_arg_members(Visitor *v, q_obj_guest_file_open_arg *obj, Error **errp);

bool visit_type_q_obj_guest_file_open_arg(Visitor *v, const char *name,
                 q_obj_guest_file_open_arg **obj, Error **errp);

bool visit_type_q_obj_guest_file_close_arg_members(Visitor *v, q_obj_guest_file_close_arg *obj, Error **errp);

bool visit_type_q_obj_guest_file_close_arg(Visitor *v, const char *name,
                 q_obj_guest_file_close_arg **obj, Error **errp);

bool visit_type_GuestFileRead_members(Visitor *v, GuestFileRead *obj, Error **errp);

bool visit_type_GuestFileRead(Visitor *v, const char *name,
                 GuestFileRead **obj, Error **errp);

bool visit_type_q_obj_guest_file_read_arg_members(Visitor *v, q_obj_guest_file_read_arg *obj, Error **errp);

bool visit_type_q_obj_guest_file_read_arg(Visitor *v, const char *name,
                 q_obj_guest_file_read_arg **obj, Error **errp);

bool visit_type_GuestFileWrite_members(Visitor *v, GuestFileWrite *obj, Error **errp);

bool visit_type_GuestFileWrite(Visitor *v, const char *name,
                 GuestFileWrite **obj, Error **errp);

bool visit_type_q_obj_guest_file_write_arg_members(Visitor *v, q_obj_guest_file_write_arg *obj, Error **errp);

bool visit_type_q_obj_guest_file_write_arg(Visitor *v, const char *name,
                 q_obj_guest_file_write_arg **obj, Error **errp);

bool visit_type_GuestFileSeek_members(Visitor *v, GuestFileSeek *obj, Error **errp);

bool visit_type_GuestFileSeek(Visitor *v, const char *name,
                 GuestFileSeek **obj, Error **errp);

bool visit_type_QGASeek(Visitor *v, const char *name,
                 QGASeek *obj, Error **errp);

bool visit_type_GuestFileWhence(Visitor *v, const char *name,
                 GuestFileWhence **obj, Error **errp);

bool visit_type_q_obj_guest_file_seek_arg_members(Visitor *v, q_obj_guest_file_seek_arg *obj, Error **errp);

bool visit_type_q_obj_guest_file_seek_arg(Visitor *v, const char *name,
                 q_obj_guest_file_seek_arg **obj, Error **errp);

bool visit_type_q_obj_guest_file_flush_arg_members(Visitor *v, q_obj_guest_file_flush_arg *obj, Error **errp);

bool visit_type_q_obj_guest_file_flush_arg(Visitor *v, const char *name,
                 q_obj_guest_file_flush_arg **obj, Error **errp);

bool visit_type_GuestFsfreezeStatus(Visitor *v, const char *name,
                 GuestFsfreezeStatus *obj, Error **errp);

bool visit_type_q_obj_guest_fsfreeze_freeze_list_arg_members(Visitor *v, q_obj_guest_fsfreeze_freeze_list_arg *obj, Error **errp);

bool visit_type_q_obj_guest_fsfreeze_freeze_list_arg(Visitor *v, const char *name,
                 q_obj_guest_fsfreeze_freeze_list_arg **obj, Error **errp);

bool visit_type_GuestFilesystemTrimResult_members(Visitor *v, GuestFilesystemTrimResult *obj, Error **errp);

bool visit_type_GuestFilesystemTrimResult(Visitor *v, const char *name,
                 GuestFilesystemTrimResult **obj, Error **errp);

bool visit_type_GuestFilesystemTrimResultList(Visitor *v, const char *name,
                 GuestFilesystemTrimResultList **obj, Error **errp);

bool visit_type_GuestFilesystemTrimResponse_members(Visitor *v, GuestFilesystemTrimResponse *obj, Error **errp);

bool visit_type_GuestFilesystemTrimResponse(Visitor *v, const char *name,
                 GuestFilesystemTrimResponse **obj, Error **errp);

bool visit_type_q_obj_guest_fstrim_arg_members(Visitor *v, q_obj_guest_fstrim_arg *obj, Error **errp);

bool visit_type_q_obj_guest_fstrim_arg(Visitor *v, const char *name,
                 q_obj_guest_fstrim_arg **obj, Error **errp);

bool visit_type_GuestIpAddressType(Visitor *v, const char *name,
                 GuestIpAddressType *obj, Error **errp);

bool visit_type_GuestIpAddress_members(Visitor *v, GuestIpAddress *obj, Error **errp);

bool visit_type_GuestIpAddress(Visitor *v, const char *name,
                 GuestIpAddress **obj, Error **errp);

bool visit_type_GuestNetworkInterfaceStat_members(Visitor *v, GuestNetworkInterfaceStat *obj, Error **errp);

bool visit_type_GuestNetworkInterfaceStat(Visitor *v, const char *name,
                 GuestNetworkInterfaceStat **obj, Error **errp);

bool visit_type_GuestIpAddressList(Visitor *v, const char *name,
                 GuestIpAddressList **obj, Error **errp);

bool visit_type_GuestNetworkInterface_members(Visitor *v, GuestNetworkInterface *obj, Error **errp);

bool visit_type_GuestNetworkInterface(Visitor *v, const char *name,
                 GuestNetworkInterface **obj, Error **errp);

bool visit_type_GuestNetworkInterfaceList(Visitor *v, const char *name,
                 GuestNetworkInterfaceList **obj, Error **errp);

bool visit_type_GuestLogicalProcessor_members(Visitor *v, GuestLogicalProcessor *obj, Error **errp);

bool visit_type_GuestLogicalProcessor(Visitor *v, const char *name,
                 GuestLogicalProcessor **obj, Error **errp);

bool visit_type_GuestLogicalProcessorList(Visitor *v, const char *name,
                 GuestLogicalProcessorList **obj, Error **errp);

bool visit_type_q_obj_guest_set_vcpus_arg_members(Visitor *v, q_obj_guest_set_vcpus_arg *obj, Error **errp);

bool visit_type_q_obj_guest_set_vcpus_arg(Visitor *v, const char *name,
                 q_obj_guest_set_vcpus_arg **obj, Error **errp);

bool visit_type_GuestDiskBusType(Visitor *v, const char *name,
                 GuestDiskBusType *obj, Error **errp);

bool visit_type_GuestPCIAddress_members(Visitor *v, GuestPCIAddress *obj, Error **errp);

bool visit_type_GuestPCIAddress(Visitor *v, const char *name,
                 GuestPCIAddress **obj, Error **errp);

bool visit_type_GuestCCWAddress_members(Visitor *v, GuestCCWAddress *obj, Error **errp);

bool visit_type_GuestCCWAddress(Visitor *v, const char *name,
                 GuestCCWAddress **obj, Error **errp);

bool visit_type_GuestDiskAddress_members(Visitor *v, GuestDiskAddress *obj, Error **errp);

bool visit_type_GuestDiskAddress(Visitor *v, const char *name,
                 GuestDiskAddress **obj, Error **errp);

bool visit_type_GuestNVMeSmart_members(Visitor *v, GuestNVMeSmart *obj, Error **errp);

bool visit_type_GuestNVMeSmart(Visitor *v, const char *name,
                 GuestNVMeSmart **obj, Error **errp);

bool visit_type_q_obj_GuestDiskSmart_base_members(Visitor *v, q_obj_GuestDiskSmart_base *obj, Error **errp);

bool visit_type_q_obj_GuestDiskSmart_base(Visitor *v, const char *name,
                 q_obj_GuestDiskSmart_base **obj, Error **errp);

bool visit_type_GuestDiskSmart_members(Visitor *v, GuestDiskSmart *obj, Error **errp);

bool visit_type_GuestDiskSmart(Visitor *v, const char *name,
                 GuestDiskSmart **obj, Error **errp);

bool visit_type_GuestDiskInfo_members(Visitor *v, GuestDiskInfo *obj, Error **errp);

bool visit_type_GuestDiskInfo(Visitor *v, const char *name,
                 GuestDiskInfo **obj, Error **errp);

bool visit_type_GuestDiskInfoList(Visitor *v, const char *name,
                 GuestDiskInfoList **obj, Error **errp);

bool visit_type_GuestDiskAddressList(Visitor *v, const char *name,
                 GuestDiskAddressList **obj, Error **errp);

bool visit_type_GuestFilesystemInfo_members(Visitor *v, GuestFilesystemInfo *obj, Error **errp);

bool visit_type_GuestFilesystemInfo(Visitor *v, const char *name,
                 GuestFilesystemInfo **obj, Error **errp);

bool visit_type_GuestFilesystemInfoList(Visitor *v, const char *name,
                 GuestFilesystemInfoList **obj, Error **errp);

bool visit_type_q_obj_guest_set_user_password_arg_members(Visitor *v, q_obj_guest_set_user_password_arg *obj, Error **errp);

bool visit_type_q_obj_guest_set_user_password_arg(Visitor *v, const char *name,
                 q_obj_guest_set_user_password_arg **obj, Error **errp);

bool visit_type_GuestMemoryBlock_members(Visitor *v, GuestMemoryBlock *obj, Error **errp);

bool visit_type_GuestMemoryBlock(Visitor *v, const char *name,
                 GuestMemoryBlock **obj, Error **errp);

bool visit_type_GuestMemoryBlockList(Visitor *v, const char *name,
                 GuestMemoryBlockList **obj, Error **errp);

bool visit_type_GuestMemoryBlockResponseType(Visitor *v, const char *name,
                 GuestMemoryBlockResponseType *obj, Error **errp);

bool visit_type_GuestMemoryBlockResponse_members(Visitor *v, GuestMemoryBlockResponse *obj, Error **errp);

bool visit_type_GuestMemoryBlockResponse(Visitor *v, const char *name,
                 GuestMemoryBlockResponse **obj, Error **errp);

bool visit_type_q_obj_guest_set_memory_blocks_arg_members(Visitor *v, q_obj_guest_set_memory_blocks_arg *obj, Error **errp);

bool visit_type_q_obj_guest_set_memory_blocks_arg(Visitor *v, const char *name,
                 q_obj_guest_set_memory_blocks_arg **obj, Error **errp);

bool visit_type_GuestMemoryBlockResponseList(Visitor *v, const char *name,
                 GuestMemoryBlockResponseList **obj, Error **errp);

bool visit_type_GuestMemoryBlockInfo_members(Visitor *v, GuestMemoryBlockInfo *obj, Error **errp);

bool visit_type_GuestMemoryBlockInfo(Visitor *v, const char *name,
                 GuestMemoryBlockInfo **obj, Error **errp);

bool visit_type_GuestExecStatus_members(Visitor *v, GuestExecStatus *obj, Error **errp);

bool visit_type_GuestExecStatus(Visitor *v, const char *name,
                 GuestExecStatus **obj, Error **errp);

bool visit_type_q_obj_guest_exec_status_arg_members(Visitor *v, q_obj_guest_exec_status_arg *obj, Error **errp);

bool visit_type_q_obj_guest_exec_status_arg(Visitor *v, const char *name,
                 q_obj_guest_exec_status_arg **obj, Error **errp);

bool visit_type_GuestExec_members(Visitor *v, GuestExec *obj, Error **errp);

bool visit_type_GuestExec(Visitor *v, const char *name,
                 GuestExec **obj, Error **errp);

bool visit_type_q_obj_guest_exec_arg_members(Visitor *v, q_obj_guest_exec_arg *obj, Error **errp);

bool visit_type_q_obj_guest_exec_arg(Visitor *v, const char *name,
                 q_obj_guest_exec_arg **obj, Error **errp);

bool visit_type_GuestHostName_members(Visitor *v, GuestHostName *obj, Error **errp);

bool visit_type_GuestHostName(Visitor *v, const char *name,
                 GuestHostName **obj, Error **errp);

bool visit_type_GuestUser_members(Visitor *v, GuestUser *obj, Error **errp);

bool visit_type_GuestUser(Visitor *v, const char *name,
                 GuestUser **obj, Error **errp);

bool visit_type_GuestUserList(Visitor *v, const char *name,
                 GuestUserList **obj, Error **errp);

bool visit_type_GuestTimezone_members(Visitor *v, GuestTimezone *obj, Error **errp);

bool visit_type_GuestTimezone(Visitor *v, const char *name,
                 GuestTimezone **obj, Error **errp);

bool visit_type_GuestOSInfo_members(Visitor *v, GuestOSInfo *obj, Error **errp);

bool visit_type_GuestOSInfo(Visitor *v, const char *name,
                 GuestOSInfo **obj, Error **errp);

bool visit_type_GuestDeviceType(Visitor *v, const char *name,
                 GuestDeviceType *obj, Error **errp);

bool visit_type_GuestDeviceIdPCI_members(Visitor *v, GuestDeviceIdPCI *obj, Error **errp);

bool visit_type_GuestDeviceIdPCI(Visitor *v, const char *name,
                 GuestDeviceIdPCI **obj, Error **errp);

bool visit_type_q_obj_GuestDeviceId_base_members(Visitor *v, q_obj_GuestDeviceId_base *obj, Error **errp);

bool visit_type_q_obj_GuestDeviceId_base(Visitor *v, const char *name,
                 q_obj_GuestDeviceId_base **obj, Error **errp);

bool visit_type_GuestDeviceId_members(Visitor *v, GuestDeviceId *obj, Error **errp);

bool visit_type_GuestDeviceId(Visitor *v, const char *name,
                 GuestDeviceId **obj, Error **errp);

bool visit_type_GuestDeviceInfo_members(Visitor *v, GuestDeviceInfo *obj, Error **errp);

bool visit_type_GuestDeviceInfo(Visitor *v, const char *name,
                 GuestDeviceInfo **obj, Error **errp);

bool visit_type_GuestDeviceInfoList(Visitor *v, const char *name,
                 GuestDeviceInfoList **obj, Error **errp);

#if defined(CONFIG_POSIX)
bool visit_type_GuestAuthorizedKeys_members(Visitor *v, GuestAuthorizedKeys *obj, Error **errp);

bool visit_type_GuestAuthorizedKeys(Visitor *v, const char *name,
                 GuestAuthorizedKeys **obj, Error **errp);
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
bool visit_type_q_obj_guest_ssh_get_authorized_keys_arg_members(Visitor *v, q_obj_guest_ssh_get_authorized_keys_arg *obj, Error **errp);

bool visit_type_q_obj_guest_ssh_get_authorized_keys_arg(Visitor *v, const char *name,
                 q_obj_guest_ssh_get_authorized_keys_arg **obj, Error **errp);
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
bool visit_type_q_obj_guest_ssh_add_authorized_keys_arg_members(Visitor *v, q_obj_guest_ssh_add_authorized_keys_arg *obj, Error **errp);

bool visit_type_q_obj_guest_ssh_add_authorized_keys_arg(Visitor *v, const char *name,
                 q_obj_guest_ssh_add_authorized_keys_arg **obj, Error **errp);
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
bool visit_type_q_obj_guest_ssh_remove_authorized_keys_arg_members(Visitor *v, q_obj_guest_ssh_remove_authorized_keys_arg *obj, Error **errp);

bool visit_type_q_obj_guest_ssh_remove_authorized_keys_arg(Visitor *v, const char *name,
                 q_obj_guest_ssh_remove_authorized_keys_arg **obj, Error **errp);
#endif /* defined(CONFIG_POSIX) */

bool visit_type_GuestDiskStats_members(Visitor *v, GuestDiskStats *obj, Error **errp);

bool visit_type_GuestDiskStats(Visitor *v, const char *name,
                 GuestDiskStats **obj, Error **errp);

bool visit_type_GuestDiskStatsInfo_members(Visitor *v, GuestDiskStatsInfo *obj, Error **errp);

bool visit_type_GuestDiskStatsInfo(Visitor *v, const char *name,
                 GuestDiskStatsInfo **obj, Error **errp);

bool visit_type_GuestDiskStatsInfoList(Visitor *v, const char *name,
                 GuestDiskStatsInfoList **obj, Error **errp);

bool visit_type_GuestCpuStatsType(Visitor *v, const char *name,
                 GuestCpuStatsType *obj, Error **errp);

bool visit_type_GuestLinuxCpuStats_members(Visitor *v, GuestLinuxCpuStats *obj, Error **errp);

bool visit_type_GuestLinuxCpuStats(Visitor *v, const char *name,
                 GuestLinuxCpuStats **obj, Error **errp);

bool visit_type_q_obj_GuestCpuStats_base_members(Visitor *v, q_obj_GuestCpuStats_base *obj, Error **errp);

bool visit_type_q_obj_GuestCpuStats_base(Visitor *v, const char *name,
                 q_obj_GuestCpuStats_base **obj, Error **errp);

bool visit_type_GuestCpuStats_members(Visitor *v, GuestCpuStats *obj, Error **errp);

bool visit_type_GuestCpuStats(Visitor *v, const char *name,
                 GuestCpuStats **obj, Error **errp);

bool visit_type_GuestCpuStatsList(Visitor *v, const char *name,
                 GuestCpuStatsList **obj, Error **errp);

#endif /* QGA_QAPI_VISIT_H */
