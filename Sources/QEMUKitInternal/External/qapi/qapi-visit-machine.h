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

#ifndef QAPI_VISIT_MACHINE_H
#define QAPI_VISIT_MACHINE_H

#include "qapi-builtin-visit.h"
#include "qapi-types-machine.h"

#include "qapi-visit-common.h"

bool visit_type_SysEmuTarget(Visitor *v, const char *name,
                 SysEmuTarget *obj, Error **errp);

bool visit_type_CpuS390State(Visitor *v, const char *name,
                 CpuS390State *obj, Error **errp);

bool visit_type_CpuInfoS390_members(Visitor *v, CpuInfoS390 *obj, Error **errp);

bool visit_type_CpuInfoS390(Visitor *v, const char *name,
                 CpuInfoS390 **obj, Error **errp);

bool visit_type_q_obj_CpuInfoFast_base_members(Visitor *v, q_obj_CpuInfoFast_base *obj, Error **errp);

bool visit_type_q_obj_CpuInfoFast_base(Visitor *v, const char *name,
                 q_obj_CpuInfoFast_base **obj, Error **errp);

bool visit_type_CpuInfoFast_members(Visitor *v, CpuInfoFast *obj, Error **errp);

bool visit_type_CpuInfoFast(Visitor *v, const char *name,
                 CpuInfoFast **obj, Error **errp);

bool visit_type_CpuInfoFastList(Visitor *v, const char *name,
                 CpuInfoFastList **obj, Error **errp);

bool visit_type_MachineInfo_members(Visitor *v, MachineInfo *obj, Error **errp);

bool visit_type_MachineInfo(Visitor *v, const char *name,
                 MachineInfo **obj, Error **errp);

bool visit_type_MachineInfoList(Visitor *v, const char *name,
                 MachineInfoList **obj, Error **errp);

bool visit_type_CurrentMachineParams_members(Visitor *v, CurrentMachineParams *obj, Error **errp);

bool visit_type_CurrentMachineParams(Visitor *v, const char *name,
                 CurrentMachineParams **obj, Error **errp);

bool visit_type_TargetInfo_members(Visitor *v, TargetInfo *obj, Error **errp);

bool visit_type_TargetInfo(Visitor *v, const char *name,
                 TargetInfo **obj, Error **errp);

bool visit_type_UuidInfo_members(Visitor *v, UuidInfo *obj, Error **errp);

bool visit_type_UuidInfo(Visitor *v, const char *name,
                 UuidInfo **obj, Error **errp);

bool visit_type_GuidInfo_members(Visitor *v, GuidInfo *obj, Error **errp);

bool visit_type_GuidInfo(Visitor *v, const char *name,
                 GuidInfo **obj, Error **errp);

bool visit_type_LostTickPolicy(Visitor *v, const char *name,
                 LostTickPolicy *obj, Error **errp);

bool visit_type_KvmInfo_members(Visitor *v, KvmInfo *obj, Error **errp);

bool visit_type_KvmInfo(Visitor *v, const char *name,
                 KvmInfo **obj, Error **errp);

bool visit_type_NumaOptionsType(Visitor *v, const char *name,
                 NumaOptionsType *obj, Error **errp);

bool visit_type_q_obj_NumaOptions_base_members(Visitor *v, q_obj_NumaOptions_base *obj, Error **errp);

bool visit_type_q_obj_NumaOptions_base(Visitor *v, const char *name,
                 q_obj_NumaOptions_base **obj, Error **errp);

bool visit_type_NumaOptions_members(Visitor *v, NumaOptions *obj, Error **errp);

bool visit_type_NumaOptions(Visitor *v, const char *name,
                 NumaOptions **obj, Error **errp);

bool visit_type_NumaNodeOptions_members(Visitor *v, NumaNodeOptions *obj, Error **errp);

bool visit_type_NumaNodeOptions(Visitor *v, const char *name,
                 NumaNodeOptions **obj, Error **errp);

bool visit_type_NumaDistOptions_members(Visitor *v, NumaDistOptions *obj, Error **errp);

bool visit_type_NumaDistOptions(Visitor *v, const char *name,
                 NumaDistOptions **obj, Error **errp);

bool visit_type_CXLFixedMemoryWindowOptions_members(Visitor *v, CXLFixedMemoryWindowOptions *obj, Error **errp);

bool visit_type_CXLFixedMemoryWindowOptions(Visitor *v, const char *name,
                 CXLFixedMemoryWindowOptions **obj, Error **errp);

bool visit_type_CXLFixedMemoryWindowOptionsList(Visitor *v, const char *name,
                 CXLFixedMemoryWindowOptionsList **obj, Error **errp);

bool visit_type_CXLFMWProperties_members(Visitor *v, CXLFMWProperties *obj, Error **errp);

bool visit_type_CXLFMWProperties(Visitor *v, const char *name,
                 CXLFMWProperties **obj, Error **errp);

bool visit_type_X86CPURegister32(Visitor *v, const char *name,
                 X86CPURegister32 *obj, Error **errp);

bool visit_type_X86CPUFeatureWordInfo_members(Visitor *v, X86CPUFeatureWordInfo *obj, Error **errp);

