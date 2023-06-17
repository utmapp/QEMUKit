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

#ifndef QAPI_COMMANDS_MACHINE_H
#define QAPI_COMMANDS_MACHINE_H

#include "qapi-commands-common.h"
#include "qapi-types-machine.h"

CpuInfoFastList *qmp_query_cpus_fast(Error **errp, void *ctx);
MachineInfoList *qmp_query_machines(Error **errp, void *ctx);
CurrentMachineParams *qmp_query_current_machine(Error **errp, void *ctx);
TargetInfo *qmp_query_target(Error **errp, void *ctx);
UuidInfo *qmp_query_uuid(Error **errp, void *ctx);
GuidInfo *qmp_query_vm_generation_id(Error **errp, void *ctx);
void qmp_system_reset(Error **errp, void *ctx);
void qmp_system_powerdown(Error **errp, void *ctx);
void qmp_system_wakeup(Error **errp, void *ctx);
void qmp_inject_nmi(Error **errp, void *ctx);
KvmInfo *qmp_query_kvm(Error **errp, void *ctx);
void qmp_memsave(int64_t val, int64_t size, const char *filename, bool has_cpu_index, int64_t cpu_index, Error **errp, void *ctx);
void qmp_pmemsave(int64_t val, int64_t size, const char *filename, Error **errp, void *ctx);
MemdevList *qmp_query_memdev(Error **errp, void *ctx);
HotpluggableCPUList *qmp_query_hotpluggable_cpus(Error **errp, void *ctx);
void qmp_set_numa_node(NumaOptions *arg, Error **errp, void *ctx);
void qmp_balloon(int64_t value, Error **errp, void *ctx);
BalloonInfo *qmp_query_balloon(Error **errp, void *ctx);
MemoryInfo *qmp_query_memory_size_summary(Error **errp, void *ctx);
MemoryDeviceInfoList *qmp_query_memory_devices(Error **errp, void *ctx);
HumanReadableText *qmp_x_query_irq(Error **errp, void *ctx);
#if defined(CONFIG_TCG)
HumanReadableText *qmp_x_query_jit(Error **errp, void *ctx);
#endif /* defined(CONFIG_TCG) */
HumanReadableText *qmp_x_query_numa(Error **errp, void *ctx);
#if defined(CONFIG_TCG)
HumanReadableText *qmp_x_query_opcount(Error **errp, void *ctx);
#endif /* defined(CONFIG_TCG) */
#if defined(CONFIG_TCG)
HumanReadableText *qmp_x_query_profile(Error **errp, void *ctx);
#endif /* defined(CONFIG_TCG) */
HumanReadableText *qmp_x_query_ramblock(Error **errp, void *ctx);
HumanReadableText *qmp_x_query_rdma(Error **errp, void *ctx);
HumanReadableText *qmp_x_query_roms(Error **errp, void *ctx);
HumanReadableText *qmp_x_query_usb(Error **errp, void *ctx);
#if defined(CONFIG_FDT)
void qmp_dumpdtb(const char *filename, Error **errp, void *ctx);
#endif /* defined(CONFIG_FDT) */

#endif /* QAPI_COMMANDS_MACHINE_H */
