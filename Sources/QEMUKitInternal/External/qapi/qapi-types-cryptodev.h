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

#ifndef QAPI_TYPES_CRYPTODEV_H
#define QAPI_TYPES_CRYPTODEV_H

#include "qapi-builtin-types.h"

typedef enum QCryptodevBackendAlgType {
    QCRYPTODEV_BACKEND_ALG_SYM,
    QCRYPTODEV_BACKEND_ALG_ASYM,
    QCRYPTODEV_BACKEND_ALG__MAX,
} QCryptodevBackendAlgType;

#define QCryptodevBackendAlgType_str(val) \
    qapi_enum_lookup(&QCryptodevBackendAlgType_lookup, (val))

extern const QEnumLookup QCryptodevBackendAlgType_lookup;

typedef enum QCryptodevBackendServiceType {
    QCRYPTODEV_BACKEND_SERVICE_CIPHER,
    QCRYPTODEV_BACKEND_SERVICE_HASH,
    QCRYPTODEV_BACKEND_SERVICE_MAC,
    QCRYPTODEV_BACKEND_SERVICE_AEAD,
    QCRYPTODEV_BACKEND_SERVICE_AKCIPHER,
    QCRYPTODEV_BACKEND_SERVICE__MAX,
} QCryptodevBackendServiceType;

#define QCryptodevBackendServiceType_str(val) \
    qapi_enum_lookup(&QCryptodevBackendServiceType_lookup, (val))

extern const QEnumLookup QCryptodevBackendServiceType_lookup;

typedef enum QCryptodevBackendType {
    QCRYPTODEV_BACKEND_TYPE_BUILTIN,
    QCRYPTODEV_BACKEND_TYPE_VHOST_USER,
    QCRYPTODEV_BACKEND_TYPE_LKCF,
    QCRYPTODEV_BACKEND_TYPE__MAX,
} QCryptodevBackendType;

#define QCryptodevBackendType_str(val) \
    qapi_enum_lookup(&QCryptodevBackendType_lookup, (val))

extern const QEnumLookup QCryptodevBackendType_lookup;

typedef struct QCryptodevBackendClient QCryptodevBackendClient;

typedef struct QCryptodevBackendServiceTypeList QCryptodevBackendServiceTypeList;

typedef struct QCryptodevBackendClientList QCryptodevBackendClientList;

typedef struct QCryptodevInfo QCryptodevInfo;

typedef struct QCryptodevInfoList QCryptodevInfoList;

struct QCryptodevBackendClient {
    uint32_t queue;
    QCryptodevBackendType type;
};

void qapi_free_QCryptodevBackendClient(QCryptodevBackendClient *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptodevBackendClient, qapi_free_QCryptodevBackendClient)

struct QCryptodevBackendServiceTypeList {
    QCryptodevBackendServiceTypeList *next;
    QCryptodevBackendServiceType value;
};

void qapi_free_QCryptodevBackendServiceTypeList(QCryptodevBackendServiceTypeList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptodevBackendServiceTypeList, qapi_free_QCryptodevBackendServiceTypeList)

struct QCryptodevBackendClientList {
    QCryptodevBackendClientList *next;
    QCryptodevBackendClient *value;
};

void qapi_free_QCryptodevBackendClientList(QCryptodevBackendClientList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptodevBackendClientList, qapi_free_QCryptodevBackendClientList)

struct QCryptodevInfo {
    char *id;
    QCryptodevBackendServiceTypeList *service;
    QCryptodevBackendClientList *client;
};

void qapi_free_QCryptodevInfo(QCryptodevInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptodevInfo, qapi_free_QCryptodevInfo)

struct QCryptodevInfoList {
    QCryptodevInfoList *next;
    QCryptodevInfo *value;
};

void qapi_free_QCryptodevInfoList(QCryptodevInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptodevInfoList, qapi_free_QCryptodevInfoList)

#endif /* QAPI_TYPES_CRYPTODEV_H */
