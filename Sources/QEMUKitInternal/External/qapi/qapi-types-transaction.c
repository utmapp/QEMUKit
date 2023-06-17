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
#include "qapi-types-transaction.h"
#include "qapi-visit-transaction.h"

void qapi_free_Abort(Abort *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Abort(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup ActionCompletionMode_lookup = {
    .array = (const char *const[]) {
        [ACTION_COMPLETION_MODE_INDIVIDUAL] = "individual",
        [ACTION_COMPLETION_MODE_GROUPED] = "grouped",
    },
    .size = ACTION_COMPLETION_MODE__MAX
};

const QEnumLookup TransactionActionKind_lookup = {
    .array = (const char *const[]) {
        [TRANSACTION_ACTION_KIND_ABORT] = "abort",
        [TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ADD] = "block-dirty-bitmap-add",
        [TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_REMOVE] = "block-dirty-bitmap-remove",
        [TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_CLEAR] = "block-dirty-bitmap-clear",
        [TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ENABLE] = "block-dirty-bitmap-enable",
        [TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_DISABLE] = "block-dirty-bitmap-disable",
        [TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_MERGE] = "block-dirty-bitmap-merge",
        [TRANSACTION_ACTION_KIND_BLOCKDEV_BACKUP] = "blockdev-backup",
        [TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT] = "blockdev-snapshot",
        [TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_INTERNAL_SYNC] = "blockdev-snapshot-internal-sync",
        [TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_SYNC] = "blockdev-snapshot-sync",
        [TRANSACTION_ACTION_KIND_DRIVE_BACKUP] = "drive-backup",
    },
    .special_features = (const unsigned char[TRANSACTION_ACTION_KIND__MAX]) {
        [TRANSACTION_ACTION_KIND_DRIVE_BACKUP] = 1u << QAPI_DEPRECATED,
    },
    .size = TRANSACTION_ACTION_KIND__MAX
};

void qapi_free_AbortWrapper(AbortWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_AbortWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmapAddWrapper(BlockDirtyBitmapAddWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmapAddWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmapWrapper(BlockDirtyBitmapWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmapWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmapMergeWrapper(BlockDirtyBitmapMergeWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmapMergeWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevBackupWrapper(BlockdevBackupWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevBackupWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevSnapshotWrapper(BlockdevSnapshotWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevSnapshotWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevSnapshotInternalWrapper(BlockdevSnapshotInternalWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevSnapshotInternalWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevSnapshotSyncWrapper(BlockdevSnapshotSyncWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevSnapshotSyncWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DriveBackupWrapper(DriveBackupWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DriveBackupWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_TransactionAction_base(q_obj_TransactionAction_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_TransactionAction_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_TransactionAction(TransactionAction *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TransactionAction(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_TransactionProperties(TransactionProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TransactionProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_TransactionActionList(TransactionActionList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_TransactionActionList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_transaction_arg(q_obj_transaction_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_transaction_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_transaction_c;
