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

#ifndef QAPI_VISIT_PCI_H
#define QAPI_VISIT_PCI_H

#include "qapi-builtin-visit.h"
#include "qapi-types-pci.h"


bool visit_type_PciMemoryRange_members(Visitor *v, PciMemoryRange *obj, Error **errp);

bool visit_type_PciMemoryRange(Visitor *v, const char *name,
                 PciMemoryRange **obj, Error **errp);

bool visit_type_PciMemoryRegion_members(Visitor *v, PciMemoryRegion *obj, Error **errp);

bool visit_type_PciMemoryRegion(Visitor *v, const char *name,
                 PciMemoryRegion **obj, Error **errp);

bool visit_type_PciBusInfo_members(Visitor *v, PciBusInfo *obj, Error **errp);

bool visit_type_PciBusInfo(Visitor *v, const char *name,
                 PciBusInfo **obj, Error **errp);

bool visit_type_PciDeviceInfoList(Visitor *v, const char *name,
                 PciDeviceInfoList **obj, Error **errp);

bool visit_type_PciBridgeInfo_members(Visitor *v, PciBridgeInfo *obj, Error **errp);

bool visit_type_PciBridgeInfo(Visitor *v, const char *name,
                 PciBridgeInfo **obj, Error **errp);

bool visit_type_PciDeviceClass_members(Visitor *v, PciDeviceClass *obj, Error **errp);

bool visit_type_PciDeviceClass(Visitor *v, const char *name,
                 PciDeviceClass **obj, Error **errp);

bool visit_type_PciDeviceId_members(Visitor *v, PciDeviceId *obj, Error **errp);

bool visit_type_PciDeviceId(Visitor *v, const char *name,
                 PciDeviceId **obj, Error **errp);

bool visit_type_PciMemoryRegionList(Visitor *v, const char *name,
                 PciMemoryRegionList **obj, Error **errp);

bool visit_type_PciDeviceInfo_members(Visitor *v, PciDeviceInfo *obj, Error **errp);

bool visit_type_PciDeviceInfo(Visitor *v, const char *name,
                 PciDeviceInfo **obj, Error **errp);

bool visit_type_PciInfo_members(Visitor *v, PciInfo *obj, Error **errp);

bool visit_type_PciInfo(Visitor *v, const char *name,
                 PciInfo **obj, Error **errp);

bool visit_type_PciInfoList(Visitor *v, const char *name,
                 PciInfoList **obj, Error **errp);

#endif /* QAPI_VISIT_PCI_H */
