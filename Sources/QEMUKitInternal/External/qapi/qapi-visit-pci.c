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
#include "qapi-visit-pci.h"

bool visit_type_PciMemoryRange_members(Visitor *v, PciMemoryRange *obj, Error **errp)
{
    if (!visit_type_int(v, "base", &obj->base, errp)) {
        return false;
    }
    if (!visit_type_int(v, "limit", &obj->limit, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PciMemoryRange(Visitor *v, const char *name,
                 PciMemoryRange **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PciMemoryRange), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PciMemoryRange_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciMemoryRange(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciMemoryRegion_members(Visitor *v, PciMemoryRegion *obj, Error **errp)
{
    if (!visit_type_int(v, "bar", &obj->bar, errp)) {
        return false;
    }
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_int(v, "address", &obj->address, errp)) {
        return false;
    }
    if (!visit_type_int(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "prefetch", &obj->has_prefetch)) {
        if (!visit_type_bool(v, "prefetch", &obj->prefetch, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mem_type_64", &obj->has_mem_type_64)) {
        if (!visit_type_bool(v, "mem_type_64", &obj->mem_type_64, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_PciMemoryRegion(Visitor *v, const char *name,
                 PciMemoryRegion **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PciMemoryRegion), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PciMemoryRegion_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciMemoryRegion(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciBusInfo_members(Visitor *v, PciBusInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "number", &obj->number, errp)) {
        return false;
    }
    if (!visit_type_int(v, "secondary", &obj->secondary, errp)) {
        return false;
    }
    if (!visit_type_int(v, "subordinate", &obj->subordinate, errp)) {
        return false;
    }
    if (!visit_type_PciMemoryRange(v, "io_range", &obj->io_range, errp)) {
        return false;
    }
    if (!visit_type_PciMemoryRange(v, "memory_range", &obj->memory_range, errp)) {
        return false;
    }
    if (!visit_type_PciMemoryRange(v, "prefetchable_range", &obj->prefetchable_range, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PciBusInfo(Visitor *v, const char *name,
                 PciBusInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PciBusInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PciBusInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciBusInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciDeviceInfoList(Visitor *v, const char *name,
                 PciDeviceInfoList **obj, Error **errp)
{
    bool ok = false;
    PciDeviceInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (PciDeviceInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_PciDeviceInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciDeviceInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciBridgeInfo_members(Visitor *v, PciBridgeInfo *obj, Error **errp)
{
    if (!visit_type_PciBusInfo(v, "bus", &obj->bus, errp)) {
        return false;
    }
    if (visit_optional(v, "devices", &obj->has_devices)) {
        if (!visit_type_PciDeviceInfoList(v, "devices", &obj->devices, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_PciBridgeInfo(Visitor *v, const char *name,
                 PciBridgeInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PciBridgeInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PciBridgeInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciBridgeInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciDeviceClass_members(Visitor *v, PciDeviceClass *obj, Error **errp)
{
    if (visit_optional(v, "desc", &obj->has_desc)) {
        if (!visit_type_str(v, "desc", &obj->desc, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "class", &obj->q_class, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PciDeviceClass(Visitor *v, const char *name,
                 PciDeviceClass **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PciDeviceClass), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PciDeviceClass_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciDeviceClass(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciDeviceId_members(Visitor *v, PciDeviceId *obj, Error **errp)
{
    if (!visit_type_int(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_int(v, "vendor", &obj->vendor, errp)) {
        return false;
    }
    if (visit_optional(v, "subsystem", &obj->has_subsystem)) {
        if (!visit_type_int(v, "subsystem", &obj->subsystem, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "subsystem-vendor", &obj->has_subsystem_vendor)) {
        if (!visit_type_int(v, "subsystem-vendor", &obj->subsystem_vendor, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_PciDeviceId(Visitor *v, const char *name,
                 PciDeviceId **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PciDeviceId), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PciDeviceId_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciDeviceId(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciMemoryRegionList(Visitor *v, const char *name,
                 PciMemoryRegionList **obj, Error **errp)
{
    bool ok = false;
    PciMemoryRegionList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (PciMemoryRegionList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_PciMemoryRegion(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciMemoryRegionList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciDeviceInfo_members(Visitor *v, PciDeviceInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "bus", &obj->bus, errp)) {
        return false;
    }
    if (!visit_type_int(v, "slot", &obj->slot, errp)) {
        return false;
    }
    if (!visit_type_int(v, "function", &obj->function, errp)) {
        return false;
    }
    if (!visit_type_PciDeviceClass(v, "class_info", &obj->class_info, errp)) {
        return false;
    }
    if (!visit_type_PciDeviceId(v, "id", &obj->id, errp)) {
        return false;
    }
    if (visit_optional(v, "irq", &obj->has_irq)) {
        if (!visit_type_int(v, "irq", &obj->irq, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "irq_pin", &obj->irq_pin, errp)) {
        return false;
    }
    if (!visit_type_str(v, "qdev_id", &obj->qdev_id, errp)) {
        return false;
    }
    if (visit_optional(v, "pci_bridge", &obj->has_pci_bridge)) {
        if (!visit_type_PciBridgeInfo(v, "pci_bridge", &obj->pci_bridge, errp)) {
            return false;
        }
    }
    if (!visit_type_PciMemoryRegionList(v, "regions", &obj->regions, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PciDeviceInfo(Visitor *v, const char *name,
                 PciDeviceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PciDeviceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PciDeviceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciDeviceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciInfo_members(Visitor *v, PciInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "bus", &obj->bus, errp)) {
        return false;
    }
    if (!visit_type_PciDeviceInfoList(v, "devices", &obj->devices, errp)) {
        return false;
    }
    return true;
}

bool visit_type_PciInfo(Visitor *v, const char *name,
                 PciInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(PciInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_PciInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PciInfoList(Visitor *v, const char *name,
                 PciInfoList **obj, Error **errp)
{
    bool ok = false;
    PciInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (PciInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_PciInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_PciInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_pci_c;