bool visit_type_X86CPUFeatureWordInfo(Visitor *v, const char *name,
                 X86CPUFeatureWordInfo **obj, Error **errp);

bool visit_type_X86CPUFeatureWordInfoList(Visitor *v, const char *name,
                 X86CPUFeatureWordInfoList **obj, Error **errp);

bool visit_type_DummyForceArrays_members(Visitor *v, DummyForceArrays *obj, Error **errp);

bool visit_type_DummyForceArrays(Visitor *v, const char *name,
                 DummyForceArrays **obj, Error **errp);

bool visit_type_NumaCpuOptions_members(Visitor *v, NumaCpuOptions *obj, Error **errp);

bool visit_type_NumaCpuOptions(Visitor *v, const char *name,
                 NumaCpuOptions **obj, Error **errp);

bool visit_type_HmatLBMemoryHierarchy(Visitor *v, const char *name,
                 HmatLBMemoryHierarchy *obj, Error **errp);

bool visit_type_HmatLBDataType(Visitor *v, const char *name,
                 HmatLBDataType *obj, Error **errp);

bool visit_type_NumaHmatLBOptions_members(Visitor *v, NumaHmatLBOptions *obj, Error **errp);

bool visit_type_NumaHmatLBOptions(Visitor *v, const char *name,
                 NumaHmatLBOptions **obj, Error **errp);

bool visit_type_HmatCacheAssociativity(Visitor *v, const char *name,
                 HmatCacheAssociativity *obj, Error **errp);

bool visit_type_HmatCacheWritePolicy(Visitor *v, const char *name,
                 HmatCacheWritePolicy *obj, Error **errp);

bool visit_type_NumaHmatCacheOptions_members(Visitor *v, NumaHmatCacheOptions *obj, Error **errp);

bool visit_type_NumaHmatCacheOptions(Visitor *v, const char *name,
                 NumaHmatCacheOptions **obj, Error **errp);

bool visit_type_q_obj_memsave_arg_members(Visitor *v, q_obj_memsave_arg *obj, Error **errp);

bool visit_type_q_obj_memsave_arg(Visitor *v, const char *name,
                 q_obj_memsave_arg **obj, Error **errp);

bool visit_type_q_obj_pmemsave_arg_members(Visitor *v, q_obj_pmemsave_arg *obj, Error **errp);

bool visit_type_q_obj_pmemsave_arg(Visitor *v, const char *name,
                 q_obj_pmemsave_arg **obj, Error **errp);

bool visit_type_Memdev_members(Visitor *v, Memdev *obj, Error **errp);

bool visit_type_Memdev(Visitor *v, const char *name,
                 Memdev **obj, Error **errp);

bool visit_type_MemdevList(Visitor *v, const char *name,
                 MemdevList **obj, Error **errp);

bool visit_type_CpuInstanceProperties_members(Visitor *v, CpuInstanceProperties *obj, Error **errp);

bool visit_type_CpuInstanceProperties(Visitor *v, const char *name,
                 CpuInstanceProperties **obj, Error **errp);

bool visit_type_HotpluggableCPU_members(Visitor *v, HotpluggableCPU *obj, Error **errp);

bool visit_type_HotpluggableCPU(Visitor *v, const char *name,
                 HotpluggableCPU **obj, Error **errp);

bool visit_type_HotpluggableCPUList(Visitor *v, const char *name,
                 HotpluggableCPUList **obj, Error **errp);

bool visit_type_q_obj_balloon_arg_members(Visitor *v, q_obj_balloon_arg *obj, Error **errp);

bool visit_type_q_obj_balloon_arg(Visitor *v, const char *name,
                 q_obj_balloon_arg **obj, Error **errp);

bool visit_type_BalloonInfo_members(Visitor *v, BalloonInfo *obj, Error **errp);

bool visit_type_BalloonInfo(Visitor *v, const char *name,
                 BalloonInfo **obj, Error **errp);

bool visit_type_q_obj_BALLOON_CHANGE_arg_members(Visitor *v, q_obj_BALLOON_CHANGE_arg *obj, Error **errp);

bool visit_type_q_obj_BALLOON_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_BALLOON_CHANGE_arg **obj, Error **errp);

bool visit_type_MemoryInfo_members(Visitor *v, MemoryInfo *obj, Error **errp);

bool visit_type_MemoryInfo(Visitor *v, const char *name,
                 MemoryInfo **obj, Error **errp);

bool visit_type_PCDIMMDeviceInfo_members(Visitor *v, PCDIMMDeviceInfo *obj, Error **errp);

bool visit_type_PCDIMMDeviceInfo(Visitor *v, const char *name,
                 PCDIMMDeviceInfo **obj, Error **errp);

bool visit_type_VirtioPMEMDeviceInfo_members(Visitor *v, VirtioPMEMDeviceInfo *obj, Error **errp);

bool visit_type_VirtioPMEMDeviceInfo(Visitor *v, const char *name,
                 VirtioPMEMDeviceInfo **obj, Error **errp);

bool visit_type_VirtioMEMDeviceInfo_members(Visitor *v, VirtioMEMDeviceInfo *obj, Error **errp);

