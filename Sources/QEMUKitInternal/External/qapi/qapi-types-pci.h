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

#ifndef QAPI_TYPES_PCI_H
#define QAPI_TYPES_PCI_H

#include "qapi-builtin-types.h"

typedef struct PciMemoryRange PciMemoryRange;

typedef struct PciMemoryRegion PciMemoryRegion;

typedef struct PciBusInfo PciBusInfo;

typedef struct PciDeviceInfoList PciDeviceInfoList;

typedef struct PciBridgeInfo PciBridgeInfo;

typedef struct PciDeviceClass PciDeviceClass;

typedef struct PciDeviceId PciDeviceId;

typedef struct PciMemoryRegionList PciMemoryRegionList;

typedef struct PciDeviceInfo PciDeviceInfo;

typedef struct PciInfo PciInfo;

typedef struct PciInfoList PciInfoList;

struct PciMemoryRange {
    int64_t base;
    int64_t limit;
};

void qapi_free_PciMemoryRange(PciMemoryRange *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciMemoryRange, qapi_free_PciMemoryRange)

struct PciMemoryRegion {
    int64_t bar;
    char *type;
    int64_t address;
    int64_t size;
    bool has_prefetch;
    bool prefetch;
    bool has_mem_type_64;
    bool mem_type_64;
};

void qapi_free_PciMemoryRegion(PciMemoryRegion *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciMemoryRegion, qapi_free_PciMemoryRegion)

struct PciBusInfo {
    int64_t number;
    int64_t secondary;
    int64_t subordinate;
    PciMemoryRange *io_range;
    PciMemoryRange *memory_range;
    PciMemoryRange *prefetchable_range;
};

void qapi_free_PciBusInfo(PciBusInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciBusInfo, qapi_free_PciBusInfo)

struct PciDeviceInfoList {
    PciDeviceInfoList *next;
    PciDeviceInfo *value;
};

void qapi_free_PciDeviceInfoList(PciDeviceInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciDeviceInfoList, qapi_free_PciDeviceInfoList)

struct PciBridgeInfo {
    PciBusInfo *bus;
    bool has_devices;
    PciDeviceInfoList *devices;
};

void qapi_free_PciBridgeInfo(PciBridgeInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciBridgeInfo, qapi_free_PciBridgeInfo)

struct PciDeviceClass {
    bool has_desc;
    char *desc;
    int64_t q_class;
};

void qapi_free_PciDeviceClass(PciDeviceClass *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciDeviceClass, qapi_free_PciDeviceClass)

struct PciDeviceId {
    int64_t device;
    int64_t vendor;
    bool has_subsystem;
    int64_t subsystem;
    bool has_subsystem_vendor;
    int64_t subsystem_vendor;
};

void qapi_free_PciDeviceId(PciDeviceId *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciDeviceId, qapi_free_PciDeviceId)

struct PciMemoryRegionList {
    PciMemoryRegionList *next;
    PciMemoryRegion *value;
};

void qapi_free_PciMemoryRegionList(PciMemoryRegionList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciMemoryRegionList, qapi_free_PciMemoryRegionList)

struct PciDeviceInfo {
    int64_t bus;
    int64_t slot;
    int64_t function;
    PciDeviceClass *class_info;
    PciDeviceId *id;
    bool has_irq;
    int64_t irq;
    int64_t irq_pin;
    char *qdev_id;
    bool has_pci_bridge;
    PciBridgeInfo *pci_bridge;
    PciMemoryRegionList *regions;
};

void qapi_free_PciDeviceInfo(PciDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciDeviceInfo, qapi_free_PciDeviceInfo)

struct PciInfo {
    int64_t bus;
    PciDeviceInfoList *devices;
};

void qapi_free_PciInfo(PciInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciInfo, qapi_free_PciInfo)

struct PciInfoList {
    PciInfoList *next;
    PciInfo *value;
};

void qapi_free_PciInfoList(PciInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PciInfoList, qapi_free_PciInfoList)

#endif /* QAPI_TYPES_PCI_H */
