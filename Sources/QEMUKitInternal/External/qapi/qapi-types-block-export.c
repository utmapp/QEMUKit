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
#include "qapi-types-block-export.h"
#include "qapi-visit-block-export.h"

void qapi_free_NbdServerOptions(NbdServerOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NbdServerOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_nbd_server_start_arg(q_obj_nbd_server_start_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_nbd_server_start_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportOptionsNbdBase(BlockExportOptionsNbdBase *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptionsNbdBase(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportOptionsNbd(BlockExportOptionsNbd *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptionsNbd(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportOptionsVhostUserBlk(BlockExportOptionsVhostUserBlk *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptionsVhostUserBlk(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup FuseExportAllowOther_lookup = {
    .array = (const char *const[]) {
        [FUSE_EXPORT_ALLOW_OTHER_OFF] = "off",
        [FUSE_EXPORT_ALLOW_OTHER_ON] = "on",
        [FUSE_EXPORT_ALLOW_OTHER_AUTO] = "auto",
    },
    .size = FUSE_EXPORT_ALLOW_OTHER__MAX
};

#if defined(CONFIG_FUSE)
void qapi_free_BlockExportOptionsFuse(BlockExportOptionsFuse *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptionsFuse(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_FUSE) */

void qapi_free_BlockExportOptionsVduseBlk(BlockExportOptionsVduseBlk *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptionsVduseBlk(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NbdServerAddOptions(NbdServerAddOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NbdServerAddOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockExportRemoveMode_lookup = {
    .array = (const char *const[]) {
        [BLOCK_EXPORT_REMOVE_MODE_SAFE] = "safe",
        [BLOCK_EXPORT_REMOVE_MODE_HARD] = "hard",
    },
    .size = BLOCK_EXPORT_REMOVE_MODE__MAX
};

void qapi_free_q_obj_nbd_server_remove_arg(q_obj_nbd_server_remove_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_nbd_server_remove_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockExportType_lookup = {
    .array = (const char *const[]) {
        [BLOCK_EXPORT_TYPE_NBD] = "nbd",
#if defined(CONFIG_VHOST_USER_BLK_SERVER)
        [BLOCK_EXPORT_TYPE_VHOST_USER_BLK] = "vhost-user-blk",
#endif /* defined(CONFIG_VHOST_USER_BLK_SERVER) */
#if defined(CONFIG_FUSE)
        [BLOCK_EXPORT_TYPE_FUSE] = "fuse",
#endif /* defined(CONFIG_FUSE) */
#if defined(CONFIG_VDUSE_BLK_EXPORT)
        [BLOCK_EXPORT_TYPE_VDUSE_BLK] = "vduse-blk",
#endif /* defined(CONFIG_VDUSE_BLK_EXPORT) */
    },
    .size = BLOCK_EXPORT_TYPE__MAX
};

void qapi_free_q_obj_BlockExportOptions_base(q_obj_BlockExportOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BlockExportOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportOptions(BlockExportOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_export_del_arg(q_obj_block_export_del_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_export_del_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BLOCK_EXPORT_DELETED_arg(q_obj_BLOCK_EXPORT_DELETED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_EXPORT_DELETED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportInfo(BlockExportInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockExportInfoList(BlockExportInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockExportInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_block_export_c;
