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
#include "qapi-visit-acpi.h"

bool visit_type_AcpiTableOptions_members(Visitor *v, AcpiTableOptions *obj, Error **errp)
{
    if (visit_optional(v, "sig", &obj->has_sig)) {
        if (!visit_type_str(v, "sig", &obj->sig, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "rev", &obj->has_rev)) {
        if (!visit_type_uint8(v, "rev", &obj->rev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "oem_id", &obj->has_oem_id)) {
        if (!visit_type_str(v, "oem_id", &obj->oem_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "oem_table_id", &obj->has_oem_table_id)) {
        if (!visit_type_str(v, "oem_table_id", &obj->oem_table_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "oem_rev", &obj->has_oem_rev)) {
        if (!visit_type_uint32(v, "oem_rev", &obj->oem_rev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "asl_compiler_id", &obj->has_asl_compiler_id)) {
        if (!visit_type_str(v, "asl_compiler_id", &obj->asl_compiler_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "asl_compiler_rev", &obj->has_asl_compiler_rev)) {
        if (!visit_type_uint32(v, "asl_compiler_rev", &obj->asl_compiler_rev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "file", &obj->has_file)) {
        if (!visit_type_str(v, "file", &obj->file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "data", &obj->has_data)) {
        if (!visit_type_str(v, "data", &obj->data, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AcpiTableOptions(Visitor *v, const char *name,
                 AcpiTableOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AcpiTableOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AcpiTableOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AcpiTableOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ACPISlotType(Visitor *v, const char *name,
                 ACPISlotType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ACPISlotType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_ACPIOSTInfo_members(Visitor *v, ACPIOSTInfo *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (!visit_type_str(v, "device", &obj->device, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "slot", &obj->slot, errp)) {
        return false;
    }
    if (!visit_type_ACPISlotType(v, "slot-type", &obj->slot_type, errp)) {
        return false;
    }
    if (!visit_type_int(v, "source", &obj->source, errp)) {
        return false;
    }
    if (!visit_type_int(v, "status", &obj->status, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ACPIOSTInfo(Visitor *v, const char *name,
                 ACPIOSTInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ACPIOSTInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ACPIOSTInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ACPIOSTInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ACPIOSTInfoList(Visitor *v, const char *name,
                 ACPIOSTInfoList **obj, Error **errp)
{
    bool ok = false;
    ACPIOSTInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (ACPIOSTInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_ACPIOSTInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ACPIOSTInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_ACPI_DEVICE_OST_arg_members(Visitor *v, q_obj_ACPI_DEVICE_OST_arg *obj, Error **errp)
{
    if (!visit_type_ACPIOSTInfo(v, "info", &obj->info, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ACPI_DEVICE_OST_arg(Visitor *v, const char *name,
                 q_obj_ACPI_DEVICE_OST_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_ACPI_DEVICE_OST_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_ACPI_DEVICE_OST_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_ACPI_DEVICE_OST_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_acpi_c;