bool visit_type_VirtioMEMDeviceInfo(Visitor *v, const char *name,
                 VirtioMEMDeviceInfo **obj, Error **errp);

bool visit_type_SgxEPCDeviceInfo_members(Visitor *v, SgxEPCDeviceInfo *obj, Error **errp);

bool visit_type_SgxEPCDeviceInfo(Visitor *v, const char *name,
                 SgxEPCDeviceInfo **obj, Error **errp);

bool visit_type_MemoryDeviceInfoKind(Visitor *v, const char *name,
                 MemoryDeviceInfoKind *obj, Error **errp);

bool visit_type_PCDIMMDeviceInfoWrapper_members(Visitor *v, PCDIMMDeviceInfoWrapper *obj, Error **errp);

bool visit_type_PCDIMMDeviceInfoWrapper(Visitor *v, const char *name,
                 PCDIMMDeviceInfoWrapper **obj, Error **errp);

bool visit_type_VirtioPMEMDeviceInfoWrapper_members(Visitor *v, VirtioPMEMDeviceInfoWrapper *obj, Error **errp);

bool visit_type_VirtioPMEMDeviceInfoWrapper(Visitor *v, const char *name,
                 VirtioPMEMDeviceInfoWrapper **obj, Error **errp);

bool visit_type_VirtioMEMDeviceInfoWrapper_members(Visitor *v, VirtioMEMDeviceInfoWrapper *obj, Error **errp);

bool visit_type_VirtioMEMDeviceInfoWrapper(Visitor *v, const char *name,
                 VirtioMEMDeviceInfoWrapper **obj, Error **errp);

bool visit_type_SgxEPCDeviceInfoWrapper_members(Visitor *v, SgxEPCDeviceInfoWrapper *obj, Error **errp);

bool visit_type_SgxEPCDeviceInfoWrapper(Visitor *v, const char *name,
                 SgxEPCDeviceInfoWrapper **obj, Error **errp);

bool visit_type_q_obj_MemoryDeviceInfo_base_members(Visitor *v, q_obj_MemoryDeviceInfo_base *obj, Error **errp);

bool visit_type_q_obj_MemoryDeviceInfo_base(Visitor *v, const char *name,
                 q_obj_MemoryDeviceInfo_base **obj, Error **errp);

bool visit_type_MemoryDeviceInfo_members(Visitor *v, MemoryDeviceInfo *obj, Error **errp);

bool visit_type_MemoryDeviceInfo(Visitor *v, const char *name,
                 MemoryDeviceInfo **obj, Error **errp);

bool visit_type_SgxEPC_members(Visitor *v, SgxEPC *obj, Error **errp);

bool visit_type_SgxEPC(Visitor *v, const char *name,
                 SgxEPC **obj, Error **errp);

bool visit_type_SgxEPCList(Visitor *v, const char *name,
                 SgxEPCList **obj, Error **errp);

bool visit_type_SgxEPCProperties_members(Visitor *v, SgxEPCProperties *obj, Error **errp);

bool visit_type_SgxEPCProperties(Visitor *v, const char *name,
                 SgxEPCProperties **obj, Error **errp);

bool visit_type_MemoryDeviceInfoList(Visitor *v, const char *name,
                 MemoryDeviceInfoList **obj, Error **errp);

bool visit_type_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg_members(Visitor *v, q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg *obj, Error **errp);

bool visit_type_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg **obj, Error **errp);

bool visit_type_q_obj_MEM_UNPLUG_ERROR_arg_members(Visitor *v, q_obj_MEM_UNPLUG_ERROR_arg *obj, Error **errp);

bool visit_type_q_obj_MEM_UNPLUG_ERROR_arg(Visitor *v, const char *name,
                 q_obj_MEM_UNPLUG_ERROR_arg **obj, Error **errp);

bool visit_type_BootConfiguration_members(Visitor *v, BootConfiguration *obj, Error **errp);

bool visit_type_BootConfiguration(Visitor *v, const char *name,
                 BootConfiguration **obj, Error **errp);

bool visit_type_SMPConfiguration_members(Visitor *v, SMPConfiguration *obj, Error **errp);

bool visit_type_SMPConfiguration(Visitor *v, const char *name,
                 SMPConfiguration **obj, Error **errp);

bool visit_type_SmbiosEntryPointType(Visitor *v, const char *name,
                 SmbiosEntryPointType *obj, Error **errp);

bool visit_type_MemorySizeConfiguration_members(Visitor *v, MemorySizeConfiguration *obj, Error **errp);

bool visit_type_MemorySizeConfiguration(Visitor *v, const char *name,
                 MemorySizeConfiguration **obj, Error **errp);

#if defined(CONFIG_FDT)
bool visit_type_q_obj_dumpdtb_arg_members(Visitor *v, q_obj_dumpdtb_arg *obj, Error **errp);

bool visit_type_q_obj_dumpdtb_arg(Visitor *v, const char *name,
                 q_obj_dumpdtb_arg **obj, Error **errp);
#endif /* defined(CONFIG_FDT) */

#endif /* QAPI_VISIT_MACHINE_H */
