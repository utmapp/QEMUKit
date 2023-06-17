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
#include "qapi-types-machine.h"
#include "qapi-visit-machine.h"

const QEnumLookup SysEmuTarget_lookup = {
    .array = (const char *const[]) {
        [SYS_EMU_TARGET_AARCH64] = "aarch64",
        [SYS_EMU_TARGET_ALPHA] = "alpha",
        [SYS_EMU_TARGET_ARM] = "arm",
        [SYS_EMU_TARGET_AVR] = "avr",
        [SYS_EMU_TARGET_CRIS] = "cris",
        [SYS_EMU_TARGET_HPPA] = "hppa",
        [SYS_EMU_TARGET_I386] = "i386",
        [SYS_EMU_TARGET_LOONGARCH64] = "loongarch64",
        [SYS_EMU_TARGET_M68K] = "m68k",
        [SYS_EMU_TARGET_MICROBLAZE] = "microblaze",
        [SYS_EMU_TARGET_MICROBLAZEEL] = "microblazeel",
        [SYS_EMU_TARGET_MIPS] = "mips",
        [SYS_EMU_TARGET_MIPS64] = "mips64",
        [SYS_EMU_TARGET_MIPS64EL] = "mips64el",
        [SYS_EMU_TARGET_MIPSEL] = "mipsel",
        [SYS_EMU_TARGET_NIOS2] = "nios2",
        [SYS_EMU_TARGET_OR1K] = "or1k",
        [SYS_EMU_TARGET_PPC] = "ppc",
        [SYS_EMU_TARGET_PPC64] = "ppc64",
        [SYS_EMU_TARGET_RISCV32] = "riscv32",
        [SYS_EMU_TARGET_RISCV64] = "riscv64",
        [SYS_EMU_TARGET_RX] = "rx",
        [SYS_EMU_TARGET_S390X] = "s390x",
        [SYS_EMU_TARGET_SH4] = "sh4",
        [SYS_EMU_TARGET_SH4EB] = "sh4eb",
        [SYS_EMU_TARGET_SPARC] = "sparc",
        [SYS_EMU_TARGET_SPARC64] = "sparc64",
        [SYS_EMU_TARGET_TRICORE] = "tricore",
        [SYS_EMU_TARGET_X86_64] = "x86_64",
        [SYS_EMU_TARGET_XTENSA] = "xtensa",
        [SYS_EMU_TARGET_XTENSAEB] = "xtensaeb",
    },
    .size = SYS_EMU_TARGET__MAX
};

const QEnumLookup CpuS390State_lookup = {
    .array = (const char *const[]) {
        [S390_CPU_STATE_UNINITIALIZED] = "uninitialized",
        [S390_CPU_STATE_STOPPED] = "stopped",
        [S390_CPU_STATE_CHECK_STOP] = "check-stop",
        [S390_CPU_STATE_OPERATING] = "operating",
        [S390_CPU_STATE_LOAD] = "load",
    },
    .size = S390_CPU_STATE__MAX
};

