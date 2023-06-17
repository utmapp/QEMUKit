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
#include "qapi-types-cxl.h"
#include "qapi-visit-cxl.h"

const QEnumLookup CxlUncorErrorType_lookup = {
    .array = (const char *const[]) {
        [CXL_UNCOR_ERROR_TYPE_CACHE_DATA_PARITY] = "cache-data-parity",
        [CXL_UNCOR_ERROR_TYPE_CACHE_ADDRESS_PARITY] = "cache-address-parity",
        [CXL_UNCOR_ERROR_TYPE_CACHE_BE_PARITY] = "cache-be-parity",
        [CXL_UNCOR_ERROR_TYPE_CACHE_DATA_ECC] = "cache-data-ecc",
        [CXL_UNCOR_ERROR_TYPE_MEM_DATA_PARITY] = "mem-data-parity",
        [CXL_UNCOR_ERROR_TYPE_MEM_ADDRESS_PARITY] = "mem-address-parity",
        [CXL_UNCOR_ERROR_TYPE_MEM_BE_PARITY] = "mem-be-parity",
        [CXL_UNCOR_ERROR_TYPE_MEM_DATA_ECC] = "mem-data-ecc",
        [CXL_UNCOR_ERROR_TYPE_REINIT_THRESHOLD] = "reinit-threshold",
        [CXL_UNCOR_ERROR_TYPE_RSVD_ENCODING] = "rsvd-encoding",
        [CXL_UNCOR_ERROR_TYPE_POISON_RECEIVED] = "poison-received",
        [CXL_UNCOR_ERROR_TYPE_RECEIVER_OVERFLOW] = "receiver-overflow",
        [CXL_UNCOR_ERROR_TYPE_INTERNAL] = "internal",
        [CXL_UNCOR_ERROR_TYPE_CXL_IDE_TX] = "cxl-ide-tx",
        [CXL_UNCOR_ERROR_TYPE_CXL_IDE_RX] = "cxl-ide-rx",
    },
    .size = CXL_UNCOR_ERROR_TYPE__MAX
};

void qapi_free_CXLUncorErrorRecord(CXLUncorErrorRecord *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CXLUncorErrorRecord(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CXLUncorErrorRecordList(CXLUncorErrorRecordList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CXLUncorErrorRecordList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_cxl_inject_uncorrectable_errors_arg(q_obj_cxl_inject_uncorrectable_errors_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_cxl_inject_uncorrectable_errors_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup CxlCorErrorType_lookup = {
    .array = (const char *const[]) {
        [CXL_COR_ERROR_TYPE_CACHE_DATA_ECC] = "cache-data-ecc",
        [CXL_COR_ERROR_TYPE_MEM_DATA_ECC] = "mem-data-ecc",
        [CXL_COR_ERROR_TYPE_CRC_THRESHOLD] = "crc-threshold",
        [CXL_COR_ERROR_TYPE_RETRY_THRESHOLD] = "retry-threshold",
        [CXL_COR_ERROR_TYPE_CACHE_POISON_RECEIVED] = "cache-poison-received",
        [CXL_COR_ERROR_TYPE_MEM_POISON_RECEIVED] = "mem-poison-received",
        [CXL_COR_ERROR_TYPE_PHYSICAL] = "physical",
    },
    .size = CXL_COR_ERROR_TYPE__MAX
};

void qapi_free_q_obj_cxl_inject_correctable_error_arg(q_obj_cxl_inject_correctable_error_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_cxl_inject_correctable_error_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_cxl_c;
