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
#include "qapi-visit-crypto.h"

bool visit_type_QCryptoTLSCredsEndpoint(Visitor *v, const char *name,
                 QCryptoTLSCredsEndpoint *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoTLSCredsEndpoint_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoSecretFormat(Visitor *v, const char *name,
                 QCryptoSecretFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoSecretFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoHashAlgorithm(Visitor *v, const char *name,
                 QCryptoHashAlgorithm *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoHashAlgorithm_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoCipherAlgorithm(Visitor *v, const char *name,
                 QCryptoCipherAlgorithm *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoCipherAlgorithm_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoCipherMode(Visitor *v, const char *name,
                 QCryptoCipherMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoCipherMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoIVGenAlgorithm(Visitor *v, const char *name,
                 QCryptoIVGenAlgorithm *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoIVGenAlgorithm_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoBlockFormat(Visitor *v, const char *name,
                 QCryptoBlockFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoBlockFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoBlockOptionsBase_members(Visitor *v, QCryptoBlockOptionsBase *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoBlockOptionsBase(Visitor *v, const char *name,
                 QCryptoBlockOptionsBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockOptionsBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockOptionsBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockOptionsBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockOptionsQCow_members(Visitor *v, QCryptoBlockOptionsQCow *obj, Error **errp)
{
    if (visit_optional(v, "key-secret", &obj->has_key_secret)) {
        if (!visit_type_str(v, "key-secret", &obj->key_secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QCryptoBlockOptionsQCow(Visitor *v, const char *name,
                 QCryptoBlockOptionsQCow **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockOptionsQCow), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockOptionsQCow_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockOptionsQCow(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockOptionsLUKS_members(Visitor *v, QCryptoBlockOptionsLUKS *obj, Error **errp)
{
    if (visit_optional(v, "key-secret", &obj->has_key_secret)) {
        if (!visit_type_str(v, "key-secret", &obj->key_secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QCryptoBlockOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockCreateOptionsLUKS_members(Visitor *v, QCryptoBlockCreateOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockOptionsLUKS_members(v, (QCryptoBlockOptionsLUKS *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "cipher-alg", &obj->has_cipher_alg)) {
        if (!visit_type_QCryptoCipherAlgorithm(v, "cipher-alg", &obj->cipher_alg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cipher-mode", &obj->has_cipher_mode)) {
        if (!visit_type_QCryptoCipherMode(v, "cipher-mode", &obj->cipher_mode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ivgen-alg", &obj->has_ivgen_alg)) {
        if (!visit_type_QCryptoIVGenAlgorithm(v, "ivgen-alg", &obj->ivgen_alg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "ivgen-hash-alg", &obj->has_ivgen_hash_alg)) {
        if (!visit_type_QCryptoHashAlgorithm(v, "ivgen-hash-alg", &obj->ivgen_hash_alg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "hash-alg", &obj->has_hash_alg)) {
        if (!visit_type_QCryptoHashAlgorithm(v, "hash-alg", &obj->hash_alg, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iter-time", &obj->has_iter_time)) {
        if (!visit_type_int(v, "iter-time", &obj->iter_time, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QCryptoBlockCreateOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockCreateOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockCreateOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockCreateOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockCreateOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockOpenOptions_members(Visitor *v, QCryptoBlockOpenOptions *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockOptionsBase_members(v, (QCryptoBlockOptionsBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case Q_CRYPTO_BLOCK_FORMAT_QCOW:
        return visit_type_QCryptoBlockOptionsQCow_members(v, &obj->u.qcow, errp);
    case Q_CRYPTO_BLOCK_FORMAT_LUKS:
        return visit_type_QCryptoBlockOptionsLUKS_members(v, &obj->u.luks, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoBlockOpenOptions(Visitor *v, const char *name,
                 QCryptoBlockOpenOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockOpenOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockOpenOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockOpenOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockCreateOptions_members(Visitor *v, QCryptoBlockCreateOptions *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockOptionsBase_members(v, (QCryptoBlockOptionsBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case Q_CRYPTO_BLOCK_FORMAT_QCOW:
        return visit_type_QCryptoBlockOptionsQCow_members(v, &obj->u.qcow, errp);
    case Q_CRYPTO_BLOCK_FORMAT_LUKS:
        return visit_type_QCryptoBlockCreateOptionsLUKS_members(v, &obj->u.luks, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoBlockCreateOptions(Visitor *v, const char *name,
                 QCryptoBlockCreateOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockCreateOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockCreateOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockCreateOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfoBase_members(Visitor *v, QCryptoBlockInfoBase *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoBlockInfoBase(Visitor *v, const char *name,
                 QCryptoBlockInfoBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockInfoBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockInfoBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfoBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfoLUKSSlot_members(Visitor *v, QCryptoBlockInfoLUKSSlot *obj, Error **errp)
{
    if (!visit_type_bool(v, "active", &obj->active, errp)) {
        return false;
    }
    if (visit_optional(v, "iters", &obj->has_iters)) {
        if (!visit_type_int(v, "iters", &obj->iters, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "stripes", &obj->has_stripes)) {
        if (!visit_type_int(v, "stripes", &obj->stripes, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "key-offset", &obj->key_offset, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoBlockInfoLUKSSlot(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKSSlot **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockInfoLUKSSlot), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockInfoLUKSSlot_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfoLUKSSlot(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfoLUKSSlotList(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKSSlotList **obj, Error **errp)
{
    bool ok = false;
    QCryptoBlockInfoLUKSSlotList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (QCryptoBlockInfoLUKSSlotList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_QCryptoBlockInfoLUKSSlot(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfoLUKSSlotList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfoLUKS_members(Visitor *v, QCryptoBlockInfoLUKS *obj, Error **errp)
{
    if (!visit_type_QCryptoCipherAlgorithm(v, "cipher-alg", &obj->cipher_alg, errp)) {
        return false;
    }
    if (!visit_type_QCryptoCipherMode(v, "cipher-mode", &obj->cipher_mode, errp)) {
        return false;
    }
    if (!visit_type_QCryptoIVGenAlgorithm(v, "ivgen-alg", &obj->ivgen_alg, errp)) {
        return false;
    }
    if (visit_optional(v, "ivgen-hash-alg", &obj->has_ivgen_hash_alg)) {
        if (!visit_type_QCryptoHashAlgorithm(v, "ivgen-hash-alg", &obj->ivgen_hash_alg, errp)) {
            return false;
        }
    }
    if (!visit_type_QCryptoHashAlgorithm(v, "hash-alg", &obj->hash_alg, errp)) {
        return false;
    }
    if (!visit_type_int(v, "payload-offset", &obj->payload_offset, errp)) {
        return false;
    }
    if (!visit_type_int(v, "master-key-iters", &obj->master_key_iters, errp)) {
        return false;
    }
    if (!visit_type_str(v, "uuid", &obj->uuid, errp)) {
        return false;
    }
    if (!visit_type_QCryptoBlockInfoLUKSSlotList(v, "slots", &obj->slots, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoBlockInfoLUKS(Visitor *v, const char *name,
                 QCryptoBlockInfoLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockInfoLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockInfoLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfoLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockInfo_members(Visitor *v, QCryptoBlockInfo *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockInfoBase_members(v, (QCryptoBlockInfoBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case Q_CRYPTO_BLOCK_FORMAT_LUKS:
        return visit_type_QCryptoBlockInfoLUKS_members(v, &obj->u.luks, errp);
    case Q_CRYPTO_BLOCK_FORMAT_QCOW:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoBlockInfo(Visitor *v, const char *name,
                 QCryptoBlockInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockLUKSKeyslotState(Visitor *v, const char *name,
                 QCryptoBlockLUKSKeyslotState *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoBlockLUKSKeyslotState_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoBlockAmendOptionsLUKS_members(Visitor *v, QCryptoBlockAmendOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockLUKSKeyslotState(v, "state", &obj->state, errp)) {
        return false;
    }
    if (visit_optional(v, "new-secret", &obj->has_new_secret)) {
        if (!visit_type_str(v, "new-secret", &obj->new_secret, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "old-secret", &obj->has_old_secret)) {
        if (!visit_type_str(v, "old-secret", &obj->old_secret, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "keyslot", &obj->has_keyslot)) {
        if (!visit_type_int(v, "keyslot", &obj->keyslot, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iter-time", &obj->has_iter_time)) {
        if (!visit_type_int(v, "iter-time", &obj->iter_time, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "secret", &obj->has_secret)) {
        if (!visit_type_str(v, "secret", &obj->secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_QCryptoBlockAmendOptionsLUKS(Visitor *v, const char *name,
                 QCryptoBlockAmendOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockAmendOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockAmendOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockAmendOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoBlockAmendOptions_members(Visitor *v, QCryptoBlockAmendOptions *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockOptionsBase_members(v, (QCryptoBlockOptionsBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case Q_CRYPTO_BLOCK_FORMAT_LUKS:
        return visit_type_QCryptoBlockAmendOptionsLUKS_members(v, &obj->u.luks, errp);
    case Q_CRYPTO_BLOCK_FORMAT_QCOW:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoBlockAmendOptions(Visitor *v, const char *name,
                 QCryptoBlockAmendOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoBlockAmendOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoBlockAmendOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoBlockAmendOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SecretCommonProperties_members(Visitor *v, SecretCommonProperties *obj, Error **errp)
{
    if (visit_optional(v, "loaded", &obj->has_loaded)) {
        if (visit_policy_reject(v, "loaded", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "loaded", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_bool(v, "loaded", &obj->loaded, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_QCryptoSecretFormat(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "keyid", &obj->has_keyid)) {
        if (!visit_type_str(v, "keyid", &obj->keyid, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iv", &obj->has_iv)) {
        if (!visit_type_str(v, "iv", &obj->iv, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SecretCommonProperties(Visitor *v, const char *name,
                 SecretCommonProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SecretCommonProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SecretCommonProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SecretCommonProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SecretProperties_members(Visitor *v, SecretProperties *obj, Error **errp)
{
    if (!visit_type_SecretCommonProperties_members(v, (SecretCommonProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "data", &obj->has_data)) {
        if (!visit_type_str(v, "data", &obj->data, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "file", &obj->has_file)) {
        if (!visit_type_str(v, "file", &obj->file, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SecretProperties(Visitor *v, const char *name,
                 SecretProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SecretProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SecretProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SecretProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SecretKeyringProperties_members(Visitor *v, SecretKeyringProperties *obj, Error **errp)
{
    if (!visit_type_SecretCommonProperties_members(v, (SecretCommonProperties *)obj, errp)) {
        return false;
    }
    if (!visit_type_int32(v, "serial", &obj->serial, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SecretKeyringProperties(Visitor *v, const char *name,
                 SecretKeyringProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SecretKeyringProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SecretKeyringProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SecretKeyringProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TlsCredsProperties_members(Visitor *v, TlsCredsProperties *obj, Error **errp)
{
    if (visit_optional(v, "verify-peer", &obj->has_verify_peer)) {
        if (!visit_type_bool(v, "verify-peer", &obj->verify_peer, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dir", &obj->has_dir)) {
        if (!visit_type_str(v, "dir", &obj->dir, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "endpoint", &obj->has_endpoint)) {
        if (!visit_type_QCryptoTLSCredsEndpoint(v, "endpoint", &obj->endpoint, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "priority", &obj->has_priority)) {
        if (!visit_type_str(v, "priority", &obj->priority, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_TlsCredsProperties(Visitor *v, const char *name,
                 TlsCredsProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TlsCredsProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TlsCredsProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TlsCredsProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TlsCredsAnonProperties_members(Visitor *v, TlsCredsAnonProperties *obj, Error **errp)
{
    if (!visit_type_TlsCredsProperties_members(v, (TlsCredsProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "loaded", &obj->has_loaded)) {
        if (visit_policy_reject(v, "loaded", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "loaded", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_bool(v, "loaded", &obj->loaded, errp)) {
                return false;
            }
        }
    }
    return true;
}

bool visit_type_TlsCredsAnonProperties(Visitor *v, const char *name,
                 TlsCredsAnonProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TlsCredsAnonProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TlsCredsAnonProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TlsCredsAnonProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TlsCredsPskProperties_members(Visitor *v, TlsCredsPskProperties *obj, Error **errp)
{
    if (!visit_type_TlsCredsProperties_members(v, (TlsCredsProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "loaded", &obj->has_loaded)) {
        if (visit_policy_reject(v, "loaded", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "loaded", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_bool(v, "loaded", &obj->loaded, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "username", &obj->has_username)) {
        if (!visit_type_str(v, "username", &obj->username, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_TlsCredsPskProperties(Visitor *v, const char *name,
                 TlsCredsPskProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TlsCredsPskProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TlsCredsPskProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TlsCredsPskProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TlsCredsX509Properties_members(Visitor *v, TlsCredsX509Properties *obj, Error **errp)
{
    if (!visit_type_TlsCredsProperties_members(v, (TlsCredsProperties *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "loaded", &obj->has_loaded)) {
        if (visit_policy_reject(v, "loaded", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "loaded", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_bool(v, "loaded", &obj->loaded, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "sanity-check", &obj->has_sanity_check)) {
        if (!visit_type_bool(v, "sanity-check", &obj->sanity_check, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "passwordid", &obj->has_passwordid)) {
        if (!visit_type_str(v, "passwordid", &obj->passwordid, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_TlsCredsX509Properties(Visitor *v, const char *name,
                 TlsCredsX509Properties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TlsCredsX509Properties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TlsCredsX509Properties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TlsCredsX509Properties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoAkCipherAlgorithm(Visitor *v, const char *name,
                 QCryptoAkCipherAlgorithm *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoAkCipherAlgorithm_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoAkCipherKeyType(Visitor *v, const char *name,
                 QCryptoAkCipherKeyType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoAkCipherKeyType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoRSAPaddingAlgorithm(Visitor *v, const char *name,
                 QCryptoRSAPaddingAlgorithm *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QCryptoRSAPaddingAlgorithm_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_QCryptoAkCipherOptionsRSA_members(Visitor *v, QCryptoAkCipherOptionsRSA *obj, Error **errp)
{
    if (!visit_type_QCryptoHashAlgorithm(v, "hash-alg", &obj->hash_alg, errp)) {
        return false;
    }
    if (!visit_type_QCryptoRSAPaddingAlgorithm(v, "padding-alg", &obj->padding_alg, errp)) {
        return false;
    }
    return true;
}

bool visit_type_QCryptoAkCipherOptionsRSA(Visitor *v, const char *name,
                 QCryptoAkCipherOptionsRSA **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoAkCipherOptionsRSA), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoAkCipherOptionsRSA_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoAkCipherOptionsRSA(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_QCryptoAkCipherOptions_base_members(Visitor *v, q_obj_QCryptoAkCipherOptions_base *obj, Error **errp)
{
    if (!visit_type_QCryptoAkCipherAlgorithm(v, "alg", &obj->alg, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_QCryptoAkCipherOptions_base(Visitor *v, const char *name,
                 q_obj_QCryptoAkCipherOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_QCryptoAkCipherOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_QCryptoAkCipherOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_QCryptoAkCipherOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QCryptoAkCipherOptions_members(Visitor *v, QCryptoAkCipherOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_QCryptoAkCipherOptions_base_members(v, (q_obj_QCryptoAkCipherOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->alg) {
    case QCRYPTO_AKCIPHER_ALG_RSA:
        return visit_type_QCryptoAkCipherOptionsRSA_members(v, &obj->u.rsa, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_QCryptoAkCipherOptions(Visitor *v, const char *name,
                 QCryptoAkCipherOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(QCryptoAkCipherOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_QCryptoAkCipherOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_QCryptoAkCipherOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_crypto_c;
