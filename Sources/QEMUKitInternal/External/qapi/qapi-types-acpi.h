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

#ifndef QAPI_TYPES_ACPI_H
#define QAPI_TYPES_ACPI_H

#include "qapi-builtin-types.h"

typedef struct AcpiTableOptions AcpiTableOptions;

typedef enum ACPISlotType {
    ACPI_SLOT_TYPE_DIMM,
    ACPI_SLOT_TYPE_CPU,
    ACPI_SLOT_TYPE__MAX,
} ACPISlotType;

#define ACPISlotType_str(val) \
    qapi_enum_lookup(&ACPISlotType_lookup, (val))

extern const QEnumLookup ACPISlotType_lookup;

typedef struct ACPIOSTInfo ACPIOSTInfo;

typedef struct ACPIOSTInfoList ACPIOSTInfoList;

typedef struct q_obj_ACPI_DEVICE_OST_arg q_obj_ACPI_DEVICE_OST_arg;

struct AcpiTableOptions {
    bool has_sig;
    char *sig;
    bool has_rev;
    uint8_t rev;
    bool has_oem_id;
    char *oem_id;
    bool has_oem_table_id;
    char *oem_table_id;
    bool has_oem_rev;
    uint32_t oem_rev;
    bool has_asl_compiler_id;
    char *asl_compiler_id;
    bool has_asl_compiler_rev;
    uint32_t asl_compiler_rev;
    bool has_file;
    char *file;
    bool has_data;
    char *data;
};

void qapi_free_AcpiTableOptions(AcpiTableOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AcpiTableOptions, qapi_free_AcpiTableOptions)

struct ACPIOSTInfo {
    bool has_device;
    char *device;
    char *slot;
    ACPISlotType slot_type;
    int64_t source;
    int64_t status;
};

void qapi_free_ACPIOSTInfo(ACPIOSTInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ACPIOSTInfo, qapi_free_ACPIOSTInfo)

struct ACPIOSTInfoList {
    ACPIOSTInfoList *next;
    ACPIOSTInfo *value;
};

void qapi_free_ACPIOSTInfoList(ACPIOSTInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ACPIOSTInfoList, qapi_free_ACPIOSTInfoList)

struct q_obj_ACPI_DEVICE_OST_arg {
    ACPIOSTInfo *info;
};

void qapi_free_q_obj_ACPI_DEVICE_OST_arg(q_obj_ACPI_DEVICE_OST_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_ACPI_DEVICE_OST_arg, qapi_free_q_obj_ACPI_DEVICE_OST_arg)

#endif /* QAPI_TYPES_ACPI_H */
