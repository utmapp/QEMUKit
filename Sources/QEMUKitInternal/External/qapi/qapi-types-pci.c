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
#include "qapi-types-pci.h"
#include "qapi-visit-pci.h"

void qapi_free_PciMemoryRange(PciMemoryRange *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciMemoryRange(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciMemoryRegion(PciMemoryRegion *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciMemoryRegion(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciBusInfo(PciBusInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciBusInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciDeviceInfoList(PciDeviceInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciDeviceInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciBridgeInfo(PciBridgeInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciBridgeInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciDeviceClass(PciDeviceClass *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciDeviceClass(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciDeviceId(PciDeviceId *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciDeviceId(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciMemoryRegionList(PciMemoryRegionList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciMemoryRegionList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciDeviceInfo(PciDeviceInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciDeviceInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciInfo(PciInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PciInfoList(PciInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PciInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_pci_c;
