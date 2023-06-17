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
#include "qapi-visit-transaction.h"

bool visit_type_Abort_members(Visitor *v, Abort *obj, Error **errp)
{
    return true;
}

bool visit_type_Abort(Visitor *v, const char *name,
                 Abort **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Abort), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Abort_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Abort(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ActionCompletionMode(Visitor *v, const char *name,
                 ActionCompletionMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ActionCompletionMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_TransactionActionKind(Visitor *v, const char *name,
                 TransactionActionKind *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &TransactionActionKind_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_AbortWrapper_members(Visitor *v, AbortWrapper *obj, Error **errp)
{
    if (!visit_type_Abort(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_AbortWrapper(Visitor *v, const char *name,
                 AbortWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AbortWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AbortWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AbortWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmapAddWrapper_members(Visitor *v, BlockDirtyBitmapAddWrapper *obj, Error **errp)
{
    if (!visit_type_BlockDirtyBitmapAdd(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockDirtyBitmapAddWrapper(Visitor *v, const char *name,
                 BlockDirtyBitmapAddWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDirtyBitmapAddWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDirtyBitmapAddWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmapAddWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmapWrapper_members(Visitor *v, BlockDirtyBitmapWrapper *obj, Error **errp)
{
    if (!visit_type_BlockDirtyBitmap(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockDirtyBitmapWrapper(Visitor *v, const char *name,
                 BlockDirtyBitmapWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDirtyBitmapWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDirtyBitmapWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmapWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockDirtyBitmapMergeWrapper_members(Visitor *v, BlockDirtyBitmapMergeWrapper *obj, Error **errp)
{
    if (!visit_type_BlockDirtyBitmapMerge(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockDirtyBitmapMergeWrapper(Visitor *v, const char *name,
                 BlockDirtyBitmapMergeWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockDirtyBitmapMergeWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockDirtyBitmapMergeWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockDirtyBitmapMergeWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevBackupWrapper_members(Visitor *v, BlockdevBackupWrapper *obj, Error **errp)
{
    if (!visit_type_BlockdevBackup(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevBackupWrapper(Visitor *v, const char *name,
                 BlockdevBackupWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevBackupWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevBackupWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevBackupWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevSnapshotWrapper_members(Visitor *v, BlockdevSnapshotWrapper *obj, Error **errp)
{
    if (!visit_type_BlockdevSnapshot(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevSnapshotWrapper(Visitor *v, const char *name,
                 BlockdevSnapshotWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevSnapshotWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevSnapshotWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevSnapshotWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevSnapshotInternalWrapper_members(Visitor *v, BlockdevSnapshotInternalWrapper *obj, Error **errp)
{
    if (!visit_type_BlockdevSnapshotInternal(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevSnapshotInternalWrapper(Visitor *v, const char *name,
                 BlockdevSnapshotInternalWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevSnapshotInternalWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevSnapshotInternalWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevSnapshotInternalWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_BlockdevSnapshotSyncWrapper_members(Visitor *v, BlockdevSnapshotSyncWrapper *obj, Error **errp)
{
    if (!visit_type_BlockdevSnapshotSync(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_BlockdevSnapshotSyncWrapper(Visitor *v, const char *name,
                 BlockdevSnapshotSyncWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(BlockdevSnapshotSyncWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_BlockdevSnapshotSyncWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_BlockdevSnapshotSyncWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DriveBackupWrapper_members(Visitor *v, DriveBackupWrapper *obj, Error **errp)
{
    if (!visit_type_DriveBackup(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_DriveBackupWrapper(Visitor *v, const char *name,
                 DriveBackupWrapper **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DriveBackupWrapper), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DriveBackupWrapper_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DriveBackupWrapper(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_TransactionAction_base_members(Visitor *v, q_obj_TransactionAction_base *obj, Error **errp)
{
    if (!visit_type_TransactionActionKind(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_TransactionAction_base(Visitor *v, const char *name,
                 q_obj_TransactionAction_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_TransactionAction_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_TransactionAction_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_TransactionAction_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TransactionAction_members(Visitor *v, TransactionAction *obj, Error **errp)
{
    if (!visit_type_q_obj_TransactionAction_base_members(v, (q_obj_TransactionAction_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case TRANSACTION_ACTION_KIND_ABORT:
        return visit_type_AbortWrapper_members(v, &obj->u.abort, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ADD:
        return visit_type_BlockDirtyBitmapAddWrapper_members(v, &obj->u.block_dirty_bitmap_add, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_REMOVE:
        return visit_type_BlockDirtyBitmapWrapper_members(v, &obj->u.block_dirty_bitmap_remove, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_CLEAR:
        return visit_type_BlockDirtyBitmapWrapper_members(v, &obj->u.block_dirty_bitmap_clear, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ENABLE:
        return visit_type_BlockDirtyBitmapWrapper_members(v, &obj->u.block_dirty_bitmap_enable, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_DISABLE:
        return visit_type_BlockDirtyBitmapWrapper_members(v, &obj->u.block_dirty_bitmap_disable, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_MERGE:
        return visit_type_BlockDirtyBitmapMergeWrapper_members(v, &obj->u.block_dirty_bitmap_merge, errp);
    case TRANSACTION_ACTION_KIND_BLOCKDEV_BACKUP:
        return visit_type_BlockdevBackupWrapper_members(v, &obj->u.blockdev_backup, errp);
    case TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT:
        return visit_type_BlockdevSnapshotWrapper_members(v, &obj->u.blockdev_snapshot, errp);
    case TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_INTERNAL_SYNC:
        return visit_type_BlockdevSnapshotInternalWrapper_members(v, &obj->u.blockdev_snapshot_internal_sync, errp);
    case TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_SYNC:
        return visit_type_BlockdevSnapshotSyncWrapper_members(v, &obj->u.blockdev_snapshot_sync, errp);
    case TRANSACTION_ACTION_KIND_DRIVE_BACKUP:
        return visit_type_DriveBackupWrapper_members(v, &obj->u.drive_backup, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_TransactionAction(Visitor *v, const char *name,
                 TransactionAction **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TransactionAction), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TransactionAction_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TransactionAction(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TransactionProperties_members(Visitor *v, TransactionProperties *obj, Error **errp)
{
    if (visit_optional(v, "completion-mode", &obj->has_completion_mode)) {
        if (!visit_type_ActionCompletionMode(v, "completion-mode", &obj->completion_mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_TransactionProperties(Visitor *v, const char *name,
                 TransactionProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TransactionProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TransactionProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TransactionProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TransactionActionList(Visitor *v, const char *name,
                 TransactionActionList **obj, Error **errp)
{
    bool ok = false;
    TransactionActionList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (TransactionActionList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_TransactionAction(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TransactionActionList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_transaction_arg_members(Visitor *v, q_obj_transaction_arg *obj, Error **errp)
{
    if (!visit_type_TransactionActionList(v, "actions", &obj->actions, errp)) {
        return false;
    }
    if (visit_optional(v, "properties", &obj->has_properties)) {
        if (!visit_type_TransactionProperties(v, "properties", &obj->properties, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_transaction_arg(Visitor *v, const char *name,
                 q_obj_transaction_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_transaction_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_transaction_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_transaction_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_transaction_c;
