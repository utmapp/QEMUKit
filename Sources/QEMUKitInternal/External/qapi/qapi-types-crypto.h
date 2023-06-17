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

#ifndef QAPI_TYPES_CRYPTO_H
#define QAPI_TYPES_CRYPTO_H

#include "qapi-builtin-types.h"

typedef enum QCryptoTLSCredsEndpoint {
    QCRYPTO_TLS_CREDS_ENDPOINT_CLIENT,
    QCRYPTO_TLS_CREDS_ENDPOINT_SERVER,
    QCRYPTO_TLS_CREDS_ENDPOINT__MAX,
} QCryptoTLSCredsEndpoint;

#define QCryptoTLSCredsEndpoint_str(val) \
    qapi_enum_lookup(&QCryptoTLSCredsEndpoint_lookup, (val))

extern const QEnumLookup QCryptoTLSCredsEndpoint_lookup;

typedef enum QCryptoSecretFormat {
    QCRYPTO_SECRET_FORMAT_RAW,
    QCRYPTO_SECRET_FORMAT_BASE64,
    QCRYPTO_SECRET_FORMAT__MAX,
} QCryptoSecretFormat;

#define QCryptoSecretFormat_str(val) \
    qapi_enum_lookup(&QCryptoSecretFormat_lookup, (val))

extern const QEnumLookup QCryptoSecretFormat_lookup;

typedef enum QCryptoHashAlgorithm {
    QCRYPTO_HASH_ALG_MD5,
    QCRYPTO_HASH_ALG_SHA1,
    QCRYPTO_HASH_ALG_SHA224,
    QCRYPTO_HASH_ALG_SHA256,
    QCRYPTO_HASH_ALG_SHA384,
    QCRYPTO_HASH_ALG_SHA512,
    QCRYPTO_HASH_ALG_RIPEMD160,
    QCRYPTO_HASH_ALG__MAX,
} QCryptoHashAlgorithm;

#define QCryptoHashAlgorithm_str(val) \
    qapi_enum_lookup(&QCryptoHashAlgorithm_lookup, (val))

extern const QEnumLookup QCryptoHashAlgorithm_lookup;

typedef enum QCryptoCipherAlgorithm {
    QCRYPTO_CIPHER_ALG_AES_128,
    QCRYPTO_CIPHER_ALG_AES_192,
    QCRYPTO_CIPHER_ALG_AES_256,
    QCRYPTO_CIPHER_ALG_DES,
    QCRYPTO_CIPHER_ALG_3DES,
    QCRYPTO_CIPHER_ALG_CAST5_128,
    QCRYPTO_CIPHER_ALG_SERPENT_128,
    QCRYPTO_CIPHER_ALG_SERPENT_192,
    QCRYPTO_CIPHER_ALG_SERPENT_256,
    QCRYPTO_CIPHER_ALG_TWOFISH_128,
    QCRYPTO_CIPHER_ALG_TWOFISH_192,
    QCRYPTO_CIPHER_ALG_TWOFISH_256,
    QCRYPTO_CIPHER_ALG__MAX,
} QCryptoCipherAlgorithm;

#define QCryptoCipherAlgorithm_str(val) \
    qapi_enum_lookup(&QCryptoCipherAlgorithm_lookup, (val))

extern const QEnumLookup QCryptoCipherAlgorithm_lookup;

typedef enum QCryptoCipherMode {
    QCRYPTO_CIPHER_MODE_ECB,
    QCRYPTO_CIPHER_MODE_CBC,
    QCRYPTO_CIPHER_MODE_XTS,
    QCRYPTO_CIPHER_MODE_CTR,
    QCRYPTO_CIPHER_MODE__MAX,
} QCryptoCipherMode;

#define QCryptoCipherMode_str(val) \
    qapi_enum_lookup(&QCryptoCipherMode_lookup, (val))

extern const QEnumLookup QCryptoCipherMode_lookup;

typedef enum QCryptoIVGenAlgorithm {
    QCRYPTO_IVGEN_ALG_PLAIN,
    QCRYPTO_IVGEN_ALG_PLAIN64,
    QCRYPTO_IVGEN_ALG_ESSIV,
    QCRYPTO_IVGEN_ALG__MAX,
} QCryptoIVGenAlgorithm;

