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

#ifndef QAPI_VISIT_ACPI_H
#define QAPI_VISIT_ACPI_H

#include "qapi-builtin-visit.h"
#include "qapi-types-acpi.h"


bool visit_type_AcpiTableOptions_members(Visitor *v, AcpiTableOptions *obj, Error **errp);

bool visit_type_AcpiTableOptions(Visitor *v, const char *name,
                 AcpiTableOptions **obj, Error **errp);

bool visit_type_ACPISlotType(Visitor *v, const char *name,
                 ACPISlotType *obj, Error **errp);

bool visit_type_ACPIOSTInfo_members(Visitor *v, ACPIOSTInfo *obj, Error **errp);

bool visit_type_ACPIOSTInfo(Visitor *v, const char *name,
                 ACPIOSTInfo **obj, Error **errp);

bool visit_type_ACPIOSTInfoList(Visitor *v, const char *name,
                 ACPIOSTInfoList **obj, Error **errp);

bool visit_type_q_obj_ACPI_DEVICE_OST_arg_members(Visitor *v, q_obj_ACPI_DEVICE_OST_arg *obj, Error **errp);

bool visit_type_q_obj_ACPI_DEVICE_OST_arg(Visitor *v, const char *name,
                 q_obj_ACPI_DEVICE_OST_arg **obj, Error **errp);

#endif /* QAPI_VISIT_ACPI_H */
