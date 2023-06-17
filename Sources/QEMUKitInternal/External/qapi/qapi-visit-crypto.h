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

#ifndef QAPI_VISIT_CRYPTO_H
#define QAPI_VISIT_CRYPTO_H

#include "qapi-builtin-visit.h"
#include "qapi-types-crypto.h"


bool visit_type_QCryptoTLSCredsEndpoint(Visitor *v, const char *name,
                 QCryptoTLSCredsEndpoint *obj, Error **errp);

bool visit_type_QCryptoSecretFormat(Visitor *v, const char *name,
                 QCryptoSecretFormat *obj, Error **errp);

bool visit_type_QCryptoHashAlgorithm(Visitor *v, const char *name,
                 QCryptoHashAlgorithm *obj, Error **errp);

bool visit_type_QCryptoCipherAlgorithm(Visitor *v, const char *name,
                 QCryptoCipherAlgorithm *obj, Error **errp);

bool visit_type_QCryptoCipherMode(Visitor *v, const char *name,
                 QCryptoCipherMode *obj, Error **errp);

bool visit_type_QCryptoIVGenAlgorithm(Visitor *v, const char *name,
                 QCryptoIVGenAlgorithm *obj, Error **errp);

bool visit_type_QCryptoBlockFormat(Visitor *v, const char *name,
                 QCryptoBlockFormat *obj, Error **errp);

bool visit_type_QCryptoBlockOptionsBase_members(Visitor *v, QCryptoBlockOptionsBase *obj, Error **errp);

bool visit_type_QCryptoBlockOptionsBase(Visitor *v, const char *name,
                 QCryptoBlockOptionsBase **obj, Error **errp);

bool visit_type_QCryptoBlockOptionsQCow_members(Visitor *v, QCryptoBlockOptionsQCow *obj, Error **errp);

bool visit_type_QCryptoBlockOptionsQCow(Visitor *v, const char *name,
                 QCryptoBlockOptionsQCow **obj, Error **errp);

bool visit_type_QCryptoBlockOptionsLUKS_members(Visitor *v, QCryptoBlockOptionsLUKS *obj, Error **errp);

bool visit_type_QCryptoBlockOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockOptionsLUKS **obj, Error **errp);

bool visit_type_QCryptoBlockCreateOptionsLUKS_members(Visitor *v, QCryptoBlockCreateOptionsLUKS *obj, Error **errp);

bool visit_type_QCryptoBlockCreateOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockCreateOptionsLUKS **obj, Error **errp);

bool visit_type_QCryptoBlockOpenOptions_members(Visitor *v, QCryptoBlockOpenOptions *obj, Error **errp);

bool visit_type_QCryptoBlockOpenOptions(Visitor *v, const char *name,
                 QCryptoBlockOpenOptions **obj, Error **errp);

bool visit_type_QCryptoBlockCreateOptions_members(Visitor *v, QCryptoBlockCreateOptions *obj, Error **errp);

bool visit_type_QCryptoBlockCreateOptions(Visitor *v, const char *name,
                 QCryptoBlockCreateOptions **obj, Error **errp);

bool visit_type_QCryptoBlockInfoBase_members(Visitor *v, QCryptoBlockInfoBase *obj, Error **errp);

bool visit_type_QCryptoBlockInfoBase(Visitor *v, const char *name,
                 QCryptoBlockInfoBase **obj, Error **errp);

bool visit_type_QCryptoBlockInfoLUKSSlot_members(Visitor *v, QCryptoBlockInfoLUKSSlot *obj, Error **errp);

bool visit_type_QCryptoBlockInfoLUKSSlot(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKSSlot **obj, Error **errp);

bool visit_type_QCryptoBlockInfoLUKSSlotList(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKSSlotList **obj, Error **errp);

bool visit_type_QCryptoBlockInfoLUKS_members(Visitor *v, QCryptoBlockInfoLUKS *obj, Error **errp);

bool visit_type_QCryptoBlockInfoLUKS(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKS **obj, Error **errp);

bool visit_type_QCryptoBlockInfo_members(Visitor *v, QCryptoBlockInfo *obj, Error **errp);

