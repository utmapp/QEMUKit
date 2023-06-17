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

#ifndef QAPI_TYPES_TRANSACTION_H
#define QAPI_TYPES_TRANSACTION_H

#include "qapi-builtin-types.h"
#include "qapi-types-block-core.h"

typedef struct Abort Abort;

typedef enum ActionCompletionMode {
    ACTION_COMPLETION_MODE_INDIVIDUAL,
    ACTION_COMPLETION_MODE_GROUPED,
    ACTION_COMPLETION_MODE__MAX,
} ActionCompletionMode;

#define ActionCompletionMode_str(val) \
    qapi_enum_lookup(&ActionCompletionMode_lookup, (val))

extern const QEnumLookup ActionCompletionMode_lookup;

typedef enum TransactionActionKind {
    TRANSACTION_ACTION_KIND_ABORT,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ADD,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_REMOVE,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_CLEAR,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ENABLE,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_DISABLE,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_MERGE,
    TRANSACTION_ACTION_KIND_BLOCKDEV_BACKUP,
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT,
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_INTERNAL_SYNC,
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_SYNC,
    TRANSACTION_ACTION_KIND_DRIVE_BACKUP,
    TRANSACTION_ACTION_KIND__MAX,
} TransactionActionKind;

#define TransactionActionKind_str(val) \
    qapi_enum_lookup(&TransactionActionKind_lookup, (val))

extern const QEnumLookup TransactionActionKind_lookup;

typedef struct AbortWrapper AbortWrapper;

typedef struct BlockDirtyBitmapAddWrapper BlockDirtyBitmapAddWrapper;

typedef struct BlockDirtyBitmapWrapper BlockDirtyBitmapWrapper;

typedef struct BlockDirtyBitmapMergeWrapper BlockDirtyBitmapMergeWrapper;

typedef struct BlockdevBackupWrapper BlockdevBackupWrapper;

typedef struct BlockdevSnapshotWrapper BlockdevSnapshotWrapper;

typedef struct BlockdevSnapshotInternalWrapper BlockdevSnapshotInternalWrapper;

typedef struct BlockdevSnapshotSyncWrapper BlockdevSnapshotSyncWrapper;

typedef struct DriveBackupWrapper DriveBackupWrapper;

typedef struct q_obj_TransactionAction_base q_obj_TransactionAction_base;

typedef struct TransactionAction TransactionAction;

typedef struct TransactionProperties TransactionProperties;

typedef struct TransactionActionList TransactionActionList;

typedef struct q_obj_transaction_arg q_obj_transaction_arg;

struct Abort {
    char qapi_dummy_for_empty_struct;
};

void qapi_free_Abort(Abort *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Abort, qapi_free_Abort)

struct AbortWrapper {
    Abort *data;
};

void qapi_free_AbortWrapper(AbortWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AbortWrapper, qapi_free_AbortWrapper)

struct BlockDirtyBitmapAddWrapper {
    BlockDirtyBitmapAdd *data;
};

void qapi_free_BlockDirtyBitmapAddWrapper(BlockDirtyBitmapAddWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmapAddWrapper, qapi_free_BlockDirtyBitmapAddWrapper)

struct BlockDirtyBitmapWrapper {
    BlockDirtyBitmap *data;
};

void qapi_free_BlockDirtyBitmapWrapper(BlockDirtyBitmapWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmapWrapper, qapi_free_BlockDirtyBitmapWrapper)

struct BlockDirtyBitmapMergeWrapper {
    BlockDirtyBitmapMerge *data;
};

void qapi_free_BlockDirtyBitmapMergeWrapper(BlockDirtyBitmapMergeWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmapMergeWrapper, qapi_free_BlockDirtyBitmapMergeWrapper)

struct BlockdevBackupWrapper {
    BlockdevBackup *data;
};

void qapi_free_BlockdevBackupWrapper(BlockdevBackupWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevBackupWrapper, qapi_free_BlockdevBackupWrapper)

struct BlockdevSnapshotWrapper {
    BlockdevSnapshot *data;
};

void qapi_free_BlockdevSnapshotWrapper(BlockdevSnapshotWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevSnapshotWrapper, qapi_free_BlockdevSnapshotWrapper)

struct BlockdevSnapshotInternalWrapper {
    BlockdevSnapshotInternal *data;
};

void qapi_free_BlockdevSnapshotInternalWrapper(BlockdevSnapshotInternalWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevSnapshotInternalWrapper, qapi_free_BlockdevSnapshotInternalWrapper)

struct BlockdevSnapshotSyncWrapper {
    BlockdevSnapshotSync *data;
};

void qapi_free_BlockdevSnapshotSyncWrapper(BlockdevSnapshotSyncWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevSnapshotSyncWrapper, qapi_free_BlockdevSnapshotSyncWrapper)

struct DriveBackupWrapper {
    DriveBackup *data;
};

void qapi_free_DriveBackupWrapper(DriveBackupWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DriveBackupWrapper, qapi_free_DriveBackupWrapper)

struct q_obj_TransactionAction_base {
    TransactionActionKind type;
};

void qapi_free_q_obj_TransactionAction_base(q_obj_TransactionAction_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_TransactionAction_base, qapi_free_q_obj_TransactionAction_base)

struct TransactionAction {
    TransactionActionKind type;
    union { /* union tag is @type */
        AbortWrapper abort;
        BlockDirtyBitmapAddWrapper block_dirty_bitmap_add;
        BlockDirtyBitmapWrapper block_dirty_bitmap_remove;
        BlockDirtyBitmapWrapper block_dirty_bitmap_clear;
        BlockDirtyBitmapWrapper block_dirty_bitmap_enable;
        BlockDirtyBitmapWrapper block_dirty_bitmap_disable;
        BlockDirtyBitmapMergeWrapper block_dirty_bitmap_merge;
        BlockdevBackupWrapper blockdev_backup;
        BlockdevSnapshotWrapper blockdev_snapshot;
        BlockdevSnapshotInternalWrapper blockdev_snapshot_internal_sync;
        BlockdevSnapshotSyncWrapper blockdev_snapshot_sync;
        DriveBackupWrapper drive_backup;
    } u;
};

void qapi_free_TransactionAction(TransactionAction *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TransactionAction, qapi_free_TransactionAction)

struct TransactionProperties {
    bool has_completion_mode;
    ActionCompletionMode completion_mode;
};

void qapi_free_TransactionProperties(TransactionProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TransactionProperties, qapi_free_TransactionProperties)

struct TransactionActionList {
    TransactionActionList *next;
    TransactionAction *value;
};

void qapi_free_TransactionActionList(TransactionActionList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TransactionActionList, qapi_free_TransactionActionList)

struct q_obj_transaction_arg {
    TransactionActionList *actions;
    bool has_properties;
    TransactionProperties *properties;
};

void qapi_free_q_obj_transaction_arg(q_obj_transaction_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_transaction_arg, qapi_free_q_obj_transaction_arg)

#endif /* QAPI_TYPES_TRANSACTION_H */
