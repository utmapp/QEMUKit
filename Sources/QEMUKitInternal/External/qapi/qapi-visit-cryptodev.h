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

#ifndef QAPI_VISIT_CRYPTODEV_H
#define QAPI_VISIT_CRYPTODEV_H

#include "qapi-builtin-visit.h"
#include "qapi-types-cryptodev.h"


bool visit_type_QCryptodevBackendAlgType(Visitor *v, const char *name,
                 QCryptodevBackendAlgType *obj, Error **errp);

bool visit_type_QCryptodevBackendServiceType(Visitor *v, const char *name,
                 QCryptodevBackendServiceType *obj, Error **errp);

bool visit_type_QCryptodevBackendType(Visitor *v, const char *name,
                 QCryptodevBackendType *obj, Error **errp);

bool visit_type_QCryptodevBackendClient_members(Visitor *v, QCryptodevBackendClient *obj, Error **errp);

bool visit_type_QCryptodevBackendClient(Visitor *v, const char *name,
                 QCryptodevBackendClient **obj, Error **errp);

bool visit_type_QCryptodevBackendServiceTypeList(Visitor *v, const char *name,
                 QCryptodevBackendServiceTypeList **obj, Error **errp);

bool visit_type_QCryptodevBackendClientList(Visitor *v, const char *name,
                 QCryptodevBackendClientList **obj, Error **errp);

bool visit_type_QCryptodevInfo_members(Visitor *v, QCryptodevInfo *obj, Error **errp);

bool visit_type_QCryptodevInfo(Visitor *v, const char *name,
                 QCryptodevInfo **obj, Error **errp);

bool visit_type_QCryptodevInfoList(Visitor *v, const char *name,
                 QCryptodevInfoList **obj, Error **errp);

#endif /* QAPI_VISIT_CRYPTODEV_H */
