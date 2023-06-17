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
#include "qapi-visit-block-core.h"

bool visit_type_SnapshotInfo_members(Visitor *v, SnapshotInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_int(v, "vm-state-size", &obj->vm_state_size, errp)) {
        return false;
    }
    if (!visit_type_int(v, "date-sec", &obj->date_sec, errp)) {
        return false;
    }
    if (!visit_type_int(v, "date-nsec", &obj->date_nsec, errp)) {
        return false;
    }
    if (!visit_type_int(v, "vm-clock-sec", &obj->vm_clock_sec, errp)) {
        return false;
    }
    if (!visit_type_int(v, "vm-clock-nsec", &obj->vm_clock_nsec, errp)) {
        return false;
    }
    if (visit_optional(v, "icount", &obj->has_icount)) {
        if (!visit_type_int(v, "icount", &obj->icount, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_SnapshotInfo(Visitor *v, const char *name,
                 SnapshotInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SnapshotInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SnapshotInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SnapshotInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificQCow2EncryptionBase_members(Visitor *v, ImageInfoSpecificQCow2EncryptionBase *obj, Error **errp)
{
    if (!visit_type_BlockdevQcow2EncryptionFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ImageInfoSpecificQCow2EncryptionBase(Visitor *v, const char *name,
                 ImageInfoSpecificQCow2EncryptionBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificQCow2EncryptionBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificQCow2EncryptionBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificQCow2EncryptionBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificQCow2Encryption_members(Visitor *v, ImageInfoSpecificQCow2Encryption *obj, Error **errp)
{
    if (!visit_type_ImageInfoSpecificQCow2EncryptionBase_members(v, (ImageInfoSpecificQCow2EncryptionBase *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case BLOCKDEV_QCOW2_ENCRYPTION_FORMAT_LUKS:
        return visit_type_QCryptoBlockInfoLUKS_members(v, &obj->u.luks, errp);
    case BLOCKDEV_QCOW2_ENCRYPTION_FORMAT_AES:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_ImageInfoSpecificQCow2Encryption(Visitor *v, const char *name,
                 ImageInfoSpecificQCow2Encryption **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificQCow2Encryption), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificQCow2Encryption_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificQCow2Encryption(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Qcow2BitmapInfoList(Visitor *v, const char *name,
                 Qcow2BitmapInfoList **obj, Error **errp)
{
    bool ok = false;
    Qcow2BitmapInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (Qcow2BitmapInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_Qcow2BitmapInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Qcow2BitmapInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificQCow2_members(Visitor *v, ImageInfoSpecificQCow2 *obj, Error **errp)
{
    if (!visit_type_str(v, "compat", &obj->compat, errp)) {
        return false;
    }
    if (visit_optional(v, "data-file", &obj->has_data_file)) {
        if (!visit_type_str(v, "data-file", &obj->data_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "data-file-raw", &obj->has_data_file_raw)) {
        if (!visit_type_bool(v, "data-file-raw", &obj->data_file_raw, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "extended-l2", &obj->has_extended_l2)) {
        if (!visit_type_bool(v, "extended-l2", &obj->extended_l2, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "lazy-refcounts", &obj->has_lazy_refcounts)) {
        if (!visit_type_bool(v, "lazy-refcounts", &obj->lazy_refcounts, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "corrupt", &obj->has_corrupt)) {
        if (!visit_type_bool(v, "corrupt", &obj->corrupt, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "refcount-bits", &obj->refcount_bits, errp)) {
        return false;
    }
    if (visit_optional(v, "encrypt", &obj->has_encrypt)) {
        if (!visit_type_ImageInfoSpecificQCow2Encryption(v, "encrypt", &obj->encrypt, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bitmaps", &obj->has_bitmaps)) {
        if (!visit_type_Qcow2BitmapInfoList(v, "bitmaps", &obj->bitmaps, errp)) {
            return false;
        }
    }
    if (!visit_type_Qcow2CompressionType(v, "compression-type", &obj->compression_type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ImageInfoSpecificQCow2(Visitor *v, const char *name,
                 ImageInfoSpecificQCow2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificQCow2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificQCow2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificQCow2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VmdkExtentInfoList(Visitor *v, const char *name,
                 VmdkExtentInfoList **obj, Error **errp)
{
    bool ok = false;
    VmdkExtentInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (VmdkExtentInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_VmdkExtentInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VmdkExtentInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificVmdk_members(Visitor *v, ImageInfoSpecificVmdk *obj, Error **errp)
{
    if (!visit_type_str(v, "create-type", &obj->create_type, errp)) {
        return false;
    }
    if (!visit_type_int(v, "cid", &obj->cid, errp)) {
        return false;
    }
    if (!visit_type_int(v, "parent-cid", &obj->parent_cid, errp)) {
        return false;
    }
    if (!visit_type_VmdkExtentInfoList(v, "extents", &obj->extents, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ImageInfoSpecificVmdk(Visitor *v, const char *name,
                 ImageInfoSpecificVmdk **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificVmdk), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificVmdk_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificVmdk(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_VmdkExtentInfo_members(Visitor *v, VmdkExtentInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (!visit_type_str(v, "format", &obj->format, errp)) {
        return false;
    }
    if (!visit_type_int(v, "virtual-size", &obj->virtual_size, errp)) {
        return false;
    }
    if (visit_optional(v, "cluster-size", &obj->has_cluster_size)) {
        if (!visit_type_int(v, "cluster-size", &obj->cluster_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compressed", &obj->has_compressed)) {
        if (!visit_type_bool(v, "compressed", &obj->compressed, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_VmdkExtentInfo(Visitor *v, const char *name,
                 VmdkExtentInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(VmdkExtentInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_VmdkExtentInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_VmdkExtentInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificRbd_members(Visitor *v, ImageInfoSpecificRbd *obj, Error **errp)
{
    if (visit_optional(v, "encryption-format", &obj->has_encryption_format)) {
        if (!visit_type_RbdImageEncryptionFormat(v, "encryption-format", &obj->encryption_format, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ImageInfoSpecificRbd(Visitor *v, const char *name,
                 ImageInfoSpecificRbd **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificRbd), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificRbd_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificRbd(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificFile_members(Visitor *v, ImageInfoSpecificFile *obj, Error **errp)
{
    if (visit_optional(v, "extent-size-hint", &obj->has_extent_size_hint)) {
        if (!visit_type_size(v, "extent-size-hint", &obj->extent_size_hint, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ImageInfoSpecificFile(Visitor *v, const char *name,
                 ImageInfoSpecificFile **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificFile), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificFile_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificFile(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificKind(Visitor *v, const char *name,
                 ImageInfoSpecificKind *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ImageInfoSpecificKind_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_ImageInfoSpecificQCow2Wrapper_members(Visitor *v, ImageInfoSpecificQCow2Wrapper *obj, Error **errp)
{
    if (!visit_type_ImageInfoSpecificQCow2(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ImageInfoSpecificQCow2Wrapper(Visitor *v, const char *name,
                 ImageInfoSpecificQCow2Wrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificQCow2Wrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificQCow2Wrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificQCow2Wrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificVmdkWrapper_members(Visitor *v, ImageInfoSpecificVmdkWrapper *obj, Error **errp)
{
    if (!visit_type_ImageInfoSpecificVmdk(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ImageInfoSpecificVmdkWrapper(Visitor *v, const char *name,
                 ImageInfoSpecificVmdkWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificVmdkWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificVmdkWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificVmdkWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificLUKSWrapper_members(Visitor *v, ImageInfoSpecificLUKSWrapper *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockInfoLUKS(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ImageInfoSpecificLUKSWrapper(Visitor *v, const char *name,
                 ImageInfoSpecificLUKSWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificLUKSWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificLUKSWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificLUKSWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificRbdWrapper_members(Visitor *v, ImageInfoSpecificRbdWrapper *obj, Error **errp)
{
    if (!visit_type_ImageInfoSpecificRbd(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ImageInfoSpecificRbdWrapper(Visitor *v, const char *name,
                 ImageInfoSpecificRbdWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificRbdWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificRbdWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificRbdWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecificFileWrapper_members(Visitor *v, ImageInfoSpecificFileWrapper *obj, Error **errp)
{
    if (!visit_type_ImageInfoSpecificFile(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ImageInfoSpecificFileWrapper(Visitor *v, const char *name,
                 ImageInfoSpecificFileWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecificFileWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecificFileWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecificFileWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_ImageInfoSpecific_base_members(Visitor *v, q_obj_ImageInfoSpecific_base *obj, Error **errp)
{
    if (!visit_type_ImageInfoSpecificKind(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_ImageInfoSpecific_base(Visitor *v, const char *name,
                 q_obj_ImageInfoSpecific_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_ImageInfoSpecific_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_ImageInfoSpecific_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_ImageInfoSpecific_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfoSpecific_members(Visitor *v, ImageInfoSpecific *obj, Error **errp)
{
    if (!visit_type_q_obj_ImageInfoSpecific_base_members(v, (q_obj_ImageInfoSpecific_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case IMAGE_INFO_SPECIFIC_KIND_QCOW2:
        return visit_type_ImageInfoSpecificQCow2Wrapper_members(v, &obj->u.qcow2, errp);
    case IMAGE_INFO_SPECIFIC_KIND_VMDK:
        return visit_type_ImageInfoSpecificVmdkWrapper_members(v, &obj->u.vmdk, errp);
    case IMAGE_INFO_SPECIFIC_KIND_LUKS:
        return visit_type_ImageInfoSpecificLUKSWrapper_members(v, &obj->u.luks, errp);
    case IMAGE_INFO_SPECIFIC_KIND_RBD:
        return visit_type_ImageInfoSpecificRbdWrapper_members(v, &obj->u.rbd, errp);
    case IMAGE_INFO_SPECIFIC_KIND_FILE:
        return visit_type_ImageInfoSpecificFileWrapper_members(v, &obj->u.file, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_ImageInfoSpecific(Visitor *v, const char *name,
                 ImageInfoSpecific **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfoSpecific), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfoSpecific_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfoSpecific(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SnapshotInfoList(Visitor *v, const char *name,
                 SnapshotInfoList **obj, Error **errp)
{
    bool ok = false;
    SnapshotInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SnapshotInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SnapshotInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SnapshotInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockNodeInfo_members(Visitor *v, BlockNodeInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (!visit_type_str(v, "format", &obj->format, errp)) {
        return false;
    }
    if (visit_optional(v, "dirty-flag", &obj->has_dirty_flag)) {
        if (!visit_type_bool(v, "dirty-flag", &obj->dirty_flag, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "actual-size", &obj->has_actual_size)) {
        if (!visit_type_int(v, "actual-size", &obj->actual_size, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "virtual-size", &obj->virtual_size, errp)) {
        return false;
    }
    if (visit_optional(v, "cluster-size", &obj->has_cluster_size)) {
        if (!visit_type_int(v, "cluster-size", &obj->cluster_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "encrypted", &obj->has_encrypted)) {
        if (!visit_type_bool(v, "encrypted", &obj->encrypted, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compressed", &obj->has_compressed)) {
        if (!visit_type_bool(v, "compressed", &obj->compressed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "backing-filename", &obj->has_backing_filename)) {
        if (!visit_type_str(v, "backing-filename", &obj->backing_filename, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "full-backing-filename", &obj->has_full_backing_filename)) {
        if (!visit_type_str(v, "full-backing-filename", &obj->full_backing_filename, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "backing-filename-format", &obj->has_backing_filename_format)) {
        if (!visit_type_str(v, "backing-filename-format", &obj->backing_filename_format, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "snapshots", &obj->has_snapshots)) {
        if (!visit_type_SnapshotInfoList(v, "snapshots", &obj->snapshots, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "format-specific", &obj->has_format_specific)) {
        if (!visit_type_ImageInfoSpecific(v, "format-specific", &obj->format_specific, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockNodeInfo(Visitor *v, const char *name,
                 BlockNodeInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockNodeInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockNodeInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockNodeInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageInfo_members(Visitor *v, ImageInfo *obj, Error **errp)
{
    if (!visit_type_BlockNodeInfo_members(v, (BlockNodeInfo *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "backing-image", &obj->has_backing_image)) {
        if (!visit_type_ImageInfo(v, "backing-image", &obj->backing_image, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ImageInfo(Visitor *v, const char *name,
                 ImageInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockChildInfo_members(Visitor *v, BlockChildInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_BlockGraphInfo(v, "info", &obj->info, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockChildInfo(Visitor *v, const char *name,
                 BlockChildInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockChildInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockChildInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockChildInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockChildInfoList(Visitor *v, const char *name,
                 BlockChildInfoList **obj, Error **errp)
{
    bool ok = false;
    BlockChildInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockChildInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockChildInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockChildInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockGraphInfo_members(Visitor *v, BlockGraphInfo *obj, Error **errp)
{
    if (!visit_type_BlockNodeInfo_members(v, (BlockNodeInfo *)obj, errp)) {
        return false;
    }
    if (!visit_type_BlockChildInfoList(v, "children", &obj->children, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockGraphInfo(Visitor *v, const char *name,
                 BlockGraphInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockGraphInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockGraphInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockGraphInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ImageCheck_members(Visitor *v, ImageCheck *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (!visit_type_str(v, "format", &obj->format, errp)) {
        return false;
    }
    if (!visit_type_int(v, "check-errors", &obj->check_errors, errp)) {
        return false;
    }
    if (visit_optional(v, "image-end-offset", &obj->has_image_end_offset)) {
        if (!visit_type_int(v, "image-end-offset", &obj->image_end_offset, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "corruptions", &obj->has_corruptions)) {
        if (!visit_type_int(v, "corruptions", &obj->corruptions, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "leaks", &obj->has_leaks)) {
        if (!visit_type_int(v, "leaks", &obj->leaks, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "corruptions-fixed", &obj->has_corruptions_fixed)) {
        if (!visit_type_int(v, "corruptions-fixed", &obj->corruptions_fixed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "leaks-fixed", &obj->has_leaks_fixed)) {
        if (!visit_type_int(v, "leaks-fixed", &obj->leaks_fixed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "total-clusters", &obj->has_total_clusters)) {
        if (!visit_type_int(v, "total-clusters", &obj->total_clusters, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "allocated-clusters", &obj->has_allocated_clusters)) {
        if (!visit_type_int(v, "allocated-clusters", &obj->allocated_clusters, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "fragmented-clusters", &obj->has_fragmented_clusters)) {
        if (!visit_type_int(v, "fragmented-clusters", &obj->fragmented_clusters, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compressed-clusters", &obj->has_compressed_clusters)) {
        if (!visit_type_int(v, "compressed-clusters", &obj->compressed_clusters, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ImageCheck(Visitor *v, const char *name,
                 ImageCheck **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ImageCheck), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ImageCheck_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ImageCheck(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MapEntry_members(Visitor *v, MapEntry *obj, Error **errp)
{
    if (!visit_type_int(v, "start", &obj->start, errp)) {
        return false;
    }
    if (!visit_type_int(v, "length", &obj->length, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "data", &obj->data, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "zero", &obj->zero, errp)) {
        return false;
    }
    if (!visit_type_int(v, "depth", &obj->depth, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "present", &obj->present, errp)) {
        return false;
    }
    if (visit_optional(v, "offset", &obj->has_offset)) {
        if (!visit_type_int(v, "offset", &obj->offset, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "filename", &obj->has_filename)) {
        if (!visit_type_str(v, "filename", &obj->filename, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MapEntry(Visitor *v, const char *name,
                 MapEntry **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MapEntry), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MapEntry_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MapEntry(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCacheInfo_members(Visitor *v, BlockdevCacheInfo *obj, Error **errp)
{
    if (!visit_type_bool(v, "writeback", &obj->writeback, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "direct", &obj->direct, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "no-flush", &obj->no_flush, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevCacheInfo(Visitor *v, const char *name,
                 BlockdevCacheInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCacheInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCacheInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCacheInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyInfoList(Visitor *v, const char *name,
                 BlockDirtyInfoList **obj, Error **errp)
{
    bool ok = false;
    BlockDirtyInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockDirtyInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockDirtyInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDeviceInfo_members(Visitor *v, BlockDeviceInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "file", &obj->file, errp)) {
        return false;
    }
    if (visit_optional(v, "node-name", &obj->has_node_name)) {
        if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
            return false;
        }
    }
    if (!visit_type_bool(v, "ro", &obj->ro, errp)) {
        return false;
    }
    if (!visit_type_str(v, "drv", &obj->drv, errp)) {
        return false;
    }
    if (visit_optional(v, "backing_file", &obj->has_backing_file)) {
        if (!visit_type_str(v, "backing_file", &obj->backing_file, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "backing_file_depth", &obj->backing_file_depth, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "encrypted", &obj->encrypted, errp)) {
        return false;
    }
    if (!visit_type_BlockdevDetectZeroesOptions(v, "detect_zeroes", &obj->detect_zeroes, errp)) {
        return false;
    }
    if (!visit_type_int(v, "bps", &obj->bps, errp)) {
        return false;
    }
    if (!visit_type_int(v, "bps_rd", &obj->bps_rd, errp)) {
        return false;
    }
    if (!visit_type_int(v, "bps_wr", &obj->bps_wr, errp)) {
        return false;
    }
    if (!visit_type_int(v, "iops", &obj->iops, errp)) {
        return false;
    }
    if (!visit_type_int(v, "iops_rd", &obj->iops_rd, errp)) {
        return false;
    }
    if (!visit_type_int(v, "iops_wr", &obj->iops_wr, errp)) {
        return false;
    }
    if (!visit_type_ImageInfo(v, "image", &obj->image, errp)) {
        return false;
    }
    if (visit_optional(v, "bps_max", &obj->has_bps_max)) {
        if (!visit_type_int(v, "bps_max", &obj->bps_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_rd_max", &obj->has_bps_rd_max)) {
        if (!visit_type_int(v, "bps_rd_max", &obj->bps_rd_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_wr_max", &obj->has_bps_wr_max)) {
        if (!visit_type_int(v, "bps_wr_max", &obj->bps_wr_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_max", &obj->has_iops_max)) {
        if (!visit_type_int(v, "iops_max", &obj->iops_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_rd_max", &obj->has_iops_rd_max)) {
        if (!visit_type_int(v, "iops_rd_max", &obj->iops_rd_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_wr_max", &obj->has_iops_wr_max)) {
        if (!visit_type_int(v, "iops_wr_max", &obj->iops_wr_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_max_length", &obj->has_bps_max_length)) {
        if (!visit_type_int(v, "bps_max_length", &obj->bps_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_rd_max_length", &obj->has_bps_rd_max_length)) {
        if (!visit_type_int(v, "bps_rd_max_length", &obj->bps_rd_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_wr_max_length", &obj->has_bps_wr_max_length)) {
        if (!visit_type_int(v, "bps_wr_max_length", &obj->bps_wr_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_max_length", &obj->has_iops_max_length)) {
        if (!visit_type_int(v, "iops_max_length", &obj->iops_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_rd_max_length", &obj->has_iops_rd_max_length)) {
        if (!visit_type_int(v, "iops_rd_max_length", &obj->iops_rd_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_wr_max_length", &obj->has_iops_wr_max_length)) {
        if (!visit_type_int(v, "iops_wr_max_length", &obj->iops_wr_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_size", &obj->has_iops_size)) {
        if (!visit_type_int(v, "iops_size", &obj->iops_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "group", &obj->has_group)) {
        if (!visit_type_str(v, "group", &obj->group, errp)) {
            return false;
        }
    }
    if (!visit_type_BlockdevCacheInfo(v, "cache", &obj->cache, errp)) {
        return false;
    }
    if (!visit_type_int(v, "write_threshold", &obj->write_threshold, errp)) {
        return false;
    }
    if (visit_optional(v, "dirty-bitmaps", &obj->has_dirty_bitmaps)) {
        if (!visit_type_BlockDirtyInfoList(v, "dirty-bitmaps", &obj->dirty_bitmaps, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockDeviceInfo(Visitor *v, const char *name,
                 BlockDeviceInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDeviceInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDeviceInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDeviceInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDeviceIoStatus(Visitor *v, const char *name,
                 BlockDeviceIoStatus *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockDeviceIoStatus_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockDirtyInfo_members(Visitor *v, BlockDirtyInfo *obj, Error **errp)
{
    if (visit_optional(v, "name", &obj->has_name)) {
        if (!visit_type_str(v, "name", &obj->name, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "count", &obj->count, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "granularity", &obj->granularity, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "recording", &obj->recording, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "busy", &obj->busy, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "persistent", &obj->persistent, errp)) {
        return false;
    }
    if (visit_optional(v, "inconsistent", &obj->has_inconsistent)) {
        if (!visit_type_bool(v, "inconsistent", &obj->inconsistent, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockDirtyInfo(Visitor *v, const char *name,
                 BlockDirtyInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDirtyInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDirtyInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Qcow2BitmapInfoFlags(Visitor *v, const char *name,
                 Qcow2BitmapInfoFlags *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &Qcow2BitmapInfoFlags_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_Qcow2BitmapInfoFlagsList(Visitor *v, const char *name,
                 Qcow2BitmapInfoFlagsList **obj, Error **errp)
{
    bool ok = false;
    Qcow2BitmapInfoFlagsList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (Qcow2BitmapInfoFlagsList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_Qcow2BitmapInfoFlags(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Qcow2BitmapInfoFlagsList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Qcow2BitmapInfo_members(Visitor *v, Qcow2BitmapInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "granularity", &obj->granularity, errp)) {
        return false;
    }
    if (!visit_type_Qcow2BitmapInfoFlagsList(v, "flags", &obj->flags, errp)) {
        return false;
    }
    return true;
}

bool visit_type_Qcow2BitmapInfo(Visitor *v, const char *name,
                 Qcow2BitmapInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Qcow2BitmapInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Qcow2BitmapInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Qcow2BitmapInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockLatencyHistogramInfo_members(Visitor *v, BlockLatencyHistogramInfo *obj, Error **errp)
{
    if (!visit_type_uint64List(v, "boundaries", &obj->boundaries, errp)) {
        return false;
    }
    if (!visit_type_uint64List(v, "bins", &obj->bins, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockLatencyHistogramInfo(Visitor *v, const char *name,
                 BlockLatencyHistogramInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockLatencyHistogramInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockLatencyHistogramInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockLatencyHistogramInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockInfo_members(Visitor *v, BlockInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (visit_optional(v, "qdev", &obj->has_qdev)) {
        if (!visit_type_str(v, "qdev", &obj->qdev, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "removable", &obj->removable, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "locked", &obj->locked, errp)) {
        return false;
    }
    if (visit_optional(v, "inserted", &obj->has_inserted)) {
        if (!visit_type_BlockDeviceInfo(v, "inserted", &obj->inserted, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tray_open", &obj->has_tray_open)) {
        if (!visit_type_bool(v, "tray_open", &obj->tray_open, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "io-status", &obj->has_io_status)) {
        if (!visit_type_BlockDeviceIoStatus(v, "io-status", &obj->io_status, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockInfo(Visitor *v, const char *name,
                 BlockInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockMeasureInfo_members(Visitor *v, BlockMeasureInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "required", &obj->required, errp)) {
        return false;
    }
    if (!visit_type_int(v, "fully-allocated", &obj->fully_allocated, errp)) {
        return false;
    }
    if (visit_optional(v, "bitmaps", &obj->has_bitmaps)) {
        if (!visit_type_int(v, "bitmaps", &obj->bitmaps, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockMeasureInfo(Visitor *v, const char *name,
                 BlockMeasureInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockMeasureInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockMeasureInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockMeasureInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockInfoList(Visitor *v, const char *name,
                 BlockInfoList **obj, Error **errp)
{
    bool ok = false;
    BlockInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDeviceTimedStats_members(Visitor *v, BlockDeviceTimedStats *obj, Error **errp)
{
    if (!visit_type_int(v, "interval_length", &obj->interval_length, errp)) {
        return false;
    }
    if (!visit_type_int(v, "min_rd_latency_ns", &obj->min_rd_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "max_rd_latency_ns", &obj->max_rd_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "avg_rd_latency_ns", &obj->avg_rd_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "min_wr_latency_ns", &obj->min_wr_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "max_wr_latency_ns", &obj->max_wr_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "avg_wr_latency_ns", &obj->avg_wr_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "min_flush_latency_ns", &obj->min_flush_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "max_flush_latency_ns", &obj->max_flush_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "avg_flush_latency_ns", &obj->avg_flush_latency_ns, errp)) {
        return false;
    }
    if (!visit_type_number(v, "avg_rd_queue_depth", &obj->avg_rd_queue_depth, errp)) {
        return false;
    }
    if (!visit_type_number(v, "avg_wr_queue_depth", &obj->avg_wr_queue_depth, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockDeviceTimedStats(Visitor *v, const char *name,
                 BlockDeviceTimedStats **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDeviceTimedStats), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDeviceTimedStats_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDeviceTimedStats(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDeviceTimedStatsList(Visitor *v, const char *name,
                 BlockDeviceTimedStatsList **obj, Error **errp)
{
    bool ok = false;
    BlockDeviceTimedStatsList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockDeviceTimedStatsList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockDeviceTimedStats(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDeviceTimedStatsList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDeviceStats_members(Visitor *v, BlockDeviceStats *obj, Error **errp)
{
    if (!visit_type_int(v, "rd_bytes", &obj->rd_bytes, errp)) {
        return false;
    }
    if (!visit_type_int(v, "wr_bytes", &obj->wr_bytes, errp)) {
        return false;
    }
    if (!visit_type_int(v, "unmap_bytes", &obj->unmap_bytes, errp)) {
        return false;
    }
    if (!visit_type_int(v, "rd_operations", &obj->rd_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "wr_operations", &obj->wr_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "flush_operations", &obj->flush_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "unmap_operations", &obj->unmap_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "rd_total_time_ns", &obj->rd_total_time_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "wr_total_time_ns", &obj->wr_total_time_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "flush_total_time_ns", &obj->flush_total_time_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "unmap_total_time_ns", &obj->unmap_total_time_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "wr_highest_offset", &obj->wr_highest_offset, errp)) {
        return false;
    }
    if (!visit_type_int(v, "rd_merged", &obj->rd_merged, errp)) {
        return false;
    }
    if (!visit_type_int(v, "wr_merged", &obj->wr_merged, errp)) {
        return false;
    }
    if (!visit_type_int(v, "unmap_merged", &obj->unmap_merged, errp)) {
        return false;
    }
    if (visit_optional(v, "idle_time_ns", &obj->has_idle_time_ns)) {
        if (!visit_type_int(v, "idle_time_ns", &obj->idle_time_ns, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "failed_rd_operations", &obj->failed_rd_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "failed_wr_operations", &obj->failed_wr_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "failed_flush_operations", &obj->failed_flush_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "failed_unmap_operations", &obj->failed_unmap_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "invalid_rd_operations", &obj->invalid_rd_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "invalid_wr_operations", &obj->invalid_wr_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "invalid_flush_operations", &obj->invalid_flush_operations, errp)) {
        return false;
    }
    if (!visit_type_int(v, "invalid_unmap_operations", &obj->invalid_unmap_operations, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "account_invalid", &obj->account_invalid, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "account_failed", &obj->account_failed, errp)) {
        return false;
    }
    if (!visit_type_BlockDeviceTimedStatsList(v, "timed_stats", &obj->timed_stats, errp)) {
        return false;
    }
    if (visit_optional(v, "rd_latency_histogram", &obj->has_rd_latency_histogram)) {
        if (!visit_type_BlockLatencyHistogramInfo(v, "rd_latency_histogram", &obj->rd_latency_histogram, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "wr_latency_histogram", &obj->has_wr_latency_histogram)) {
        if (!visit_type_BlockLatencyHistogramInfo(v, "wr_latency_histogram", &obj->wr_latency_histogram, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "flush_latency_histogram", &obj->has_flush_latency_histogram)) {
        if (!visit_type_BlockLatencyHistogramInfo(v, "flush_latency_histogram", &obj->flush_latency_histogram, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockDeviceStats(Visitor *v, const char *name,
                 BlockDeviceStats **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDeviceStats), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDeviceStats_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDeviceStats(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockStatsSpecificFile_members(Visitor *v, BlockStatsSpecificFile *obj, Error **errp)
{
    if (!visit_type_uint64(v, "discard-nb-ok", &obj->discard_nb_ok, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "discard-nb-failed", &obj->discard_nb_failed, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "discard-bytes-ok", &obj->discard_bytes_ok, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockStatsSpecificFile(Visitor *v, const char *name,
                 BlockStatsSpecificFile **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockStatsSpecificFile), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockStatsSpecificFile_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockStatsSpecificFile(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockStatsSpecificNvme_members(Visitor *v, BlockStatsSpecificNvme *obj, Error **errp)
{
    if (!visit_type_uint64(v, "completion-errors", &obj->completion_errors, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "aligned-accesses", &obj->aligned_accesses, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "unaligned-accesses", &obj->unaligned_accesses, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockStatsSpecificNvme(Visitor *v, const char *name,
                 BlockStatsSpecificNvme **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockStatsSpecificNvme), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockStatsSpecificNvme_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockStatsSpecificNvme(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BlockStatsSpecific_base_members(Visitor *v, q_obj_BlockStatsSpecific_base *obj, Error **errp)
{
    if (!visit_type_BlockdevDriver(v, "driver", &obj->driver, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockStatsSpecific_base(Visitor *v, const char *name,
                 q_obj_BlockStatsSpecific_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BlockStatsSpecific_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BlockStatsSpecific_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BlockStatsSpecific_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockStatsSpecific_members(Visitor *v, BlockStatsSpecific *obj, Error **errp)
{
    if (!visit_type_q_obj_BlockStatsSpecific_base_members(v, (q_obj_BlockStatsSpecific_base *)obj, errp)) {
        return false;
    }
    switch (obj->driver) {
    case BLOCKDEV_DRIVER_FILE:
        return visit_type_BlockStatsSpecificFile_members(v, &obj->u.file, errp);
#if defined(HAVE_HOST_BLOCK_DEVICE)
    case BLOCKDEV_DRIVER_HOST_DEVICE:
        return visit_type_BlockStatsSpecificFile_members(v, &obj->u.host_device, errp);
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
    case BLOCKDEV_DRIVER_NVME:
        return visit_type_BlockStatsSpecificNvme_members(v, &obj->u.nvme, errp);
    case BLOCKDEV_DRIVER_BLKDEBUG:
        break;
    case BLOCKDEV_DRIVER_BLKLOGWRITES:
        break;
    case BLOCKDEV_DRIVER_BLKREPLAY:
        break;
    case BLOCKDEV_DRIVER_BLKVERIFY:
        break;
    case BLOCKDEV_DRIVER_BOCHS:
        break;
    case BLOCKDEV_DRIVER_CLOOP:
        break;
    case BLOCKDEV_DRIVER_COMPRESS:
        break;
    case BLOCKDEV_DRIVER_COPY_BEFORE_WRITE:
        break;
    case BLOCKDEV_DRIVER_COPY_ON_READ:
        break;
    case BLOCKDEV_DRIVER_DMG:
        break;
    case BLOCKDEV_DRIVER_SNAPSHOT_ACCESS:
        break;
    case BLOCKDEV_DRIVER_FTP:
        break;
    case BLOCKDEV_DRIVER_FTPS:
        break;
    case BLOCKDEV_DRIVER_GLUSTER:
        break;
#if defined(HAVE_HOST_BLOCK_DEVICE)
    case BLOCKDEV_DRIVER_HOST_CDROM:
        break;
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
    case BLOCKDEV_DRIVER_HTTP:
        break;
    case BLOCKDEV_DRIVER_HTTPS:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_IO_URING:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_ISCSI:
        break;
    case BLOCKDEV_DRIVER_LUKS:
        break;
    case BLOCKDEV_DRIVER_NBD:
        break;
    case BLOCKDEV_DRIVER_NFS:
        break;
    case BLOCKDEV_DRIVER_NULL_AIO:
        break;
    case BLOCKDEV_DRIVER_NULL_CO:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_NVME_IO_URING:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_PARALLELS:
        break;
    case BLOCKDEV_DRIVER_PREALLOCATE:
        break;
    case BLOCKDEV_DRIVER_QCOW:
        break;
    case BLOCKDEV_DRIVER_QCOW2:
        break;
    case BLOCKDEV_DRIVER_QED:
        break;
    case BLOCKDEV_DRIVER_QUORUM:
        break;
    case BLOCKDEV_DRIVER_RAW:
        break;
    case BLOCKDEV_DRIVER_RBD:
        break;
#if defined(CONFIG_REPLICATION)
    case BLOCKDEV_DRIVER_REPLICATION:
        break;
#endif /* defined(CONFIG_REPLICATION) */
    case BLOCKDEV_DRIVER_SSH:
        break;
    case BLOCKDEV_DRIVER_THROTTLE:
        break;
    case BLOCKDEV_DRIVER_VDI:
        break;
    case BLOCKDEV_DRIVER_VHDX:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VFIO_PCI:
        break;
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_USER:
        break;
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_VDPA:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_VMDK:
        break;
    case BLOCKDEV_DRIVER_VPC:
        break;
    case BLOCKDEV_DRIVER_VVFAT:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_BlockStatsSpecific(Visitor *v, const char *name,
                 BlockStatsSpecific **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockStatsSpecific), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockStatsSpecific_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockStatsSpecific(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockStats_members(Visitor *v, BlockStats *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (!visit_type_str(v, "device", &obj->device, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "qdev", &obj->has_qdev)) {
        if (!visit_type_str(v, "qdev", &obj->qdev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "node-name", &obj->has_node_name)) {
        if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
            return false;
        }
    }
    if (!visit_type_BlockDeviceStats(v, "stats", &obj->stats, errp)) {
        return false;
    }
    if (visit_optional(v, "driver-specific", &obj->has_driver_specific)) {
        if (!visit_type_BlockStatsSpecific(v, "driver-specific", &obj->driver_specific, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "parent", &obj->has_parent)) {
        if (!visit_type_BlockStats(v, "parent", &obj->parent, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "backing", &obj->has_backing)) {
        if (!visit_type_BlockStats(v, "backing", &obj->backing, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockStats(Visitor *v, const char *name,
                 BlockStats **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockStats), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockStats_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockStats(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_blockstats_arg_members(Visitor *v, q_obj_query_blockstats_arg *obj, Error **errp)
{
    if (visit_optional(v, "query-nodes", &obj->has_query_nodes)) {
        if (!visit_type_bool(v, "query-nodes", &obj->query_nodes, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_query_blockstats_arg(Visitor *v, const char *name,
                 q_obj_query_blockstats_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_blockstats_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_blockstats_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_blockstats_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockStatsList(Visitor *v, const char *name,
                 BlockStatsList **obj, Error **errp)
{
    bool ok = false;
    BlockStatsList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockStatsList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockStats(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockStatsList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOnError(Visitor *v, const char *name,
                 BlockdevOnError *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevOnError_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_MirrorSyncMode(Visitor *v, const char *name,
                 MirrorSyncMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MirrorSyncMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BitmapSyncMode(Visitor *v, const char *name,
                 BitmapSyncMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BitmapSyncMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_MirrorCopyMode(Visitor *v, const char *name,
                 MirrorCopyMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MirrorCopyMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockJobInfo_members(Visitor *v, BlockJobInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_int(v, "len", &obj->len, errp)) {
        return false;
    }
    if (!visit_type_int(v, "offset", &obj->offset, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "busy", &obj->busy, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "paused", &obj->paused, errp)) {
        return false;
    }
    if (!visit_type_int(v, "speed", &obj->speed, errp)) {
        return false;
    }
    if (!visit_type_BlockDeviceIoStatus(v, "io-status", &obj->io_status, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "ready", &obj->ready, errp)) {
        return false;
    }
    if (!visit_type_JobStatus(v, "status", &obj->status, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "auto-finalize", &obj->auto_finalize, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "auto-dismiss", &obj->auto_dismiss, errp)) {
        return false;
    }
    if (visit_optional(v, "error", &obj->has_error)) {
        if (!visit_type_str(v, "error", &obj->error, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockJobInfo(Visitor *v, const char *name,
                 BlockJobInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockJobInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockJobInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockJobInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockJobInfoList(Visitor *v, const char *name,
                 BlockJobInfoList **obj, Error **errp)
{
    bool ok = false;
    BlockJobInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockJobInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockJobInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockJobInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_resize_arg_members(Visitor *v, q_obj_block_resize_arg *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (!visit_type_str(v, "device", &obj->device, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "node-name", &obj->has_node_name)) {
        if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "size", &obj->size, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_block_resize_arg(Visitor *v, const char *name,
                 q_obj_block_resize_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_resize_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_resize_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_resize_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NewImageMode(Visitor *v, const char *name,
                 NewImageMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NewImageMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevSnapshotSync_members(Visitor *v, BlockdevSnapshotSync *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (!visit_type_str(v, "device", &obj->device, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "node-name", &obj->has_node_name)) {
        if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "snapshot-file", &obj->snapshot_file, errp)) {
        return false;
    }
    if (visit_optional(v, "snapshot-node-name", &obj->has_snapshot_node_name)) {
        if (!visit_type_str(v, "snapshot-node-name", &obj->snapshot_node_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_str(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_NewImageMode(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevSnapshotSync(Visitor *v, const char *name,
                 BlockdevSnapshotSync **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevSnapshotSync), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevSnapshotSync_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevSnapshotSync(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevSnapshot_members(Visitor *v, BlockdevSnapshot *obj, Error **errp)
{
    if (!visit_type_str(v, "node", &obj->node, errp)) {
        return false;
    }
    if (!visit_type_str(v, "overlay", &obj->overlay, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevSnapshot(Visitor *v, const char *name,
                 BlockdevSnapshot **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevSnapshot), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevSnapshot_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevSnapshot(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BackupPerf_members(Visitor *v, BackupPerf *obj, Error **errp)
{
    if (visit_optional(v, "use-copy-range", &obj->has_use_copy_range)) {
        if (!visit_type_bool(v, "use-copy-range", &obj->use_copy_range, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-workers", &obj->has_max_workers)) {
        if (!visit_type_int(v, "max-workers", &obj->max_workers, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-chunk", &obj->has_max_chunk)) {
        if (!visit_type_int64(v, "max-chunk", &obj->max_chunk, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BackupPerf(Visitor *v, const char *name,
                 BackupPerf **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BackupPerf), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BackupPerf_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BackupPerf(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BackupCommon_members(Visitor *v, BackupCommon *obj, Error **errp)
{
    if (visit_optional(v, "job-id", &obj->has_job_id)) {
        if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_MirrorSyncMode(v, "sync", &obj->sync, errp)) {
        return false;
    }
    if (visit_optional(v, "speed", &obj->has_speed)) {
        if (!visit_type_int(v, "speed", &obj->speed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bitmap", &obj->has_bitmap)) {
        if (!visit_type_str(v, "bitmap", &obj->bitmap, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bitmap-mode", &obj->has_bitmap_mode)) {
        if (!visit_type_BitmapSyncMode(v, "bitmap-mode", &obj->bitmap_mode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compress", &obj->has_compress)) {
        if (!visit_type_bool(v, "compress", &obj->compress, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-source-error", &obj->has_on_source_error)) {
        if (!visit_type_BlockdevOnError(v, "on-source-error", &obj->on_source_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-target-error", &obj->has_on_target_error)) {
        if (!visit_type_BlockdevOnError(v, "on-target-error", &obj->on_target_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-finalize", &obj->has_auto_finalize)) {
        if (!visit_type_bool(v, "auto-finalize", &obj->auto_finalize, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-dismiss", &obj->has_auto_dismiss)) {
        if (!visit_type_bool(v, "auto-dismiss", &obj->auto_dismiss, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "filter-node-name", &obj->has_filter_node_name)) {
        if (!visit_type_str(v, "filter-node-name", &obj->filter_node_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "x-perf", &obj->has_x_perf)) {
        if (visit_policy_reject(v, "x-perf", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-perf", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_BackupPerf(v, "x-perf", &obj->x_perf, errp)) {
                return false;
            }
        }
    }
    return true;
}

bool visit_type_BackupCommon(Visitor *v, const char *name,
                 BackupCommon **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BackupCommon), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BackupCommon_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BackupCommon(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DriveBackup_members(Visitor *v, DriveBackup *obj, Error **errp)
{
    if (!visit_type_BackupCommon_members(v, (BackupCommon *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "target", &obj->target, errp)) {
        return false;
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_str(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_NewImageMode(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DriveBackup(Visitor *v, const char *name,
                 DriveBackup **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DriveBackup), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DriveBackup_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DriveBackup(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevBackup_members(Visitor *v, BlockdevBackup *obj, Error **errp)
{
    if (!visit_type_BackupCommon_members(v, (BackupCommon *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "target", &obj->target, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevBackup(Visitor *v, const char *name,
                 BlockdevBackup **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevBackup), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevBackup_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevBackup(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_change_backing_file_arg_members(Visitor *v, q_obj_change_backing_file_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_str(v, "image-node-name", &obj->image_node_name, errp)) {
        return false;
    }
    if (!visit_type_str(v, "backing-file", &obj->backing_file, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_change_backing_file_arg(Visitor *v, const char *name,
                 q_obj_change_backing_file_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_change_backing_file_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_change_backing_file_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_change_backing_file_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_commit_arg_members(Visitor *v, q_obj_block_commit_arg *obj, Error **errp)
{
    if (visit_optional(v, "job-id", &obj->has_job_id)) {
        if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (visit_optional(v, "base-node", &obj->has_base_node)) {
        if (!visit_type_str(v, "base-node", &obj->base_node, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "base", &obj->has_base)) {
        if (visit_policy_reject(v, "base", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "base", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_str(v, "base", &obj->base, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "top-node", &obj->has_top_node)) {
        if (!visit_type_str(v, "top-node", &obj->top_node, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "top", &obj->has_top)) {
        if (visit_policy_reject(v, "top", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "top", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_str(v, "top", &obj->top, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "backing-file", &obj->has_backing_file)) {
        if (!visit_type_str(v, "backing-file", &obj->backing_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "speed", &obj->has_speed)) {
        if (!visit_type_int(v, "speed", &obj->speed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-error", &obj->has_on_error)) {
        if (!visit_type_BlockdevOnError(v, "on-error", &obj->on_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "filter-node-name", &obj->has_filter_node_name)) {
        if (!visit_type_str(v, "filter-node-name", &obj->filter_node_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-finalize", &obj->has_auto_finalize)) {
        if (!visit_type_bool(v, "auto-finalize", &obj->auto_finalize, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-dismiss", &obj->has_auto_dismiss)) {
        if (!visit_type_bool(v, "auto-dismiss", &obj->auto_dismiss, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_block_commit_arg(Visitor *v, const char *name,
                 q_obj_block_commit_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_commit_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_commit_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_commit_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_named_block_nodes_arg_members(Visitor *v, q_obj_query_named_block_nodes_arg *obj, Error **errp)
{
    if (visit_optional(v, "flat", &obj->has_flat)) {
        if (!visit_type_bool(v, "flat", &obj->flat, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_query_named_block_nodes_arg(Visitor *v, const char *name,
                 q_obj_query_named_block_nodes_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_named_block_nodes_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_named_block_nodes_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_named_block_nodes_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDeviceInfoList(Visitor *v, const char *name,
                 BlockDeviceInfoList **obj, Error **errp)
{
    bool ok = false;
    BlockDeviceInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockDeviceInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockDeviceInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDeviceInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_XDbgBlockGraphNodeType(Visitor *v, const char *name,
                 XDbgBlockGraphNodeType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &XDbgBlockGraphNodeType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_XDbgBlockGraphNode_members(Visitor *v, XDbgBlockGraphNode *obj, Error **errp)
{
    if (!visit_type_uint64(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_XDbgBlockGraphNodeType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_XDbgBlockGraphNode(Visitor *v, const char *name,
                 XDbgBlockGraphNode **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(XDbgBlockGraphNode), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_XDbgBlockGraphNode_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_XDbgBlockGraphNode(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockPermission(Visitor *v, const char *name,
                 BlockPermission *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockPermission_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockPermissionList(Visitor *v, const char *name,
                 BlockPermissionList **obj, Error **errp)
{
    bool ok = false;
    BlockPermissionList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockPermissionList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockPermission(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockPermissionList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_XDbgBlockGraphEdge_members(Visitor *v, XDbgBlockGraphEdge *obj, Error **errp)
{
    if (!visit_type_uint64(v, "parent", &obj->parent, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "child", &obj->child, errp)) {
        return false;
    }
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_BlockPermissionList(v, "perm", &obj->perm, errp)) {
        return false;
    }
    if (!visit_type_BlockPermissionList(v, "shared-perm", &obj->shared_perm, errp)) {
        return false;
    }
    return true;
}

bool visit_type_XDbgBlockGraphEdge(Visitor *v, const char *name,
                 XDbgBlockGraphEdge **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(XDbgBlockGraphEdge), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_XDbgBlockGraphEdge_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_XDbgBlockGraphEdge(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_XDbgBlockGraphNodeList(Visitor *v, const char *name,
                 XDbgBlockGraphNodeList **obj, Error **errp)
{
    bool ok = false;
    XDbgBlockGraphNodeList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (XDbgBlockGraphNodeList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_XDbgBlockGraphNode(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_XDbgBlockGraphNodeList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_XDbgBlockGraphEdgeList(Visitor *v, const char *name,
                 XDbgBlockGraphEdgeList **obj, Error **errp)
{
    bool ok = false;
    XDbgBlockGraphEdgeList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (XDbgBlockGraphEdgeList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_XDbgBlockGraphEdge(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_XDbgBlockGraphEdgeList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_XDbgBlockGraph_members(Visitor *v, XDbgBlockGraph *obj, Error **errp)
{
    if (!visit_type_XDbgBlockGraphNodeList(v, "nodes", &obj->nodes, errp)) {
        return false;
    }
    if (!visit_type_XDbgBlockGraphEdgeList(v, "edges", &obj->edges, errp)) {
        return false;
    }
    return true;
}

bool visit_type_XDbgBlockGraph(Visitor *v, const char *name,
                 XDbgBlockGraph **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(XDbgBlockGraph), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_XDbgBlockGraph_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_XDbgBlockGraph(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DriveMirror_members(Visitor *v, DriveMirror *obj, Error **errp)
{
    if (visit_optional(v, "job-id", &obj->has_job_id)) {
        if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_str(v, "target", &obj->target, errp)) {
        return false;
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_str(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "node-name", &obj->has_node_name)) {
        if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "replaces", &obj->has_replaces)) {
        if (!visit_type_str(v, "replaces", &obj->replaces, errp)) {
            return false;
        }
    }
    if (!visit_type_MirrorSyncMode(v, "sync", &obj->sync, errp)) {
        return false;
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        if (!visit_type_NewImageMode(v, "mode", &obj->mode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "speed", &obj->has_speed)) {
        if (!visit_type_int(v, "speed", &obj->speed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "granularity", &obj->has_granularity)) {
        if (!visit_type_uint32(v, "granularity", &obj->granularity, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "buf-size", &obj->has_buf_size)) {
        if (!visit_type_int(v, "buf-size", &obj->buf_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-source-error", &obj->has_on_source_error)) {
        if (!visit_type_BlockdevOnError(v, "on-source-error", &obj->on_source_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-target-error", &obj->has_on_target_error)) {
        if (!visit_type_BlockdevOnError(v, "on-target-error", &obj->on_target_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "unmap", &obj->has_unmap)) {
        if (!visit_type_bool(v, "unmap", &obj->unmap, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "copy-mode", &obj->has_copy_mode)) {
        if (!visit_type_MirrorCopyMode(v, "copy-mode", &obj->copy_mode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-finalize", &obj->has_auto_finalize)) {
        if (!visit_type_bool(v, "auto-finalize", &obj->auto_finalize, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-dismiss", &obj->has_auto_dismiss)) {
        if (!visit_type_bool(v, "auto-dismiss", &obj->auto_dismiss, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_DriveMirror(Visitor *v, const char *name,
                 DriveMirror **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DriveMirror), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DriveMirror_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DriveMirror(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmap_members(Visitor *v, BlockDirtyBitmap *obj, Error **errp)
{
    if (!visit_type_str(v, "node", &obj->node, errp)) {
        return false;
    }
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockDirtyBitmap(Visitor *v, const char *name,
                 BlockDirtyBitmap **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDirtyBitmap), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDirtyBitmap_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmap(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmapAdd_members(Visitor *v, BlockDirtyBitmapAdd *obj, Error **errp)
{
    if (!visit_type_str(v, "node", &obj->node, errp)) {
        return false;
    }
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "granularity", &obj->has_granularity)) {
        if (!visit_type_uint32(v, "granularity", &obj->granularity, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "persistent", &obj->has_persistent)) {
        if (!visit_type_bool(v, "persistent", &obj->persistent, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "disabled", &obj->has_disabled)) {
        if (!visit_type_bool(v, "disabled", &obj->disabled, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockDirtyBitmapAdd(Visitor *v, const char *name,
                 BlockDirtyBitmapAdd **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDirtyBitmapAdd), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDirtyBitmapAdd_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmapAdd(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmapOrStr(Visitor *v, const char *name,
                 BlockDirtyBitmapOrStr **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QSTRING:
        ok = visit_type_str(v, name, &(*obj)->u.local, errp);
        break;
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type_BlockDirtyBitmap_members(v, &(*obj)->u.external, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "BlockDirtyBitmapOrStr");
        /* Avoid passing invalid *obj to qapi_free_BlockDirtyBitmapOrStr() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmapOrStr(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmapOrStrList(Visitor *v, const char *name,
                 BlockDirtyBitmapOrStrList **obj, Error **errp)
{
    bool ok = false;
    BlockDirtyBitmapOrStrList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockDirtyBitmapOrStrList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockDirtyBitmapOrStr(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmapOrStrList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmapMerge_members(Visitor *v, BlockDirtyBitmapMerge *obj, Error **errp)
{
    if (!visit_type_str(v, "node", &obj->node, errp)) {
        return false;
    }
    if (!visit_type_str(v, "target", &obj->target, errp)) {
        return false;
    }
    if (!visit_type_BlockDirtyBitmapOrStrList(v, "bitmaps", &obj->bitmaps, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockDirtyBitmapMerge(Visitor *v, const char *name,
                 BlockDirtyBitmapMerge **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDirtyBitmapMerge), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDirtyBitmapMerge_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmapMerge(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmapSha256_members(Visitor *v, BlockDirtyBitmapSha256 *obj, Error **errp)
{
    if (!visit_type_str(v, "sha256", &obj->sha256, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockDirtyBitmapSha256(Visitor *v, const char *name,
                 BlockDirtyBitmapSha256 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDirtyBitmapSha256), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDirtyBitmapSha256_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmapSha256(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_mirror_arg_members(Visitor *v, q_obj_blockdev_mirror_arg *obj, Error **errp)
{
    if (visit_optional(v, "job-id", &obj->has_job_id)) {
        if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_str(v, "target", &obj->target, errp)) {
        return false;
    }
    if (visit_optional(v, "replaces", &obj->has_replaces)) {
        if (!visit_type_str(v, "replaces", &obj->replaces, errp)) {
            return false;
        }
    }
    if (!visit_type_MirrorSyncMode(v, "sync", &obj->sync, errp)) {
        return false;
    }
    if (visit_optional(v, "speed", &obj->has_speed)) {
        if (!visit_type_int(v, "speed", &obj->speed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "granularity", &obj->has_granularity)) {
        if (!visit_type_uint32(v, "granularity", &obj->granularity, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "buf-size", &obj->has_buf_size)) {
        if (!visit_type_int(v, "buf-size", &obj->buf_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-source-error", &obj->has_on_source_error)) {
        if (!visit_type_BlockdevOnError(v, "on-source-error", &obj->on_source_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-target-error", &obj->has_on_target_error)) {
        if (!visit_type_BlockdevOnError(v, "on-target-error", &obj->on_target_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "filter-node-name", &obj->has_filter_node_name)) {
        if (!visit_type_str(v, "filter-node-name", &obj->filter_node_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "copy-mode", &obj->has_copy_mode)) {
        if (!visit_type_MirrorCopyMode(v, "copy-mode", &obj->copy_mode, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-finalize", &obj->has_auto_finalize)) {
        if (!visit_type_bool(v, "auto-finalize", &obj->auto_finalize, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-dismiss", &obj->has_auto_dismiss)) {
        if (!visit_type_bool(v, "auto-dismiss", &obj->auto_dismiss, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_blockdev_mirror_arg(Visitor *v, const char *name,
                 q_obj_blockdev_mirror_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_mirror_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_mirror_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_mirror_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockIOThrottle_members(Visitor *v, BlockIOThrottle *obj, Error **errp)
{
    if (visit_optional(v, "device", &obj->has_device)) {
        if (visit_policy_reject(v, "device", 1u << QAPI_DEPRECATED, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "device", 1u << QAPI_DEPRECATED)) {
            if (!visit_type_str(v, "device", &obj->device, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "bps", &obj->bps, errp)) {
        return false;
    }
    if (!visit_type_int(v, "bps_rd", &obj->bps_rd, errp)) {
        return false;
    }
    if (!visit_type_int(v, "bps_wr", &obj->bps_wr, errp)) {
        return false;
    }
    if (!visit_type_int(v, "iops", &obj->iops, errp)) {
        return false;
    }
    if (!visit_type_int(v, "iops_rd", &obj->iops_rd, errp)) {
        return false;
    }
    if (!visit_type_int(v, "iops_wr", &obj->iops_wr, errp)) {
        return false;
    }
    if (visit_optional(v, "bps_max", &obj->has_bps_max)) {
        if (!visit_type_int(v, "bps_max", &obj->bps_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_rd_max", &obj->has_bps_rd_max)) {
        if (!visit_type_int(v, "bps_rd_max", &obj->bps_rd_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_wr_max", &obj->has_bps_wr_max)) {
        if (!visit_type_int(v, "bps_wr_max", &obj->bps_wr_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_max", &obj->has_iops_max)) {
        if (!visit_type_int(v, "iops_max", &obj->iops_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_rd_max", &obj->has_iops_rd_max)) {
        if (!visit_type_int(v, "iops_rd_max", &obj->iops_rd_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_wr_max", &obj->has_iops_wr_max)) {
        if (!visit_type_int(v, "iops_wr_max", &obj->iops_wr_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_max_length", &obj->has_bps_max_length)) {
        if (!visit_type_int(v, "bps_max_length", &obj->bps_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_rd_max_length", &obj->has_bps_rd_max_length)) {
        if (!visit_type_int(v, "bps_rd_max_length", &obj->bps_rd_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps_wr_max_length", &obj->has_bps_wr_max_length)) {
        if (!visit_type_int(v, "bps_wr_max_length", &obj->bps_wr_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_max_length", &obj->has_iops_max_length)) {
        if (!visit_type_int(v, "iops_max_length", &obj->iops_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_rd_max_length", &obj->has_iops_rd_max_length)) {
        if (!visit_type_int(v, "iops_rd_max_length", &obj->iops_rd_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_wr_max_length", &obj->has_iops_wr_max_length)) {
        if (!visit_type_int(v, "iops_wr_max_length", &obj->iops_wr_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops_size", &obj->has_iops_size)) {
        if (!visit_type_int(v, "iops_size", &obj->iops_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "group", &obj->has_group)) {
        if (!visit_type_str(v, "group", &obj->group, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockIOThrottle(Visitor *v, const char *name,
                 BlockIOThrottle **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockIOThrottle), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockIOThrottle_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockIOThrottle(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ThrottleLimits_members(Visitor *v, ThrottleLimits *obj, Error **errp)
{
    if (visit_optional(v, "iops-total", &obj->has_iops_total)) {
        if (!visit_type_int(v, "iops-total", &obj->iops_total, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-total-max", &obj->has_iops_total_max)) {
        if (!visit_type_int(v, "iops-total-max", &obj->iops_total_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-total-max-length", &obj->has_iops_total_max_length)) {
        if (!visit_type_int(v, "iops-total-max-length", &obj->iops_total_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-read", &obj->has_iops_read)) {
        if (!visit_type_int(v, "iops-read", &obj->iops_read, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-read-max", &obj->has_iops_read_max)) {
        if (!visit_type_int(v, "iops-read-max", &obj->iops_read_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-read-max-length", &obj->has_iops_read_max_length)) {
        if (!visit_type_int(v, "iops-read-max-length", &obj->iops_read_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-write", &obj->has_iops_write)) {
        if (!visit_type_int(v, "iops-write", &obj->iops_write, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-write-max", &obj->has_iops_write_max)) {
        if (!visit_type_int(v, "iops-write-max", &obj->iops_write_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-write-max-length", &obj->has_iops_write_max_length)) {
        if (!visit_type_int(v, "iops-write-max-length", &obj->iops_write_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-total", &obj->has_bps_total)) {
        if (!visit_type_int(v, "bps-total", &obj->bps_total, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-total-max", &obj->has_bps_total_max)) {
        if (!visit_type_int(v, "bps-total-max", &obj->bps_total_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-total-max-length", &obj->has_bps_total_max_length)) {
        if (!visit_type_int(v, "bps-total-max-length", &obj->bps_total_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-read", &obj->has_bps_read)) {
        if (!visit_type_int(v, "bps-read", &obj->bps_read, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-read-max", &obj->has_bps_read_max)) {
        if (!visit_type_int(v, "bps-read-max", &obj->bps_read_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-read-max-length", &obj->has_bps_read_max_length)) {
        if (!visit_type_int(v, "bps-read-max-length", &obj->bps_read_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-write", &obj->has_bps_write)) {
        if (!visit_type_int(v, "bps-write", &obj->bps_write, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-write-max", &obj->has_bps_write_max)) {
        if (!visit_type_int(v, "bps-write-max", &obj->bps_write_max, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bps-write-max-length", &obj->has_bps_write_max_length)) {
        if (!visit_type_int(v, "bps-write-max-length", &obj->bps_write_max_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iops-size", &obj->has_iops_size)) {
        if (!visit_type_int(v, "iops-size", &obj->iops_size, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ThrottleLimits(Visitor *v, const char *name,
                 ThrottleLimits **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ThrottleLimits), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ThrottleLimits_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ThrottleLimits(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ThrottleGroupProperties_members(Visitor *v, ThrottleGroupProperties *obj, Error **errp)
{
    if (visit_optional(v, "limits", &obj->has_limits)) {
        if (!visit_type_ThrottleLimits(v, "limits", &obj->limits, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "x-iops-total", &obj->has_x_iops_total)) {
        if (visit_policy_reject(v, "x-iops-total", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-total", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-total", &obj->x_iops_total, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-total-max", &obj->has_x_iops_total_max)) {
        if (visit_policy_reject(v, "x-iops-total-max", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-total-max", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-total-max", &obj->x_iops_total_max, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-total-max-length", &obj->has_x_iops_total_max_length)) {
        if (visit_policy_reject(v, "x-iops-total-max-length", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-total-max-length", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-total-max-length", &obj->x_iops_total_max_length, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-read", &obj->has_x_iops_read)) {
        if (visit_policy_reject(v, "x-iops-read", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-read", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-read", &obj->x_iops_read, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-read-max", &obj->has_x_iops_read_max)) {
        if (visit_policy_reject(v, "x-iops-read-max", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-read-max", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-read-max", &obj->x_iops_read_max, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-read-max-length", &obj->has_x_iops_read_max_length)) {
        if (visit_policy_reject(v, "x-iops-read-max-length", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-read-max-length", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-read-max-length", &obj->x_iops_read_max_length, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-write", &obj->has_x_iops_write)) {
        if (visit_policy_reject(v, "x-iops-write", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-write", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-write", &obj->x_iops_write, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-write-max", &obj->has_x_iops_write_max)) {
        if (visit_policy_reject(v, "x-iops-write-max", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-write-max", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-write-max", &obj->x_iops_write_max, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-write-max-length", &obj->has_x_iops_write_max_length)) {
        if (visit_policy_reject(v, "x-iops-write-max-length", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-write-max-length", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-write-max-length", &obj->x_iops_write_max_length, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-total", &obj->has_x_bps_total)) {
        if (visit_policy_reject(v, "x-bps-total", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-total", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-total", &obj->x_bps_total, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-total-max", &obj->has_x_bps_total_max)) {
        if (visit_policy_reject(v, "x-bps-total-max", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-total-max", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-total-max", &obj->x_bps_total_max, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-total-max-length", &obj->has_x_bps_total_max_length)) {
        if (visit_policy_reject(v, "x-bps-total-max-length", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-total-max-length", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-total-max-length", &obj->x_bps_total_max_length, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-read", &obj->has_x_bps_read)) {
        if (visit_policy_reject(v, "x-bps-read", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-read", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-read", &obj->x_bps_read, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-read-max", &obj->has_x_bps_read_max)) {
        if (visit_policy_reject(v, "x-bps-read-max", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-read-max", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-read-max", &obj->x_bps_read_max, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-read-max-length", &obj->has_x_bps_read_max_length)) {
        if (visit_policy_reject(v, "x-bps-read-max-length", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-read-max-length", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-read-max-length", &obj->x_bps_read_max_length, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-write", &obj->has_x_bps_write)) {
        if (visit_policy_reject(v, "x-bps-write", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-write", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-write", &obj->x_bps_write, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-write-max", &obj->has_x_bps_write_max)) {
        if (visit_policy_reject(v, "x-bps-write-max", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-write-max", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-write-max", &obj->x_bps_write_max, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-bps-write-max-length", &obj->has_x_bps_write_max_length)) {
        if (visit_policy_reject(v, "x-bps-write-max-length", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-bps-write-max-length", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-bps-write-max-length", &obj->x_bps_write_max_length, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "x-iops-size", &obj->has_x_iops_size)) {
        if (visit_policy_reject(v, "x-iops-size", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-iops-size", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_int(v, "x-iops-size", &obj->x_iops_size, errp)) {
                return false;
            }
        }
    }
    return true;
}

bool visit_type_ThrottleGroupProperties(Visitor *v, const char *name,
                 ThrottleGroupProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ThrottleGroupProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ThrottleGroupProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ThrottleGroupProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_stream_arg_members(Visitor *v, q_obj_block_stream_arg *obj, Error **errp)
{
    if (visit_optional(v, "job-id", &obj->has_job_id)) {
        if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (visit_optional(v, "base", &obj->has_base)) {
        if (!visit_type_str(v, "base", &obj->base, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "base-node", &obj->has_base_node)) {
        if (!visit_type_str(v, "base-node", &obj->base_node, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "backing-file", &obj->has_backing_file)) {
        if (!visit_type_str(v, "backing-file", &obj->backing_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bottom", &obj->has_bottom)) {
        if (!visit_type_str(v, "bottom", &obj->bottom, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "speed", &obj->has_speed)) {
        if (!visit_type_int(v, "speed", &obj->speed, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-error", &obj->has_on_error)) {
        if (!visit_type_BlockdevOnError(v, "on-error", &obj->on_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "filter-node-name", &obj->has_filter_node_name)) {
        if (!visit_type_str(v, "filter-node-name", &obj->filter_node_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-finalize", &obj->has_auto_finalize)) {
        if (!visit_type_bool(v, "auto-finalize", &obj->auto_finalize, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-dismiss", &obj->has_auto_dismiss)) {
        if (!visit_type_bool(v, "auto-dismiss", &obj->auto_dismiss, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_block_stream_arg(Visitor *v, const char *name,
                 q_obj_block_stream_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_stream_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_stream_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_stream_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_job_set_speed_arg_members(Visitor *v, q_obj_block_job_set_speed_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_int(v, "speed", &obj->speed, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_block_job_set_speed_arg(Visitor *v, const char *name,
                 q_obj_block_job_set_speed_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_job_set_speed_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_job_set_speed_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_job_set_speed_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_job_cancel_arg_members(Visitor *v, q_obj_block_job_cancel_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (visit_optional(v, "force", &obj->has_force)) {
        if (!visit_type_bool(v, "force", &obj->force, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_block_job_cancel_arg(Visitor *v, const char *name,
                 q_obj_block_job_cancel_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_job_cancel_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_job_cancel_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_job_cancel_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_job_pause_arg_members(Visitor *v, q_obj_block_job_pause_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_block_job_pause_arg(Visitor *v, const char *name,
                 q_obj_block_job_pause_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_job_pause_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_job_pause_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_job_pause_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_job_resume_arg_members(Visitor *v, q_obj_block_job_resume_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_block_job_resume_arg(Visitor *v, const char *name,
                 q_obj_block_job_resume_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_job_resume_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_job_resume_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_job_resume_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_job_complete_arg_members(Visitor *v, q_obj_block_job_complete_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_block_job_complete_arg(Visitor *v, const char *name,
                 q_obj_block_job_complete_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_job_complete_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_job_complete_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_job_complete_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_job_dismiss_arg_members(Visitor *v, q_obj_block_job_dismiss_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_block_job_dismiss_arg(Visitor *v, const char *name,
                 q_obj_block_job_dismiss_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_job_dismiss_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_job_dismiss_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_job_dismiss_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_job_finalize_arg_members(Visitor *v, q_obj_block_job_finalize_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_block_job_finalize_arg(Visitor *v, const char *name,
                 q_obj_block_job_finalize_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_job_finalize_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_job_finalize_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_job_finalize_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevDiscardOptions(Visitor *v, const char *name,
                 BlockdevDiscardOptions *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevDiscardOptions_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevDetectZeroesOptions(Visitor *v, const char *name,
                 BlockdevDetectZeroesOptions *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevDetectZeroesOptions_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevAioOptions(Visitor *v, const char *name,
                 BlockdevAioOptions *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevAioOptions_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevCacheOptions_members(Visitor *v, BlockdevCacheOptions *obj, Error **errp)
{
    if (visit_optional(v, "direct", &obj->has_direct)) {
        if (!visit_type_bool(v, "direct", &obj->direct, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "no-flush", &obj->has_no_flush)) {
        if (!visit_type_bool(v, "no-flush", &obj->no_flush, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCacheOptions(Visitor *v, const char *name,
                 BlockdevCacheOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCacheOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCacheOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCacheOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevDriver(Visitor *v, const char *name,
                 BlockdevDriver *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevDriver_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevOptionsFile_members(Visitor *v, BlockdevOptionsFile *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (visit_optional(v, "pr-manager", &obj->has_pr_manager)) {
        if (!visit_type_str(v, "pr-manager", &obj->pr_manager, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "locking", &obj->has_locking)) {
        if (!visit_type_OnOffAuto(v, "locking", &obj->locking, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "aio", &obj->has_aio)) {
        if (!visit_type_BlockdevAioOptions(v, "aio", &obj->aio, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "aio-max-batch", &obj->has_aio_max_batch)) {
        if (!visit_type_int(v, "aio-max-batch", &obj->aio_max_batch, errp)) {
            return false;
        }
    }
#if defined(CONFIG_LINUX)
    if (visit_optional(v, "drop-cache", &obj->has_drop_cache)) {
        if (!visit_type_bool(v, "drop-cache", &obj->drop_cache, errp)) {
            return false;
        }
    }
#endif /* defined(CONFIG_LINUX) */
    if (visit_optional(v, "x-check-cache-dropped", &obj->has_x_check_cache_dropped)) {
        if (visit_policy_reject(v, "x-check-cache-dropped", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-check-cache-dropped", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_bool(v, "x-check-cache-dropped", &obj->x_check_cache_dropped, errp)) {
                return false;
            }
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsFile(Visitor *v, const char *name,
                 BlockdevOptionsFile **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsFile), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsFile_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsFile(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsNull_members(Visitor *v, BlockdevOptionsNull *obj, Error **errp)
{
    if (visit_optional(v, "size", &obj->has_size)) {
        if (!visit_type_int(v, "size", &obj->size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "latency-ns", &obj->has_latency_ns)) {
        if (!visit_type_uint64(v, "latency-ns", &obj->latency_ns, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "read-zeroes", &obj->has_read_zeroes)) {
        if (!visit_type_bool(v, "read-zeroes", &obj->read_zeroes, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsNull(Visitor *v, const char *name,
                 BlockdevOptionsNull **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsNull), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsNull_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsNull(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsNVMe_members(Visitor *v, BlockdevOptionsNVMe *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_int(v, "namespace", &obj->q_namespace, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsNVMe(Visitor *v, const char *name,
                 BlockdevOptionsNVMe **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsNVMe), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsNVMe_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsNVMe(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsVVFAT_members(Visitor *v, BlockdevOptionsVVFAT *obj, Error **errp)
{
    if (!visit_type_str(v, "dir", &obj->dir, errp)) {
        return false;
    }
    if (visit_optional(v, "fat-type", &obj->has_fat_type)) {
        if (!visit_type_int(v, "fat-type", &obj->fat_type, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "floppy", &obj->has_floppy)) {
        if (!visit_type_bool(v, "floppy", &obj->floppy, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "label", &obj->has_label)) {
        if (!visit_type_str(v, "label", &obj->label, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "rw", &obj->has_rw)) {
        if (!visit_type_bool(v, "rw", &obj->rw, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsVVFAT(Visitor *v, const char *name,
                 BlockdevOptionsVVFAT **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsVVFAT), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsVVFAT_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsVVFAT(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsGenericFormat_members(Visitor *v, BlockdevOptionsGenericFormat *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsGenericFormat(Visitor *v, const char *name,
                 BlockdevOptionsGenericFormat **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsGenericFormat), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsGenericFormat_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsGenericFormat(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsLUKS_members(Visitor *v, BlockdevOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericFormat_members(v, (BlockdevOptionsGenericFormat *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "key-secret", &obj->has_key_secret)) {
        if (!visit_type_str(v, "key-secret", &obj->key_secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsLUKS(Visitor *v, const char *name,
                 BlockdevOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsGenericCOWFormat_members(Visitor *v, BlockdevOptionsGenericCOWFormat *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericFormat_members(v, (BlockdevOptionsGenericFormat *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "backing", &obj->has_backing)) {
        if (!visit_type_BlockdevRefOrNull(v, "backing", &obj->backing, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsGenericCOWFormat(Visitor *v, const char *name,
                 BlockdevOptionsGenericCOWFormat **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsGenericCOWFormat), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsGenericCOWFormat_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsGenericCOWFormat(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Qcow2OverlapCheckMode(Visitor *v, const char *name,
                 Qcow2OverlapCheckMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &Qcow2OverlapCheckMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_Qcow2OverlapCheckFlags_members(Visitor *v, Qcow2OverlapCheckFlags *obj, Error **errp)
{
    if (visit_optional(v, "template", &obj->has_q_template)) {
        if (!visit_type_Qcow2OverlapCheckMode(v, "template", &obj->q_template, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "main-header", &obj->has_main_header)) {
        if (!visit_type_bool(v, "main-header", &obj->main_header, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "active-l1", &obj->has_active_l1)) {
        if (!visit_type_bool(v, "active-l1", &obj->active_l1, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "active-l2", &obj->has_active_l2)) {
        if (!visit_type_bool(v, "active-l2", &obj->active_l2, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "refcount-table", &obj->has_refcount_table)) {
        if (!visit_type_bool(v, "refcount-table", &obj->refcount_table, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "refcount-block", &obj->has_refcount_block)) {
        if (!visit_type_bool(v, "refcount-block", &obj->refcount_block, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "snapshot-table", &obj->has_snapshot_table)) {
        if (!visit_type_bool(v, "snapshot-table", &obj->snapshot_table, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "inactive-l1", &obj->has_inactive_l1)) {
        if (!visit_type_bool(v, "inactive-l1", &obj->inactive_l1, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "inactive-l2", &obj->has_inactive_l2)) {
        if (!visit_type_bool(v, "inactive-l2", &obj->inactive_l2, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bitmap-directory", &obj->has_bitmap_directory)) {
        if (!visit_type_bool(v, "bitmap-directory", &obj->bitmap_directory, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_Qcow2OverlapCheckFlags(Visitor *v, const char *name,
                 Qcow2OverlapCheckFlags **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Qcow2OverlapCheckFlags), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Qcow2OverlapCheckFlags_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Qcow2OverlapCheckFlags(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Qcow2OverlapChecks(Visitor *v, const char *name,
                 Qcow2OverlapChecks **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type_Qcow2OverlapCheckFlags_members(v, &(*obj)->u.flags, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
    case QTYPE_QSTRING:
        ok = visit_type_Qcow2OverlapCheckMode(v, name, &(*obj)->u.mode, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "Qcow2OverlapChecks");
        /* Avoid passing invalid *obj to qapi_free_Qcow2OverlapChecks() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Qcow2OverlapChecks(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevQcowEncryptionFormat(Visitor *v, const char *name,
                 BlockdevQcowEncryptionFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevQcowEncryptionFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_BlockdevQcowEncryption_base_members(Visitor *v, q_obj_BlockdevQcowEncryption_base *obj, Error **errp)
{
    if (!visit_type_BlockdevQcowEncryptionFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockdevQcowEncryption_base(Visitor *v, const char *name,
                 q_obj_BlockdevQcowEncryption_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BlockdevQcowEncryption_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BlockdevQcowEncryption_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BlockdevQcowEncryption_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevQcowEncryption_members(Visitor *v, BlockdevQcowEncryption *obj, Error **errp)
{
    if (!visit_type_q_obj_BlockdevQcowEncryption_base_members(v, (q_obj_BlockdevQcowEncryption_base *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case BLOCKDEV_QCOW_ENCRYPTION_FORMAT_AES:
        return visit_type_QCryptoBlockOptionsQCow_members(v, &obj->u.aes, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_BlockdevQcowEncryption(Visitor *v, const char *name,
                 BlockdevQcowEncryption **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevQcowEncryption), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevQcowEncryption_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevQcowEncryption(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsQcow_members(Visitor *v, BlockdevOptionsQcow *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericCOWFormat_members(v, (BlockdevOptionsGenericCOWFormat *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "encrypt", &obj->has_encrypt)) {
        if (!visit_type_BlockdevQcowEncryption(v, "encrypt", &obj->encrypt, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsQcow(Visitor *v, const char *name,
                 BlockdevOptionsQcow **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsQcow), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsQcow_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsQcow(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevQcow2EncryptionFormat(Visitor *v, const char *name,
                 BlockdevQcow2EncryptionFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevQcow2EncryptionFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_BlockdevQcow2Encryption_base_members(Visitor *v, q_obj_BlockdevQcow2Encryption_base *obj, Error **errp)
{
    if (!visit_type_BlockdevQcow2EncryptionFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockdevQcow2Encryption_base(Visitor *v, const char *name,
                 q_obj_BlockdevQcow2Encryption_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BlockdevQcow2Encryption_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BlockdevQcow2Encryption_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BlockdevQcow2Encryption_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevQcow2Encryption_members(Visitor *v, BlockdevQcow2Encryption *obj, Error **errp)
{
    if (!visit_type_q_obj_BlockdevQcow2Encryption_base_members(v, (q_obj_BlockdevQcow2Encryption_base *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case BLOCKDEV_QCOW2_ENCRYPTION_FORMAT_AES:
        return visit_type_QCryptoBlockOptionsQCow_members(v, &obj->u.aes, errp);
    case BLOCKDEV_QCOW2_ENCRYPTION_FORMAT_LUKS:
        return visit_type_QCryptoBlockOptionsLUKS_members(v, &obj->u.luks, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_BlockdevQcow2Encryption(Visitor *v, const char *name,
                 BlockdevQcow2Encryption **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevQcow2Encryption), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevQcow2Encryption_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevQcow2Encryption(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsPreallocate_members(Visitor *v, BlockdevOptionsPreallocate *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericFormat_members(v, (BlockdevOptionsGenericFormat *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "prealloc-align", &obj->has_prealloc_align)) {
        if (!visit_type_int(v, "prealloc-align", &obj->prealloc_align, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "prealloc-size", &obj->has_prealloc_size)) {
        if (!visit_type_int(v, "prealloc-size", &obj->prealloc_size, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsPreallocate(Visitor *v, const char *name,
                 BlockdevOptionsPreallocate **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsPreallocate), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsPreallocate_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsPreallocate(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsQcow2_members(Visitor *v, BlockdevOptionsQcow2 *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericCOWFormat_members(v, (BlockdevOptionsGenericCOWFormat *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "lazy-refcounts", &obj->has_lazy_refcounts)) {
        if (!visit_type_bool(v, "lazy-refcounts", &obj->lazy_refcounts, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "pass-discard-request", &obj->has_pass_discard_request)) {
        if (!visit_type_bool(v, "pass-discard-request", &obj->pass_discard_request, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "pass-discard-snapshot", &obj->has_pass_discard_snapshot)) {
        if (!visit_type_bool(v, "pass-discard-snapshot", &obj->pass_discard_snapshot, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "pass-discard-other", &obj->has_pass_discard_other)) {
        if (!visit_type_bool(v, "pass-discard-other", &obj->pass_discard_other, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "overlap-check", &obj->has_overlap_check)) {
        if (!visit_type_Qcow2OverlapChecks(v, "overlap-check", &obj->overlap_check, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cache-size", &obj->has_cache_size)) {
        if (!visit_type_int(v, "cache-size", &obj->cache_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "l2-cache-size", &obj->has_l2_cache_size)) {
        if (!visit_type_int(v, "l2-cache-size", &obj->l2_cache_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "l2-cache-entry-size", &obj->has_l2_cache_entry_size)) {
        if (!visit_type_int(v, "l2-cache-entry-size", &obj->l2_cache_entry_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "refcount-cache-size", &obj->has_refcount_cache_size)) {
        if (!visit_type_int(v, "refcount-cache-size", &obj->refcount_cache_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cache-clean-interval", &obj->has_cache_clean_interval)) {
        if (!visit_type_int(v, "cache-clean-interval", &obj->cache_clean_interval, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "encrypt", &obj->has_encrypt)) {
        if (!visit_type_BlockdevQcow2Encryption(v, "encrypt", &obj->encrypt, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "data-file", &obj->has_data_file)) {
        if (!visit_type_BlockdevRef(v, "data-file", &obj->data_file, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsQcow2(Visitor *v, const char *name,
                 BlockdevOptionsQcow2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsQcow2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsQcow2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsQcow2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SshHostKeyCheckMode(Visitor *v, const char *name,
                 SshHostKeyCheckMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SshHostKeyCheckMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_SshHostKeyCheckHashType(Visitor *v, const char *name,
                 SshHostKeyCheckHashType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SshHostKeyCheckHashType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_SshHostKeyHash_members(Visitor *v, SshHostKeyHash *obj, Error **errp)
{
    if (!visit_type_SshHostKeyCheckHashType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "hash", &obj->hash, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SshHostKeyHash(Visitor *v, const char *name,
                 SshHostKeyHash **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SshHostKeyHash), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SshHostKeyHash_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SshHostKeyHash(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_SshHostKeyCheck_base_members(Visitor *v, q_obj_SshHostKeyCheck_base *obj, Error **errp)
{
    if (!visit_type_SshHostKeyCheckMode(v, "mode", &obj->mode, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_SshHostKeyCheck_base(Visitor *v, const char *name,
                 q_obj_SshHostKeyCheck_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_SshHostKeyCheck_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_SshHostKeyCheck_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_SshHostKeyCheck_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SshHostKeyCheck_members(Visitor *v, SshHostKeyCheck *obj, Error **errp)
{
    if (!visit_type_q_obj_SshHostKeyCheck_base_members(v, (q_obj_SshHostKeyCheck_base *)obj, errp)) {
        return false;
    }
    switch (obj->mode) {
    case SSH_HOST_KEY_CHECK_MODE_HASH:
        return visit_type_SshHostKeyHash_members(v, &obj->u.hash, errp);
    case SSH_HOST_KEY_CHECK_MODE_NONE:
        break;
    case SSH_HOST_KEY_CHECK_MODE_KNOWN_HOSTS:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_SshHostKeyCheck(Visitor *v, const char *name,
                 SshHostKeyCheck **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SshHostKeyCheck), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SshHostKeyCheck_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SshHostKeyCheck(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsSsh_members(Visitor *v, BlockdevOptionsSsh *obj, Error **errp)
{
    if (!visit_type_InetSocketAddress(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (visit_optional(v, "user", &obj->has_user)) {
        if (!visit_type_str(v, "user", &obj->user, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "host-key-check", &obj->has_host_key_check)) {
        if (!visit_type_SshHostKeyCheck(v, "host-key-check", &obj->host_key_check, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsSsh(Visitor *v, const char *name,
                 BlockdevOptionsSsh **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsSsh), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsSsh_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsSsh(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlkdebugEvent(Visitor *v, const char *name,
                 BlkdebugEvent *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlkdebugEvent_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlkdebugIOType(Visitor *v, const char *name,
                 BlkdebugIOType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlkdebugIOType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlkdebugInjectErrorOptions_members(Visitor *v, BlkdebugInjectErrorOptions *obj, Error **errp)
{
    if (!visit_type_BlkdebugEvent(v, "event", &obj->event, errp)) {
        return false;
    }
    if (visit_optional(v, "state", &obj->has_state)) {
        if (!visit_type_int(v, "state", &obj->state, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "iotype", &obj->has_iotype)) {
        if (!visit_type_BlkdebugIOType(v, "iotype", &obj->iotype, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "errno", &obj->has_q_errno)) {
        if (!visit_type_int(v, "errno", &obj->q_errno, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "sector", &obj->has_sector)) {
        if (!visit_type_int(v, "sector", &obj->sector, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "once", &obj->has_once)) {
        if (!visit_type_bool(v, "once", &obj->once, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "immediately", &obj->has_immediately)) {
        if (!visit_type_bool(v, "immediately", &obj->immediately, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlkdebugInjectErrorOptions(Visitor *v, const char *name,
                 BlkdebugInjectErrorOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlkdebugInjectErrorOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlkdebugInjectErrorOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlkdebugInjectErrorOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlkdebugSetStateOptions_members(Visitor *v, BlkdebugSetStateOptions *obj, Error **errp)
{
    if (!visit_type_BlkdebugEvent(v, "event", &obj->event, errp)) {
        return false;
    }
    if (visit_optional(v, "state", &obj->has_state)) {
        if (!visit_type_int(v, "state", &obj->state, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "new_state", &obj->new_state, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlkdebugSetStateOptions(Visitor *v, const char *name,
                 BlkdebugSetStateOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlkdebugSetStateOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlkdebugSetStateOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlkdebugSetStateOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlkdebugInjectErrorOptionsList(Visitor *v, const char *name,
                 BlkdebugInjectErrorOptionsList **obj, Error **errp)
{
    bool ok = false;
    BlkdebugInjectErrorOptionsList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlkdebugInjectErrorOptionsList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlkdebugInjectErrorOptions(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlkdebugInjectErrorOptionsList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlkdebugSetStateOptionsList(Visitor *v, const char *name,
                 BlkdebugSetStateOptionsList **obj, Error **errp)
{
    bool ok = false;
    BlkdebugSetStateOptionsList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlkdebugSetStateOptionsList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlkdebugSetStateOptions(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlkdebugSetStateOptionsList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsBlkdebug_members(Visitor *v, BlockdevOptionsBlkdebug *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "image", &obj->image, errp)) {
        return false;
    }
    if (visit_optional(v, "config", &obj->has_config)) {
        if (!visit_type_str(v, "config", &obj->config, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "align", &obj->has_align)) {
        if (!visit_type_int(v, "align", &obj->align, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-transfer", &obj->has_max_transfer)) {
        if (!visit_type_int32(v, "max-transfer", &obj->max_transfer, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "opt-write-zero", &obj->has_opt_write_zero)) {
        if (!visit_type_int32(v, "opt-write-zero", &obj->opt_write_zero, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-write-zero", &obj->has_max_write_zero)) {
        if (!visit_type_int32(v, "max-write-zero", &obj->max_write_zero, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "opt-discard", &obj->has_opt_discard)) {
        if (!visit_type_int32(v, "opt-discard", &obj->opt_discard, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "max-discard", &obj->has_max_discard)) {
        if (!visit_type_int32(v, "max-discard", &obj->max_discard, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "inject-error", &obj->has_inject_error)) {
        if (!visit_type_BlkdebugInjectErrorOptionsList(v, "inject-error", &obj->inject_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "set-state", &obj->has_set_state)) {
        if (!visit_type_BlkdebugSetStateOptionsList(v, "set-state", &obj->set_state, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "take-child-perms", &obj->has_take_child_perms)) {
        if (!visit_type_BlockPermissionList(v, "take-child-perms", &obj->take_child_perms, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "unshare-child-perms", &obj->has_unshare_child_perms)) {
        if (!visit_type_BlockPermissionList(v, "unshare-child-perms", &obj->unshare_child_perms, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsBlkdebug(Visitor *v, const char *name,
                 BlockdevOptionsBlkdebug **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsBlkdebug), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsBlkdebug_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsBlkdebug(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsBlklogwrites_members(Visitor *v, BlockdevOptionsBlklogwrites *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_BlockdevRef(v, "log", &obj->log, errp)) {
        return false;
    }
    if (visit_optional(v, "log-sector-size", &obj->has_log_sector_size)) {
        if (!visit_type_uint32(v, "log-sector-size", &obj->log_sector_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "log-append", &obj->has_log_append)) {
        if (!visit_type_bool(v, "log-append", &obj->log_append, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "log-super-update-interval", &obj->has_log_super_update_interval)) {
        if (!visit_type_uint64(v, "log-super-update-interval", &obj->log_super_update_interval, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsBlklogwrites(Visitor *v, const char *name,
                 BlockdevOptionsBlklogwrites **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsBlklogwrites), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsBlklogwrites_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsBlklogwrites(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsBlkverify_members(Visitor *v, BlockdevOptionsBlkverify *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "test", &obj->test, errp)) {
        return false;
    }
    if (!visit_type_BlockdevRef(v, "raw", &obj->raw, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsBlkverify(Visitor *v, const char *name,
                 BlockdevOptionsBlkverify **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsBlkverify), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsBlkverify_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsBlkverify(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsBlkreplay_members(Visitor *v, BlockdevOptionsBlkreplay *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "image", &obj->image, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsBlkreplay(Visitor *v, const char *name,
                 BlockdevOptionsBlkreplay **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsBlkreplay), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsBlkreplay_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsBlkreplay(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QuorumReadPattern(Visitor *v, const char *name,
                 QuorumReadPattern *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QuorumReadPattern_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevRefList(Visitor *v, const char *name,
                 BlockdevRefList **obj, Error **errp)
{
    bool ok = false;
    BlockdevRefList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockdevRefList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockdevRef(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevRefList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsQuorum_members(Visitor *v, BlockdevOptionsQuorum *obj, Error **errp)
{
    if (visit_optional(v, "blkverify", &obj->has_blkverify)) {
        if (!visit_type_bool(v, "blkverify", &obj->blkverify, errp)) {
            return false;
        }
    }
    if (!visit_type_BlockdevRefList(v, "children", &obj->children, errp)) {
        return false;
    }
    if (!visit_type_int(v, "vote-threshold", &obj->vote_threshold, errp)) {
        return false;
    }
    if (visit_optional(v, "rewrite-corrupted", &obj->has_rewrite_corrupted)) {
        if (!visit_type_bool(v, "rewrite-corrupted", &obj->rewrite_corrupted, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "read-pattern", &obj->has_read_pattern)) {
        if (!visit_type_QuorumReadPattern(v, "read-pattern", &obj->read_pattern, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsQuorum(Visitor *v, const char *name,
                 BlockdevOptionsQuorum **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsQuorum), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsQuorum_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsQuorum(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsGluster_members(Visitor *v, BlockdevOptionsGluster *obj, Error **errp)
{
    if (!visit_type_str(v, "volume", &obj->volume, errp)) {
        return false;
    }
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (!visit_type_SocketAddressList(v, "server", &obj->server, errp)) {
        return false;
    }
    if (visit_optional(v, "debug", &obj->has_debug)) {
        if (!visit_type_int(v, "debug", &obj->debug, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "logfile", &obj->has_logfile)) {
        if (!visit_type_str(v, "logfile", &obj->logfile, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsGluster(Visitor *v, const char *name,
                 BlockdevOptionsGluster **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsGluster), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsGluster_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsGluster(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_BLKIO)
bool visit_type_BlockdevOptionsIoUring_members(Visitor *v, BlockdevOptionsIoUring *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsIoUring(Visitor *v, const char *name,
                 BlockdevOptionsIoUring **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsIoUring), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsIoUring_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsIoUring(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
bool visit_type_BlockdevOptionsNvmeIoUring_members(Visitor *v, BlockdevOptionsNvmeIoUring *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsNvmeIoUring(Visitor *v, const char *name,
                 BlockdevOptionsNvmeIoUring **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsNvmeIoUring), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsNvmeIoUring_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsNvmeIoUring(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
bool visit_type_BlockdevOptionsVirtioBlkVfioPci_members(Visitor *v, BlockdevOptionsVirtioBlkVfioPci *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsVirtioBlkVfioPci(Visitor *v, const char *name,
                 BlockdevOptionsVirtioBlkVfioPci **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsVirtioBlkVfioPci), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsVirtioBlkVfioPci_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsVirtioBlkVfioPci(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
bool visit_type_BlockdevOptionsVirtioBlkVhostUser_members(Visitor *v, BlockdevOptionsVirtioBlkVhostUser *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsVirtioBlkVhostUser(Visitor *v, const char *name,
                 BlockdevOptionsVirtioBlkVhostUser **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsVirtioBlkVhostUser), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsVirtioBlkVhostUser_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsVirtioBlkVhostUser(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
bool visit_type_BlockdevOptionsVirtioBlkVhostVdpa_members(Visitor *v, BlockdevOptionsVirtioBlkVhostVdpa *obj, Error **errp)
{
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsVirtioBlkVhostVdpa(Visitor *v, const char *name,
                 BlockdevOptionsVirtioBlkVhostVdpa **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsVirtioBlkVhostVdpa), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsVirtioBlkVhostVdpa_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsVirtioBlkVhostVdpa(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_BLKIO) */

bool visit_type_IscsiTransport(Visitor *v, const char *name,
                 IscsiTransport *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &IscsiTransport_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_IscsiHeaderDigest(Visitor *v, const char *name,
                 IscsiHeaderDigest *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &IscsiHeaderDigest_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevOptionsIscsi_members(Visitor *v, BlockdevOptionsIscsi *obj, Error **errp)
{
    if (!visit_type_IscsiTransport(v, "transport", &obj->transport, errp)) {
        return false;
    }
    if (!visit_type_str(v, "portal", &obj->portal, errp)) {
        return false;
    }
    if (!visit_type_str(v, "target", &obj->target, errp)) {
        return false;
    }
    if (visit_optional(v, "lun", &obj->has_lun)) {
        if (!visit_type_int(v, "lun", &obj->lun, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "user", &obj->has_user)) {
        if (!visit_type_str(v, "user", &obj->user, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "password-secret", &obj->has_password_secret)) {
        if (!visit_type_str(v, "password-secret", &obj->password_secret, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "initiator-name", &obj->has_initiator_name)) {
        if (!visit_type_str(v, "initiator-name", &obj->initiator_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "header-digest", &obj->has_header_digest)) {
        if (!visit_type_IscsiHeaderDigest(v, "header-digest", &obj->header_digest, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "timeout", &obj->has_timeout)) {
        if (!visit_type_int(v, "timeout", &obj->timeout, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsIscsi(Visitor *v, const char *name,
                 BlockdevOptionsIscsi **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsIscsi), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsIscsi_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsIscsi(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdAuthMode(Visitor *v, const char *name,
                 RbdAuthMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &RbdAuthMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_RbdImageEncryptionFormat(Visitor *v, const char *name,
                 RbdImageEncryptionFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &RbdImageEncryptionFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_RbdEncryptionOptionsLUKSBase_members(Visitor *v, RbdEncryptionOptionsLUKSBase *obj, Error **errp)
{
    if (!visit_type_str(v, "key-secret", &obj->key_secret, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RbdEncryptionOptionsLUKSBase(Visitor *v, const char *name,
                 RbdEncryptionOptionsLUKSBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionOptionsLUKSBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionOptionsLUKSBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionOptionsLUKSBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdEncryptionCreateOptionsLUKSBase_members(Visitor *v, RbdEncryptionCreateOptionsLUKSBase *obj, Error **errp)
{
    if (!visit_type_RbdEncryptionOptionsLUKSBase_members(v, (RbdEncryptionOptionsLUKSBase *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "cipher-alg", &obj->has_cipher_alg)) {
        if (!visit_type_QCryptoCipherAlgorithm(v, "cipher-alg", &obj->cipher_alg, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_RbdEncryptionCreateOptionsLUKSBase(Visitor *v, const char *name,
                 RbdEncryptionCreateOptionsLUKSBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionCreateOptionsLUKSBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionCreateOptionsLUKSBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionCreateOptionsLUKSBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdEncryptionOptionsLUKS_members(Visitor *v, RbdEncryptionOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_RbdEncryptionOptionsLUKSBase_members(v, (RbdEncryptionOptionsLUKSBase *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RbdEncryptionOptionsLUKS(Visitor *v, const char *name,
                 RbdEncryptionOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdEncryptionOptionsLUKS2_members(Visitor *v, RbdEncryptionOptionsLUKS2 *obj, Error **errp)
{
    if (!visit_type_RbdEncryptionOptionsLUKSBase_members(v, (RbdEncryptionOptionsLUKSBase *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RbdEncryptionOptionsLUKS2(Visitor *v, const char *name,
                 RbdEncryptionOptionsLUKS2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionOptionsLUKS2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionOptionsLUKS2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionOptionsLUKS2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdEncryptionOptionsLUKSAny_members(Visitor *v, RbdEncryptionOptionsLUKSAny *obj, Error **errp)
{
    if (!visit_type_RbdEncryptionOptionsLUKSBase_members(v, (RbdEncryptionOptionsLUKSBase *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RbdEncryptionOptionsLUKSAny(Visitor *v, const char *name,
                 RbdEncryptionOptionsLUKSAny **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionOptionsLUKSAny), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionOptionsLUKSAny_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionOptionsLUKSAny(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdEncryptionCreateOptionsLUKS_members(Visitor *v, RbdEncryptionCreateOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_RbdEncryptionCreateOptionsLUKSBase_members(v, (RbdEncryptionCreateOptionsLUKSBase *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RbdEncryptionCreateOptionsLUKS(Visitor *v, const char *name,
                 RbdEncryptionCreateOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionCreateOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionCreateOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionCreateOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdEncryptionCreateOptionsLUKS2_members(Visitor *v, RbdEncryptionCreateOptionsLUKS2 *obj, Error **errp)
{
    if (!visit_type_RbdEncryptionCreateOptionsLUKSBase_members(v, (RbdEncryptionCreateOptionsLUKSBase *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_RbdEncryptionCreateOptionsLUKS2(Visitor *v, const char *name,
                 RbdEncryptionCreateOptionsLUKS2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionCreateOptionsLUKS2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionCreateOptionsLUKS2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionCreateOptionsLUKS2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_RbdEncryptionOptions_base_members(Visitor *v, q_obj_RbdEncryptionOptions_base *obj, Error **errp)
{
    if (!visit_type_RbdImageEncryptionFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    if (visit_optional(v, "parent", &obj->has_parent)) {
        if (!visit_type_RbdEncryptionOptions(v, "parent", &obj->parent, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_RbdEncryptionOptions_base(Visitor *v, const char *name,
                 q_obj_RbdEncryptionOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_RbdEncryptionOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_RbdEncryptionOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_RbdEncryptionOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdEncryptionOptions_members(Visitor *v, RbdEncryptionOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_RbdEncryptionOptions_base_members(v, (q_obj_RbdEncryptionOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case RBD_IMAGE_ENCRYPTION_FORMAT_LUKS:
        return visit_type_RbdEncryptionOptionsLUKS_members(v, &obj->u.luks, errp);
    case RBD_IMAGE_ENCRYPTION_FORMAT_LUKS2:
        return visit_type_RbdEncryptionOptionsLUKS2_members(v, &obj->u.luks2, errp);
    case RBD_IMAGE_ENCRYPTION_FORMAT_LUKS_ANY:
        return visit_type_RbdEncryptionOptionsLUKSAny_members(v, &obj->u.luks_any, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_RbdEncryptionOptions(Visitor *v, const char *name,
                 RbdEncryptionOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_RbdEncryptionCreateOptions_base_members(Visitor *v, q_obj_RbdEncryptionCreateOptions_base *obj, Error **errp)
{
    if (!visit_type_RbdImageEncryptionFormat(v, "format", &obj->format, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_RbdEncryptionCreateOptions_base(Visitor *v, const char *name,
                 q_obj_RbdEncryptionCreateOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_RbdEncryptionCreateOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_RbdEncryptionCreateOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_RbdEncryptionCreateOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdEncryptionCreateOptions_members(Visitor *v, RbdEncryptionCreateOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_RbdEncryptionCreateOptions_base_members(v, (q_obj_RbdEncryptionCreateOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->format) {
    case RBD_IMAGE_ENCRYPTION_FORMAT_LUKS:
        return visit_type_RbdEncryptionCreateOptionsLUKS_members(v, &obj->u.luks, errp);
    case RBD_IMAGE_ENCRYPTION_FORMAT_LUKS2:
        return visit_type_RbdEncryptionCreateOptionsLUKS2_members(v, &obj->u.luks2, errp);
    case RBD_IMAGE_ENCRYPTION_FORMAT_LUKS_ANY:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_RbdEncryptionCreateOptions(Visitor *v, const char *name,
                 RbdEncryptionCreateOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(RbdEncryptionCreateOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_RbdEncryptionCreateOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdEncryptionCreateOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_RbdAuthModeList(Visitor *v, const char *name,
                 RbdAuthModeList **obj, Error **errp)
{
    bool ok = false;
    RbdAuthModeList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (RbdAuthModeList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_RbdAuthMode(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_RbdAuthModeList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsRbd_members(Visitor *v, BlockdevOptionsRbd *obj, Error **errp)
{
    if (!visit_type_str(v, "pool", &obj->pool, errp)) {
        return false;
    }
    if (visit_optional(v, "namespace", &obj->has_q_namespace)) {
        if (!visit_type_str(v, "namespace", &obj->q_namespace, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "image", &obj->image, errp)) {
        return false;
    }
    if (visit_optional(v, "conf", &obj->has_conf)) {
        if (!visit_type_str(v, "conf", &obj->conf, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "snapshot", &obj->has_snapshot)) {
        if (!visit_type_str(v, "snapshot", &obj->snapshot, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "encrypt", &obj->has_encrypt)) {
        if (!visit_type_RbdEncryptionOptions(v, "encrypt", &obj->encrypt, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "user", &obj->has_user)) {
        if (!visit_type_str(v, "user", &obj->user, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auth-client-required", &obj->has_auth_client_required)) {
        if (!visit_type_RbdAuthModeList(v, "auth-client-required", &obj->auth_client_required, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "key-secret", &obj->has_key_secret)) {
        if (!visit_type_str(v, "key-secret", &obj->key_secret, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "server", &obj->has_server)) {
        if (!visit_type_InetSocketAddressBaseList(v, "server", &obj->server, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsRbd(Visitor *v, const char *name,
                 BlockdevOptionsRbd **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsRbd), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsRbd_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsRbd(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_REPLICATION)
bool visit_type_ReplicationMode(Visitor *v, const char *name,
                 ReplicationMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ReplicationMode_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
bool visit_type_BlockdevOptionsReplication_members(Visitor *v, BlockdevOptionsReplication *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericFormat_members(v, (BlockdevOptionsGenericFormat *)obj, errp)) {
        return false;
    }
    if (!visit_type_ReplicationMode(v, "mode", &obj->mode, errp)) {
        return false;
    }
    if (visit_optional(v, "top-id", &obj->has_top_id)) {
        if (!visit_type_str(v, "top-id", &obj->top_id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsReplication(Visitor *v, const char *name,
                 BlockdevOptionsReplication **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsReplication), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsReplication_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsReplication(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_REPLICATION) */

bool visit_type_NFSTransport(Visitor *v, const char *name,
                 NFSTransport *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NFSTransport_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_NFSServer_members(Visitor *v, NFSServer *obj, Error **errp)
{
    if (!visit_type_NFSTransport(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "host", &obj->host, errp)) {
        return false;
    }
    return true;
}

bool visit_type_NFSServer(Visitor *v, const char *name,
                 NFSServer **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NFSServer), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NFSServer_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NFSServer(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsNfs_members(Visitor *v, BlockdevOptionsNfs *obj, Error **errp)
{
    if (!visit_type_NFSServer(v, "server", &obj->server, errp)) {
        return false;
    }
    if (!visit_type_str(v, "path", &obj->path, errp)) {
        return false;
    }
    if (visit_optional(v, "user", &obj->has_user)) {
        if (!visit_type_int(v, "user", &obj->user, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "group", &obj->has_group)) {
        if (!visit_type_int(v, "group", &obj->group, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tcp-syn-count", &obj->has_tcp_syn_count)) {
        if (!visit_type_int(v, "tcp-syn-count", &obj->tcp_syn_count, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "readahead-size", &obj->has_readahead_size)) {
        if (!visit_type_int(v, "readahead-size", &obj->readahead_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "page-cache-size", &obj->has_page_cache_size)) {
        if (!visit_type_int(v, "page-cache-size", &obj->page_cache_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "debug", &obj->has_debug)) {
        if (!visit_type_int(v, "debug", &obj->debug, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsNfs(Visitor *v, const char *name,
                 BlockdevOptionsNfs **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsNfs), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsNfs_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsNfs(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsCurlBase_members(Visitor *v, BlockdevOptionsCurlBase *obj, Error **errp)
{
    if (!visit_type_str(v, "url", &obj->url, errp)) {
        return false;
    }
    if (visit_optional(v, "readahead", &obj->has_readahead)) {
        if (!visit_type_int(v, "readahead", &obj->readahead, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "timeout", &obj->has_timeout)) {
        if (!visit_type_int(v, "timeout", &obj->timeout, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "username", &obj->has_username)) {
        if (!visit_type_str(v, "username", &obj->username, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "password-secret", &obj->has_password_secret)) {
        if (!visit_type_str(v, "password-secret", &obj->password_secret, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "proxy-username", &obj->has_proxy_username)) {
        if (!visit_type_str(v, "proxy-username", &obj->proxy_username, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "proxy-password-secret", &obj->has_proxy_password_secret)) {
        if (!visit_type_str(v, "proxy-password-secret", &obj->proxy_password_secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsCurlBase(Visitor *v, const char *name,
                 BlockdevOptionsCurlBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsCurlBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsCurlBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsCurlBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsCurlHttp_members(Visitor *v, BlockdevOptionsCurlHttp *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsCurlBase_members(v, (BlockdevOptionsCurlBase *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "cookie", &obj->has_cookie)) {
        if (!visit_type_str(v, "cookie", &obj->cookie, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cookie-secret", &obj->has_cookie_secret)) {
        if (!visit_type_str(v, "cookie-secret", &obj->cookie_secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsCurlHttp(Visitor *v, const char *name,
                 BlockdevOptionsCurlHttp **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsCurlHttp), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsCurlHttp_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsCurlHttp(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsCurlHttps_members(Visitor *v, BlockdevOptionsCurlHttps *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsCurlBase_members(v, (BlockdevOptionsCurlBase *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "cookie", &obj->has_cookie)) {
        if (!visit_type_str(v, "cookie", &obj->cookie, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "sslverify", &obj->has_sslverify)) {
        if (!visit_type_bool(v, "sslverify", &obj->sslverify, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cookie-secret", &obj->has_cookie_secret)) {
        if (!visit_type_str(v, "cookie-secret", &obj->cookie_secret, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsCurlHttps(Visitor *v, const char *name,
                 BlockdevOptionsCurlHttps **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsCurlHttps), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsCurlHttps_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsCurlHttps(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsCurlFtp_members(Visitor *v, BlockdevOptionsCurlFtp *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsCurlBase_members(v, (BlockdevOptionsCurlBase *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsCurlFtp(Visitor *v, const char *name,
                 BlockdevOptionsCurlFtp **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsCurlFtp), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsCurlFtp_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsCurlFtp(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsCurlFtps_members(Visitor *v, BlockdevOptionsCurlFtps *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsCurlBase_members(v, (BlockdevOptionsCurlBase *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "sslverify", &obj->has_sslverify)) {
        if (!visit_type_bool(v, "sslverify", &obj->sslverify, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsCurlFtps(Visitor *v, const char *name,
                 BlockdevOptionsCurlFtps **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsCurlFtps), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsCurlFtps_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsCurlFtps(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsNbd_members(Visitor *v, BlockdevOptionsNbd *obj, Error **errp)
{
    if (!visit_type_SocketAddress(v, "server", &obj->server, errp)) {
        return false;
    }
    if (visit_optional(v, "export", &obj->has_export)) {
        if (!visit_type_str(v, "export", &obj->export, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        if (!visit_type_str(v, "tls-creds", &obj->tls_creds, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls-hostname", &obj->has_tls_hostname)) {
        if (!visit_type_str(v, "tls-hostname", &obj->tls_hostname, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "x-dirty-bitmap", &obj->has_x_dirty_bitmap)) {
        if (visit_policy_reject(v, "x-dirty-bitmap", 1u << QAPI_UNSTABLE, errp)) {
            return false;
        }
        if (!visit_policy_skip(v, "x-dirty-bitmap", 1u << QAPI_UNSTABLE)) {
            if (!visit_type_str(v, "x-dirty-bitmap", &obj->x_dirty_bitmap, errp)) {
                return false;
            }
        }
    }
    if (visit_optional(v, "reconnect-delay", &obj->has_reconnect_delay)) {
        if (!visit_type_uint32(v, "reconnect-delay", &obj->reconnect_delay, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "open-timeout", &obj->has_open_timeout)) {
        if (!visit_type_uint32(v, "open-timeout", &obj->open_timeout, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsNbd(Visitor *v, const char *name,
                 BlockdevOptionsNbd **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsNbd), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsNbd_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsNbd(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsRaw_members(Visitor *v, BlockdevOptionsRaw *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericFormat_members(v, (BlockdevOptionsGenericFormat *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "offset", &obj->has_offset)) {
        if (!visit_type_int(v, "offset", &obj->offset, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "size", &obj->has_size)) {
        if (!visit_type_int(v, "size", &obj->size, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsRaw(Visitor *v, const char *name,
                 BlockdevOptionsRaw **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsRaw), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsRaw_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsRaw(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsThrottle_members(Visitor *v, BlockdevOptionsThrottle *obj, Error **errp)
{
    if (!visit_type_str(v, "throttle-group", &obj->throttle_group, errp)) {
        return false;
    }
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevOptionsThrottle(Visitor *v, const char *name,
                 BlockdevOptionsThrottle **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsThrottle), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsThrottle_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsThrottle(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsCor_members(Visitor *v, BlockdevOptionsCor *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericFormat_members(v, (BlockdevOptionsGenericFormat *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "bottom", &obj->has_bottom)) {
        if (!visit_type_str(v, "bottom", &obj->bottom, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsCor(Visitor *v, const char *name,
                 BlockdevOptionsCor **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsCor), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsCor_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsCor(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_OnCbwError(Visitor *v, const char *name,
                 OnCbwError *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &OnCbwError_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevOptionsCbw_members(Visitor *v, BlockdevOptionsCbw *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGenericFormat_members(v, (BlockdevOptionsGenericFormat *)obj, errp)) {
        return false;
    }
    if (!visit_type_BlockdevRef(v, "target", &obj->target, errp)) {
        return false;
    }
    if (visit_optional(v, "bitmap", &obj->has_bitmap)) {
        if (!visit_type_BlockDirtyBitmap(v, "bitmap", &obj->bitmap, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "on-cbw-error", &obj->has_on_cbw_error)) {
        if (!visit_type_OnCbwError(v, "on-cbw-error", &obj->on_cbw_error, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cbw-timeout", &obj->has_cbw_timeout)) {
        if (!visit_type_uint32(v, "cbw-timeout", &obj->cbw_timeout, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevOptionsCbw(Visitor *v, const char *name,
                 BlockdevOptionsCbw **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptionsCbw), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptionsCbw_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsCbw(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BlockdevOptions_base_members(Visitor *v, q_obj_BlockdevOptions_base *obj, Error **errp)
{
    if (!visit_type_BlockdevDriver(v, "driver", &obj->driver, errp)) {
        return false;
    }
    if (visit_optional(v, "node-name", &obj->has_node_name)) {
        if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "discard", &obj->has_discard)) {
        if (!visit_type_BlockdevDiscardOptions(v, "discard", &obj->discard, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cache", &obj->has_cache)) {
        if (!visit_type_BlockdevCacheOptions(v, "cache", &obj->cache, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "read-only", &obj->has_read_only)) {
        if (!visit_type_bool(v, "read-only", &obj->read_only, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "auto-read-only", &obj->has_auto_read_only)) {
        if (!visit_type_bool(v, "auto-read-only", &obj->auto_read_only, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "force-share", &obj->has_force_share)) {
        if (!visit_type_bool(v, "force-share", &obj->force_share, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "detect-zeroes", &obj->has_detect_zeroes)) {
        if (!visit_type_BlockdevDetectZeroesOptions(v, "detect-zeroes", &obj->detect_zeroes, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_BlockdevOptions_base(Visitor *v, const char *name,
                 q_obj_BlockdevOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BlockdevOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BlockdevOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BlockdevOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptions_members(Visitor *v, BlockdevOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_BlockdevOptions_base_members(v, (q_obj_BlockdevOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->driver) {
    case BLOCKDEV_DRIVER_BLKDEBUG:
        return visit_type_BlockdevOptionsBlkdebug_members(v, &obj->u.blkdebug, errp);
    case BLOCKDEV_DRIVER_BLKLOGWRITES:
        return visit_type_BlockdevOptionsBlklogwrites_members(v, &obj->u.blklogwrites, errp);
    case BLOCKDEV_DRIVER_BLKVERIFY:
        return visit_type_BlockdevOptionsBlkverify_members(v, &obj->u.blkverify, errp);
    case BLOCKDEV_DRIVER_BLKREPLAY:
        return visit_type_BlockdevOptionsBlkreplay_members(v, &obj->u.blkreplay, errp);
    case BLOCKDEV_DRIVER_BOCHS:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.bochs, errp);
    case BLOCKDEV_DRIVER_CLOOP:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.cloop, errp);
    case BLOCKDEV_DRIVER_COMPRESS:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.compress, errp);
    case BLOCKDEV_DRIVER_COPY_BEFORE_WRITE:
        return visit_type_BlockdevOptionsCbw_members(v, &obj->u.copy_before_write, errp);
    case BLOCKDEV_DRIVER_COPY_ON_READ:
        return visit_type_BlockdevOptionsCor_members(v, &obj->u.copy_on_read, errp);
    case BLOCKDEV_DRIVER_DMG:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.dmg, errp);
    case BLOCKDEV_DRIVER_FILE:
        return visit_type_BlockdevOptionsFile_members(v, &obj->u.file, errp);
    case BLOCKDEV_DRIVER_FTP:
        return visit_type_BlockdevOptionsCurlFtp_members(v, &obj->u.ftp, errp);
    case BLOCKDEV_DRIVER_FTPS:
        return visit_type_BlockdevOptionsCurlFtps_members(v, &obj->u.ftps, errp);
    case BLOCKDEV_DRIVER_GLUSTER:
        return visit_type_BlockdevOptionsGluster_members(v, &obj->u.gluster, errp);
#if defined(HAVE_HOST_BLOCK_DEVICE)
    case BLOCKDEV_DRIVER_HOST_CDROM:
        return visit_type_BlockdevOptionsFile_members(v, &obj->u.host_cdrom, errp);
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
#if defined(HAVE_HOST_BLOCK_DEVICE)
    case BLOCKDEV_DRIVER_HOST_DEVICE:
        return visit_type_BlockdevOptionsFile_members(v, &obj->u.host_device, errp);
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
    case BLOCKDEV_DRIVER_HTTP:
        return visit_type_BlockdevOptionsCurlHttp_members(v, &obj->u.http, errp);
    case BLOCKDEV_DRIVER_HTTPS:
        return visit_type_BlockdevOptionsCurlHttps_members(v, &obj->u.https, errp);
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_IO_URING:
        return visit_type_BlockdevOptionsIoUring_members(v, &obj->u.io_uring, errp);
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_ISCSI:
        return visit_type_BlockdevOptionsIscsi_members(v, &obj->u.iscsi, errp);
    case BLOCKDEV_DRIVER_LUKS:
        return visit_type_BlockdevOptionsLUKS_members(v, &obj->u.luks, errp);
    case BLOCKDEV_DRIVER_NBD:
        return visit_type_BlockdevOptionsNbd_members(v, &obj->u.nbd, errp);
    case BLOCKDEV_DRIVER_NFS:
        return visit_type_BlockdevOptionsNfs_members(v, &obj->u.nfs, errp);
    case BLOCKDEV_DRIVER_NULL_AIO:
        return visit_type_BlockdevOptionsNull_members(v, &obj->u.null_aio, errp);
    case BLOCKDEV_DRIVER_NULL_CO:
        return visit_type_BlockdevOptionsNull_members(v, &obj->u.null_co, errp);
    case BLOCKDEV_DRIVER_NVME:
        return visit_type_BlockdevOptionsNVMe_members(v, &obj->u.nvme, errp);
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_NVME_IO_URING:
        return visit_type_BlockdevOptionsNvmeIoUring_members(v, &obj->u.nvme_io_uring, errp);
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_PARALLELS:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.parallels, errp);
    case BLOCKDEV_DRIVER_PREALLOCATE:
        return visit_type_BlockdevOptionsPreallocate_members(v, &obj->u.preallocate, errp);
    case BLOCKDEV_DRIVER_QCOW2:
        return visit_type_BlockdevOptionsQcow2_members(v, &obj->u.qcow2, errp);
    case BLOCKDEV_DRIVER_QCOW:
        return visit_type_BlockdevOptionsQcow_members(v, &obj->u.qcow, errp);
    case BLOCKDEV_DRIVER_QED:
        return visit_type_BlockdevOptionsGenericCOWFormat_members(v, &obj->u.qed, errp);
    case BLOCKDEV_DRIVER_QUORUM:
        return visit_type_BlockdevOptionsQuorum_members(v, &obj->u.quorum, errp);
    case BLOCKDEV_DRIVER_RAW:
        return visit_type_BlockdevOptionsRaw_members(v, &obj->u.raw, errp);
    case BLOCKDEV_DRIVER_RBD:
        return visit_type_BlockdevOptionsRbd_members(v, &obj->u.rbd, errp);
#if defined(CONFIG_REPLICATION)
    case BLOCKDEV_DRIVER_REPLICATION:
        return visit_type_BlockdevOptionsReplication_members(v, &obj->u.replication, errp);
#endif /* defined(CONFIG_REPLICATION) */
    case BLOCKDEV_DRIVER_SNAPSHOT_ACCESS:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.snapshot_access, errp);
    case BLOCKDEV_DRIVER_SSH:
        return visit_type_BlockdevOptionsSsh_members(v, &obj->u.ssh, errp);
    case BLOCKDEV_DRIVER_THROTTLE:
        return visit_type_BlockdevOptionsThrottle_members(v, &obj->u.throttle, errp);
    case BLOCKDEV_DRIVER_VDI:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.vdi, errp);
    case BLOCKDEV_DRIVER_VHDX:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.vhdx, errp);
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VFIO_PCI:
        return visit_type_BlockdevOptionsVirtioBlkVfioPci_members(v, &obj->u.virtio_blk_vfio_pci, errp);
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_USER:
        return visit_type_BlockdevOptionsVirtioBlkVhostUser_members(v, &obj->u.virtio_blk_vhost_user, errp);
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_VDPA:
        return visit_type_BlockdevOptionsVirtioBlkVhostVdpa_members(v, &obj->u.virtio_blk_vhost_vdpa, errp);
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_VMDK:
        return visit_type_BlockdevOptionsGenericCOWFormat_members(v, &obj->u.vmdk, errp);
    case BLOCKDEV_DRIVER_VPC:
        return visit_type_BlockdevOptionsGenericFormat_members(v, &obj->u.vpc, errp);
    case BLOCKDEV_DRIVER_VVFAT:
        return visit_type_BlockdevOptionsVVFAT_members(v, &obj->u.vvfat, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_BlockdevOptions(Visitor *v, const char *name,
                 BlockdevOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevRef(Visitor *v, const char *name,
                 BlockdevRef **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type_BlockdevOptions_members(v, &(*obj)->u.definition, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
    case QTYPE_QSTRING:
        ok = visit_type_str(v, name, &(*obj)->u.reference, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "BlockdevRef");
        /* Avoid passing invalid *obj to qapi_free_BlockdevRef() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevRef(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevRefOrNull(Visitor *v, const char *name,
                 BlockdevRefOrNull **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type_BlockdevOptions_members(v, &(*obj)->u.definition, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
    case QTYPE_QSTRING:
        ok = visit_type_str(v, name, &(*obj)->u.reference, errp);
        break;
    case QTYPE_QNULL:
        ok = visit_type_null(v, name, &(*obj)->u.null, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "BlockdevRefOrNull");
        /* Avoid passing invalid *obj to qapi_free_BlockdevRefOrNull() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevRefOrNull(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevOptionsList(Visitor *v, const char *name,
                 BlockdevOptionsList **obj, Error **errp)
{
    bool ok = false;
    BlockdevOptionsList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockdevOptionsList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockdevOptions(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevOptionsList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_reopen_arg_members(Visitor *v, q_obj_blockdev_reopen_arg *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsList(v, "options", &obj->options, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_blockdev_reopen_arg(Visitor *v, const char *name,
                 q_obj_blockdev_reopen_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_reopen_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_reopen_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_reopen_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_del_arg_members(Visitor *v, q_obj_blockdev_del_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_blockdev_del_arg(Visitor *v, const char *name,
                 q_obj_blockdev_del_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_del_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_del_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_del_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsFile_members(Visitor *v, BlockdevCreateOptionsFile *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "preallocation", &obj->has_preallocation)) {
        if (!visit_type_PreallocMode(v, "preallocation", &obj->preallocation, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "nocow", &obj->has_nocow)) {
        if (!visit_type_bool(v, "nocow", &obj->nocow, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "extent-size-hint", &obj->has_extent_size_hint)) {
        if (!visit_type_size(v, "extent-size-hint", &obj->extent_size_hint, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsFile(Visitor *v, const char *name,
                 BlockdevCreateOptionsFile **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsFile), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsFile_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsFile(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsGluster_members(Visitor *v, BlockdevCreateOptionsGluster *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsGluster(v, "location", &obj->location, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "preallocation", &obj->has_preallocation)) {
        if (!visit_type_PreallocMode(v, "preallocation", &obj->preallocation, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsGluster(Visitor *v, const char *name,
                 BlockdevCreateOptionsGluster **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsGluster), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsGluster_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsGluster(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsLUKS_members(Visitor *v, BlockdevCreateOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockCreateOptionsLUKS_members(v, (QCryptoBlockCreateOptionsLUKS *)obj, errp)) {
        return false;
    }
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "preallocation", &obj->has_preallocation)) {
        if (!visit_type_PreallocMode(v, "preallocation", &obj->preallocation, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsLUKS(Visitor *v, const char *name,
                 BlockdevCreateOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsNfs_members(Visitor *v, BlockdevCreateOptionsNfs *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsNfs(v, "location", &obj->location, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsNfs(Visitor *v, const char *name,
                 BlockdevCreateOptionsNfs **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsNfs), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsNfs_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsNfs(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsParallels_members(Visitor *v, BlockdevCreateOptionsParallels *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "cluster-size", &obj->has_cluster_size)) {
        if (!visit_type_size(v, "cluster-size", &obj->cluster_size, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsParallels(Visitor *v, const char *name,
                 BlockdevCreateOptionsParallels **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsParallels), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsParallels_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsParallels(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsQcow_members(Visitor *v, BlockdevCreateOptionsQcow *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "backing-file", &obj->has_backing_file)) {
        if (!visit_type_str(v, "backing-file", &obj->backing_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "encrypt", &obj->has_encrypt)) {
        if (!visit_type_QCryptoBlockCreateOptions(v, "encrypt", &obj->encrypt, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsQcow(Visitor *v, const char *name,
                 BlockdevCreateOptionsQcow **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsQcow), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsQcow_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsQcow(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevQcow2Version(Visitor *v, const char *name,
                 BlockdevQcow2Version *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevQcow2Version_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_Qcow2CompressionType(Visitor *v, const char *name,
                 Qcow2CompressionType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &Qcow2CompressionType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevCreateOptionsQcow2_members(Visitor *v, BlockdevCreateOptionsQcow2 *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (visit_optional(v, "data-file", &obj->has_data_file)) {
        if (!visit_type_BlockdevRef(v, "data-file", &obj->data_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "data-file-raw", &obj->has_data_file_raw)) {
        if (!visit_type_bool(v, "data-file-raw", &obj->data_file_raw, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "extended-l2", &obj->has_extended_l2)) {
        if (!visit_type_bool(v, "extended-l2", &obj->extended_l2, errp)) {
            return false;
        }
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "version", &obj->has_version)) {
        if (!visit_type_BlockdevQcow2Version(v, "version", &obj->version, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "backing-file", &obj->has_backing_file)) {
        if (!visit_type_str(v, "backing-file", &obj->backing_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "backing-fmt", &obj->has_backing_fmt)) {
        if (!visit_type_BlockdevDriver(v, "backing-fmt", &obj->backing_fmt, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "encrypt", &obj->has_encrypt)) {
        if (!visit_type_QCryptoBlockCreateOptions(v, "encrypt", &obj->encrypt, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cluster-size", &obj->has_cluster_size)) {
        if (!visit_type_size(v, "cluster-size", &obj->cluster_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "preallocation", &obj->has_preallocation)) {
        if (!visit_type_PreallocMode(v, "preallocation", &obj->preallocation, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "lazy-refcounts", &obj->has_lazy_refcounts)) {
        if (!visit_type_bool(v, "lazy-refcounts", &obj->lazy_refcounts, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "refcount-bits", &obj->has_refcount_bits)) {
        if (!visit_type_int(v, "refcount-bits", &obj->refcount_bits, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "compression-type", &obj->has_compression_type)) {
        if (!visit_type_Qcow2CompressionType(v, "compression-type", &obj->compression_type, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsQcow2(Visitor *v, const char *name,
                 BlockdevCreateOptionsQcow2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsQcow2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsQcow2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsQcow2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsQed_members(Visitor *v, BlockdevCreateOptionsQed *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "backing-file", &obj->has_backing_file)) {
        if (!visit_type_str(v, "backing-file", &obj->backing_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "backing-fmt", &obj->has_backing_fmt)) {
        if (!visit_type_BlockdevDriver(v, "backing-fmt", &obj->backing_fmt, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cluster-size", &obj->has_cluster_size)) {
        if (!visit_type_size(v, "cluster-size", &obj->cluster_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "table-size", &obj->has_table_size)) {
        if (!visit_type_int(v, "table-size", &obj->table_size, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsQed(Visitor *v, const char *name,
                 BlockdevCreateOptionsQed **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsQed), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsQed_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsQed(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsRbd_members(Visitor *v, BlockdevCreateOptionsRbd *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsRbd(v, "location", &obj->location, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "cluster-size", &obj->has_cluster_size)) {
        if (!visit_type_size(v, "cluster-size", &obj->cluster_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "encrypt", &obj->has_encrypt)) {
        if (!visit_type_RbdEncryptionCreateOptions(v, "encrypt", &obj->encrypt, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsRbd(Visitor *v, const char *name,
                 BlockdevCreateOptionsRbd **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsRbd), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsRbd_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsRbd(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevVmdkSubformat(Visitor *v, const char *name,
                 BlockdevVmdkSubformat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevVmdkSubformat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevVmdkAdapterType(Visitor *v, const char *name,
                 BlockdevVmdkAdapterType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevVmdkAdapterType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevCreateOptionsVmdk_members(Visitor *v, BlockdevCreateOptionsVmdk *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "extents", &obj->has_extents)) {
        if (!visit_type_BlockdevRefList(v, "extents", &obj->extents, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "subformat", &obj->has_subformat)) {
        if (!visit_type_BlockdevVmdkSubformat(v, "subformat", &obj->subformat, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "backing-file", &obj->has_backing_file)) {
        if (!visit_type_str(v, "backing-file", &obj->backing_file, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "adapter-type", &obj->has_adapter_type)) {
        if (!visit_type_BlockdevVmdkAdapterType(v, "adapter-type", &obj->adapter_type, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "hwversion", &obj->has_hwversion)) {
        if (!visit_type_str(v, "hwversion", &obj->hwversion, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "toolsversion", &obj->has_toolsversion)) {
        if (!visit_type_str(v, "toolsversion", &obj->toolsversion, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "zeroed-grain", &obj->has_zeroed_grain)) {
        if (!visit_type_bool(v, "zeroed-grain", &obj->zeroed_grain, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsVmdk(Visitor *v, const char *name,
                 BlockdevCreateOptionsVmdk **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsVmdk), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsVmdk_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsVmdk(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsSsh_members(Visitor *v, BlockdevCreateOptionsSsh *obj, Error **errp)
{
    if (!visit_type_BlockdevOptionsSsh(v, "location", &obj->location, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsSsh(Visitor *v, const char *name,
                 BlockdevCreateOptionsSsh **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsSsh), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsSsh_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsSsh(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptionsVdi_members(Visitor *v, BlockdevCreateOptionsVdi *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "preallocation", &obj->has_preallocation)) {
        if (!visit_type_PreallocMode(v, "preallocation", &obj->preallocation, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsVdi(Visitor *v, const char *name,
                 BlockdevCreateOptionsVdi **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsVdi), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsVdi_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsVdi(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevVhdxSubformat(Visitor *v, const char *name,
                 BlockdevVhdxSubformat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevVhdxSubformat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevCreateOptionsVhdx_members(Visitor *v, BlockdevCreateOptionsVhdx *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "log-size", &obj->has_log_size)) {
        if (!visit_type_size(v, "log-size", &obj->log_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "block-size", &obj->has_block_size)) {
        if (!visit_type_size(v, "block-size", &obj->block_size, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "subformat", &obj->has_subformat)) {
        if (!visit_type_BlockdevVhdxSubformat(v, "subformat", &obj->subformat, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "block-state-zero", &obj->has_block_state_zero)) {
        if (!visit_type_bool(v, "block-state-zero", &obj->block_state_zero, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsVhdx(Visitor *v, const char *name,
                 BlockdevCreateOptionsVhdx **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsVhdx), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsVhdx_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsVhdx(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevVpcSubformat(Visitor *v, const char *name,
                 BlockdevVpcSubformat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockdevVpcSubformat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_BlockdevCreateOptionsVpc_members(Visitor *v, BlockdevCreateOptionsVpc *obj, Error **errp)
{
    if (!visit_type_BlockdevRef(v, "file", &obj->file, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (visit_optional(v, "subformat", &obj->has_subformat)) {
        if (!visit_type_BlockdevVpcSubformat(v, "subformat", &obj->subformat, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "force-size", &obj->has_force_size)) {
        if (!visit_type_bool(v, "force-size", &obj->force_size, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevCreateOptionsVpc(Visitor *v, const char *name,
                 BlockdevCreateOptionsVpc **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptionsVpc), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptionsVpc_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptionsVpc(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BlockdevCreateOptions_base_members(Visitor *v, q_obj_BlockdevCreateOptions_base *obj, Error **errp)
{
    if (!visit_type_BlockdevDriver(v, "driver", &obj->driver, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockdevCreateOptions_base(Visitor *v, const char *name,
                 q_obj_BlockdevCreateOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BlockdevCreateOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BlockdevCreateOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BlockdevCreateOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevCreateOptions_members(Visitor *v, BlockdevCreateOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_BlockdevCreateOptions_base_members(v, (q_obj_BlockdevCreateOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->driver) {
    case BLOCKDEV_DRIVER_FILE:
        return visit_type_BlockdevCreateOptionsFile_members(v, &obj->u.file, errp);
    case BLOCKDEV_DRIVER_GLUSTER:
        return visit_type_BlockdevCreateOptionsGluster_members(v, &obj->u.gluster, errp);
    case BLOCKDEV_DRIVER_LUKS:
        return visit_type_BlockdevCreateOptionsLUKS_members(v, &obj->u.luks, errp);
    case BLOCKDEV_DRIVER_NFS:
        return visit_type_BlockdevCreateOptionsNfs_members(v, &obj->u.nfs, errp);
    case BLOCKDEV_DRIVER_PARALLELS:
        return visit_type_BlockdevCreateOptionsParallels_members(v, &obj->u.parallels, errp);
    case BLOCKDEV_DRIVER_QCOW:
        return visit_type_BlockdevCreateOptionsQcow_members(v, &obj->u.qcow, errp);
    case BLOCKDEV_DRIVER_QCOW2:
        return visit_type_BlockdevCreateOptionsQcow2_members(v, &obj->u.qcow2, errp);
    case BLOCKDEV_DRIVER_QED:
        return visit_type_BlockdevCreateOptionsQed_members(v, &obj->u.qed, errp);
    case BLOCKDEV_DRIVER_RBD:
        return visit_type_BlockdevCreateOptionsRbd_members(v, &obj->u.rbd, errp);
    case BLOCKDEV_DRIVER_SSH:
        return visit_type_BlockdevCreateOptionsSsh_members(v, &obj->u.ssh, errp);
    case BLOCKDEV_DRIVER_VDI:
        return visit_type_BlockdevCreateOptionsVdi_members(v, &obj->u.vdi, errp);
    case BLOCKDEV_DRIVER_VHDX:
        return visit_type_BlockdevCreateOptionsVhdx_members(v, &obj->u.vhdx, errp);
    case BLOCKDEV_DRIVER_VMDK:
        return visit_type_BlockdevCreateOptionsVmdk_members(v, &obj->u.vmdk, errp);
    case BLOCKDEV_DRIVER_VPC:
        return visit_type_BlockdevCreateOptionsVpc_members(v, &obj->u.vpc, errp);
    case BLOCKDEV_DRIVER_BLKDEBUG:
        break;
    case BLOCKDEV_DRIVER_BLKLOGWRITES:
        break;
    case BLOCKDEV_DRIVER_BLKREPLAY:
        break;
    case BLOCKDEV_DRIVER_BLKVERIFY:
        break;
    case BLOCKDEV_DRIVER_BOCHS:
        break;
    case BLOCKDEV_DRIVER_CLOOP:
        break;
    case BLOCKDEV_DRIVER_COMPRESS:
        break;
    case BLOCKDEV_DRIVER_COPY_BEFORE_WRITE:
        break;
    case BLOCKDEV_DRIVER_COPY_ON_READ:
        break;
    case BLOCKDEV_DRIVER_DMG:
        break;
    case BLOCKDEV_DRIVER_SNAPSHOT_ACCESS:
        break;
    case BLOCKDEV_DRIVER_FTP:
        break;
    case BLOCKDEV_DRIVER_FTPS:
        break;
#if defined(HAVE_HOST_BLOCK_DEVICE)
    case BLOCKDEV_DRIVER_HOST_CDROM:
        break;
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
#if defined(HAVE_HOST_BLOCK_DEVICE)
    case BLOCKDEV_DRIVER_HOST_DEVICE:
        break;
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
    case BLOCKDEV_DRIVER_HTTP:
        break;
    case BLOCKDEV_DRIVER_HTTPS:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_IO_URING:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_ISCSI:
        break;
    case BLOCKDEV_DRIVER_NBD:
        break;
    case BLOCKDEV_DRIVER_NULL_AIO:
        break;
    case BLOCKDEV_DRIVER_NULL_CO:
        break;
    case BLOCKDEV_DRIVER_NVME:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_NVME_IO_URING:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_PREALLOCATE:
        break;
    case BLOCKDEV_DRIVER_QUORUM:
        break;
    case BLOCKDEV_DRIVER_RAW:
        break;
#if defined(CONFIG_REPLICATION)
    case BLOCKDEV_DRIVER_REPLICATION:
        break;
#endif /* defined(CONFIG_REPLICATION) */
    case BLOCKDEV_DRIVER_THROTTLE:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VFIO_PCI:
        break;
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_USER:
        break;
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_VDPA:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_VVFAT:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_BlockdevCreateOptions(Visitor *v, const char *name,
                 BlockdevCreateOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevCreateOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevCreateOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevCreateOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_create_arg_members(Visitor *v, q_obj_blockdev_create_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
        return false;
    }
    if (!visit_type_BlockdevCreateOptions(v, "options", &obj->options, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_blockdev_create_arg(Visitor *v, const char *name,
                 q_obj_blockdev_create_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_create_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_create_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_create_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevAmendOptionsLUKS_members(Visitor *v, BlockdevAmendOptionsLUKS *obj, Error **errp)
{
    if (!visit_type_QCryptoBlockAmendOptionsLUKS_members(v, (QCryptoBlockAmendOptionsLUKS *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevAmendOptionsLUKS(Visitor *v, const char *name,
                 BlockdevAmendOptionsLUKS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevAmendOptionsLUKS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevAmendOptionsLUKS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevAmendOptionsLUKS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevAmendOptionsQcow2_members(Visitor *v, BlockdevAmendOptionsQcow2 *obj, Error **errp)
{
    if (visit_optional(v, "encrypt", &obj->has_encrypt)) {
        if (!visit_type_QCryptoBlockAmendOptions(v, "encrypt", &obj->encrypt, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_BlockdevAmendOptionsQcow2(Visitor *v, const char *name,
                 BlockdevAmendOptionsQcow2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevAmendOptionsQcow2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevAmendOptionsQcow2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevAmendOptionsQcow2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BlockdevAmendOptions_base_members(Visitor *v, q_obj_BlockdevAmendOptions_base *obj, Error **errp)
{
    if (!visit_type_BlockdevDriver(v, "driver", &obj->driver, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockdevAmendOptions_base(Visitor *v, const char *name,
                 q_obj_BlockdevAmendOptions_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BlockdevAmendOptions_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BlockdevAmendOptions_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BlockdevAmendOptions_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevAmendOptions_members(Visitor *v, BlockdevAmendOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_BlockdevAmendOptions_base_members(v, (q_obj_BlockdevAmendOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->driver) {
    case BLOCKDEV_DRIVER_LUKS:
        return visit_type_BlockdevAmendOptionsLUKS_members(v, &obj->u.luks, errp);
    case BLOCKDEV_DRIVER_QCOW2:
        return visit_type_BlockdevAmendOptionsQcow2_members(v, &obj->u.qcow2, errp);
    case BLOCKDEV_DRIVER_BLKDEBUG:
        break;
    case BLOCKDEV_DRIVER_BLKLOGWRITES:
        break;
    case BLOCKDEV_DRIVER_BLKREPLAY:
        break;
    case BLOCKDEV_DRIVER_BLKVERIFY:
        break;
    case BLOCKDEV_DRIVER_BOCHS:
        break;
    case BLOCKDEV_DRIVER_CLOOP:
        break;
    case BLOCKDEV_DRIVER_COMPRESS:
        break;
    case BLOCKDEV_DRIVER_COPY_BEFORE_WRITE:
        break;
    case BLOCKDEV_DRIVER_COPY_ON_READ:
        break;
    case BLOCKDEV_DRIVER_DMG:
        break;
    case BLOCKDEV_DRIVER_FILE:
        break;
    case BLOCKDEV_DRIVER_SNAPSHOT_ACCESS:
        break;
    case BLOCKDEV_DRIVER_FTP:
        break;
    case BLOCKDEV_DRIVER_FTPS:
        break;
    case BLOCKDEV_DRIVER_GLUSTER:
        break;
#if defined(HAVE_HOST_BLOCK_DEVICE)
    case BLOCKDEV_DRIVER_HOST_CDROM:
        break;
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
#if defined(HAVE_HOST_BLOCK_DEVICE)
    case BLOCKDEV_DRIVER_HOST_DEVICE:
        break;
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
    case BLOCKDEV_DRIVER_HTTP:
        break;
    case BLOCKDEV_DRIVER_HTTPS:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_IO_URING:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_ISCSI:
        break;
    case BLOCKDEV_DRIVER_NBD:
        break;
    case BLOCKDEV_DRIVER_NFS:
        break;
    case BLOCKDEV_DRIVER_NULL_AIO:
        break;
    case BLOCKDEV_DRIVER_NULL_CO:
        break;
    case BLOCKDEV_DRIVER_NVME:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_NVME_IO_URING:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_PARALLELS:
        break;
    case BLOCKDEV_DRIVER_PREALLOCATE:
        break;
    case BLOCKDEV_DRIVER_QCOW:
        break;
    case BLOCKDEV_DRIVER_QED:
        break;
    case BLOCKDEV_DRIVER_QUORUM:
        break;
    case BLOCKDEV_DRIVER_RAW:
        break;
    case BLOCKDEV_DRIVER_RBD:
        break;
#if defined(CONFIG_REPLICATION)
    case BLOCKDEV_DRIVER_REPLICATION:
        break;
#endif /* defined(CONFIG_REPLICATION) */
    case BLOCKDEV_DRIVER_SSH:
        break;
    case BLOCKDEV_DRIVER_THROTTLE:
        break;
    case BLOCKDEV_DRIVER_VDI:
        break;
    case BLOCKDEV_DRIVER_VHDX:
        break;
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VFIO_PCI:
        break;
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_USER:
        break;
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    case BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_VDPA:
        break;
#endif /* defined(CONFIG_BLKIO) */
    case BLOCKDEV_DRIVER_VMDK:
        break;
    case BLOCKDEV_DRIVER_VPC:
        break;
    case BLOCKDEV_DRIVER_VVFAT:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_BlockdevAmendOptions(Visitor *v, const char *name,
                 BlockdevAmendOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevAmendOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevAmendOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevAmendOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_x_blockdev_amend_arg_members(Visitor *v, q_obj_x_blockdev_amend_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "job-id", &obj->job_id, errp)) {
        return false;
    }
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    if (!visit_type_BlockdevAmendOptions(v, "options", &obj->options, errp)) {
        return false;
    }
    if (visit_optional(v, "force", &obj->has_force)) {
        if (!visit_type_bool(v, "force", &obj->force, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_x_blockdev_amend_arg(Visitor *v, const char *name,
                 q_obj_x_blockdev_amend_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_x_blockdev_amend_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_x_blockdev_amend_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_x_blockdev_amend_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockErrorAction(Visitor *v, const char *name,
                 BlockErrorAction *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &BlockErrorAction_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_BLOCK_IMAGE_CORRUPTED_arg_members(Visitor *v, q_obj_BLOCK_IMAGE_CORRUPTED_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (visit_optional(v, "node-name", &obj->has_node_name)) {
        if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "msg", &obj->msg, errp)) {
        return false;
    }
    if (visit_optional(v, "offset", &obj->has_offset)) {
        if (!visit_type_int(v, "offset", &obj->offset, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "size", &obj->has_size)) {
        if (!visit_type_int(v, "size", &obj->size, errp)) {
            return false;
        }
    }
    if (!visit_type_bool(v, "fatal", &obj->fatal, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BLOCK_IMAGE_CORRUPTED_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_IMAGE_CORRUPTED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_IMAGE_CORRUPTED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_IMAGE_CORRUPTED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_IMAGE_CORRUPTED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BLOCK_IO_ERROR_arg_members(Visitor *v, q_obj_BLOCK_IO_ERROR_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (visit_optional(v, "node-name", &obj->has_node_name)) {
        if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
            return false;
        }
    }
    if (!visit_type_IoOperationType(v, "operation", &obj->operation, errp)) {
        return false;
    }
    if (!visit_type_BlockErrorAction(v, "action", &obj->action, errp)) {
        return false;
    }
    if (visit_optional(v, "nospace", &obj->has_nospace)) {
        if (!visit_type_bool(v, "nospace", &obj->nospace, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "reason", &obj->reason, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BLOCK_IO_ERROR_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_IO_ERROR_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_IO_ERROR_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_IO_ERROR_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_IO_ERROR_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BLOCK_JOB_COMPLETED_arg_members(Visitor *v, q_obj_BLOCK_JOB_COMPLETED_arg *obj, Error **errp)
{
    if (!visit_type_JobType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_int(v, "len", &obj->len, errp)) {
        return false;
    }
    if (!visit_type_int(v, "offset", &obj->offset, errp)) {
        return false;
    }
    if (!visit_type_int(v, "speed", &obj->speed, errp)) {
        return false;
    }
    if (visit_optional(v, "error", &obj->has_error)) {
        if (!visit_type_str(v, "error", &obj->error, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_BLOCK_JOB_COMPLETED_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_JOB_COMPLETED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_JOB_COMPLETED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_JOB_COMPLETED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_JOB_COMPLETED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BLOCK_JOB_CANCELLED_arg_members(Visitor *v, q_obj_BLOCK_JOB_CANCELLED_arg *obj, Error **errp)
{
    if (!visit_type_JobType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_int(v, "len", &obj->len, errp)) {
        return false;
    }
    if (!visit_type_int(v, "offset", &obj->offset, errp)) {
        return false;
    }
    if (!visit_type_int(v, "speed", &obj->speed, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BLOCK_JOB_CANCELLED_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_JOB_CANCELLED_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_JOB_CANCELLED_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_JOB_CANCELLED_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_JOB_CANCELLED_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BLOCK_JOB_ERROR_arg_members(Visitor *v, q_obj_BLOCK_JOB_ERROR_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_IoOperationType(v, "operation", &obj->operation, errp)) {
        return false;
    }
    if (!visit_type_BlockErrorAction(v, "action", &obj->action, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BLOCK_JOB_ERROR_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_JOB_ERROR_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_JOB_ERROR_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_JOB_ERROR_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_JOB_ERROR_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BLOCK_JOB_READY_arg_members(Visitor *v, q_obj_BLOCK_JOB_READY_arg *obj, Error **errp)
{
    if (!visit_type_JobType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_int(v, "len", &obj->len, errp)) {
        return false;
    }
    if (!visit_type_int(v, "offset", &obj->offset, errp)) {
        return false;
    }
    if (!visit_type_int(v, "speed", &obj->speed, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BLOCK_JOB_READY_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_JOB_READY_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_JOB_READY_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_JOB_READY_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_JOB_READY_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_BLOCK_JOB_PENDING_arg_members(Visitor *v, q_obj_BLOCK_JOB_PENDING_arg *obj, Error **errp)
{
    if (!visit_type_JobType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BLOCK_JOB_PENDING_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_JOB_PENDING_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_JOB_PENDING_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_JOB_PENDING_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_JOB_PENDING_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_PreallocMode(Visitor *v, const char *name,
                 PreallocMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &PreallocMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_BLOCK_WRITE_THRESHOLD_arg_members(Visitor *v, q_obj_BLOCK_WRITE_THRESHOLD_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "amount-exceeded", &obj->amount_exceeded, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "write-threshold", &obj->write_threshold, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BLOCK_WRITE_THRESHOLD_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_WRITE_THRESHOLD_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_BLOCK_WRITE_THRESHOLD_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_BLOCK_WRITE_THRESHOLD_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_BLOCK_WRITE_THRESHOLD_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_block_set_write_threshold_arg_members(Visitor *v, q_obj_block_set_write_threshold_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "write-threshold", &obj->write_threshold, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_block_set_write_threshold_arg(Visitor *v, const char *name,
                 q_obj_block_set_write_threshold_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_block_set_write_threshold_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_block_set_write_threshold_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_block_set_write_threshold_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_x_blockdev_change_arg_members(Visitor *v, q_obj_x_blockdev_change_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "parent", &obj->parent, errp)) {
        return false;
    }
    if (visit_optional(v, "child", &obj->has_child)) {
        if (!visit_type_str(v, "child", &obj->child, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "node", &obj->has_node)) {
        if (!visit_type_str(v, "node", &obj->node, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_x_blockdev_change_arg(Visitor *v, const char *name,
                 q_obj_x_blockdev_change_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_x_blockdev_change_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_x_blockdev_change_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_x_blockdev_change_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_x_blockdev_set_iothread_arg_members(Visitor *v, q_obj_x_blockdev_set_iothread_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    if (!visit_type_StrOrNull(v, "iothread", &obj->iothread, errp)) {
        return false;
    }
    if (visit_optional(v, "force", &obj->has_force)) {
        if (!visit_type_bool(v, "force", &obj->force, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_x_blockdev_set_iothread_arg(Visitor *v, const char *name,
                 q_obj_x_blockdev_set_iothread_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_x_blockdev_set_iothread_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_x_blockdev_set_iothread_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_x_blockdev_set_iothread_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QuorumOpType(Visitor *v, const char *name,
                 QuorumOpType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QuorumOpType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_QUORUM_FAILURE_arg_members(Visitor *v, q_obj_QUORUM_FAILURE_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "reference", &obj->reference, errp)) {
        return false;
    }
    if (!visit_type_int(v, "sector-num", &obj->sector_num, errp)) {
        return false;
    }
    if (!visit_type_int(v, "sectors-count", &obj->sectors_count, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_QUORUM_FAILURE_arg(Visitor *v, const char *name,
                 q_obj_QUORUM_FAILURE_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_QUORUM_FAILURE_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_QUORUM_FAILURE_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_QUORUM_FAILURE_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_QUORUM_REPORT_BAD_arg_members(Visitor *v, q_obj_QUORUM_REPORT_BAD_arg *obj, Error **errp)
{
    if (!visit_type_QuorumOpType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "error", &obj->has_error)) {
        if (!visit_type_str(v, "error", &obj->error, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "node-name", &obj->node_name, errp)) {
        return false;
    }
    if (!visit_type_int(v, "sector-num", &obj->sector_num, errp)) {
        return false;
    }
    if (!visit_type_int(v, "sectors-count", &obj->sectors_count, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_QUORUM_REPORT_BAD_arg(Visitor *v, const char *name,
                 q_obj_QUORUM_REPORT_BAD_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_QUORUM_REPORT_BAD_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_QUORUM_REPORT_BAD_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_QUORUM_REPORT_BAD_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevSnapshotInternal_members(Visitor *v, BlockdevSnapshotInternal *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevSnapshotInternal(Visitor *v, const char *name,
                 BlockdevSnapshotInternal **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevSnapshotInternal), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevSnapshotInternal_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevSnapshotInternal(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_blockdev_snapshot_delete_internal_sync_arg_members(Visitor *v, q_obj_blockdev_snapshot_delete_internal_sync_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "device", &obj->device, errp)) {
        return false;
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "name", &obj->has_name)) {
        if (!visit_type_str(v, "name", &obj->name, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_blockdev_snapshot_delete_internal_sync_arg(Visitor *v, const char *name,
                 q_obj_blockdev_snapshot_delete_internal_sync_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_blockdev_snapshot_delete_internal_sync_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_blockdev_snapshot_delete_internal_sync_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_blockdev_snapshot_delete_internal_sync_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockGraphInfoList(Visitor *v, const char *name,
                 BlockGraphInfoList **obj, Error **errp)
{
    bool ok = false;
    BlockGraphInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (BlockGraphInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_BlockGraphInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockGraphInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DummyBlockCoreForceArrays_members(Visitor *v, DummyBlockCoreForceArrays *obj, Error **errp)
{
    if (!visit_type_BlockGraphInfoList(v, "unused-block-graph-info", &obj->unused_block_graph_info, errp)) {
        return false;
    }
    return true;
}

bool visit_type_DummyBlockCoreForceArrays(Visitor *v, const char *name,
                 DummyBlockCoreForceArrays **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DummyBlockCoreForceArrays), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DummyBlockCoreForceArrays_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DummyBlockCoreForceArrays(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_block_core_c;