#define QCryptoIVGenAlgorithm_str(val) \
    qapi_enum_lookup(&QCryptoIVGenAlgorithm_lookup, (val))

extern const QEnumLookup QCryptoIVGenAlgorithm_lookup;

typedef enum QCryptoBlockFormat {
    Q_CRYPTO_BLOCK_FORMAT_QCOW,
    Q_CRYPTO_BLOCK_FORMAT_LUKS,
    Q_CRYPTO_BLOCK_FORMAT__MAX,
} QCryptoBlockFormat;

#define QCryptoBlockFormat_str(val) \
    qapi_enum_lookup(&QCryptoBlockFormat_lookup, (val))

extern const QEnumLookup QCryptoBlockFormat_lookup;

typedef struct QCryptoBlockOptionsBase QCryptoBlockOptionsBase;

typedef struct QCryptoBlockOptionsQCow QCryptoBlockOptionsQCow;

typedef struct QCryptoBlockOptionsLUKS QCryptoBlockOptionsLUKS;

typedef struct QCryptoBlockCreateOptionsLUKS QCryptoBlockCreateOptionsLUKS;

typedef struct QCryptoBlockOpenOptions QCryptoBlockOpenOptions;

typedef struct QCryptoBlockCreateOptions QCryptoBlockCreateOptions;

typedef struct QCryptoBlockInfoBase QCryptoBlockInfoBase;

typedef struct QCryptoBlockInfoLUKSSlot QCryptoBlockInfoLUKSSlot;

typedef struct QCryptoBlockInfoLUKSSlotList QCryptoBlockInfoLUKSSlotList;

typedef struct QCryptoBlockInfoLUKS QCryptoBlockInfoLUKS;

typedef struct QCryptoBlockInfo QCryptoBlockInfo;

typedef enum QCryptoBlockLUKSKeyslotState {
    Q_CRYPTO_BLOCKLUKS_KEYSLOT_STATE_ACTIVE,
    Q_CRYPTO_BLOCKLUKS_KEYSLOT_STATE_INACTIVE,
    Q_CRYPTO_BLOCKLUKS_KEYSLOT_STATE__MAX,
} QCryptoBlockLUKSKeyslotState;

#define QCryptoBlockLUKSKeyslotState_str(val) \
    qapi_enum_lookup(&QCryptoBlockLUKSKeyslotState_lookup, (val))

extern const QEnumLookup QCryptoBlockLUKSKeyslotState_lookup;

typedef struct QCryptoBlockAmendOptionsLUKS QCryptoBlockAmendOptionsLUKS;

typedef struct QCryptoBlockAmendOptions QCryptoBlockAmendOptions;

typedef struct SecretCommonProperties SecretCommonProperties;

typedef struct SecretProperties SecretProperties;

typedef struct SecretKeyringProperties SecretKeyringProperties;

typedef struct TlsCredsProperties TlsCredsProperties;

typedef struct TlsCredsAnonProperties TlsCredsAnonProperties;

typedef struct TlsCredsPskProperties TlsCredsPskProperties;

typedef struct TlsCredsX509Properties TlsCredsX509Properties;

typedef enum QCryptoAkCipherAlgorithm {
    QCRYPTO_AKCIPHER_ALG_RSA,
    QCRYPTO_AKCIPHER_ALG__MAX,
} QCryptoAkCipherAlgorithm;

#define QCryptoAkCipherAlgorithm_str(val) \
    qapi_enum_lookup(&QCryptoAkCipherAlgorithm_lookup, (val))

extern const QEnumLookup QCryptoAkCipherAlgorithm_lookup;

typedef enum QCryptoAkCipherKeyType {
    QCRYPTO_AKCIPHER_KEY_TYPE_PUBLIC,
    QCRYPTO_AKCIPHER_KEY_TYPE_PRIVATE,
    QCRYPTO_AKCIPHER_KEY_TYPE__MAX,
} QCryptoAkCipherKeyType;

#define QCryptoAkCipherKeyType_str(val) \
    qapi_enum_lookup(&QCryptoAkCipherKeyType_lookup, (val))

extern const QEnumLookup QCryptoAkCipherKeyType_lookup;

