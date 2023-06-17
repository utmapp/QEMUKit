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
#include "qapi-visit-cryptodev.h"

bool visit_type_QCryptodevBackendAlgType(Visitor *v, const char *name,
                 QCryptodevBackendAlgType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptodevBackendAlgType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptodevBackendServiceType(Visitor *v, const char *name,
                 QCryptodevBackendServiceType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptodevBackendServiceType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptodevBackendType(Visitor *v, const char *name,
                 QCryptodevBackendType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptodevBackendType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptodevBackendClient_members(Visitor *v, QCryptodevBackendClient *obj, Error **errp)
{
    if (!visit_type_uint32(v, "queue", &obj->queue, errp)) {
        return false;
    }
    if (!visit_type_QCryptodevBackendType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptodevBackendClient(Visitor *v, const char *name,
                 QCryptodevBackendClient **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptodevBackendClient), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptodevBackendClient_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptodevBackendClient(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptodevBackendServiceTypeList(Visitor *v, const char *name,
                 QCryptodevBackendServiceTypeList **obj, Error **errp)
{
    bool ok = false;
    QCryptodevBackendServiceTypeList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (QCryptodevBackendServiceTypeList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_QCryptodevBackendServiceType(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptodevBackendServiceTypeList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptodevBackendClientList(Visitor *v, const char *name,
                 QCryptodevBackendClientList **obj, Error **errp)
{
    bool ok = false;
    QCryptodevBackendClientList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (QCryptodevBackendClientList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_QCryptodevBackendClient(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptodevBackendClientList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptodevInfo_members(Visitor *v, QCryptodevInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_QCryptodevBackendServiceTypeList(v, "service", &obj->service, errp)) {
        return false;
    }
    if (!visit_type_QCryptodevBackendClientList(v, "client", &obj->client, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptodevInfo(Visitor *v, const char *name,
                 QCryptodevInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptodevInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptodevInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptodevInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptodevInfoList(Visitor *v, const char *name,
                 QCryptodevInfoList **obj, Error **errp)
{
    bool ok = false;
    QCryptodevInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (QCryptodevInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_QCryptodevInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptodevInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_cryptodev_c;
