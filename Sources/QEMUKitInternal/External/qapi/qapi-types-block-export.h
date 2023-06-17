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

#ifndef QAPI_TYPES_BLOCK_EXPORT_H
#define QAPI_TYPES_BLOCK_EXPORT_H

#include "qapi-builtin-types.h"
#include "qapi-types-sockets.h"
#include "qapi-types-block-core.h"

typedef struct NbdServerOptions NbdServerOptions;

typedef struct q_obj_nbd_server_start_arg q_obj_nbd_server_start_arg;

typedef struct BlockExportOptionsNbdBase BlockExportOptionsNbdBase;

typedef struct BlockExportOptionsNbd BlockExportOptionsNbd;

typedef struct BlockExportOptionsVhostUserBlk BlockExportOptionsVhostUserBlk;

typedef enum FuseExportAllowOther {
    FUSE_EXPORT_ALLOW_OTHER_OFF,
    FUSE_EXPORT_ALLOW_OTHER_ON,
    FUSE_EXPORT_ALLOW_OTHER_AUTO,
    FUSE_EXPORT_ALLOW_OTHER__MAX,
} FuseExportAllowOther;

#define FuseExportAllowOther_str(val) \
    qapi_enum_lookup(&FuseExportAllowOther_lookup, (val))

extern const QEnumLookup FuseExportAllowOther_lookup;

#if defined(CONFIG_FUSE)
typedef struct BlockExportOptionsFuse BlockExportOptionsFuse;
#endif /* defined(CONFIG_FUSE) */

typedef struct BlockExportOptionsVduseBlk BlockExportOptionsVduseBlk;

typedef struct NbdServerAddOptions NbdServerAddOptions;

typedef enum BlockExportRemoveMode {
    BLOCK_EXPORT_REMOVE_MODE_SAFE,
    BLOCK_EXPORT_REMOVE_MODE_HARD,
    BLOCK_EXPORT_REMOVE_MODE__MAX,
} BlockExportRemoveMode;

#define BlockExportRemoveMode_str(val) \
    qapi_enum_lookup(&BlockExportRemoveMode_lookup, (val))

extern const QEnumLookup BlockExportRemoveMode_lookup;

typedef struct q_obj_nbd_server_remove_arg q_obj_nbd_server_remove_arg;

typedef enum BlockExportType {
    BLOCK_EXPORT_TYPE_NBD,
#if defined(CONFIG_VHOST_USER_BLK_SERVER)
    BLOCK_EXPORT_TYPE_VHOST_USER_BLK,
#endif /* defined(CONFIG_VHOST_USER_BLK_SERVER) */
#if defined(CONFIG_FUSE)
    BLOCK_EXPORT_TYPE_FUSE,
#endif /* defined(CONFIG_FUSE) */
#if defined(CONFIG_VDUSE_BLK_EXPORT)
    BLOCK_EXPORT_TYPE_VDUSE_BLK,
#endif /* defined(CONFIG_VDUSE_BLK_EXPORT) */
    BLOCK_EXPORT_TYPE__MAX,
} BlockExportType;

#define BlockExportType_str(val) \
    qapi_enum_lookup(&BlockExportType_lookup, (val))

extern const QEnumLookup BlockExportType_lookup;

typedef struct q_obj_BlockExportOptions_base q_obj_BlockExportOptions_base;

typedef struct BlockExportOptions BlockExportOptions;

typedef struct q_obj_block_export_del_arg q_obj_block_export_del_arg;

typedef struct q_obj_BLOCK_EXPORT_DELETED_arg q_obj_BLOCK_EXPORT_DELETED_arg;

typedef struct BlockExportInfo BlockExportInfo;

typedef struct BlockExportInfoList BlockExportInfoList;

struct NbdServerOptions {
    SocketAddress *addr;
    bool has_tls_creds;
    char *tls_creds;
    bool has_tls_authz;
    char *tls_authz;
    bool has_max_connections;
    uint32_t max_connections;
};

void qapi_free_NbdServerOptions(NbdServerOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NbdServerOptions, qapi_free_NbdServerOptions)

struct q_obj_nbd_server_start_arg {
    SocketAddressLegacy *addr;
    bool has_tls_creds;
    char *tls_creds;
    bool has_tls_authz;
    char *tls_authz;
    bool has_max_connections;
    uint32_t max_connections;
};

void qapi_free_q_obj_nbd_server_start_arg(q_obj_nbd_server_start_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_nbd_server_start_arg, qapi_free_q_obj_nbd_server_start_arg)

struct BlockExportOptionsNbdBase {
    bool has_name;
    char *name;
    bool has_description;
    char *description;
};

void qapi_free_BlockExportOptionsNbdBase(BlockExportOptionsNbdBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockExportOptionsNbdBase, qapi_free_BlockExportOptionsNbdBase)

struct BlockExportOptionsNbd {
    /* Members inherited from BlockExportOptionsNbdBase: */
    bool has_name;
    char *name;
    bool has_description;
    char *description;
    /* Own members: */
    bool has_bitmaps;
    BlockDirtyBitmapOrStrList *bitmaps;
    bool has_allocation_depth;
    bool allocation_depth;
};

static inline BlockExportOptionsNbdBase *qapi_BlockExportOptionsNbd_base(const BlockExportOptionsNbd *obj)
{
    return (BlockExportOptionsNbdBase *)obj;
}