typedef enum QCryptoRSAPaddingAlgorithm {
    QCRYPTO_RSA_PADDING_ALG_RAW,
    QCRYPTO_RSA_PADDING_ALG_PKCS1,
    QCRYPTO_RSA_PADDING_ALG__MAX,
} QCryptoRSAPaddingAlgorithm;

#define QCryptoRSAPaddingAlgorithm_str(val) \
    qapi_enum_lookup(&QCryptoRSAPaddingAlgorithm_lookup, (val))

extern const QEnumLookup QCryptoRSAPaddingAlgorithm_lookup;

typedef struct QCryptoAkCipherOptionsRSA QCryptoAkCipherOptionsRSA;

typedef struct q_obj_QCryptoAkCipherOptions_base q_obj_QCryptoAkCipherOptions_base;

typedef struct QCryptoAkCipherOptions QCryptoAkCipherOptions;

struct QCryptoBlockOptionsBase {
    QCryptoBlockFormat format;
};

void qapi_free_QCryptoBlockOptionsBase(QCryptoBlockOptionsBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockOptionsBase, qapi_free_QCryptoBlockOptionsBase)

struct QCryptoBlockOptionsQCow {
    bool has_key_secret;
    char *key_secret;
};

void qapi_free_QCryptoBlockOptionsQCow(QCryptoBlockOptionsQCow *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockOptionsQCow, qapi_free_QCryptoBlockOptionsQCow)

struct QCryptoBlockOptionsLUKS {
    bool has_key_secret;
    char *key_secret;
};

void qapi_free_QCryptoBlockOptionsLUKS(QCryptoBlockOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockOptionsLUKS, qapi_free_QCryptoBlockOptionsLUKS)

struct QCryptoBlockCreateOptionsLUKS {
    /* Members inherited from QCryptoBlockOptionsLUKS: */
    bool has_key_secret;
    char *key_secret;
    /* Own members: */
    bool has_cipher_alg;
    QCryptoCipherAlgorithm cipher_alg;
    bool has_cipher_mode;
    QCryptoCipherMode cipher_mode;
    bool has_ivgen_alg;
    QCryptoIVGenAlgorithm ivgen_alg;
    bool has_ivgen_hash_alg;
    QCryptoHashAlgorithm ivgen_hash_alg;
    bool has_hash_alg;
    QCryptoHashAlgorithm hash_alg;
    bool has_iter_time;
    int64_t iter_time;
};

static inline QCryptoBlockOptionsLUKS *qapi_QCryptoBlockCreateOptionsLUKS_base(const QCryptoBlockCreateOptionsLUKS *obj)
{
    return (QCryptoBlockOptionsLUKS *)obj;
}

void qapi_free_QCryptoBlockCreateOptionsLUKS(QCryptoBlockCreateOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockCreateOptionsLUKS, qapi_free_QCryptoBlockCreateOptionsLUKS)

