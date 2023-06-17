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

#ifndef QAPI_VISIT_TRANSACTION_H
#define QAPI_VISIT_TRANSACTION_H

#include "qapi-builtin-visit.h"
#include "qapi-types-transaction.h"

#include "qapi-visit-block-core.h"

bool visit_type_Abort_members(Visitor *v, Abort *obj, Error **errp);

bool visit_type_Abort(Visitor *v, const char *name,
                 Abort **obj, Error **errp);

bool visit_type_ActionCompletionMode(Visitor *v, const char *name,
                 ActionCompletionMode *obj, Error **errp);

bool visit_type_TransactionActionKind(Visitor *v, const char *name,
                 TransactionActionKind *obj, Error **errp);

bool visit_type_AbortWrapper_members(Visitor *v, AbortWrapper *obj, Error **errp);

bool visit_type_AbortWrapper(Visitor *v, const char *name,
                 AbortWrapper **obj, Error **errp);

bool visit_type_BlockDirtyBitmapAddWrapper_members(Visitor *v, BlockDirtyBitmapAddWrapper *obj, Error **errp);

bool visit_type_BlockDirtyBitmapAddWrapper(Visitor *v, const char *name,
                 BlockDirtyBitmapAddWrapper **obj, Error **errp);

bool visit_type_BlockDirtyBitmapWrapper_members(Visitor *v, BlockDirtyBitmapWrapper *obj, Error **errp);

bool visit_type_BlockDirtyBitmapWrapper(Visitor *v, const char *name,
                 BlockDirtyBitmapWrapper **obj, Error **errp);

bool visit_type_BlockDirtyBitmapMergeWrapper_members(Visitor *v, BlockDirtyBitmapMergeWrapper *obj, Error **errp);

bool visit_type_BlockDirtyBitmapMergeWrapper(Visitor *v, const char *name,
                 BlockDirtyBitmapMergeWrapper **obj, Error **errp);

bool visit_type_BlockdevBackupWrapper_members(Visitor *v, BlockdevBackupWrapper *obj, Error **errp);

bool visit_type_BlockdevBackupWrapper(Visitor *v, const char *name,
                 BlockdevBackupWrapper **obj, Error **errp);

bool visit_type_BlockdevSnapshotWrapper_members(Visitor *v, BlockdevSnapshotWrapper *obj, Error **errp);

bool visit_type_BlockdevSnapshotWrapper(Visitor *v, const char *name,
                 BlockdevSnapshotWrapper **obj, Error **errp);

bool visit_type_BlockdevSnapshotInternalWrapper_members(Visitor *v, BlockdevSnapshotInternalWrapper *obj, Error **errp);

bool visit_type_BlockdevSnapshotInternalWrapper(Visitor *v, const char *name,
                 BlockdevSnapshotInternalWrapper **obj, Error **errp);

bool visit_type_BlockdevSnapshotSyncWrapper_members(Visitor *v, BlockdevSnapshotSyncWrapper *obj, Error **errp);

bool visit_type_BlockdevSnapshotSyncWrapper(Visitor *v, const char *name,
                 BlockdevSnapshotSyncWrapper **obj, Error **errp);

bool visit_type_DriveBackupWrapper_members(Visitor *v, DriveBackupWrapper *obj, Error **errp);

bool visit_type_DriveBackupWrapper(Visitor *v, const char *name,
                 DriveBackupWrapper **obj, Error **errp);

bool visit_type_q_obj_TransactionAction_base_members(Visitor *v, q_obj_TransactionAction_base *obj, Error **errp);

bool visit_type_q_obj_TransactionAction_base(Visitor *v, const char *name,
                 q_obj_TransactionAction_base **obj, Error **errp);

bool visit_type_TransactionAction_members(Visitor *v, TransactionAction *obj, Error **errp);

bool visit_type_TransactionAction(Visitor *v, const char *name,
                 TransactionAction **obj, Error **errp);

bool visit_type_TransactionProperties_members(Visitor *v, TransactionProperties *obj, Error **errp);

bool visit_type_TransactionProperties(Visitor *v, const char *name,
                 TransactionProperties **obj, Error **errp);

bool visit_type_TransactionActionList(Visitor *v, const char *name,
                 TransactionActionList **obj, Error **errp);

bool visit_type_q_obj_transaction_arg_members(Visitor *v, q_obj_transaction_arg *obj, Error **errp);

bool visit_type_q_obj_transaction_arg(Visitor *v, const char *name,
                 q_obj_transaction_arg **obj, Error **errp);

#endif /* QAPI_VISIT_TRANSACTION_H */
