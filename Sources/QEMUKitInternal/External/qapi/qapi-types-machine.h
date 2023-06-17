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

#ifndef QAPI_TYPES_MACHINE_H
#define QAPI_TYPES_MACHINE_H

#include "qapi-builtin-types.h"
#include "qapi-types-common.h"

typedef enum SysEmuTarget {
    SYS_EMU_TARGET_AARCH64,
    SYS_EMU_TARGET_ALPHA,
    SYS_EMU_TARGET_ARM,
    SYS_EMU_TARGET_AVR,
    SYS_EMU_TARGET_CRIS,
    SYS_EMU_TARGET_HPPA,
    SYS_EMU_TARGET_I386,
    SYS_EMU_TARGET_LOONGARCH64,
    SYS_EMU_TARGET_M68K,
    SYS_EMU_TARGET_MICROBLAZE,
    SYS_EMU_TARGET_MICROBLAZEEL,
    SYS_EMU_TARGET_MIPS,
    SYS_EMU_TARGET_MIPS64,
    SYS_EMU_TARGET_MIPS64EL,
    SYS_EMU_TARGET_MIPSEL,
    SYS_EMU_TARGET_NIOS2,
    SYS_EMU_TARGET_OR1K,
    SYS_EMU_TARGET_PPC,
    SYS_EMU_TARGET_PPC64,
    SYS_EMU_TARGET_RISCV32,
    SYS_EMU_TARGET_RISCV64,
    SYS_EMU_TARGET_RX,
    SYS_EMU_TARGET_S390X,
    SYS_EMU_TARGET_SH4,
    SYS_EMU_TARGET_SH4EB,
    SYS_EMU_TARGET_SPARC,
    SYS_EMU_TARGET_SPARC64,
    SYS_EMU_TARGET_TRICORE,
    SYS_EMU_TARGET_X86_64,
    SYS_EMU_TARGET_XTENSA,
    SYS_EMU_TARGET_XTENSAEB,
    SYS_EMU_TARGET__MAX,
} SysEmuTarget;

#define SysEmuTarget_str(val) \
    qapi_enum_lookup(&SysEmuTarget_lookup, (val))

extern const QEnumLookup SysEmuTarget_lookup;

typedef enum CpuS390State {
    S390_CPU_STATE_UNINITIALIZED,
    S390_CPU_STATE_STOPPED,
    S390_CPU_STATE_CHECK_STOP,
    S390_CPU_STATE_OPERATING,
    S390_CPU_STATE_LOAD,
    S390_CPU_STATE__MAX,
} CpuS390State;

#define CpuS390State_str(val) \
    qapi_enum_lookup(&CpuS390State_lookup, (val))

extern const QEnumLookup CpuS390State_lookup;

typedef struct CpuInfoS390 CpuInfoS390;

typedef struct q_obj_CpuInfoFast_base q_obj_CpuInfoFast_base;

typedef struct CpuInfoFast CpuInfoFast;

typedef struct CpuInfoFastList CpuInfoFastList;

typedef struct MachineInfo MachineInfo;

typedef struct MachineInfoList MachineInfoList;

typedef struct CurrentMachineParams CurrentMachineParams;

typedef struct TargetInfo TargetInfo;

typedef struct UuidInfo UuidInfo;

typedef struct GuidInfo GuidInfo;

typedef enum LostTickPolicy {
    LOST_TICK_POLICY_DISCARD,
    LOST_TICK_POLICY_DELAY,
    LOST_TICK_POLICY_SLEW,
    LOST_TICK_POLICY__MAX,
} LostTickPolicy;

#define LostTickPolicy_str(val) \
    qapi_enum_lookup(&LostTickPolicy_lookup, (val))

extern const QEnumLookup LostTickPolicy_lookup;

typedef struct KvmInfo KvmInfo;

typedef enum NumaOptionsType {
    NUMA_OPTIONS_TYPE_NODE,
    NUMA_OPTIONS_TYPE_DIST,
    NUMA_OPTIONS_TYPE_CPU,
    NUMA_OPTIONS_TYPE_HMAT_LB,
    NUMA_OPTIONS_TYPE_HMAT_CACHE,
    NUMA_OPTIONS_TYPE__MAX,
} NumaOptionsType;

#define NumaOptionsType_str(val) \
    qapi_enum_lookup(&NumaOptionsType_lookup, (val))