struct QCryptoBlockOpenOptions {
    /* Members inherited from QCryptoBlockOptionsBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockOptionsQCow qcow;
        QCryptoBlockOptionsLUKS luks;
    } u;
};

static inline QCryptoBlockOptionsBase *qapi_QCryptoBlockOpenOptions_base(const QCryptoBlockOpenOptions *obj)
{
    return (QCryptoBlockOptionsBase *)obj;
}

void qapi_free_QCryptoBlockOpenOptions(QCryptoBlockOpenOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockOpenOptions, qapi_free_QCryptoBlockOpenOptions)

struct QCryptoBlockCreateOptions {
    /* Members inherited from QCryptoBlockOptionsBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockOptionsQCow qcow;
        QCryptoBlockCreateOptionsLUKS luks;
    } u;
};

static inline QCryptoBlockOptionsBase *qapi_QCryptoBlockCreateOptions_base(const QCryptoBlockCreateOptions *obj)
{
    return (QCryptoBlockOptionsBase *)obj;
}

void qapi_free_QCryptoBlockCreateOptions(QCryptoBlockCreateOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockCreateOptions, qapi_free_QCryptoBlockCreateOptions)

struct QCryptoBlockInfoBase {
    QCryptoBlockFormat format;
};

void qapi_free_QCryptoBlockInfoBase(QCryptoBlockInfoBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfoBase, qapi_free_QCryptoBlockInfoBase)

struct QCryptoBlockInfoLUKSSlot {
    bool active;
    bool has_iters;
    int64_t iters;
    bool has_stripes;
    int64_t stripes;
    int64_t key_offset;
};

void qapi_free_QCryptoBlockInfoLUKSSlot(QCryptoBlockInfoLUKSSlot *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfoLUKSSlot, qapi_free_QCryptoBlockInfoLUKSSlot)

struct QCryptoBlockInfoLUKSSlotList {
    QCryptoBlockInfoLUKSSlotList *next;
    QCryptoBlockInfoLUKSSlot *value;
};

void qapi_free_QCryptoBlockInfoLUKSSlotList(QCryptoBlockInfoLUKSSlotList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfoLUKSSlotList, qapi_free_QCryptoBlockInfoLUKSSlotList)

struct QCryptoBlockInfoLUKS {
    QCryptoCipherAlgorithm cipher_alg;
    QCryptoCipherMode cipher_mode;
    QCryptoIVGenAlgorithm ivgen_alg;
    bool has_ivgen_hash_alg;
    QCryptoHashAlgorithm ivgen_hash_alg;
    QCryptoHashAlgorithm hash_alg;
    int64_t payload_offset;
    int64_t master_key_iters;
    char *uuid;
    QCryptoBlockInfoLUKSSlotList *slots;
};

void qapi_free_QCryptoBlockInfoLUKS(QCryptoBlockInfoLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfoLUKS, qapi_free_QCryptoBlockInfoLUKS)

struct QCryptoBlockInfo {
    /* Members inherited from QCryptoBlockInfoBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockInfoLUKS luks;
    } u;
};

static inline QCryptoBlockInfoBase *qapi_QCryptoBlockInfo_base(const QCryptoBlockInfo *obj)
{
    return (QCryptoBlockInfoBase *)obj;
}

void qapi_free_QCryptoBlockInfo(QCryptoBlockInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockInfo, qapi_free_QCryptoBlockInfo)

struct QCryptoBlockAmendOptionsLUKS {
    QCryptoBlockLUKSKeyslotState state;
    bool has_new_secret;
    char *new_secret;
    bool has_old_secret;
    char *old_secret;
    bool has_keyslot;
    int64_t keyslot;
    bool has_iter_time;
    int64_t iter_time;
    bool has_secret;
    char *secret;
};

void qapi_free_QCryptoBlockAmendOptionsLUKS(QCryptoBlockAmendOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockAmendOptionsLUKS, qapi_free_QCryptoBlockAmendOptionsLUKS)

struct QCryptoBlockAmendOptions {
    /* Members inherited from QCryptoBlockOptionsBase: */
    QCryptoBlockFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockAmendOptionsLUKS luks;
    } u;
};

static inline QCryptoBlockOptionsBase *qapi_QCryptoBlockAmendOptions_base(const QCryptoBlockAmendOptions *obj)
{
    return (QCryptoBlockOptionsBase *)obj;
}

void qapi_free_QCryptoBlockAmendOptions(QCryptoBlockAmendOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoBlockAmendOptions, qapi_free_QCryptoBlockAmendOptions)

struct SecretCommonProperties {
    bool has_loaded;
    bool loaded;
    bool has_format;
    QCryptoSecretFormat format;
    bool has_keyid;
    char *keyid;
    bool has_iv;
    char *iv;
};

void qapi_free_SecretCommonProperties(SecretCommonProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SecretCommonProperties, qapi_free_SecretCommonProperties)

struct SecretProperties {
    /* Members inherited from SecretCommonProperties: */
    bool has_loaded;
    bool loaded;
    bool has_format;
    QCryptoSecretFormat format;
    bool has_keyid;
    char *keyid;
    bool has_iv;
    char *iv;
    /* Own members: */
    bool has_data;
    char *data;
    bool has_file;
    char *file;
};

static inline SecretCommonProperties *qapi_SecretProperties_base(const SecretProperties *obj)
{
    return (SecretCommonProperties *)obj;
}

void qapi_free_SecretProperties(SecretProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SecretProperties, qapi_free_SecretProperties)

struct SecretKeyringProperties {
    /* Members inherited from SecretCommonProperties: */
    bool has_loaded;
    bool loaded;
    bool has_format;
    QCryptoSecretFormat format;
    bool has_keyid;
    char *keyid;
    bool has_iv;
    char *iv;
    /* Own members: */
    int32_t serial;
};

