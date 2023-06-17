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

#include "qemu-compat.h"
#include "error.h"
#include "qerror.h"
#include "qapi-visit-machine.h"

bool visit_type_SysEmuTarget(Visitor *v, const char *name,
                 SysEmuTarget *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SysEmuTarget_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CpuS390State(Visitor *v, const char *name,
                 CpuS390State *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CpuS390State_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CpuInfoS390_members(Visitor *v, CpuInfoS390 *obj, Error **errp)
{
    if (!visit_type_CpuS390State(v, "cpu-state", &obj->cpu_state, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoS390(Visitor *v, const char *name,
                 CpuInfoS390 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoS390), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoS390_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoS390(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_CpuInfoFast_base_members(Visitor *v, q_obj_CpuInfoFast_base *obj, Error **errp)
{
    if (!visit_type_int(v, "cpu-index", &obj->cpu_index, errp)) {
        return false;
    }
    if (!visit_type_str(v, "qom-path", &obj->qom_path, errp)) {
        return false;
    }
    if (!visit_type_int(v, "thread-id", &obj->thread_id, errp)) {
        return false;
    }
    if (visit_optional(v, "props", &obj->has_props)) {
        if (!visit_type_CpuInstanceProperties(v, "props", &obj->props, errp)) {
            return false;
        }
    }
    if (!visit_type_SysEmuTarget(v, "target", &obj->target, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_CpuInfoFast_base(Visitor *v, const char *name,
                 q_obj_CpuInfoFast_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_CpuInfoFast_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_CpuInfoFast_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_CpuInfoFast_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoFast_members(Visitor *v, CpuInfoFast *obj, Error **errp)
{
    if (!visit_type_q_obj_CpuInfoFast_base_members(v, (q_obj_CpuInfoFast_base *)obj, errp)) {
        return false;
    }
    switch (obj->target) {
    case SYS_EMU_TARGET_S390X:
        return visit_type_CpuInfoS390_members(v, &obj->u.s390x, errp);
    case SYS_EMU_TARGET_AARCH64:
        break;
    case SYS_EMU_TARGET_ALPHA:
        break;
    case SYS_EMU_TARGET_ARM:
        break;
    case SYS_EMU_TARGET_AVR:
        break;
    case SYS_EMU_TARGET_CRIS:
        break;
    case SYS_EMU_TARGET_HPPA:
        break;
    case SYS_EMU_TARGET_I386:
        break;
    case SYS_EMU_TARGET_LOONGARCH64:
        break;
    case SYS_EMU_TARGET_M68K:
        break;
    case SYS_EMU_TARGET_MICROBLAZE:
        break;
    case SYS_EMU_TARGET_MICROBLAZEEL:
        break;
    case SYS_EMU_TARGET_MIPS:
        break;
    case SYS_EMU_TARGET_MIPS64:
        break;
    case SYS_EMU_TARGET_MIPS64EL:
        break;
    case SYS_EMU_TARGET_MIPSEL:
        break;
    case SYS_EMU_TARGET_NIOS2:
        break;
    case SYS_EMU_TARGET_OR1K:
        break;
    case SYS_EMU_TARGET_PPC:
        break;
    case SYS_EMU_TARGET_PPC64:
        break;
    case SYS_EMU_TARGET_RISCV32:
        break;
    case SYS_EMU_TARGET_RISCV64:
        break;
    case SYS_EMU_TARGET_RX:
        break;
    case SYS_EMU_TARGET_SH4:
        break;
    case SYS_EMU_TARGET_SH4EB:
        break;
    case SYS_EMU_TARGET_SPARC:
        break;
    case SYS_EMU_TARGET_SPARC64:
        break;
    case SYS_EMU_TARGET_TRICORE:
        break;
    case SYS_EMU_TARGET_X86_64:
        break;
    case SYS_EMU_TARGET_XTENSA:
        break;
    case SYS_EMU_TARGET_XTENSAEB:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_CpuInfoFast(Visitor *v, const char *name,
                 CpuInfoFast **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoFast), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoFast_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoFast(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoFastList(Visitor *v, const char *name,
                 CpuInfoFastList **obj, Error **errp)
{
    bool ok = false;
    CpuInfoFastList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CpuInfoFastList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CpuInfoFast(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoFastList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MachineInfo_members(Visitor *v, MachineInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "alias", &obj->has_alias)) {
        if (!visit_type_str(v, "alias", &obj->alias, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "is-default", &obj->has_is_default)) {
        if (!visit_type_bool(v, "is-default", &obj->is_default, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "cpu-max", &obj->cpu_max, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "hotpluggable-cpus", &obj->hotpluggable_cpus, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "numa-mem-supported", &obj->numa_mem_supported, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "deprecated", &obj->deprecated, errp)) {
        return false;
    }
    if (visit_optional(v, "default-cpu-type", &obj->has_default_cpu_type)) {
        if (!visit_type_str(v, "default-cpu-type", &obj->default_cpu_type, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "default-ram-id", &obj->has_default_ram_id)) {
        if (!visit_type_str(v, "default-ram-id", &obj->default_ram_id, errp)) {
            return false;
        }
    }
    if (!visit_type_bool(v, "acpi", &obj->acpi, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MachineInfo(Visitor *v, const char *name,
                 MachineInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MachineInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MachineInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MachineInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MachineInfoList(Visitor *v, const char *name,
                 MachineInfoList **obj, Error **errp)
{
    bool ok = false;
    MachineInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (MachineInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_MachineInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MachineInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CurrentMachineParams_members(Visitor *v, CurrentMachineParams *obj, Error **errp)
{
    if (!visit_type_bool(v, "wakeup-suspend-support", &obj->wakeup_suspend_support, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CurrentMachineParams(Visitor *v, const char *name,
                 CurrentMachineParams **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CurrentMachineParams), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CurrentMachineParams_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CurrentMachineParams(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TargetInfo_members(Visitor *v, TargetInfo *obj, Error **errp)
{
    if (!visit_type_SysEmuTarget(v, "arch", &obj->arch, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TargetInfo(Visitor *v, const char *name,
                 TargetInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TargetInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TargetInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TargetInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UuidInfo_members(Visitor *v, UuidInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "UUID", &obj->UUID, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UuidInfo(Visitor *v, const char *name,
                 UuidInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UuidInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UuidInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UuidInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_GuidInfo_members(Visitor *v, GuidInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "guid", &obj->guid, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GuidInfo(Visitor *v, const char *name,
                 GuidInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GuidInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GuidInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GuidInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_LostTickPolicy(Visitor *v, const char *name,
                 LostTickPolicy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &LostTickPolicy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_KvmInfo_members(Visitor *v, KvmInfo *obj, Error **errp)
{
    if (!visit_type_bool(v, "enabled", &obj->enabled, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "present", &obj->present, errp)) {
        return false;
    }
    return true;
}

bool visit_type_KvmInfo(Visitor *v, const char *name,
                 KvmInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(KvmInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_KvmInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_KvmInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaOptionsType(Visitor *v, const char *name,
                 NumaOptionsType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NumaOptionsType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_NumaOptions_base_members(Visitor *v, q_obj_NumaOptions_base *obj, Error **errp)
{
    if (!visit_type_NumaOptionsType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_NumaOptions_base(Visitor *v, const char *name,
                 q_obj_NumaOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_NumaOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_NumaOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_NumaOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaOptions_members(Visitor *v, NumaOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_NumaOptions_base_members(v, (q_obj_NumaOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case NUMA_OPTIONS_TYPE_NODE:
        return visit_type_NumaNodeOptions_members(v, &obj->u.node, errp);
    case NUMA_OPTIONS_TYPE_DIST:
        return visit_type_NumaDistOptions_members(v, &obj->u.dist, errp);
    case NUMA_OPTIONS_TYPE_CPU:
        return visit_type_NumaCpuOptions_members(v, &obj->u.cpu, errp);
    case NUMA_OPTIONS_TYPE_HMAT_LB:
        return visit_type_NumaHmatLBOptions_members(v, &obj->u.hmat_lb, errp);
    case NUMA_OPTIONS_TYPE_HMAT_CACHE:
        return visit_type_NumaHmatCacheOptions_members(v, &obj->u.hmat_cache, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_NumaOptions(Visitor *v, const char *name,
                 NumaOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaNodeOptions_members(Visitor *v, NumaNodeOptions *obj, Error **errp)
{
    if (visit_optional(v, "nodeid", &obj->has_nodeid)) {
        if (!visit_type_uint16(v, "nodeid", &obj->nodeid, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpus", &obj->has_cpus)) {
        if (!visit_type_uint16List(v, "cpus", &obj->cpus, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mem", &obj->has_mem)) {
        if (!visit_type_size(v, "mem", &obj->mem, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "memdev", &obj->has_memdev)) {
        if (!visit_type_str(v, "memdev", &obj->memdev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "initiator", &obj->has_initiator)) {
        if (!visit_type_uint16(v, "initiator", &obj->initiator, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NumaNodeOptions(Visitor *v, const char *name,
                 NumaNodeOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaNodeOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaNodeOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaNodeOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaDistOptions_members(Visitor *v, NumaDistOptions *obj, Error **errp)
{
    if (!visit_type_uint16(v, "src", &obj->src, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "dst", &obj->dst, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "val", &obj->val, errp)) {
        return false;
    }
    return true;
}

bool visit_type_NumaDistOptions(Visitor *v, const char *name,
                 NumaDistOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaDistOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaDistOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaDistOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CXLFixedMemoryWindowOptions_members(Visitor *v, CXLFixedMemoryWindowOptions *obj, Error **errp)
{
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "interleave-granularity", &obj->has_interleave_granularity)) {
        if (!visit_type_size(v, "interleave-granularity", &obj->interleave_granularity, errp)) {
            return false;
        }
    }
    if (!visit_type_strList(v, "targets", &obj->targets, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CXLFixedMemoryWindowOptions(Visitor *v, const char *name,
                 CXLFixedMemoryWindowOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CXLFixedMemoryWindowOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CXLFixedMemoryWindowOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CXLFixedMemoryWindowOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CXLFixedMemoryWindowOptionsList(Visitor *v, const char *name,
                 CXLFixedMemoryWindowOptionsList **obj, Error **errp)
{
    bool ok = false;
    CXLFixedMemoryWindowOptionsList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CXLFixedMemoryWindowOptionsList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CXLFixedMemoryWindowOptions(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CXLFixedMemoryWindowOptionsList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CXLFMWProperties_members(Visitor *v, CXLFMWProperties *obj, Error **errp)
{
    if (!visit_type_CXLFixedMemoryWindowOptionsList(v, "cxl-fmw", &obj->cxl_fmw, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CXLFMWProperties(Visitor *v, const char *name,
                 CXLFMWProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CXLFMWProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CXLFMWProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CXLFMWProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_X86CPURegister32(Visitor *v, const char *name,
                 X86CPURegister32 *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &X86CPURegister32_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_X86CPUFeatureWordInfo_members(Visitor *v, X86CPUFeatureWordInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "cpuid-input-eax", &obj->cpuid_input_eax, errp)) {
        return false;
    }
    if (visit_optional(v, "cpuid-input-ecx", &obj->has_cpuid_input_ecx)) {
        if (!visit_type_int(v, "cpuid-input-ecx", &obj->cpuid_input_ecx, errp)) {
            return false;
        }
    }
    if (!visit_type_X86CPURegister32(v, "cpuid-register", &obj->cpuid_register, errp)) {
        return false;
    }
    if (!visit_type_int(v, "features", &obj->features, errp)) {
        return false;
    }
    return true;
}

bool visit_type_X86CPUFeatureWordInfo(Visitor *v, const char *name,
                 X86CPUFeatureWordInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(X86CPUFeatureWordInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_X86CPUFeatureWordInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_X86CPUFeatureWordInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_X86CPUFeatureWordInfoList(Visitor *v, const char *name,
                 X86CPUFeatureWordInfoList **obj, Error **errp)
{
    bool ok = false;
    X86CPUFeatureWordInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (X86CPUFeatureWordInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_X86CPUFeatureWordInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_X86CPUFeatureWordInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DummyForceArrays_members(Visitor *v, DummyForceArrays *obj, Error **errp)
{
    if (!visit_type_X86CPUFeatureWordInfoList(v, "unused", &obj->unused, errp)) {
        return false;
    }
    return true;
}

bool visit_type_DummyForceArrays(Visitor *v, const char *name,
                 DummyForceArrays **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DummyForceArrays), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DummyForceArrays_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DummyForceArrays(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaCpuOptions_members(Visitor *v, NumaCpuOptions *obj, Error **errp)
{
    if (!visit_type_CpuInstanceProperties_members(v, (CpuInstanceProperties *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_NumaCpuOptions(Visitor *v, const char *name,
                 NumaCpuOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaCpuOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaCpuOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaCpuOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HmatLBMemoryHierarchy(Visitor *v, const char *name,
                 HmatLBMemoryHierarchy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HmatLBMemoryHierarchy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_HmatLBDataType(Visitor *v, const char *name,
                 HmatLBDataType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HmatLBDataType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_NumaHmatLBOptions_members(Visitor *v, NumaHmatLBOptions *obj, Error **errp)
{
    if (!visit_type_uint16(v, "initiator", &obj->initiator, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "target", &obj->target, errp)) {
        return false;
    }
    if (!visit_type_HmatLBMemoryHierarchy(v, "hierarchy", &obj->hierarchy, errp)) {
        return false;
    }
    if (!visit_type_HmatLBDataType(v, "data-type", &obj->data_type, errp)) {
        return false;
    }
    if (visit_optional(v, "latency", &obj->has_latency)) {
        if (!visit_type_uint64(v, "latency", &obj->latency, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bandwidth", &obj->has_bandwidth)) {
        if (!visit_type_size(v, "bandwidth", &obj->bandwidth, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NumaHmatLBOptions(Visitor *v, const char *name,
                 NumaHmatLBOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaHmatLBOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaHmatLBOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaHmatLBOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HmatCacheAssociativity(Visitor *v, const char *name,
                 HmatCacheAssociativity *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HmatCacheAssociativity_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_HmatCacheWritePolicy(Visitor *v, const char *name,
                 HmatCacheWritePolicy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HmatCacheWritePolicy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_NumaHmatCacheOptions_members(Visitor *v, NumaHmatCacheOptions *obj, Error **errp)
{
    if (!visit_type_uint32(v, "node-id", &obj->node_id, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "level", &obj->level, errp)) {
        return false;
    }
    if (!visit_type_HmatCacheAssociativity(v, "associativity", &obj->associativity, errp)) {
        return false;
    }
    if (!visit_type_HmatCacheWritePolicy(v, "policy", &obj->policy, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "line", &obj->line, errp)) {
        return false;
    }
    return true;
}

bool visit_type_NumaHmatCacheOptions(Visitor *v, const char *name,
                 NumaHmatCacheOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaHmatCacheOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaHmatCacheOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaHmatCacheOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_memsave_arg_members(Visitor *v, q_obj_memsave_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "val", &obj->val, errp)) {
        return false;
    }
    if (!visit_type_int(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (visit_optional(v, "cpu-index", &obj->has_cpu_index)) {
        if (!visit_type_int(v, "cpu-index", &obj->cpu_index, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_memsave_arg(Visitor *v, const char *name,
                 q_obj_memsave_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_memsave_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_memsave_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_memsave_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_pmemsave_arg_members(Visitor *v, q_obj_pmemsave_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "val", &obj->val, errp)) {
        return false;
    }
    if (!visit_type_int(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_pmemsave_arg(Visitor *v, const char *name,
                 q_obj_pmemsave_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_pmemsave_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_pmemsave_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_pmemsave_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Memdev_members(Visitor *v, Memdev *obj, Error **errp)
{
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "merge", &obj->merge, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "dump", &obj->dump, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "prealloc", &obj->prealloc, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "share", &obj->share, errp)) {
        return false;
    }
    if (visit_optional(v, "reserve", &obj->has_reserve)) {
        if (!visit_type_bool(v, "reserve", &obj->reserve, errp)) {
            return false;
        }
    }
    if (!visit_type_uint16List(v, "host-nodes", &obj->host_nodes, errp)) {
        return false;
    }
    if (!visit_type_HostMemPolicy(v, "policy", &obj->policy, errp)) {
        return false;
    }
    return true;
}

bool visit_type_Memdev(Visitor *v, const char *name,
                 Memdev **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Memdev), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Memdev_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Memdev(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemdevList(Visitor *v, const char *name,
                 MemdevList **obj, Error **errp)
{
    bool ok = false;
    MemdevList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (MemdevList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_Memdev(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemdevList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInstanceProperties_members(Visitor *v, CpuInstanceProperties *obj, Error **errp)
{
    if (visit_optional(v, "node-id", &obj->has_node_id)) {
        if (!visit_type_int(v, "node-id", &obj->node_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "socket-id", &obj->has_socket_id)) {
        if (!visit_type_int(v, "socket-id", &obj->socket_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "die-id", &obj->has_die_id)) {
        if (!visit_type_int(v, "die-id", &obj->die_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cluster-id", &obj->has_cluster_id)) {
        if (!visit_type_int(v, "cluster-id", &obj->cluster_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "core-id", &obj->has_core_id)) {
        if (!visit_type_int(v, "core-id", &obj->core_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "thread-id", &obj->has_thread_id)) {
        if (!visit_type_int(v, "thread-id", &obj->thread_id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_CpuInstanceProperties(Visitor *v, const char *name,
                 CpuInstanceProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInstanceProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInstanceProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInstanceProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HotpluggableCPU_members(Visitor *v, HotpluggableCPU *obj, Error **errp)
{
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_int(v, "vcpus-count", &obj->vcpus_count, errp)) {
        return false;
    }
    if (!visit_type_CpuInstanceProperties(v, "props", &obj->props, errp)) {
        return false;
    }
    if (visit_optional(v, "qom-path", &obj->has_qom_path)) {
        if (!visit_type_str(v, "qom-path", &obj->qom_path, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_HotpluggableCPU(Visitor *v, const char *name,
                 HotpluggableCPU **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(HotpluggableCPU), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_HotpluggableCPU_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_HotpluggableCPU(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HotpluggableCPUList(Visitor *v, const char *name,
                 HotpluggableCPUList **obj, Error **errp)
{
    bool ok = false;
    HotpluggableCPUList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (HotpluggableCPUList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_HotpluggableCPU(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_HotpluggableCPUList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_balloon_arg_members(Visitor *v, q_obj_balloon_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "value", &obj->value, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_balloon_arg(Visitor *v, const char *name,
                 q_obj_balloon_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_balloon_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_balloon_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_balloon_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BalloonInfo_members(Visitor *v, BalloonInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "actual", &obj->actual, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BalloonInfo(Visitor *v, const char *name,
                 BalloonInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BalloonInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BalloonInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BalloonInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BALLOON_CHANGE_arg_members(Visitor *v, q_obj_BALLOON_CHANGE_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "actual", &obj->actual, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BALLOON_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_BALLOON_CHANGE_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BALLOON_CHANGE_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BALLOON_CHANGE_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BALLOON_CHANGE_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryInfo_members(Visitor *v, MemoryInfo *obj, Error **errp)
{
    if (!visit_type_size(v, "base-memory", &obj->base_memory, errp)) {
        return false;
    }
    if (visit_optional(v, "plugged-memory", &obj->has_plugged_memory)) {
        if (!visit_type_size(v, "plugged-memory", &obj->plugged_memory, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MemoryInfo(Visitor *v, const char *name,
                 MemoryInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MemoryInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MemoryInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemoryInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PCDIMMDeviceInfo_members(Visitor *v, PCDIMMDeviceInfo *obj, Error **errp)
{
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "addr", &obj->addr, errp)) {
        return false;
    }
    if (!visit_type_int(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_int(v, "slot", &obj->slot, errp)) {
        return false;
    }
    if (!visit_type_int(v, "node", &obj->node, errp)) {
        return false;
    }
    if (!visit_type_str(v, "memdev", &obj->memdev, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "hotplugged", &obj->hotplugged, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "hotpluggable", &obj->hotpluggable, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PCDIMMDeviceInfo(Visitor *v, const char *name,
                 PCDIMMDeviceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PCDIMMDeviceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PCDIMMDeviceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PCDIMMDeviceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioPMEMDeviceInfo_members(Visitor *v, VirtioPMEMDeviceInfo *obj, Error **errp)
{
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_size(v, "memaddr", &obj->memaddr, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_str(v, "memdev", &obj->memdev, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioPMEMDeviceInfo(Visitor *v, const char *name,
                 VirtioPMEMDeviceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioPMEMDeviceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioPMEMDeviceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioPMEMDeviceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioMEMDeviceInfo_members(Visitor *v, VirtioMEMDeviceInfo *obj, Error **errp)
{
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_size(v, "memaddr", &obj->memaddr, errp)) {
        return false;
    }
    if (!visit_type_size(v, "requested-size", &obj->requested_size, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_size(v, "max-size", &obj->max_size, errp)) {
        return false;
    }
    if (!visit_type_size(v, "block-size", &obj->block_size, errp)) {
        return false;
    }
    if (!visit_type_int(v, "node", &obj->node, errp)) {
        return false;
    }
    if (!visit_type_str(v, "memdev", &obj->memdev, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioMEMDeviceInfo(Visitor *v, const char *name,
                 VirtioMEMDeviceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioMEMDeviceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioMEMDeviceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioMEMDeviceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SgxEPCDeviceInfo_members(Visitor *v, SgxEPCDeviceInfo *obj, Error **errp)
{
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_size(v, "memaddr", &obj->memaddr, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_int(v, "node", &obj->node, errp)) {
        return false;
    }
    if (!visit_type_str(v, "memdev", &obj->memdev, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SgxEPCDeviceInfo(Visitor *v, const char *name,
                 SgxEPCDeviceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SgxEPCDeviceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SgxEPCDeviceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SgxEPCDeviceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryDeviceInfoKind(Visitor *v, const char *name,
                 MemoryDeviceInfoKind *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MemoryDeviceInfoKind_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_PCDIMMDeviceInfoWrapper_members(Visitor *v, PCDIMMDeviceInfoWrapper *obj, Error **errp)
{
    if (!visit_type_PCDIMMDeviceInfo(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PCDIMMDeviceInfoWrapper(Visitor *v, const char *name,
                 PCDIMMDeviceInfoWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PCDIMMDeviceInfoWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PCDIMMDeviceInfoWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PCDIMMDeviceInfoWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioPMEMDeviceInfoWrapper_members(Visitor *v, VirtioPMEMDeviceInfoWrapper *obj, Error **errp)
{
    if (!visit_type_VirtioPMEMDeviceInfo(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioPMEMDeviceInfoWrapper(Visitor *v, const char *name,
                 VirtioPMEMDeviceInfoWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioPMEMDeviceInfoWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioPMEMDeviceInfoWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioPMEMDeviceInfoWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VirtioMEMDeviceInfoWrapper_members(Visitor *v, VirtioMEMDeviceInfoWrapper *obj, Error **errp)
{
    if (!visit_type_VirtioMEMDeviceInfo(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_VirtioMEMDeviceInfoWrapper(Visitor *v, const char *name,
                 VirtioMEMDeviceInfoWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VirtioMEMDeviceInfoWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VirtioMEMDeviceInfoWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VirtioMEMDeviceInfoWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SgxEPCDeviceInfoWrapper_members(Visitor *v, SgxEPCDeviceInfoWrapper *obj, Error **errp)
{
    if (!visit_type_SgxEPCDeviceInfo(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SgxEPCDeviceInfoWrapper(Visitor *v, const char *name,
                 SgxEPCDeviceInfoWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SgxEPCDeviceInfoWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SgxEPCDeviceInfoWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SgxEPCDeviceInfoWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_MemoryDeviceInfo_base_members(Visitor *v, q_obj_MemoryDeviceInfo_base *obj, Error **errp)
{
    if (!visit_type_MemoryDeviceInfoKind(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_MemoryDeviceInfo_base(Visitor *v, const char *name,
                 q_obj_MemoryDeviceInfo_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_MemoryDeviceInfo_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_MemoryDeviceInfo_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_MemoryDeviceInfo_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryDeviceInfo_members(Visitor *v, MemoryDeviceInfo *obj, Error **errp)
{
    if (!visit_type_q_obj_MemoryDeviceInfo_base_members(v, (q_obj_MemoryDeviceInfo_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case MEMORY_DEVICE_INFO_KIND_DIMM:
        return visit_type_PCDIMMDeviceInfoWrapper_members(v, &obj->u.dimm, errp);
    case MEMORY_DEVICE_INFO_KIND_NVDIMM:
        return visit_type_PCDIMMDeviceInfoWrapper_members(v, &obj->u.nvdimm, errp);
    case MEMORY_DEVICE_INFO_KIND_VIRTIO_PMEM:
        return visit_type_VirtioPMEMDeviceInfoWrapper_members(v, &obj->u.virtio_pmem, errp);
    case MEMORY_DEVICE_INFO_KIND_VIRTIO_MEM:
        return visit_type_VirtioMEMDeviceInfoWrapper_members(v, &obj->u.virtio_mem, errp);
    case MEMORY_DEVICE_INFO_KIND_SGX_EPC:
        return visit_type_SgxEPCDeviceInfoWrapper_members(v, &obj->u.sgx_epc, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_MemoryDeviceInfo(Visitor *v, const char *name,
                 MemoryDeviceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MemoryDeviceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MemoryDeviceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemoryDeviceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SgxEPC_members(Visitor *v, SgxEPC *obj, Error **errp)
{
    if (!visit_type_str(v, "memdev", &obj->memdev, errp)) {
        return false;
    }
    if (!visit_type_int(v, "node", &obj->node, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SgxEPC(Visitor *v, const char *name,
                 SgxEPC **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SgxEPC), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SgxEPC_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SgxEPC(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SgxEPCList(Visitor *v, const char *name,
                 SgxEPCList **obj, Error **errp)
{
    bool ok = false;
    SgxEPCList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SgxEPCList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SgxEPC(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SgxEPCList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SgxEPCProperties_members(Visitor *v, SgxEPCProperties *obj, Error **errp)
{
    if (!visit_type_SgxEPCList(v, "sgx-epc", &obj->sgx_epc, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SgxEPCProperties(Visitor *v, const char *name,
                 SgxEPCProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SgxEPCProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SgxEPCProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SgxEPCProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemoryDeviceInfoList(Visitor *v, const char *name,
                 MemoryDeviceInfoList **obj, Error **errp)
{
    bool ok = false;
    MemoryDeviceInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (MemoryDeviceInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_MemoryDeviceInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemoryDeviceInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg_members(Visitor *v, q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg *obj, Error **errp)
{
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_str(v, "qom-path", &obj->qom_path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_MEM_UNPLUG_ERROR_arg_members(Visitor *v, q_obj_MEM_UNPLUG_ERROR_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_str(v, "msg", &obj->msg, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_MEM_UNPLUG_ERROR_arg(Visitor *v, const char *name,
                 q_obj_MEM_UNPLUG_ERROR_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_MEM_UNPLUG_ERROR_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_MEM_UNPLUG_ERROR_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_MEM_UNPLUG_ERROR_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BootConfiguration_members(Visitor *v, BootConfiguration *obj, Error **errp)
{
    if (visit_optional(v, "order", &obj->has_order)) {
        if (!visit_type_str(v, "order", &obj->order, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "once", &obj->has_once)) {
        if (!visit_type_str(v, "once", &obj->once, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "menu", &obj->has_menu)) {
        if (!visit_type_bool(v, "menu", &obj->menu, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "splash", &obj->has_splash)) {
        if (!visit_type_str(v, "splash", &obj->splash, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "splash-time", &obj->has_splash_time)) {
        if (!visit_type_int(v, "splash-time", &obj->splash_time, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "reboot-timeout", &obj->has_reboot_timeout)) {
        if (!visit_type_int(v, "reboot-timeout", &obj->reboot_timeout, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "strict", &obj->has_strict)) {
        if (!visit_type_bool(v, "strict", &obj->strict, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BootConfiguration(Visitor *v, const char *name,
                 BootConfiguration **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BootConfiguration), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BootConfiguration_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BootConfiguration(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SMPConfiguration_members(Visitor *v, SMPConfiguration *obj, Error **errp)
{
    if (visit_optional(v, "cpus", &obj->has_cpus)) {
        if (!visit_type_int(v, "cpus", &obj->cpus, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "sockets", &obj->has_sockets)) {
        if (!visit_type_int(v, "sockets", &obj->sockets, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dies", &obj->has_dies)) {
        if (!visit_type_int(v, "dies", &obj->dies, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "clusters", &obj->has_clusters)) {
        if (!visit_type_int(v, "clusters", &obj->clusters, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cores", &obj->has_cores)) {
        if (!visit_type_int(v, "cores", &obj->cores, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "threads", &obj->has_threads)) {
        if (!visit_type_int(v, "threads", &obj->threads, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "maxcpus", &obj->has_maxcpus)) {
        if (!visit_type_int(v, "maxcpus", &obj->maxcpus, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SMPConfiguration(Visitor *v, const char *name,
                 SMPConfiguration **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SMPConfiguration), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SMPConfiguration_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SMPConfiguration(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SmbiosEntryPointType(Visitor *v, const char *name,
                 SmbiosEntryPointType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SmbiosEntryPointType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_MemorySizeConfiguration_members(Visitor *v, MemorySizeConfiguration *obj, Error **errp)
{
    if (visit_optional(v, "size", &obj->has_size)) {
        if (!visit_type_size(v, "size", &obj->size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-size", &obj->has_max_size)) {
        if (!visit_type_size(v, "max-size", &obj->max_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "slots", &obj->has_slots)) {
        if (!visit_type_uint64(v, "slots", &obj->slots, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MemorySizeConfiguration(Visitor *v, const char *name,
                 MemorySizeConfiguration **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MemorySizeConfiguration), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MemorySizeConfiguration_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemorySizeConfiguration(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_FDT)
bool visit_type_q_obj_dumpdtb_arg_members(Visitor *v, q_obj_dumpdtb_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_dumpdtb_arg(Visitor *v, const char *name,
                 q_obj_dumpdtb_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_dumpdtb_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_dumpdtb_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_dumpdtb_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_FDT) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_machine_c;
