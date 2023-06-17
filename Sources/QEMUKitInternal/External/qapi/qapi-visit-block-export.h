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

#ifndef QAPI_VISIT_BLOCK_EXPORT_H
#define QAPI_VISIT_BLOCK_EXPORT_H

#include "qapi-builtin-visit.h"
#include "qapi-types-block-export.h"

#include "qapi-visit-sockets.h"
#include "qapi-visit-block-core.h"

bool visit_type_NbdServerOptions_members(Visitor *v, NbdServerOptions *obj, Error **errp);

bool visit_type_NbdServerOptions(Visitor *v, const char *name,
                 NbdServerOptions **obj, Error **errp);

bool visit_type_q_obj_nbd_server_start_arg_members(Visitor *v, q_obj_nbd_server_start_arg *obj, Error **errp);

bool visit_type_q_obj_nbd_server_start_arg(Visitor *v, const char *name,
                 q_obj_nbd_server_start_arg **obj, Error **errp);

bool visit_type_BlockExportOptionsNbdBase_members(Visitor *v, BlockExportOptionsNbdBase *obj, Error **errp);

bool visit_type_BlockExportOptionsNbdBase(Visitor *v, const char *name,
                 BlockExportOptionsNbdBase **obj, Error **errp);

bool visit_type_BlockExportOptionsNbd_members(Visitor *v, BlockExportOptionsNbd *obj, Error **errp);

bool visit_type_BlockExportOptionsNbd(Visitor *v, const char *name,
                 BlockExportOptionsNbd **obj, Error **errp);

bool visit_type_BlockExportOptionsVhostUserBlk_members(Visitor *v, BlockExportOptionsVhostUserBlk *obj, Error **errp);

bool visit_type_BlockExportOptionsVhostUserBlk(Visitor *v, const char *name,
                 BlockExportOptionsVhostUserBlk **obj, Error **errp);

bool visit_type_FuseExportAllowOther(Visitor *v, const char *name,
                 FuseExportAllowOther *obj, Error **errp);

#if defined(CONFIG_FUSE)
bool visit_type_BlockExportOptionsFuse_members(Visitor *v, BlockExportOptionsFuse *obj, Error **errp);

bool visit_type_BlockExportOptionsFuse(Visitor *v, const char *name,
                 BlockExportOptionsFuse **obj, Error **errp);
#endif /* defined(CONFIG_FUSE) */

bool visit_type_BlockExportOptionsVduseBlk_members(Visitor *v, BlockExportOptionsVduseBlk *obj, Error **errp);

bool visit_type_BlockExportOptionsVduseBlk(Visitor *v, const char *name,
                 BlockExportOptionsVduseBlk **obj, Error **errp);

bool visit_type_NbdServerAddOptions_members(Visitor *v, NbdServerAddOptions *obj, Error **errp);

bool visit_type_NbdServerAddOptions(Visitor *v, const char *name,
                 NbdServerAddOptions **obj, Error **errp);

bool visit_type_BlockExportRemoveMode(Visitor *v, const char *name,
                 BlockExportRemoveMode *obj, Error **errp);

bool visit_type_q_obj_nbd_server_remove_arg_members(Visitor *v, q_obj_nbd_server_remove_arg *obj, Error **errp);

bool visit_type_q_obj_nbd_server_remove_arg(Visitor *v, const char *name,
                 q_obj_nbd_server_remove_arg **obj, Error **errp);

bool visit_type_BlockExportType(Visitor *v, const char *name,
                 BlockExportType *obj, Error **errp);

bool visit_type_q_obj_BlockExportOptions_base_members(Visitor *v, q_obj_BlockExportOptions_base *obj, Error **errp);

bool visit_type_q_obj_BlockExportOptions_base(Visitor *v, const char *name,
                 q_obj_BlockExportOptions_base **obj, Error **errp);

bool visit_type_BlockExportOptions_members(Visitor *v, BlockExportOptions *obj, Error **errp);

bool visit_type_BlockExportOptions(Visitor *v, const char *name,
                 BlockExportOptions **obj, Error **errp);

bool visit_type_q_obj_block_export_del_arg_members(Visitor *v, q_obj_block_export_del_arg *obj, Error **errp);

bool visit_type_q_obj_block_export_del_arg(Visitor *v, const char *name,
                 q_obj_block_export_del_arg **obj, Error **errp);

bool visit_type_q_obj_BLOCK_EXPORT_DELETED_arg_members(Visitor *v, q_obj_BLOCK_EXPORT_DELETED_arg *obj, Error **errp);

bool visit_type_q_obj_BLOCK_EXPORT_DELETED_arg(Visitor *v, const char *name,
                 q_obj_BLOCK_EXPORT_DELETED_arg **obj, Error **errp);

bool visit_type_BlockExportInfo_members(Visitor *v, BlockExportInfo *obj, Error **errp);

bool visit_type_BlockExportInfo(Visitor *v, const char *name,
                 BlockExportInfo **obj, Error **errp);

bool visit_type_BlockExportInfoList(Visitor *v, const char *name,
                 BlockExportInfoList **obj, Error **errp);

#endif /* QAPI_VISIT_BLOCK_EXPORT_H */