extern const QEnumLookup NumaOptionsType_lookup;

typedef struct q_obj_NumaOptions_base q_obj_NumaOptions_base;

typedef struct NumaOptions NumaOptions;

typedef struct NumaNodeOptions NumaNodeOptions;

typedef struct NumaDistOptions NumaDistOptions;

typedef struct CXLFixedMemoryWindowOptions CXLFixedMemoryWindowOptions;

typedef struct CXLFixedMemoryWindowOptionsList CXLFixedMemoryWindowOptionsList;

typedef struct CXLFMWProperties CXLFMWProperties;

typedef enum X86CPURegister32 {
    X86_CPU_REGISTER32_EAX,
    X86_CPU_REGISTER32_EBX,
    X86_CPU_REGISTER32_ECX,
    X86_CPU_REGISTER32_EDX,
    X86_CPU_REGISTER32_ESP,
    X86_CPU_REGISTER32_EBP,
    X86_CPU_REGISTER32_ESI,
    X86_CPU_REGISTER32_EDI,
    X86_CPU_REGISTER32__MAX,
} X86CPURegister32;

#define X86CPURegister32_str(val) \
    qapi_enum_lookup(&X86CPURegister32_lookup, (val))

extern const QEnumLookup X86CPURegister32_lookup;

typedef struct X86CPUFeatureWordInfo X86CPUFeatureWordInfo;

typedef struct X86CPUFeatureWordInfoList X86CPUFeatureWordInfoList;

typedef struct DummyForceArrays DummyForceArrays;

typedef struct NumaCpuOptions NumaCpuOptions;

typedef enum HmatLBMemoryHierarchy {
    HMATLB_MEMORY_HIERARCHY_MEMORY,
    HMATLB_MEMORY_HIERARCHY_FIRST_LEVEL,
    HMATLB_MEMORY_HIERARCHY_SECOND_LEVEL,
    HMATLB_MEMORY_HIERARCHY_THIRD_LEVEL,
    HMATLB_MEMORY_HIERARCHY__MAX,
} HmatLBMemoryHierarchy;

#define HmatLBMemoryHierarchy_str(val) \
    qapi_enum_lookup(&HmatLBMemoryHierarchy_lookup, (val))

extern const QEnumLookup HmatLBMemoryHierarchy_lookup;

typedef enum HmatLBDataType {
    HMATLB_DATA_TYPE_ACCESS_LATENCY,
    HMATLB_DATA_TYPE_READ_LATENCY,
    HMATLB_DATA_TYPE_WRITE_LATENCY,
    HMATLB_DATA_TYPE_ACCESS_BANDWIDTH,
    HMATLB_DATA_TYPE_READ_BANDWIDTH,
    HMATLB_DATA_TYPE_WRITE_BANDWIDTH,
    HMATLB_DATA_TYPE__MAX,
} HmatLBDataType;

#define HmatLBDataType_str(val) \
    qapi_enum_lookup(&HmatLBDataType_lookup, (val))

extern const QEnumLookup HmatLBDataType_lookup;

typedef struct NumaHmatLBOptions NumaHmatLBOptions;

typedef enum HmatCacheAssociativity {
    HMAT_CACHE_ASSOCIATIVITY_NONE,
    HMAT_CACHE_ASSOCIATIVITY_DIRECT,
    HMAT_CACHE_ASSOCIATIVITY_COMPLEX,
    HMAT_CACHE_ASSOCIATIVITY__MAX,
} HmatCacheAssociativity;

#define HmatCacheAssociativity_str(val) \
    qapi_enum_lookup(&HmatCacheAssociativity_lookup, (val))

extern const QEnumLookup HmatCacheAssociativity_lookup;

typedef enum HmatCacheWritePolicy {
    HMAT_CACHE_WRITE_POLICY_NONE,
    HMAT_CACHE_WRITE_POLICY_WRITE_BACK,
    HMAT_CACHE_WRITE_POLICY_WRITE_THROUGH,
    HMAT_CACHE_WRITE_POLICY__MAX,
} HmatCacheWritePolicy;

#define HmatCacheWritePolicy_str(val) \
    qapi_enum_lookup(&HmatCacheWritePolicy_lookup, (val))

extern const QEnumLookup HmatCacheWritePolicy_lookup;