bool visit_type_QCryptoBlockInfo(Visitor *v, const char *name,
                 QCryptoBlockInfo **obj, Error **errp);

bool visit_type_QCryptoBlockLUKSKeyslotState(Visitor *v, const char *name,
                 QCryptoBlockLUKSKeyslotState *obj, Error **errp);

bool visit_type_QCryptoBlockAmendOptionsLUKS_members(Visitor *v, QCryptoBlockAmendOptionsLUKS *obj, Error **errp);

bool visit_type_QCryptoBlockAmendOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockAmendOptionsLUKS **obj, Error **errp);

bool visit_type_QCryptoBlockAmendOptions_members(Visitor *v, QCryptoBlockAmendOptions *obj, Error **errp);

bool visit_type_QCryptoBlockAmendOptions(Visitor *v, const char *name,
                 QCryptoBlockAmendOptions **obj, Error **errp);

bool visit_type_SecretCommonProperties_members(Visitor *v, SecretCommonProperties *obj, Error **errp);

bool visit_type_SecretCommonProperties(Visitor *v, const char *name,
                 SecretCommonProperties **obj, Error **errp);

bool visit_type_SecretProperties_members(Visitor *v, SecretProperties *obj, Error **errp);

bool visit_type_SecretProperties(Visitor *v, const char *name,
                 SecretProperties **obj, Error **errp);

bool visit_type_SecretKeyringProperties_members(Visitor *v, SecretKeyringProperties *obj, Error **errp);

bool visit_type_SecretKeyringProperties(Visitor *v, const char *name,
                 SecretKeyringProperties **obj, Error **errp);

bool visit_type_TlsCredsProperties_members(Visitor *v, TlsCredsProperties *obj, Error **errp);

bool visit_type_TlsCredsProperties(Visitor *v, const char *name,
                 TlsCredsProperties **obj, Error **errp);

bool visit_type_TlsCredsAnonProperties_members(Visitor *v, TlsCredsAnonProperties *obj, Error **errp);

bool visit_type_TlsCredsAnonProperties(Visitor *v, const char *name,
                 TlsCredsAnonProperties **obj, Error **errp);

bool visit_type_TlsCredsPskProperties_members(Visitor *v, TlsCredsPskProperties *obj, Error **errp);

bool visit_type_TlsCredsPskProperties(Visitor *v, const char *name,
                 TlsCredsPskProperties **obj, Error **errp);

bool visit_type_TlsCredsX509Properties_members(Visitor *v, TlsCredsX509Properties *obj, Error **errp);

bool visit_type_TlsCredsX509Properties(Visitor *v, const char *name,
                 TlsCredsX509Properties **obj, Error **errp);

bool visit_type_QCryptoAkCipherAlgorithm(Visitor *v, const char *name,
                 QCryptoAkCipherAlgorithm *obj, Error **errp);

bool visit_type_QCryptoAkCipherKeyType(Visitor *v, const char *name,
                 QCryptoAkCipherKeyType *obj, Error **errp);

bool visit_type_QCryptoRSAPaddingAlgorithm(Visitor *v, const char *name,
                 QCryptoRSAPaddingAlgorithm *obj, Error **errp);

bool visit_type_QCryptoAkCipherOptionsRSA_members(Visitor *v, QCryptoAkCipherOptionsRSA *obj, Error **errp);

bool visit_type_QCryptoAkCipherOptionsRSA(Visitor *v, const char *name,
                 QCryptoAkCipherOptionsRSA **obj, Error **errp);

bool visit_type_q_obj_QCryptoAkCipherOptions_base_members(Visitor *v, q_obj_QCryptoAkCipherOptions_base *obj, Error **errp);

bool visit_type_q_obj_QCryptoAkCipherOptions_base(Visitor *v, const char *name,
                 q_obj_QCryptoAkCipherOptions_base **obj, Error **errp);

bool visit_type_QCryptoAkCipherOptions_members(Visitor *v, QCryptoAkCipherOptions *obj, Error **errp);

bool visit_type_QCryptoAkCipherOptions(Visitor *v, const char *name,
                 QCryptoAkCipherOptions **obj, Error **errp);

#endif /* QAPI_VISIT_CRYPTO_H */