static inline SecretCommonProperties *qapi_SecretKeyringProperties_base(const SecretKeyringProperties *obj)
{
    return (SecretCommonProperties *)obj;
}

void qapi_free_SecretKeyringProperties(SecretKeyringProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SecretKeyringProperties, qapi_free_SecretKeyringProperties)

struct TlsCredsProperties {
    bool has_verify_peer;
    bool verify_peer;
    bool has_dir;
    char *dir;
    bool has_endpoint;
    QCryptoTLSCredsEndpoint endpoint;
    bool has_priority;
    char *priority;
};

void qapi_free_TlsCredsProperties(TlsCredsProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TlsCredsProperties, qapi_free_TlsCredsProperties)

struct TlsCredsAnonProperties {
    /* Members inherited from TlsCredsProperties: */
    bool has_verify_peer;
    bool verify_peer;
    bool has_dir;
    char *dir;
    bool has_endpoint;
    QCryptoTLSCredsEndpoint endpoint;
    bool has_priority;
    char *priority;
    /* Own members: */
    bool has_loaded;
    bool loaded;
};

static inline TlsCredsProperties *qapi_TlsCredsAnonProperties_base(const TlsCredsAnonProperties *obj)
{
    return (TlsCredsProperties *)obj;
}

void qapi_free_TlsCredsAnonProperties(TlsCredsAnonProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TlsCredsAnonProperties, qapi_free_TlsCredsAnonProperties)

struct TlsCredsPskProperties {
    /* Members inherited from TlsCredsProperties: */
    bool has_verify_peer;
    bool verify_peer;
    bool has_dir;
    char *dir;
    bool has_endpoint;
    QCryptoTLSCredsEndpoint endpoint;
    bool has_priority;
    char *priority;
    /* Own members: */
    bool has_loaded;
    bool loaded;
    bool has_username;
    char *username;
};

static inline TlsCredsProperties *qapi_TlsCredsPskProperties_base(const TlsCredsPskProperties *obj)
{
    return (TlsCredsProperties *)obj;
}

void qapi_free_TlsCredsPskProperties(TlsCredsPskProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TlsCredsPskProperties, qapi_free_TlsCredsPskProperties)

struct TlsCredsX509Properties {
    /* Members inherited from TlsCredsProperties: */
    bool has_verify_peer;
    bool verify_peer;
    bool has_dir;
    char *dir;
    bool has_endpoint;
    QCryptoTLSCredsEndpoint endpoint;
    bool has_priority;
    char *priority;
    /* Own members: */
    bool has_loaded;
    bool loaded;
    bool has_sanity_check;
    bool sanity_check;
    bool has_passwordid;
    char *passwordid;
};

static inline TlsCredsProperties *qapi_TlsCredsX509Properties_base(const TlsCredsX509Properties *obj)
{
    return (TlsCredsProperties *)obj;
}

void qapi_free_TlsCredsX509Properties(TlsCredsX509Properties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TlsCredsX509Properties, qapi_free_TlsCredsX509Properties)

struct QCryptoAkCipherOptionsRSA {
    QCryptoHashAlgorithm hash_alg;
    QCryptoRSAPaddingAlgorithm padding_alg;
};

void qapi_free_QCryptoAkCipherOptionsRSA(QCryptoAkCipherOptionsRSA *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoAkCipherOptionsRSA, qapi_free_QCryptoAkCipherOptionsRSA)

struct q_obj_QCryptoAkCipherOptions_base {
    QCryptoAkCipherAlgorithm alg;
};

void qapi_free_q_obj_QCryptoAkCipherOptions_base(q_obj_QCryptoAkCipherOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_QCryptoAkCipherOptions_base, qapi_free_q_obj_QCryptoAkCipherOptions_base)

struct QCryptoAkCipherOptions {
    QCryptoAkCipherAlgorithm alg;
    union { /* union tag is @alg */
        QCryptoAkCipherOptionsRSA rsa;
    } u;
};

void qapi_free_QCryptoAkCipherOptions(QCryptoAkCipherOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QCryptoAkCipherOptions, qapi_free_QCryptoAkCipherOptions)

#endif /* QAPI_TYPES_CRYPTO_H */