typedef struct NumaHmatCacheOptions NumaHmatCacheOptions;

typedef struct q_obj_memsave_arg q_obj_memsave_arg;

typedef struct q_obj_pmemsave_arg q_obj_pmemsave_arg;

typedef struct Memdev Memdev;

typedef struct MemdevList MemdevList;

typedef struct CpuInstanceProperties CpuInstanceProperties;

typedef struct HotpluggableCPU HotpluggableCPU;

typedef struct HotpluggableCPUList HotpluggableCPUList;

typedef struct q_obj_balloon_arg q_obj_balloon_arg;

typedef struct BalloonInfo BalloonInfo;

typedef struct q_obj_BALLOON_CHANGE_arg q_obj_BALLOON_CHANGE_arg;

typedef struct MemoryInfo MemoryInfo;

typedef struct PCDIMMDeviceInfo PCDIMMDeviceInfo;

typedef struct VirtioPMEMDeviceInfo VirtioPMEMDeviceInfo;

typedef struct VirtioMEMDeviceInfo VirtioMEMDeviceInfo;

typedef struct SgxEPCDeviceInfo SgxEPCDeviceInfo;

typedef enum MemoryDeviceInfoKind {
    MEMORY_DEVICE_INFO_KIND_DIMM,
    MEMORY_DEVICE_INFO_KIND_NVDIMM,
    MEMORY_DEVICE_INFO_KIND_VIRTIO_PMEM,
    MEMORY_DEVICE_INFO_KIND_VIRTIO_MEM,
    MEMORY_DEVICE_INFO_KIND_SGX_EPC,
    MEMORY_DEVICE_INFO_KIND__MAX,
} MemoryDeviceInfoKind;

#define MemoryDeviceInfoKind_str(val) \
    qapi_enum_lookup(&MemoryDeviceInfoKind_lookup, (val))

extern const QEnumLookup MemoryDeviceInfoKind_lookup;

typedef struct PCDIMMDeviceInfoWrapper PCDIMMDeviceInfoWrapper;

typedef struct VirtioPMEMDeviceInfoWrapper VirtioPMEMDeviceInfoWrapper;

typedef struct VirtioMEMDeviceInfoWrapper VirtioMEMDeviceInfoWrapper;

typedef struct SgxEPCDeviceInfoWrapper SgxEPCDeviceInfoWrapper;

typedef struct q_obj_MemoryDeviceInfo_base q_obj_MemoryDeviceInfo_base;

typedef struct MemoryDeviceInfo MemoryDeviceInfo;

typedef struct SgxEPC SgxEPC;

typedef struct SgxEPCList SgxEPCList;

typedef struct SgxEPCProperties SgxEPCProperties;

typedef struct MemoryDeviceInfoList MemoryDeviceInfoList;

typedef struct q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg;

typedef struct q_obj_MEM_UNPLUG_ERROR_arg q_obj_MEM_UNPLUG_ERROR_arg;

typedef struct BootConfiguration BootConfiguration;

typedef struct SMPConfiguration SMPConfiguration;

typedef enum SmbiosEntryPointType {
    SMBIOS_ENTRY_POINT_TYPE_32,
    SMBIOS_ENTRY_POINT_TYPE_64,
    SMBIOS_ENTRY_POINT_TYPE__MAX,
} SmbiosEntryPointType;

#define SmbiosEntryPointType_str(val) \
    qapi_enum_lookup(&SmbiosEntryPointType_lookup, (val))

extern const QEnumLookup SmbiosEntryPointType_lookup;

typedef struct MemorySizeConfiguration MemorySizeConfiguration;

#if defined(CONFIG_FDT)
typedef struct q_obj_dumpdtb_arg q_obj_dumpdtb_arg;
#endif /* defined(CONFIG_FDT) */

struct CpuInfoS390 {
    CpuS390State cpu_state;
};

void qapi_free_CpuInfoS390(CpuInfoS390 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuInfoS390, qapi_free_CpuInfoS390)

struct q_obj_CpuInfoFast_base {
    int64_t cpu_index;
    char *qom_path;
    int64_t thread_id;
    bool has_props;
    CpuInstanceProperties *props;
    SysEmuTarget target;
};

void qapi_free_q_obj_CpuInfoFast_base(q_obj_CpuInfoFast_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_CpuInfoFast_base, qapi_free_q_obj_CpuInfoFast_base)

