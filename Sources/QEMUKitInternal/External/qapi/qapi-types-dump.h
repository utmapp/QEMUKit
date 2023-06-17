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

#ifndef QAPI_TYPES_DUMP_H
#define QAPI_TYPES_DUMP_H

#include "qapi-builtin-types.h"

typedef enum DumpGuestMemoryFormat {
    DUMP_GUEST_MEMORY_FORMAT_ELF,
    DUMP_GUEST_MEMORY_FORMAT_KDUMP_ZLIB,
    DUMP_GUEST_MEMORY_FORMAT_KDUMP_LZO,
    DUMP_GUEST_MEMORY_FORMAT_KDUMP_SNAPPY,
    DUMP_GUEST_MEMORY_FORMAT_WIN_DMP,
    DUMP_GUEST_MEMORY_FORMAT__MAX,
} DumpGuestMemoryFormat;

#define DumpGuestMemoryFormat_str(val) \
    qapi_enum_lookup(&DumpGuestMemoryFormat_lookup, (val))

extern const QEnumLookup DumpGuestMemoryFormat_lookup;

typedef struct q_obj_dump_guest_memory_arg q_obj_dump_guest_memory_arg;

typedef enum DumpStatus {
    DUMP_STATUS_NONE,
    DUMP_STATUS_ACTIVE,
    DUMP_STATUS_COMPLETED,
    DUMP_STATUS_FAILED,
    DUMP_STATUS__MAX,
} DumpStatus;

#define DumpStatus_str(val) \
    qapi_enum_lookup(&DumpStatus_lookup, (val))

extern const QEnumLookup DumpStatus_lookup;

typedef struct DumpQueryResult DumpQueryResult;

typedef struct q_obj_DUMP_COMPLETED_arg q_obj_DUMP_COMPLETED_arg;

typedef struct DumpGuestMemoryFormatList DumpGuestMemoryFormatList;

typedef struct DumpGuestMemoryCapability DumpGuestMemoryCapability;

struct q_obj_dump_guest_memory_arg {
    bool paging;
    char *protocol;
    bool has_detach;
    bool detach;
    bool has_begin;
    int64_t begin;
    bool has_length;
    int64_t length;
    bool has_format;
    DumpGuestMemoryFormat format;
};

void qapi_free_q_obj_dump_guest_memory_arg(q_obj_dump_guest_memory_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_dump_guest_memory_arg, qapi_free_q_obj_dump_guest_memory_arg)

struct DumpQueryResult {
    DumpStatus status;
    int64_t completed;
    int64_t total;
};

void qapi_free_DumpQueryResult(DumpQueryResult *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DumpQueryResult, qapi_free_DumpQueryResult)

struct q_obj_DUMP_COMPLETED_arg {
    DumpQueryResult *result;
    bool has_error;
    char *error;
};

void qapi_free_q_obj_DUMP_COMPLETED_arg(q_obj_DUMP_COMPLETED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_DUMP_COMPLETED_arg, qapi_free_q_obj_DUMP_COMPLETED_arg)

struct DumpGuestMemoryFormatList {
    DumpGuestMemoryFormatList *next;
    DumpGuestMemoryFormat value;
};

void qapi_free_DumpGuestMemoryFormatList(DumpGuestMemoryFormatList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DumpGuestMemoryFormatList, qapi_free_DumpGuestMemoryFormatList)

struct DumpGuestMemoryCapability {
    DumpGuestMemoryFormatList *formats;
};

void qapi_free_DumpGuestMemoryCapability(DumpGuestMemoryCapability *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DumpGuestMemoryCapability, qapi_free_DumpGuestMemoryCapability)

#endif /* QAPI_TYPES_DUMP_H */
