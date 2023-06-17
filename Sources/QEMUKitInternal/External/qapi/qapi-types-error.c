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
#include "qapi-types-error.h"
#include "qapi-visit-error.h"

const QEnumLookup QapiErrorClass_lookup = {
    .array = (const char *const[]) {
        [QAPI_ERROR_CLASS_GENERICERROR] = "GenericError",
        [QAPI_ERROR_CLASS_COMMANDNOTFOUND] = "CommandNotFound",
        [QAPI_ERROR_CLASS_DEVICENOTACTIVE] = "DeviceNotActive",
        [QAPI_ERROR_CLASS_DEVICENOTFOUND] = "DeviceNotFound",
        [QAPI_ERROR_CLASS_KVMMISSINGCAP] = "KVMMissingCap",
    },
    .size = QAPI_ERROR_CLASS__MAX
};

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_error_c;