struct CpuInfoFast {
    int64_t cpu_index;
    char *qom_path;
    int64_t thread_id;
    bool has_props;
    CpuInstanceProperties *props;
    SysEmuTarget target;
    union { /* union tag is @target */
        CpuInfoS390 s390x;
    } u;
};

void qapi_free_CpuInfoFast(CpuInfoFast *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuInfoFast, qapi_free_CpuInfoFast)

struct CpuInfoFastList {
    CpuInfoFastList *next;
    CpuInfoFast *value;
};

void qapi_free_CpuInfoFastList(CpuInfoFastList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuInfoFastList, qapi_free_CpuInfoFastList)

struct MachineInfo {
    char *name;
    bool has_alias;
    char *alias;
    bool has_is_default;
    bool is_default;
    int64_t cpu_max;
    bool hotpluggable_cpus;
    bool numa_mem_supported;
    bool deprecated;
    bool has_default_cpu_type;
    char *default_cpu_type;
    bool has_default_ram_id;
    char *default_ram_id;
    bool acpi;
};

void qapi_free_MachineInfo(MachineInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MachineInfo, qapi_free_MachineInfo)

struct MachineInfoList {
    MachineInfoList *next;
    MachineInfo *value;
};

void qapi_free_MachineInfoList(MachineInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MachineInfoList, qapi_free_MachineInfoList)

struct CurrentMachineParams {
    bool wakeup_suspend_support;
};

void qapi_free_CurrentMachineParams(CurrentMachineParams *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CurrentMachineParams, qapi_free_CurrentMachineParams)

struct TargetInfo {
    SysEmuTarget arch;
};

void qapi_free_TargetInfo(TargetInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TargetInfo, qapi_free_TargetInfo)

struct UuidInfo {
    char *UUID;
};

void qapi_free_UuidInfo(UuidInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UuidInfo, qapi_free_UuidInfo)

struct GuidInfo {
    char *guid;
};

void qapi_free_GuidInfo(GuidInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuidInfo, qapi_free_GuidInfo)

struct KvmInfo {
    bool enabled;
    bool present;
};

