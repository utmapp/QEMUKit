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
#include "qapi-types-dump.h"
#include "qapi-visit-dump.h"

const QEnumLookup DumpGuestMemoryFormat_lookup = {
    .array = (const char *const[]) {
        [DUMP_GUEST_MEMORY_FORMAT_ELF] = "elf",
        [DUMP_GUEST_MEMORY_FORMAT_KDUMP_ZLIB] = "kdump-zlib",
        [DUMP_GUEST_MEMORY_FORMAT_KDUMP_LZO] = "kdump-lzo",
        [DUMP_GUEST_MEMORY_FORMAT_KDUMP_SNAPPY] = "kdump-snappy",
        [DUMP_GUEST_MEMORY_FORMAT_WIN_DMP] = "win-dmp",
    },
    .size = DUMP_GUEST_MEMORY_FORMAT__MAX
};

void qapi_free_q_obj_dump_guest_memory_arg(q_obj_dump_guest_memory_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_dump_guest_memory_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup DumpStatus_lookup = {
    .array = (const char *const[]) {
        [DUMP_STATUS_NONE] = "none",
        [DUMP_STATUS_ACTIVE] = "active",
        [DUMP_STATUS_COMPLETED] = "completed",
        [DUMP_STATUS_FAILED] = "failed",
    },
    .size = DUMP_STATUS__MAX
};

void qapi_free_DumpQueryResult(DumpQueryResult *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DumpQueryResult(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_DUMP_COMPLETED_arg(q_obj_DUMP_COMPLETED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_DUMP_COMPLETED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DumpGuestMemoryFormatList(DumpGuestMemoryFormatList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DumpGuestMemoryFormatList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DumpGuestMemoryCapability(DumpGuestMemoryCapability *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DumpGuestMemoryCapability(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_dump_c;