void qapi_free_BlockExportOptionsNbd(BlockExportOptionsNbd *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockExportOptionsNbd, qapi_free_BlockExportOptionsNbd)

struct BlockExportOptionsVhostUserBlk {
    SocketAddress *addr;
    bool has_logical_block_size;
    uint64_t logical_block_size;
    bool has_num_queues;
    uint16_t num_queues;
};

void qapi_free_BlockExportOptionsVhostUserBlk(BlockExportOptionsVhostUserBlk *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockExportOptionsVhostUserBlk, qapi_free_BlockExportOptionsVhostUserBlk)

#if defined(CONFIG_FUSE)
struct BlockExportOptionsFuse {
    char *mountpoint;
    bool has_growable;
    bool growable;
    bool has_allow_other;
    FuseExportAllowOther allow_other;
};
#endif /* defined(CONFIG_FUSE) */

#if defined(CONFIG_FUSE)
void qapi_free_BlockExportOptionsFuse(BlockExportOptionsFuse *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockExportOptionsFuse, qapi_free_BlockExportOptionsFuse)
#endif /* defined(CONFIG_FUSE) */

struct BlockExportOptionsVduseBlk {
    char *name;
    bool has_num_queues;
    uint16_t num_queues;
    bool has_queue_size;
    uint16_t queue_size;
    bool has_logical_block_size;
    uint64_t logical_block_size;
    bool has_serial;
    char *serial;
};

void qapi_free_BlockExportOptionsVduseBlk(BlockExportOptionsVduseBlk *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockExportOptionsVduseBlk, qapi_free_BlockExportOptionsVduseBlk)

struct NbdServerAddOptions {
    /* Members inherited from BlockExportOptionsNbdBase: */
    bool has_name;
    char *name;
    bool has_description;
    char *description;
    /* Own members: */
    char *device;
    bool has_writable;
    bool writable;
    bool has_bitmap;
    char *bitmap;
};

static inline BlockExportOptionsNbdBase *qapi_NbdServerAddOptions_base(const NbdServerAddOptions *obj)
{
    return (BlockExportOptionsNbdBase *)obj;
}

void qapi_free_NbdServerAddOptions(NbdServerAddOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NbdServerAddOptions, qapi_free_NbdServerAddOptions)

struct q_obj_nbd_server_remove_arg {
    char *name;
    bool has_mode;
    BlockExportRemoveMode mode;
};

void qapi_free_q_obj_nbd_server_remove_arg(q_obj_nbd_server_remove_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_nbd_server_remove_arg, qapi_free_q_obj_nbd_server_remove_arg)

struct q_obj_BlockExportOptions_base {
    BlockExportType type;
    char *id;
    bool has_fixed_iothread;
    bool fixed_iothread;
    bool has_iothread;
    char *iothread;
    char *node_name;
    bool has_writable;
    bool writable;
    bool has_writethrough;
    bool writethrough;
};

void qapi_free_q_obj_BlockExportOptions_base(q_obj_BlockExportOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BlockExportOptions_base, qapi_free_q_obj_BlockExportOptions_base)

struct BlockExportOptions {
    BlockExportType type;
    char *id;
    bool has_fixed_iothread;
    bool fixed_iothread;
    bool has_iothread;
    char *iothread;
    char *node_name;
    bool has_writable;
    bool writable;
    bool has_writethrough;
    bool writethrough;
    union { /* union tag is @type */
        BlockExportOptionsNbd nbd;
#if defined(CONFIG_VHOST_USER_BLK_SERVER)
        BlockExportOptionsVhostUserBlk vhost_user_blk;
#endif /* defined(CONFIG_VHOST_USER_BLK_SERVER) */
#if defined(CONFIG_FUSE)
        BlockExportOptionsFuse fuse;
#endif /* defined(CONFIG_FUSE) */
#if defined(CONFIG_VDUSE_BLK_EXPORT)
        BlockExportOptionsVduseBlk vduse_blk;
#endif /* defined(CONFIG_VDUSE_BLK_EXPORT) */
    } u;
};

void qapi_free_BlockExportOptions(BlockExportOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockExportOptions, qapi_free_BlockExportOptions)

struct q_obj_block_export_del_arg {
    char *id;
    bool has_mode;
    BlockExportRemoveMode mode;
};

void qapi_free_q_obj_block_export_del_arg(q_obj_block_export_del_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_export_del_arg, qapi_free_q_obj_block_export_del_arg)

struct q_obj_BLOCK_EXPORT_DELETED_arg {
    char *id;
};

void qapi_free_q_obj_BLOCK_EXPORT_DELETED_arg(q_obj_BLOCK_EXPORT_DELETED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_EXPORT_DELETED_arg, qapi_free_q_obj_BLOCK_EXPORT_DELETED_arg)

struct BlockExportInfo {
    char *id;
    BlockExportType type;
    char *node_name;
    bool shutting_down;
};

void qapi_free_BlockExportInfo(BlockExportInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockExportInfo, qapi_free_BlockExportInfo)

struct BlockExportInfoList {
    BlockExportInfoList *next;
    BlockExportInfo *value;
};

void qapi_free_BlockExportInfoList(BlockExportInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockExportInfoList, qapi_free_BlockExportInfoList)

#endif /* QAPI_TYPES_BLOCK_EXPORT_H */
