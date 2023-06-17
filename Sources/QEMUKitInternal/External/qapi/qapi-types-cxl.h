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

#ifndef QAPI_TYPES_CXL_H
#define QAPI_TYPES_CXL_H

#include "qapi-builtin-types.h"

typedef enum CxlUncorErrorType {
    CXL_UNCOR_ERROR_TYPE_CACHE_DATA_PARITY,
    CXL_UNCOR_ERROR_TYPE_CACHE_ADDRESS_PARITY,
    CXL_UNCOR_ERROR_TYPE_CACHE_BE_PARITY,
    CXL_UNCOR_ERROR_TYPE_CACHE_DATA_ECC,
    CXL_UNCOR_ERROR_TYPE_MEM_DATA_PARITY,
    CXL_UNCOR_ERROR_TYPE_MEM_ADDRESS_PARITY,
    CXL_UNCOR_ERROR_TYPE_MEM_BE_PARITY,
    CXL_UNCOR_ERROR_TYPE_MEM_DATA_ECC,
    CXL_UNCOR_ERROR_TYPE_REINIT_THRESHOLD,
    CXL_UNCOR_ERROR_TYPE_RSVD_ENCODING,
    CXL_UNCOR_ERROR_TYPE_POISON_RECEIVED,
    CXL_UNCOR_ERROR_TYPE_RECEIVER_OVERFLOW,
    CXL_UNCOR_ERROR_TYPE_INTERNAL,
    CXL_UNCOR_ERROR_TYPE_CXL_IDE_TX,
    CXL_UNCOR_ERROR_TYPE_CXL_IDE_RX,
    CXL_UNCOR_ERROR_TYPE__MAX,
} CxlUncorErrorType;

#define CxlUncorErrorType_str(val) \
    qapi_enum_lookup(&CxlUncorErrorType_lookup, (val))

extern const QEnumLookup CxlUncorErrorType_lookup;

typedef struct CXLUncorErrorRecord CXLUncorErrorRecord;

typedef struct CXLUncorErrorRecordList CXLUncorErrorRecordList;

typedef struct q_obj_cxl_inject_uncorrectable_errors_arg q_obj_cxl_inject_uncorrectable_errors_arg;

typedef enum CxlCorErrorType {
    CXL_COR_ERROR_TYPE_CACHE_DATA_ECC,
    CXL_COR_ERROR_TYPE_MEM_DATA_ECC,
    CXL_COR_ERROR_TYPE_CRC_THRESHOLD,
    CXL_COR_ERROR_TYPE_RETRY_THRESHOLD,
    CXL_COR_ERROR_TYPE_CACHE_POISON_RECEIVED,
    CXL_COR_ERROR_TYPE_MEM_POISON_RECEIVED,
    CXL_COR_ERROR_TYPE_PHYSICAL,
    CXL_COR_ERROR_TYPE__MAX,
} CxlCorErrorType;

#define CxlCorErrorType_str(val) \
    qapi_enum_lookup(&CxlCorErrorType_lookup, (val))

extern const QEnumLookup CxlCorErrorType_lookup;

typedef struct q_obj_cxl_inject_correctable_error_arg q_obj_cxl_inject_correctable_error_arg;

struct CXLUncorErrorRecord {
    CxlUncorErrorType type;
    uint32List *header;
};

void qapi_free_CXLUncorErrorRecord(CXLUncorErrorRecord *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CXLUncorErrorRecord, qapi_free_CXLUncorErrorRecord)

struct CXLUncorErrorRecordList {
    CXLUncorErrorRecordList *next;
    CXLUncorErrorRecord *value;
};

void qapi_free_CXLUncorErrorRecordList(CXLUncorErrorRecordList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CXLUncorErrorRecordList, qapi_free_CXLUncorErrorRecordList)

struct q_obj_cxl_inject_uncorrectable_errors_arg {
    char *path;
    CXLUncorErrorRecordList *errors;
};

void qapi_free_q_obj_cxl_inject_uncorrectable_errors_arg(q_obj_cxl_inject_uncorrectable_errors_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_cxl_inject_uncorrectable_errors_arg, qapi_free_q_obj_cxl_inject_uncorrectable_errors_arg)

struct q_obj_cxl_inject_correctable_error_arg {
    char *path;
    CxlCorErrorType type;
};

void qapi_free_q_obj_cxl_inject_correctable_error_arg(q_obj_cxl_inject_correctable_error_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_cxl_inject_correctable_error_arg, qapi_free_q_obj_cxl_inject_correctable_error_arg)

#endif /* QAPI_TYPES_CXL_H */
