/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Built-in QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu-compat.h"
#include "error.h"
#include "qapi-builtin-visit.h"

bool visit_type_strList(Visitor *v, const char *name,
                 strList **obj, Error **errp)
{
    bool ok = false;
    strList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (strList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_str(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_strList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_numberList(Visitor *v, const char *name,
                 numberList **obj, Error **errp)
{
    bool ok = false;
    numberList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (numberList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_number(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_numberList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_intList(Visitor *v, const char *name,
                 intList **obj, Error **errp)
{
    bool ok = false;
    intList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (intList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_int(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_intList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_int8List(Visitor *v, const char *name,
                 int8List **obj, Error **errp)
{
    bool ok = false;
    int8List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (int8List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_int8(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_int8List(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_int16List(Visitor *v, const char *name,
                 int16List **obj, Error **errp)
{
    bool ok = false;
    int16List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (int16List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_int16(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_int16List(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_int32List(Visitor *v, const char *name,
                 int32List **obj, Error **errp)
{
    bool ok = false;
    int32List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (int32List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_int32(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_int32List(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_int64List(Visitor *v, const char *name,
                 int64List **obj, Error **errp)
{
    bool ok = false;
    int64List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (int64List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_int64(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_int64List(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_uint8List(Visitor *v, const char *name,
                 uint8List **obj, Error **errp)
{
    bool ok = false;
    uint8List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (uint8List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_uint8(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_uint8List(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_uint16List(Visitor *v, const char *name,
                 uint16List **obj, Error **errp)
{
    bool ok = false;
    uint16List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (uint16List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_uint16(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_uint16List(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_uint32List(Visitor *v, const char *name,
                 uint32List **obj, Error **errp)
{
    bool ok = false;
    uint32List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (uint32List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_uint32(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_uint32List(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_uint64List(Visitor *v, const char *name,
                 uint64List **obj, Error **errp)
{
    bool ok = false;
    uint64List *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (uint64List *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_uint64(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_uint64List(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_sizeList(Visitor *v, const char *name,
                 sizeList **obj, Error **errp)
{
    bool ok = false;
    sizeList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (sizeList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_size(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_sizeList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_boolList(Visitor *v, const char *name,
                 boolList **obj, Error **errp)
{
    bool ok = false;
    boolList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (boolList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_bool(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_boolList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_anyList(Visitor *v, const char *name,
                 anyList **obj, Error **errp)
{
    bool ok = false;
    anyList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (anyList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_any(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_anyList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_nullList(Visitor *v, const char *name,
                 nullList **obj, Error **errp)
{
    bool ok = false;
    nullList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (nullList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_null(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_nullList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QType(Visitor *v, const char *name,
                 QType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QType_lookup, errp);
    *obj = value;
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_builtin_visit_c;
