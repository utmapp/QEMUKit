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
#include "qapi-types-block-core.h"
#include "qapi-visit-block-core.h"

void qapi_free_SnapshotInfo(SnapshotInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SnapshotInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificQCow2EncryptionBase(ImageInfoSpecificQCow2EncryptionBase *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificQCow2EncryptionBase(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificQCow2Encryption(ImageInfoSpecificQCow2Encryption *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificQCow2Encryption(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_Qcow2BitmapInfoList(Qcow2BitmapInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Qcow2BitmapInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificQCow2(ImageInfoSpecificQCow2 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificQCow2(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VmdkExtentInfoList(VmdkExtentInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VmdkExtentInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificVmdk(ImageInfoSpecificVmdk *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificVmdk(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VmdkExtentInfo(VmdkExtentInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VmdkExtentInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificRbd(ImageInfoSpecificRbd *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificRbd(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificFile(ImageInfoSpecificFile *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificFile(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup ImageInfoSpecificKind_lookup = {
    .array = (const char *const[]) {
        [IMAGE_INFO_SPECIFIC_KIND_QCOW2] = "qcow2",
        [IMAGE_INFO_SPECIFIC_KIND_VMDK] = "vmdk",
        [IMAGE_INFO_SPECIFIC_KIND_LUKS] = "luks",
        [IMAGE_INFO_SPECIFIC_KIND_RBD] = "rbd",
        [IMAGE_INFO_SPECIFIC_KIND_FILE] = "file",
    },
    .size = IMAGE_INFO_SPECIFIC_KIND__MAX
};

void qapi_free_ImageInfoSpecificQCow2Wrapper(ImageInfoSpecificQCow2Wrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificQCow2Wrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificVmdkWrapper(ImageInfoSpecificVmdkWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificVmdkWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificLUKSWrapper(ImageInfoSpecificLUKSWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificLUKSWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificRbdWrapper(ImageInfoSpecificRbdWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificRbdWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecificFileWrapper(ImageInfoSpecificFileWrapper *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecificFileWrapper(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_ImageInfoSpecific_base(q_obj_ImageInfoSpecific_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_ImageInfoSpecific_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfoSpecific(ImageInfoSpecific *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfoSpecific(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SnapshotInfoList(SnapshotInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SnapshotInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockNodeInfo(BlockNodeInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockNodeInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageInfo(ImageInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockChildInfo(BlockChildInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockChildInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockChildInfoList(BlockChildInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockChildInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockGraphInfo(BlockGraphInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockGraphInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ImageCheck(ImageCheck *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ImageCheck(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MapEntry(MapEntry *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MapEntry(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCacheInfo(BlockdevCacheInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCacheInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyInfoList(BlockDirtyInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDeviceInfo(BlockDeviceInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDeviceInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockDeviceIoStatus_lookup = {
    .array = (const char *const[]) {
        [BLOCK_DEVICE_IO_STATUS_OK] = "ok",
        [BLOCK_DEVICE_IO_STATUS_FAILED] = "failed",
        [BLOCK_DEVICE_IO_STATUS_NOSPACE] = "nospace",
    },
    .size = BLOCK_DEVICE_IO_STATUS__MAX
};

void qapi_free_BlockDirtyInfo(BlockDirtyInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup Qcow2BitmapInfoFlags_lookup = {
    .array = (const char *const[]) {
        [QCOW2_BITMAP_INFO_FLAGS_IN_USE] = "in-use",
        [QCOW2_BITMAP_INFO_FLAGS_AUTO] = "auto",
    },
    .size = QCOW2_BITMAP_INFO_FLAGS__MAX
};

void qapi_free_Qcow2BitmapInfoFlagsList(Qcow2BitmapInfoFlagsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Qcow2BitmapInfoFlagsList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_Qcow2BitmapInfo(Qcow2BitmapInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Qcow2BitmapInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockLatencyHistogramInfo(BlockLatencyHistogramInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockLatencyHistogramInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockInfo(BlockInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockMeasureInfo(BlockMeasureInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockMeasureInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockInfoList(BlockInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDeviceTimedStats(BlockDeviceTimedStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDeviceTimedStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDeviceTimedStatsList(BlockDeviceTimedStatsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDeviceTimedStatsList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDeviceStats(BlockDeviceStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDeviceStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockStatsSpecificFile(BlockStatsSpecificFile *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockStatsSpecificFile(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockStatsSpecificNvme(BlockStatsSpecificNvme *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockStatsSpecificNvme(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BlockStatsSpecific_base(q_obj_BlockStatsSpecific_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BlockStatsSpecific_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockStatsSpecific(BlockStatsSpecific *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockStatsSpecific(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockStats(BlockStats *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockStats(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_query_blockstats_arg(q_obj_query_blockstats_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_query_blockstats_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockStatsList(BlockStatsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockStatsList(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevOnError_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_ON_ERROR_REPORT] = "report",
        [BLOCKDEV_ON_ERROR_IGNORE] = "ignore",
        [BLOCKDEV_ON_ERROR_ENOSPC] = "enospc",
        [BLOCKDEV_ON_ERROR_STOP] = "stop",
        [BLOCKDEV_ON_ERROR_AUTO] = "auto",
    },
    .size = BLOCKDEV_ON_ERROR__MAX
};

const QEnumLookup MirrorSyncMode_lookup = {
    .array = (const char *const[]) {
        [MIRROR_SYNC_MODE_TOP] = "top",
        [MIRROR_SYNC_MODE_FULL] = "full",
        [MIRROR_SYNC_MODE_NONE] = "none",
        [MIRROR_SYNC_MODE_INCREMENTAL] = "incremental",
        [MIRROR_SYNC_MODE_BITMAP] = "bitmap",
    },
    .size = MIRROR_SYNC_MODE__MAX
};

const QEnumLookup BitmapSyncMode_lookup = {
    .array = (const char *const[]) {
        [BITMAP_SYNC_MODE_ON_SUCCESS] = "on-success",
        [BITMAP_SYNC_MODE_NEVER] = "never",
        [BITMAP_SYNC_MODE_ALWAYS] = "always",
    },
    .size = BITMAP_SYNC_MODE__MAX
};

const QEnumLookup MirrorCopyMode_lookup = {
    .array = (const char *const[]) {
        [MIRROR_COPY_MODE_BACKGROUND] = "background",
        [MIRROR_COPY_MODE_WRITE_BLOCKING] = "write-blocking",
    },
    .size = MIRROR_COPY_MODE__MAX
};

void qapi_free_BlockJobInfo(BlockJobInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockJobInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockJobInfoList(BlockJobInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockJobInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_resize_arg(q_obj_block_resize_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_resize_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup NewImageMode_lookup = {
    .array = (const char *const[]) {
        [NEW_IMAGE_MODE_EXISTING] = "existing",
        [NEW_IMAGE_MODE_ABSOLUTE_PATHS] = "absolute-paths",
    },
    .size = NEW_IMAGE_MODE__MAX
};

void qapi_free_BlockdevSnapshotSync(BlockdevSnapshotSync *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevSnapshotSync(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevSnapshot(BlockdevSnapshot *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevSnapshot(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BackupPerf(BackupPerf *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BackupPerf(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BackupCommon(BackupCommon *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BackupCommon(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DriveBackup(DriveBackup *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DriveBackup(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevBackup(BlockdevBackup *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevBackup(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_change_backing_file_arg(q_obj_change_backing_file_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_change_backing_file_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_commit_arg(q_obj_block_commit_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_commit_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_query_named_block_nodes_arg(q_obj_query_named_block_nodes_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_query_named_block_nodes_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDeviceInfoList(BlockDeviceInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDeviceInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup XDbgBlockGraphNodeType_lookup = {
    .array = (const char *const[]) {
        [X_DBG_BLOCK_GRAPH_NODE_TYPE_BLOCK_BACKEND] = "block-backend",
        [X_DBG_BLOCK_GRAPH_NODE_TYPE_BLOCK_JOB] = "block-job",
        [X_DBG_BLOCK_GRAPH_NODE_TYPE_BLOCK_DRIVER] = "block-driver",
    },
    .size = X_DBG_BLOCK_GRAPH_NODE_TYPE__MAX
};

void qapi_free_XDbgBlockGraphNode(XDbgBlockGraphNode *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_XDbgBlockGraphNode(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockPermission_lookup = {
    .array = (const char *const[]) {
        [BLOCK_PERMISSION_CONSISTENT_READ] = "consistent-read",
        [BLOCK_PERMISSION_WRITE] = "write",
        [BLOCK_PERMISSION_WRITE_UNCHANGED] = "write-unchanged",
        [BLOCK_PERMISSION_RESIZE] = "resize",
    },
    .size = BLOCK_PERMISSION__MAX
};

void qapi_free_BlockPermissionList(BlockPermissionList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockPermissionList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_XDbgBlockGraphEdge(XDbgBlockGraphEdge *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_XDbgBlockGraphEdge(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_XDbgBlockGraphNodeList(XDbgBlockGraphNodeList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_XDbgBlockGraphNodeList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_XDbgBlockGraphEdgeList(XDbgBlockGraphEdgeList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_XDbgBlockGraphEdgeList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_XDbgBlockGraph(XDbgBlockGraph *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_XDbgBlockGraph(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DriveMirror(DriveMirror *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DriveMirror(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmap(BlockDirtyBitmap *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmap(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmapAdd(BlockDirtyBitmapAdd *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmapAdd(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmapOrStr(BlockDirtyBitmapOrStr *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmapOrStr(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmapOrStrList(BlockDirtyBitmapOrStrList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmapOrStrList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmapMerge(BlockDirtyBitmapMerge *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmapMerge(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockDirtyBitmapSha256(BlockDirtyBitmapSha256 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockDirtyBitmapSha256(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_blockdev_mirror_arg(q_obj_blockdev_mirror_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_blockdev_mirror_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockIOThrottle(BlockIOThrottle *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockIOThrottle(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ThrottleLimits(ThrottleLimits *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ThrottleLimits(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ThrottleGroupProperties(ThrottleGroupProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ThrottleGroupProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_stream_arg(q_obj_block_stream_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_stream_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_job_set_speed_arg(q_obj_block_job_set_speed_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_job_set_speed_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_job_cancel_arg(q_obj_block_job_cancel_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_job_cancel_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_job_pause_arg(q_obj_block_job_pause_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_job_pause_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_job_resume_arg(q_obj_block_job_resume_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_job_resume_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_job_complete_arg(q_obj_block_job_complete_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_job_complete_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_job_dismiss_arg(q_obj_block_job_dismiss_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_job_dismiss_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_job_finalize_arg(q_obj_block_job_finalize_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_job_finalize_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevDiscardOptions_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_DISCARD_OPTIONS_IGNORE] = "ignore",
        [BLOCKDEV_DISCARD_OPTIONS_UNMAP] = "unmap",
    },
    .size = BLOCKDEV_DISCARD_OPTIONS__MAX
};

const QEnumLookup BlockdevDetectZeroesOptions_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_DETECT_ZEROES_OPTIONS_OFF] = "off",
        [BLOCKDEV_DETECT_ZEROES_OPTIONS_ON] = "on",
        [BLOCKDEV_DETECT_ZEROES_OPTIONS_UNMAP] = "unmap",
    },
    .size = BLOCKDEV_DETECT_ZEROES_OPTIONS__MAX
};

const QEnumLookup BlockdevAioOptions_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_AIO_OPTIONS_THREADS] = "threads",
        [BLOCKDEV_AIO_OPTIONS_NATIVE] = "native",
#if defined(CONFIG_LINUX_IO_URING)
        [BLOCKDEV_AIO_OPTIONS_IO_URING] = "io_uring",
#endif /* defined(CONFIG_LINUX_IO_URING) */
    },
    .size = BLOCKDEV_AIO_OPTIONS__MAX
};

void qapi_free_BlockdevCacheOptions(BlockdevCacheOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCacheOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevDriver_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_DRIVER_BLKDEBUG] = "blkdebug",
        [BLOCKDEV_DRIVER_BLKLOGWRITES] = "blklogwrites",
        [BLOCKDEV_DRIVER_BLKREPLAY] = "blkreplay",
        [BLOCKDEV_DRIVER_BLKVERIFY] = "blkverify",
        [BLOCKDEV_DRIVER_BOCHS] = "bochs",
        [BLOCKDEV_DRIVER_CLOOP] = "cloop",
        [BLOCKDEV_DRIVER_COMPRESS] = "compress",
        [BLOCKDEV_DRIVER_COPY_BEFORE_WRITE] = "copy-before-write",
        [BLOCKDEV_DRIVER_COPY_ON_READ] = "copy-on-read",
        [BLOCKDEV_DRIVER_DMG] = "dmg",
        [BLOCKDEV_DRIVER_FILE] = "file",
        [BLOCKDEV_DRIVER_SNAPSHOT_ACCESS] = "snapshot-access",
        [BLOCKDEV_DRIVER_FTP] = "ftp",
        [BLOCKDEV_DRIVER_FTPS] = "ftps",
        [BLOCKDEV_DRIVER_GLUSTER] = "gluster",
#if defined(HAVE_HOST_BLOCK_DEVICE)
        [BLOCKDEV_DRIVER_HOST_CDROM] = "host_cdrom",
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
#if defined(HAVE_HOST_BLOCK_DEVICE)
        [BLOCKDEV_DRIVER_HOST_DEVICE] = "host_device",
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
        [BLOCKDEV_DRIVER_HTTP] = "http",
        [BLOCKDEV_DRIVER_HTTPS] = "https",
#if defined(CONFIG_BLKIO)
        [BLOCKDEV_DRIVER_IO_URING] = "io_uring",
#endif /* defined(CONFIG_BLKIO) */
        [BLOCKDEV_DRIVER_ISCSI] = "iscsi",
        [BLOCKDEV_DRIVER_LUKS] = "luks",
        [BLOCKDEV_DRIVER_NBD] = "nbd",
        [BLOCKDEV_DRIVER_NFS] = "nfs",
        [BLOCKDEV_DRIVER_NULL_AIO] = "null-aio",
        [BLOCKDEV_DRIVER_NULL_CO] = "null-co",
        [BLOCKDEV_DRIVER_NVME] = "nvme",
#if defined(CONFIG_BLKIO)
        [BLOCKDEV_DRIVER_NVME_IO_URING] = "nvme-io_uring",
#endif /* defined(CONFIG_BLKIO) */
        [BLOCKDEV_DRIVER_PARALLELS] = "parallels",
        [BLOCKDEV_DRIVER_PREALLOCATE] = "preallocate",
        [BLOCKDEV_DRIVER_QCOW] = "qcow",
        [BLOCKDEV_DRIVER_QCOW2] = "qcow2",
        [BLOCKDEV_DRIVER_QED] = "qed",
        [BLOCKDEV_DRIVER_QUORUM] = "quorum",
        [BLOCKDEV_DRIVER_RAW] = "raw",
        [BLOCKDEV_DRIVER_RBD] = "rbd",
#if defined(CONFIG_REPLICATION)
        [BLOCKDEV_DRIVER_REPLICATION] = "replication",
#endif /* defined(CONFIG_REPLICATION) */
        [BLOCKDEV_DRIVER_SSH] = "ssh",
        [BLOCKDEV_DRIVER_THROTTLE] = "throttle",
        [BLOCKDEV_DRIVER_VDI] = "vdi",
        [BLOCKDEV_DRIVER_VHDX] = "vhdx",
#if defined(CONFIG_BLKIO)
        [BLOCKDEV_DRIVER_VIRTIO_BLK_VFIO_PCI] = "virtio-blk-vfio-pci",
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
        [BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_USER] = "virtio-blk-vhost-user",
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
        [BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_VDPA] = "virtio-blk-vhost-vdpa",
#endif /* defined(CONFIG_BLKIO) */
        [BLOCKDEV_DRIVER_VMDK] = "vmdk",
        [BLOCKDEV_DRIVER_VPC] = "vpc",
        [BLOCKDEV_DRIVER_VVFAT] = "vvfat",
    },
    .size = BLOCKDEV_DRIVER__MAX
};

void qapi_free_BlockdevOptionsFile(BlockdevOptionsFile *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsFile(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsNull(BlockdevOptionsNull *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsNull(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsNVMe(BlockdevOptionsNVMe *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsNVMe(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsVVFAT(BlockdevOptionsVVFAT *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsVVFAT(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsGenericFormat(BlockdevOptionsGenericFormat *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsGenericFormat(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsLUKS(BlockdevOptionsLUKS *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsLUKS(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsGenericCOWFormat(BlockdevOptionsGenericCOWFormat *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsGenericCOWFormat(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup Qcow2OverlapCheckMode_lookup = {
    .array = (const char *const[]) {
        [QCOW2_OVERLAP_CHECK_MODE_NONE] = "none",
        [QCOW2_OVERLAP_CHECK_MODE_CONSTANT] = "constant",
        [QCOW2_OVERLAP_CHECK_MODE_CACHED] = "cached",
        [QCOW2_OVERLAP_CHECK_MODE_ALL] = "all",
    },
    .size = QCOW2_OVERLAP_CHECK_MODE__MAX
};

void qapi_free_Qcow2OverlapCheckFlags(Qcow2OverlapCheckFlags *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Qcow2OverlapCheckFlags(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_Qcow2OverlapChecks(Qcow2OverlapChecks *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Qcow2OverlapChecks(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevQcowEncryptionFormat_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_QCOW_ENCRYPTION_FORMAT_AES] = "aes",
    },
    .size = BLOCKDEV_QCOW_ENCRYPTION_FORMAT__MAX
};

void qapi_free_q_obj_BlockdevQcowEncryption_base(q_obj_BlockdevQcowEncryption_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BlockdevQcowEncryption_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevQcowEncryption(BlockdevQcowEncryption *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevQcowEncryption(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsQcow(BlockdevOptionsQcow *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsQcow(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevQcow2EncryptionFormat_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_QCOW2_ENCRYPTION_FORMAT_AES] = "aes",
        [BLOCKDEV_QCOW2_ENCRYPTION_FORMAT_LUKS] = "luks",
    },
    .size = BLOCKDEV_QCOW2_ENCRYPTION_FORMAT__MAX
};

void qapi_free_q_obj_BlockdevQcow2Encryption_base(q_obj_BlockdevQcow2Encryption_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BlockdevQcow2Encryption_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevQcow2Encryption(BlockdevQcow2Encryption *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevQcow2Encryption(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsPreallocate(BlockdevOptionsPreallocate *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsPreallocate(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsQcow2(BlockdevOptionsQcow2 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsQcow2(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup SshHostKeyCheckMode_lookup = {
    .array = (const char *const[]) {
        [SSH_HOST_KEY_CHECK_MODE_NONE] = "none",
        [SSH_HOST_KEY_CHECK_MODE_HASH] = "hash",
        [SSH_HOST_KEY_CHECK_MODE_KNOWN_HOSTS] = "known_hosts",
    },
    .size = SSH_HOST_KEY_CHECK_MODE__MAX
};

const QEnumLookup SshHostKeyCheckHashType_lookup = {
    .array = (const char *const[]) {
        [SSH_HOST_KEY_CHECK_HASH_TYPE_MD5] = "md5",
        [SSH_HOST_KEY_CHECK_HASH_TYPE_SHA1] = "sha1",
        [SSH_HOST_KEY_CHECK_HASH_TYPE_SHA256] = "sha256",
    },
    .size = SSH_HOST_KEY_CHECK_HASH_TYPE__MAX
};

void qapi_free_SshHostKeyHash(SshHostKeyHash *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SshHostKeyHash(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_SshHostKeyCheck_base(q_obj_SshHostKeyCheck_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_SshHostKeyCheck_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SshHostKeyCheck(SshHostKeyCheck *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SshHostKeyCheck(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsSsh(BlockdevOptionsSsh *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsSsh(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlkdebugEvent_lookup = {
    .array = (const char *const[]) {
        [BLKDBG_L1_UPDATE] = "l1_update",
        [BLKDBG_L1_GROW_ALLOC_TABLE] = "l1_grow_alloc_table",
        [BLKDBG_L1_GROW_WRITE_TABLE] = "l1_grow_write_table",
        [BLKDBG_L1_GROW_ACTIVATE_TABLE] = "l1_grow_activate_table",
        [BLKDBG_L2_LOAD] = "l2_load",
        [BLKDBG_L2_UPDATE] = "l2_update",
        [BLKDBG_L2_UPDATE_COMPRESSED] = "l2_update_compressed",
        [BLKDBG_L2_ALLOC_COW_READ] = "l2_alloc_cow_read",
        [BLKDBG_L2_ALLOC_WRITE] = "l2_alloc_write",
        [BLKDBG_READ_AIO] = "read_aio",
        [BLKDBG_READ_BACKING_AIO] = "read_backing_aio",
        [BLKDBG_READ_COMPRESSED] = "read_compressed",
        [BLKDBG_WRITE_AIO] = "write_aio",
        [BLKDBG_WRITE_COMPRESSED] = "write_compressed",
        [BLKDBG_VMSTATE_LOAD] = "vmstate_load",
        [BLKDBG_VMSTATE_SAVE] = "vmstate_save",
        [BLKDBG_COW_READ] = "cow_read",
        [BLKDBG_COW_WRITE] = "cow_write",
        [BLKDBG_REFTABLE_LOAD] = "reftable_load",
        [BLKDBG_REFTABLE_GROW] = "reftable_grow",
        [BLKDBG_REFTABLE_UPDATE] = "reftable_update",
        [BLKDBG_REFBLOCK_LOAD] = "refblock_load",
        [BLKDBG_REFBLOCK_UPDATE] = "refblock_update",
        [BLKDBG_REFBLOCK_UPDATE_PART] = "refblock_update_part",
        [BLKDBG_REFBLOCK_ALLOC] = "refblock_alloc",
        [BLKDBG_REFBLOCK_ALLOC_HOOKUP] = "refblock_alloc_hookup",
        [BLKDBG_REFBLOCK_ALLOC_WRITE] = "refblock_alloc_write",
        [BLKDBG_REFBLOCK_ALLOC_WRITE_BLOCKS] = "refblock_alloc_write_blocks",
        [BLKDBG_REFBLOCK_ALLOC_WRITE_TABLE] = "refblock_alloc_write_table",
        [BLKDBG_REFBLOCK_ALLOC_SWITCH_TABLE] = "refblock_alloc_switch_table",
        [BLKDBG_CLUSTER_ALLOC] = "cluster_alloc",
        [BLKDBG_CLUSTER_ALLOC_BYTES] = "cluster_alloc_bytes",
        [BLKDBG_CLUSTER_FREE] = "cluster_free",
        [BLKDBG_FLUSH_TO_OS] = "flush_to_os",
        [BLKDBG_FLUSH_TO_DISK] = "flush_to_disk",
        [BLKDBG_PWRITEV_RMW_HEAD] = "pwritev_rmw_head",
        [BLKDBG_PWRITEV_RMW_AFTER_HEAD] = "pwritev_rmw_after_head",
        [BLKDBG_PWRITEV_RMW_TAIL] = "pwritev_rmw_tail",
        [BLKDBG_PWRITEV_RMW_AFTER_TAIL] = "pwritev_rmw_after_tail",
        [BLKDBG_PWRITEV] = "pwritev",
        [BLKDBG_PWRITEV_ZERO] = "pwritev_zero",
        [BLKDBG_PWRITEV_DONE] = "pwritev_done",
        [BLKDBG_EMPTY_IMAGE_PREPARE] = "empty_image_prepare",
        [BLKDBG_L1_SHRINK_WRITE_TABLE] = "l1_shrink_write_table",
        [BLKDBG_L1_SHRINK_FREE_L2_CLUSTERS] = "l1_shrink_free_l2_clusters",
        [BLKDBG_COR_WRITE] = "cor_write",
        [BLKDBG_CLUSTER_ALLOC_SPACE] = "cluster_alloc_space",
        [BLKDBG_NONE] = "none",
    },
    .size = BLKDBG__MAX
};

const QEnumLookup BlkdebugIOType_lookup = {
    .array = (const char *const[]) {
        [BLKDEBUG_IO_TYPE_READ] = "read",
        [BLKDEBUG_IO_TYPE_WRITE] = "write",
        [BLKDEBUG_IO_TYPE_WRITE_ZEROES] = "write-zeroes",
        [BLKDEBUG_IO_TYPE_DISCARD] = "discard",
        [BLKDEBUG_IO_TYPE_FLUSH] = "flush",
        [BLKDEBUG_IO_TYPE_BLOCK_STATUS] = "block-status",
    },
    .size = BLKDEBUG_IO_TYPE__MAX
};

void qapi_free_BlkdebugInjectErrorOptions(BlkdebugInjectErrorOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlkdebugInjectErrorOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlkdebugSetStateOptions(BlkdebugSetStateOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlkdebugSetStateOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlkdebugInjectErrorOptionsList(BlkdebugInjectErrorOptionsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlkdebugInjectErrorOptionsList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlkdebugSetStateOptionsList(BlkdebugSetStateOptionsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlkdebugSetStateOptionsList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsBlkdebug(BlockdevOptionsBlkdebug *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsBlkdebug(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsBlklogwrites(BlockdevOptionsBlklogwrites *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsBlklogwrites(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsBlkverify(BlockdevOptionsBlkverify *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsBlkverify(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsBlkreplay(BlockdevOptionsBlkreplay *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsBlkreplay(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup QuorumReadPattern_lookup = {
    .array = (const char *const[]) {
        [QUORUM_READ_PATTERN_QUORUM] = "quorum",
        [QUORUM_READ_PATTERN_FIFO] = "fifo",
    },
    .size = QUORUM_READ_PATTERN__MAX
};

void qapi_free_BlockdevRefList(BlockdevRefList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevRefList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsQuorum(BlockdevOptionsQuorum *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsQuorum(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsGluster(BlockdevOptionsGluster *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsGluster(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsIoUring(BlockdevOptionsIoUring *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsIoUring(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsNvmeIoUring(BlockdevOptionsNvmeIoUring *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsNvmeIoUring(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsVirtioBlkVfioPci(BlockdevOptionsVirtioBlkVfioPci *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsVirtioBlkVfioPci(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsVirtioBlkVhostUser(BlockdevOptionsVirtioBlkVhostUser *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsVirtioBlkVhostUser(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsVirtioBlkVhostVdpa(BlockdevOptionsVirtioBlkVhostVdpa *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsVirtioBlkVhostVdpa(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_BLKIO) */

const QEnumLookup IscsiTransport_lookup = {
    .array = (const char *const[]) {
        [ISCSI_TRANSPORT_TCP] = "tcp",
        [ISCSI_TRANSPORT_ISER] = "iser",
    },
    .size = ISCSI_TRANSPORT__MAX
};

const QEnumLookup IscsiHeaderDigest_lookup = {
    .array = (const char *const[]) {
        [QAPI_ISCSI_HEADER_DIGEST_CRC32C] = "crc32c",
        [QAPI_ISCSI_HEADER_DIGEST_NONE] = "none",
        [QAPI_ISCSI_HEADER_DIGEST_CRC32C_NONE] = "crc32c-none",
        [QAPI_ISCSI_HEADER_DIGEST_NONE_CRC32C] = "none-crc32c",
    },
    .size = QAPI_ISCSI_HEADER_DIGEST__MAX
};

void qapi_free_BlockdevOptionsIscsi(BlockdevOptionsIscsi *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsIscsi(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup RbdAuthMode_lookup = {
    .array = (const char *const[]) {
        [RBD_AUTH_MODE_CEPHX] = "cephx",
        [RBD_AUTH_MODE_NONE] = "none",
    },
    .size = RBD_AUTH_MODE__MAX
};

const QEnumLookup RbdImageEncryptionFormat_lookup = {
    .array = (const char *const[]) {
        [RBD_IMAGE_ENCRYPTION_FORMAT_LUKS] = "luks",
        [RBD_IMAGE_ENCRYPTION_FORMAT_LUKS2] = "luks2",
        [RBD_IMAGE_ENCRYPTION_FORMAT_LUKS_ANY] = "luks-any",
    },
    .size = RBD_IMAGE_ENCRYPTION_FORMAT__MAX
};

void qapi_free_RbdEncryptionOptionsLUKSBase(RbdEncryptionOptionsLUKSBase *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionOptionsLUKSBase(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdEncryptionCreateOptionsLUKSBase(RbdEncryptionCreateOptionsLUKSBase *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionCreateOptionsLUKSBase(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdEncryptionOptionsLUKS(RbdEncryptionOptionsLUKS *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionOptionsLUKS(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdEncryptionOptionsLUKS2(RbdEncryptionOptionsLUKS2 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionOptionsLUKS2(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdEncryptionOptionsLUKSAny(RbdEncryptionOptionsLUKSAny *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionOptionsLUKSAny(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdEncryptionCreateOptionsLUKS(RbdEncryptionCreateOptionsLUKS *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionCreateOptionsLUKS(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdEncryptionCreateOptionsLUKS2(RbdEncryptionCreateOptionsLUKS2 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionCreateOptionsLUKS2(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_RbdEncryptionOptions_base(q_obj_RbdEncryptionOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_RbdEncryptionOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdEncryptionOptions(RbdEncryptionOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_RbdEncryptionCreateOptions_base(q_obj_RbdEncryptionCreateOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_RbdEncryptionCreateOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdEncryptionCreateOptions(RbdEncryptionCreateOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdEncryptionCreateOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RbdAuthModeList(RbdAuthModeList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RbdAuthModeList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsRbd(BlockdevOptionsRbd *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsRbd(v, NULL, &obj, NULL);
    visit_free(v);
}

#if defined(CONFIG_REPLICATION)
const QEnumLookup ReplicationMode_lookup = {
    .array = (const char *const[]) {
        [REPLICATION_MODE_PRIMARY] = "primary",
        [REPLICATION_MODE_SECONDARY] = "secondary",
    },
    .size = REPLICATION_MODE__MAX
};
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
void qapi_free_BlockdevOptionsReplication(BlockdevOptionsReplication *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsReplication(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_REPLICATION) */

const QEnumLookup NFSTransport_lookup = {
    .array = (const char *const[]) {
        [NFS_TRANSPORT_INET] = "inet",
    },
    .size = NFS_TRANSPORT__MAX
};

void qapi_free_NFSServer(NFSServer *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NFSServer(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsNfs(BlockdevOptionsNfs *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsNfs(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsCurlBase(BlockdevOptionsCurlBase *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsCurlBase(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsCurlHttp(BlockdevOptionsCurlHttp *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsCurlHttp(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsCurlHttps(BlockdevOptionsCurlHttps *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsCurlHttps(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsCurlFtp(BlockdevOptionsCurlFtp *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsCurlFtp(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsCurlFtps(BlockdevOptionsCurlFtps *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsCurlFtps(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsNbd(BlockdevOptionsNbd *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsNbd(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsRaw(BlockdevOptionsRaw *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsRaw(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsThrottle(BlockdevOptionsThrottle *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsThrottle(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsCor(BlockdevOptionsCor *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsCor(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup OnCbwError_lookup = {
    .array = (const char *const[]) {
        [ON_CBW_ERROR_BREAK_GUEST_WRITE] = "break-guest-write",
        [ON_CBW_ERROR_BREAK_SNAPSHOT] = "break-snapshot",
    },
    .size = ON_CBW_ERROR__MAX
};

void qapi_free_BlockdevOptionsCbw(BlockdevOptionsCbw *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsCbw(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BlockdevOptions_base(q_obj_BlockdevOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BlockdevOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptions(BlockdevOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevRef(BlockdevRef *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevRef(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevRefOrNull(BlockdevRefOrNull *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevRefOrNull(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevOptionsList(BlockdevOptionsList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevOptionsList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_blockdev_reopen_arg(q_obj_blockdev_reopen_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_blockdev_reopen_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_blockdev_del_arg(q_obj_blockdev_del_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_blockdev_del_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsFile(BlockdevCreateOptionsFile *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsFile(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsGluster(BlockdevCreateOptionsGluster *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsGluster(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsLUKS(BlockdevCreateOptionsLUKS *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsLUKS(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsNfs(BlockdevCreateOptionsNfs *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsNfs(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsParallels(BlockdevCreateOptionsParallels *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsParallels(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsQcow(BlockdevCreateOptionsQcow *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsQcow(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevQcow2Version_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_QCOW2_VERSION_V2] = "v2",
        [BLOCKDEV_QCOW2_VERSION_V3] = "v3",
    },
    .size = BLOCKDEV_QCOW2_VERSION__MAX
};

const QEnumLookup Qcow2CompressionType_lookup = {
    .array = (const char *const[]) {
        [QCOW2_COMPRESSION_TYPE_ZLIB] = "zlib",
#if defined(CONFIG_ZSTD)
        [QCOW2_COMPRESSION_TYPE_ZSTD] = "zstd",
#endif /* defined(CONFIG_ZSTD) */
    },
    .size = QCOW2_COMPRESSION_TYPE__MAX
};

void qapi_free_BlockdevCreateOptionsQcow2(BlockdevCreateOptionsQcow2 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsQcow2(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsQed(BlockdevCreateOptionsQed *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsQed(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsRbd(BlockdevCreateOptionsRbd *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsRbd(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevVmdkSubformat_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_VMDK_SUBFORMAT_MONOLITHICSPARSE] = "monolithicSparse",
        [BLOCKDEV_VMDK_SUBFORMAT_MONOLITHICFLAT] = "monolithicFlat",
        [BLOCKDEV_VMDK_SUBFORMAT_TWOGBMAXEXTENTSPARSE] = "twoGbMaxExtentSparse",
        [BLOCKDEV_VMDK_SUBFORMAT_TWOGBMAXEXTENTFLAT] = "twoGbMaxExtentFlat",
        [BLOCKDEV_VMDK_SUBFORMAT_STREAMOPTIMIZED] = "streamOptimized",
    },
    .size = BLOCKDEV_VMDK_SUBFORMAT__MAX
};

const QEnumLookup BlockdevVmdkAdapterType_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_VMDK_ADAPTER_TYPE_IDE] = "ide",
        [BLOCKDEV_VMDK_ADAPTER_TYPE_BUSLOGIC] = "buslogic",
        [BLOCKDEV_VMDK_ADAPTER_TYPE_LSILOGIC] = "lsilogic",
        [BLOCKDEV_VMDK_ADAPTER_TYPE_LEGACYESX] = "legacyESX",
    },
    .size = BLOCKDEV_VMDK_ADAPTER_TYPE__MAX
};

void qapi_free_BlockdevCreateOptionsVmdk(BlockdevCreateOptionsVmdk *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsVmdk(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsSsh(BlockdevCreateOptionsSsh *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsSsh(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptionsVdi(BlockdevCreateOptionsVdi *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsVdi(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevVhdxSubformat_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_VHDX_SUBFORMAT_DYNAMIC] = "dynamic",
        [BLOCKDEV_VHDX_SUBFORMAT_FIXED] = "fixed",
    },
    .size = BLOCKDEV_VHDX_SUBFORMAT__MAX
};

void qapi_free_BlockdevCreateOptionsVhdx(BlockdevCreateOptionsVhdx *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsVhdx(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockdevVpcSubformat_lookup = {
    .array = (const char *const[]) {
        [BLOCKDEV_VPC_SUBFORMAT_DYNAMIC] = "dynamic",
        [BLOCKDEV_VPC_SUBFORMAT_FIXED] = "fixed",
    },
    .size = BLOCKDEV_VPC_SUBFORMAT__MAX
};

void qapi_free_BlockdevCreateOptionsVpc(BlockdevCreateOptionsVpc *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptionsVpc(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BlockdevCreateOptions_base(q_obj_BlockdevCreateOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BlockdevCreateOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevCreateOptions(BlockdevCreateOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevCreateOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_blockdev_create_arg(q_obj_blockdev_create_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_blockdev_create_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevAmendOptionsLUKS(BlockdevAmendOptionsLUKS *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevAmendOptionsLUKS(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevAmendOptionsQcow2(BlockdevAmendOptionsQcow2 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevAmendOptionsQcow2(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BlockdevAmendOptions_base(q_obj_BlockdevAmendOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BlockdevAmendOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevAmendOptions(BlockdevAmendOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevAmendOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_x_blockdev_amend_arg(q_obj_x_blockdev_amend_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_x_blockdev_amend_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup BlockErrorAction_lookup = {
    .array = (const char *const[]) {
        [BLOCK_ERROR_ACTION_IGNORE] = "ignore",
        [BLOCK_ERROR_ACTION_REPORT] = "report",
        [BLOCK_ERROR_ACTION_STOP] = "stop",
    },
    .size = BLOCK_ERROR_ACTION__MAX
};

void qapi_free_q_obj_BLOCK_IMAGE_CORRUPTED_arg(q_obj_BLOCK_IMAGE_CORRUPTED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_IMAGE_CORRUPTED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BLOCK_IO_ERROR_arg(q_obj_BLOCK_IO_ERROR_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_IO_ERROR_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BLOCK_JOB_COMPLETED_arg(q_obj_BLOCK_JOB_COMPLETED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_COMPLETED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BLOCK_JOB_CANCELLED_arg(q_obj_BLOCK_JOB_CANCELLED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_CANCELLED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BLOCK_JOB_ERROR_arg(q_obj_BLOCK_JOB_ERROR_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_ERROR_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BLOCK_JOB_READY_arg(q_obj_BLOCK_JOB_READY_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_READY_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_BLOCK_JOB_PENDING_arg(q_obj_BLOCK_JOB_PENDING_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_JOB_PENDING_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup PreallocMode_lookup = {
    .array = (const char *const[]) {
        [PREALLOC_MODE_OFF] = "off",
        [PREALLOC_MODE_METADATA] = "metadata",
        [PREALLOC_MODE_FALLOC] = "falloc",
        [PREALLOC_MODE_FULL] = "full",
    },
    .size = PREALLOC_MODE__MAX
};

void qapi_free_q_obj_BLOCK_WRITE_THRESHOLD_arg(q_obj_BLOCK_WRITE_THRESHOLD_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_BLOCK_WRITE_THRESHOLD_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_block_set_write_threshold_arg(q_obj_block_set_write_threshold_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_block_set_write_threshold_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_x_blockdev_change_arg(q_obj_x_blockdev_change_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_x_blockdev_change_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_x_blockdev_set_iothread_arg(q_obj_x_blockdev_set_iothread_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_x_blockdev_set_iothread_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup QuorumOpType_lookup = {
    .array = (const char *const[]) {
        [QUORUM_OP_TYPE_READ] = "read",
        [QUORUM_OP_TYPE_WRITE] = "write",
        [QUORUM_OP_TYPE_FLUSH] = "flush",
    },
    .size = QUORUM_OP_TYPE__MAX
};

void qapi_free_q_obj_QUORUM_FAILURE_arg(q_obj_QUORUM_FAILURE_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_QUORUM_FAILURE_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_QUORUM_REPORT_BAD_arg(q_obj_QUORUM_REPORT_BAD_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_QUORUM_REPORT_BAD_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockdevSnapshotInternal(BlockdevSnapshotInternal *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockdevSnapshotInternal(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_blockdev_snapshot_delete_internal_sync_arg(q_obj_blockdev_snapshot_delete_internal_sync_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_blockdev_snapshot_delete_internal_sync_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_BlockGraphInfoList(BlockGraphInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_BlockGraphInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DummyBlockCoreForceArrays(DummyBlockCoreForceArrays *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DummyBlockCoreForceArrays(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_block_core_c;