void qapi_free_CpuInfoS390(CpuInfoS390 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoS390(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_CpuInfoFast_base(q_obj_CpuInfoFast_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_CpuInfoFast_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoFast(CpuInfoFast *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoFast(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoFastList(CpuInfoFastList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoFastList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MachineInfo(MachineInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MachineInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MachineInfoList(MachineInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MachineInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CurrentMachineParams(CurrentMachineParams *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CurrentMachineParams(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_TargetInfo(TargetInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TargetInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_UuidInfo(UuidInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_UuidInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_GuidInfo(GuidInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GuidInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup LostTickPolicy_lookup = {
    .array = (const char *const[]) {
        [LOST_TICK_POLICY_DISCARD] = "discard",
        [LOST_TICK_POLICY_DELAY] = "delay",
        [LOST_TICK_POLICY_SLEW] = "slew",
    },
    .size = LOST_TICK_POLICY__MAX
};

void qapi_free_KvmInfo(KvmInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_KvmInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup NumaOptionsType_lookup = {
    .array = (const char *const[]) {
        [NUMA_OPTIONS_TYPE_NODE] = "node",
        [NUMA_OPTIONS_TYPE_DIST] = "dist",
        [NUMA_OPTIONS_TYPE_CPU] = "cpu",
        [NUMA_OPTIONS_TYPE_HMAT_LB] = "hmat-lb",
        [NUMA_OPTIONS_TYPE_HMAT_CACHE] = "hmat-cache",
    },
    .size = NUMA_OPTIONS_TYPE__MAX
};

void qapi_free_q_obj_NumaOptions_base(q_obj_NumaOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_NumaOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NumaOptions(NumaOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NumaNodeOptions(NumaNodeOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaNodeOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NumaDistOptions(NumaDistOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaDistOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CXLFixedMemoryWindowOptions(CXLFixedMemoryWindowOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CXLFixedMemoryWindowOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CXLFixedMemoryWindowOptionsList(CXLFixedMemoryWindowOptionsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CXLFixedMemoryWindowOptionsList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CXLFMWProperties(CXLFMWProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CXLFMWProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup X86CPURegister32_lookup = {
    .array = (const char *const[]) {
        [X86_CPU_REGISTER32_EAX] = "EAX",
        [X86_CPU_REGISTER32_EBX] = "EBX",
        [X86_CPU_REGISTER32_ECX] = "ECX",
        [X86_CPU_REGISTER32_EDX] = "EDX",
        [X86_CPU_REGISTER32_ESP] = "ESP",
        [X86_CPU_REGISTER32_EBP] = "EBP",
        [X86_CPU_REGISTER32_ESI] = "ESI",
        [X86_CPU_REGISTER32_EDI] = "EDI",
    },
    .size = X86_CPU_REGISTER32__MAX
};

void qapi_free_X86CPUFeatureWordInfo(X86CPUFeatureWordInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_X86CPUFeatureWordInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_X86CPUFeatureWordInfoList(X86CPUFeatureWordInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_X86CPUFeatureWordInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DummyForceArrays(DummyForceArrays *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DummyForceArrays(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NumaCpuOptions(NumaCpuOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaCpuOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup HmatLBMemoryHierarchy_lookup = {
    .array = (const char *const[]) {
        [HMATLB_MEMORY_HIERARCHY_MEMORY] = "memory",
        [HMATLB_MEMORY_HIERARCHY_FIRST_LEVEL] = "first-level",
        [HMATLB_MEMORY_HIERARCHY_SECOND_LEVEL] = "second-level",
        [HMATLB_MEMORY_HIERARCHY_THIRD_LEVEL] = "third-level",
    },
    .size = HMATLB_MEMORY_HIERARCHY__MAX
};

const QEnumLookup HmatLBDataType_lookup = {
    .array = (const char *const[]) {
        [HMATLB_DATA_TYPE_ACCESS_LATENCY] = "access-latency",
        [HMATLB_DATA_TYPE_READ_LATENCY] = "read-latency",
        [HMATLB_DATA_TYPE_WRITE_LATENCY] = "write-latency",
        [HMATLB_DATA_TYPE_ACCESS_BANDWIDTH] = "access-bandwidth",
        [HMATLB_DATA_TYPE_READ_BANDWIDTH] = "read-bandwidth",
        [HMATLB_DATA_TYPE_WRITE_BANDWIDTH] = "write-bandwidth",
    },
    .size = HMATLB_DATA_TYPE__MAX
};

void qapi_free_NumaHmatLBOptions(NumaHmatLBOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaHmatLBOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup HmatCacheAssociativity_lookup = {
    .array = (const char *const[]) {
        [HMAT_CACHE_ASSOCIATIVITY_NONE] = "none",
        [HMAT_CACHE_ASSOCIATIVITY_DIRECT] = "direct",
        [HMAT_CACHE_ASSOCIATIVITY_COMPLEX] = "complex",
    },
    .size = HMAT_CACHE_ASSOCIATIVITY__MAX
};

const QEnumLookup HmatCacheWritePolicy_lookup = {
    .array = (const char *const[]) {
        [HMAT_CACHE_WRITE_POLICY_NONE] = "none",
        [HMAT_CACHE_WRITE_POLICY_WRITE_BACK] = "write-back",
        [HMAT_CACHE_WRITE_POLICY_WRITE_THROUGH] = "write-through",
    },
    .size = HMAT_CACHE_WRITE_POLICY__MAX
};

void qapi_free_NumaHmatCacheOptions(NumaHmatCacheOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaHmatCacheOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_memsave_arg(q_obj_memsave_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_memsave_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_pmemsave_arg(q_obj_pmemsave_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_pmemsave_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_Memdev(Memdev *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Memdev(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemdevList(MemdevList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemdevList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInstanceProperties(CpuInstanceProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInstanceProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_HotpluggableCPU(HotpluggableCPU *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_HotpluggableCPU(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_HotpluggableCPUList(HotpluggableCPUList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_HotpluggableCPUList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_balloon_arg(q_obj_balloon_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_balloon_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BalloonInfo(BalloonInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BalloonInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BALLOON_CHANGE_arg(q_obj_BALLOON_CHANGE_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BALLOON_CHANGE_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemoryInfo(MemoryInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemoryInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PCDIMMDeviceInfo(PCDIMMDeviceInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PCDIMMDeviceInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioPMEMDeviceInfo(VirtioPMEMDeviceInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioPMEMDeviceInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioMEMDeviceInfo(VirtioMEMDeviceInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioMEMDeviceInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SgxEPCDeviceInfo(SgxEPCDeviceInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SgxEPCDeviceInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup MemoryDeviceInfoKind_lookup = {
    .array = (const char *const[]) {
        [MEMORY_DEVICE_INFO_KIND_DIMM] = "dimm",
        [MEMORY_DEVICE_INFO_KIND_NVDIMM] = "nvdimm",
        [MEMORY_DEVICE_INFO_KIND_VIRTIO_PMEM] = "virtio-pmem",
        [MEMORY_DEVICE_INFO_KIND_VIRTIO_MEM] = "virtio-mem",
        [MEMORY_DEVICE_INFO_KIND_SGX_EPC] = "sgx-epc",
    },
    .size = MEMORY_DEVICE_INFO_KIND__MAX
};

void qapi_free_PCDIMMDeviceInfoWrapper(PCDIMMDeviceInfoWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PCDIMMDeviceInfoWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioPMEMDeviceInfoWrapper(VirtioPMEMDeviceInfoWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioPMEMDeviceInfoWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VirtioMEMDeviceInfoWrapper(VirtioMEMDeviceInfoWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VirtioMEMDeviceInfoWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SgxEPCDeviceInfoWrapper(SgxEPCDeviceInfoWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SgxEPCDeviceInfoWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_MemoryDeviceInfo_base(q_obj_MemoryDeviceInfo_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MemoryDeviceInfo_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemoryDeviceInfo(MemoryDeviceInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemoryDeviceInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SgxEPC(SgxEPC *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SgxEPC(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SgxEPCList(SgxEPCList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SgxEPCList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SgxEPCProperties(SgxEPCProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SgxEPCProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemoryDeviceInfoList(MemoryDeviceInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemoryDeviceInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg(q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_MEM_UNPLUG_ERROR_arg(q_obj_MEM_UNPLUG_ERROR_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_MEM_UNPLUG_ERROR_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BootConfiguration(BootConfiguration *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BootConfiguration(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SMPConfiguration(SMPConfiguration *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SMPConfiguration(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup SmbiosEntryPointType_lookup = {
    .array = (const char *const[]) {
        [SMBIOS_ENTRY_POINT_TYPE_32] = "32",
        [SMBIOS_ENTRY_POINT_TYPE_64] = "64",
    },
    .size = SMBIOS_ENTRY_POINT_TYPE__MAX
};

void qapi_free_MemorySizeConfiguration(MemorySizeConfiguration *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemorySizeConfiguration(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_FDT)
void qapi_free_q_obj_dumpdtb_arg(q_obj_dumpdtb_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_dumpdtb_arg(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_FDT) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_machine_c;