void qapi_free_KvmInfo(KvmInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(KvmInfo, qapi_free_KvmInfo)

struct q_obj_NumaOptions_base {
    NumaOptionsType type;
};

void qapi_free_q_obj_NumaOptions_base(q_obj_NumaOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_NumaOptions_base, qapi_free_q_obj_NumaOptions_base)

struct NumaNodeOptions {
    bool has_nodeid;
    uint16_t nodeid;
    bool has_cpus;
    uint16List *cpus;
    bool has_mem;
    uint64_t mem;
    bool has_memdev;
    char *memdev;
    bool has_initiator;
    uint16_t initiator;
};

struct NumaDistOptions {
    uint16_t src;
    uint16_t dst;
    uint8_t val;
};

struct NumaCpuOptions {
    /* Members inherited from CpuInstanceProperties: */
    bool has_node_id;
    int64_t node_id;
    bool has_socket_id;
    int64_t socket_id;
    bool has_die_id;
    int64_t die_id;
    bool has_cluster_id;
    int64_t cluster_id;
    bool has_core_id;
    int64_t core_id;
    bool has_thread_id;
    int64_t thread_id;
    /* Own members: */
};

struct NumaHmatLBOptions {
    uint16_t initiator;
    uint16_t target;
    HmatLBMemoryHierarchy hierarchy;
    HmatLBDataType data_type;
    bool has_latency;
    uint64_t latency;
    bool has_bandwidth;
    uint64_t bandwidth;
};

struct NumaHmatCacheOptions {
    uint32_t node_id;
    uint64_t size;
    uint8_t level;
    HmatCacheAssociativity associativity;
    HmatCacheWritePolicy policy;
    uint16_t line;
};

struct NumaOptions {
    NumaOptionsType type;
    union { /* union tag is @type */
        NumaNodeOptions node;
        NumaDistOptions dist;
        NumaCpuOptions cpu;
        NumaHmatLBOptions hmat_lb;
        NumaHmatCacheOptions hmat_cache;
    } u;
};

void qapi_free_NumaOptions(NumaOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NumaOptions, qapi_free_NumaOptions)

void qapi_free_NumaNodeOptions(NumaNodeOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NumaNodeOptions, qapi_free_NumaNodeOptions)

void qapi_free_NumaDistOptions(NumaDistOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NumaDistOptions, qapi_free_NumaDistOptions)

struct CXLFixedMemoryWindowOptions {
    uint64_t size;
    bool has_interleave_granularity;
    uint64_t interleave_granularity;
    strList *targets;
};

void qapi_free_CXLFixedMemoryWindowOptions(CXLFixedMemoryWindowOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CXLFixedMemoryWindowOptions, qapi_free_CXLFixedMemoryWindowOptions)

struct CXLFixedMemoryWindowOptionsList {
    CXLFixedMemoryWindowOptionsList *next;
    CXLFixedMemoryWindowOptions *value;
};

void qapi_free_CXLFixedMemoryWindowOptionsList(CXLFixedMemoryWindowOptionsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CXLFixedMemoryWindowOptionsList, qapi_free_CXLFixedMemoryWindowOptionsList)

struct CXLFMWProperties {
    CXLFixedMemoryWindowOptionsList *cxl_fmw;
};

void qapi_free_CXLFMWProperties(CXLFMWProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CXLFMWProperties, qapi_free_CXLFMWProperties)

struct X86CPUFeatureWordInfo {
    int64_t cpuid_input_eax;
    bool has_cpuid_input_ecx;
    int64_t cpuid_input_ecx;
    X86CPURegister32 cpuid_register;
    int64_t features;
};

void qapi_free_X86CPUFeatureWordInfo(X86CPUFeatureWordInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(X86CPUFeatureWordInfo, qapi_free_X86CPUFeatureWordInfo)

struct X86CPUFeatureWordInfoList {
    X86CPUFeatureWordInfoList *next;
    X86CPUFeatureWordInfo *value;
};

void qapi_free_X86CPUFeatureWordInfoList(X86CPUFeatureWordInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(X86CPUFeatureWordInfoList, qapi_free_X86CPUFeatureWordInfoList)

struct DummyForceArrays {
    X86CPUFeatureWordInfoList *unused;
};

void qapi_free_DummyForceArrays(DummyForceArrays *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DummyForceArrays, qapi_free_DummyForceArrays)

static inline CpuInstanceProperties *qapi_NumaCpuOptions_base(const NumaCpuOptions *obj)
{
    return (CpuInstanceProperties *)obj;
}

void qapi_free_NumaCpuOptions(NumaCpuOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NumaCpuOptions, qapi_free_NumaCpuOptions)

void qapi_free_NumaHmatLBOptions(NumaHmatLBOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NumaHmatLBOptions, qapi_free_NumaHmatLBOptions)

void qapi_free_NumaHmatCacheOptions(NumaHmatCacheOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NumaHmatCacheOptions, qapi_free_NumaHmatCacheOptions)

struct q_obj_memsave_arg {
    int64_t val;
    int64_t size;
    char *filename;
    bool has_cpu_index;
    int64_t cpu_index;
};

void qapi_free_q_obj_memsave_arg(q_obj_memsave_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_memsave_arg, qapi_free_q_obj_memsave_arg)

struct q_obj_pmemsave_arg {
    int64_t val;
    int64_t size;
    char *filename;
};

void qapi_free_q_obj_pmemsave_arg(q_obj_pmemsave_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_pmemsave_arg, qapi_free_q_obj_pmemsave_arg)

struct Memdev {
    bool has_id;
    char *id;
    uint64_t size;
    bool merge;
    bool dump;
    bool prealloc;
    bool share;
    bool has_reserve;
    bool reserve;
    uint16List *host_nodes;
    HostMemPolicy policy;
};

void qapi_free_Memdev(Memdev *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Memdev, qapi_free_Memdev)

struct MemdevList {
    MemdevList *next;
    Memdev *value;
};

void qapi_free_MemdevList(MemdevList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemdevList, qapi_free_MemdevList)

struct CpuInstanceProperties {
    bool has_node_id;
    int64_t node_id;
    bool has_socket_id;
    int64_t socket_id;
    bool has_die_id;
    int64_t die_id;
    bool has_cluster_id;
    int64_t cluster_id;
    bool has_core_id;
    int64_t core_id;
    bool has_thread_id;
    int64_t thread_id;
};

void qapi_free_CpuInstanceProperties(CpuInstanceProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CpuInstanceProperties, qapi_free_CpuInstanceProperties)

struct HotpluggableCPU {
    char *type;
    int64_t vcpus_count;
    CpuInstanceProperties *props;
    bool has_qom_path;
    char *qom_path;
};

void qapi_free_HotpluggableCPU(HotpluggableCPU *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(HotpluggableCPU, qapi_free_HotpluggableCPU)

struct HotpluggableCPUList {
    HotpluggableCPUList *next;
    HotpluggableCPU *value;
};

void qapi_free_HotpluggableCPUList(HotpluggableCPUList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(HotpluggableCPUList, qapi_free_HotpluggableCPUList)

struct q_obj_balloon_arg {
    int64_t value;
};

void qapi_free_q_obj_balloon_arg(q_obj_balloon_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_balloon_arg, qapi_free_q_obj_balloon_arg)

struct BalloonInfo {
    int64_t actual;
};

void qapi_free_BalloonInfo(BalloonInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BalloonInfo, qapi_free_BalloonInfo)

struct q_obj_BALLOON_CHANGE_arg {
    int64_t actual;
};

void qapi_free_q_obj_BALLOON_CHANGE_arg(q_obj_BALLOON_CHANGE_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BALLOON_CHANGE_arg, qapi_free_q_obj_BALLOON_CHANGE_arg)

struct MemoryInfo {
    uint64_t base_memory;
    bool has_plugged_memory;
    uint64_t plugged_memory;
};

void qapi_free_MemoryInfo(MemoryInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemoryInfo, qapi_free_MemoryInfo)

struct PCDIMMDeviceInfo {
    bool has_id;
    char *id;
    int64_t addr;
    int64_t size;
    int64_t slot;
    int64_t node;
    char *memdev;
    bool hotplugged;
    bool hotpluggable;
};

void qapi_free_PCDIMMDeviceInfo(PCDIMMDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PCDIMMDeviceInfo, qapi_free_PCDIMMDeviceInfo)

struct VirtioPMEMDeviceInfo {
    bool has_id;
    char *id;
    uint64_t memaddr;
    uint64_t size;
    char *memdev;
};

void qapi_free_VirtioPMEMDeviceInfo(VirtioPMEMDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioPMEMDeviceInfo, qapi_free_VirtioPMEMDeviceInfo)

struct VirtioMEMDeviceInfo {
    bool has_id;
    char *id;
    uint64_t memaddr;
    uint64_t requested_size;
    uint64_t size;
    uint64_t max_size;
    uint64_t block_size;
    int64_t node;
    char *memdev;
};

void qapi_free_VirtioMEMDeviceInfo(VirtioMEMDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioMEMDeviceInfo, qapi_free_VirtioMEMDeviceInfo)

struct SgxEPCDeviceInfo {
    bool has_id;
    char *id;
    uint64_t memaddr;
    uint64_t size;
    int64_t node;
    char *memdev;
};

void qapi_free_SgxEPCDeviceInfo(SgxEPCDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SgxEPCDeviceInfo, qapi_free_SgxEPCDeviceInfo)

struct PCDIMMDeviceInfoWrapper {
    PCDIMMDeviceInfo *data;
};

void qapi_free_PCDIMMDeviceInfoWrapper(PCDIMMDeviceInfoWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PCDIMMDeviceInfoWrapper, qapi_free_PCDIMMDeviceInfoWrapper)

struct VirtioPMEMDeviceInfoWrapper {
    VirtioPMEMDeviceInfo *data;
};

void qapi_free_VirtioPMEMDeviceInfoWrapper(VirtioPMEMDeviceInfoWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioPMEMDeviceInfoWrapper, qapi_free_VirtioPMEMDeviceInfoWrapper)

struct VirtioMEMDeviceInfoWrapper {
    VirtioMEMDeviceInfo *data;
};

void qapi_free_VirtioMEMDeviceInfoWrapper(VirtioMEMDeviceInfoWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VirtioMEMDeviceInfoWrapper, qapi_free_VirtioMEMDeviceInfoWrapper)

struct SgxEPCDeviceInfoWrapper {
    SgxEPCDeviceInfo *data;
};

void qapi_free_SgxEPCDeviceInfoWrapper(SgxEPCDeviceInfoWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SgxEPCDeviceInfoWrapper, qapi_free_SgxEPCDeviceInfoWrapper)

struct q_obj_MemoryDeviceInfo_base {
    MemoryDeviceInfoKind type;
};

void qapi_free_q_obj_MemoryDeviceInfo_base(q_obj_MemoryDeviceInfo_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_MemoryDeviceInfo_base, qapi_free_q_obj_MemoryDeviceInfo_base)

struct MemoryDeviceInfo {
    MemoryDeviceInfoKind type;
    union { /* union tag is @type */
        PCDIMMDeviceInfoWrapper dimm;
        PCDIMMDeviceInfoWrapper nvdimm;
        VirtioPMEMDeviceInfoWrapper virtio_pmem;
        VirtioMEMDeviceInfoWrapper virtio_mem;
        SgxEPCDeviceInfoWrapper sgx_epc;
    } u;
};

void qapi_free_MemoryDeviceInfo(MemoryDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemoryDeviceInfo, qapi_free_MemoryDeviceInfo)

struct SgxEPC {
    char *memdev;
    int64_t node;
};

void qapi_free_SgxEPC(SgxEPC *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SgxEPC, qapi_free_SgxEPC)

struct SgxEPCList {
    SgxEPCList *next;
    SgxEPC *value;
};

void qapi_free_SgxEPCList(SgxEPCList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SgxEPCList, qapi_free_SgxEPCList)

struct SgxEPCProperties {
    SgxEPCList *sgx_epc;
};

void qapi_free_SgxEPCProperties(SgxEPCProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SgxEPCProperties, qapi_free_SgxEPCProperties)

struct MemoryDeviceInfoList {
    MemoryDeviceInfoList *next;
    MemoryDeviceInfo *value;
};

void qapi_free_MemoryDeviceInfoList(MemoryDeviceInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemoryDeviceInfoList, qapi_free_MemoryDeviceInfoList)

struct q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg {
    bool has_id;
    char *id;
    uint64_t size;
    char *qom_path;
};

void qapi_free_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg(q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg, qapi_free_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg)

struct q_obj_MEM_UNPLUG_ERROR_arg {
    char *device;
    char *msg;
};

void qapi_free_q_obj_MEM_UNPLUG_ERROR_arg(q_obj_MEM_UNPLUG_ERROR_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_MEM_UNPLUG_ERROR_arg, qapi_free_q_obj_MEM_UNPLUG_ERROR_arg)

struct BootConfiguration {
    bool has_order;
    char *order;
    bool has_once;
    char *once;
    bool has_menu;
    bool menu;
    bool has_splash;
    char *splash;
    bool has_splash_time;
    int64_t splash_time;
    bool has_reboot_timeout;
    int64_t reboot_timeout;
    bool has_strict;
    bool strict;
};

void qapi_free_BootConfiguration(BootConfiguration *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BootConfiguration, qapi_free_BootConfiguration)

struct SMPConfiguration {
    bool has_cpus;
    int64_t cpus;
    bool has_sockets;
    int64_t sockets;
    bool has_dies;
    int64_t dies;
    bool has_clusters;
    int64_t clusters;
    bool has_cores;
    int64_t cores;
    bool has_threads;
    int64_t threads;
    bool has_maxcpus;
    int64_t maxcpus;
};

void qapi_free_SMPConfiguration(SMPConfiguration *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SMPConfiguration, qapi_free_SMPConfiguration)

struct MemorySizeConfiguration {
    bool has_size;
    uint64_t size;
    bool has_max_size;
    uint64_t max_size;
    bool has_slots;
    uint64_t slots;
};

void qapi_free_MemorySizeConfiguration(MemorySizeConfiguration *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemorySizeConfiguration, qapi_free_MemorySizeConfiguration)

#if defined(CONFIG_FDT)
struct q_obj_dumpdtb_arg {
    char *filename;
};
#endif /* defined(CONFIG_FDT) */

#if defined(CONFIG_FDT)
void qapi_free_q_obj_dumpdtb_arg(q_obj_dumpdtb_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_dumpdtb_arg, qapi_free_q_obj_dumpdtb_arg)
#endif /* defined(CONFIG_FDT) */

#endif /* QAPI_TYPES_MACHINE_H */
