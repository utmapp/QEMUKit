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

#ifndef QAPI_TYPES_BLOCK_CORE_H
#define QAPI_TYPES_BLOCK_CORE_H

#include "qapi-builtin-types.h"
#include "qapi-types-common.h"
#include "qapi-types-crypto.h"
#include "qapi-types-job.h"
#include "qapi-types-sockets.h"

typedef struct SnapshotInfo SnapshotInfo;

typedef struct ImageInfoSpecificQCow2EncryptionBase ImageInfoSpecificQCow2EncryptionBase;

typedef struct ImageInfoSpecificQCow2Encryption ImageInfoSpecificQCow2Encryption;

typedef struct Qcow2BitmapInfoList Qcow2BitmapInfoList;

typedef struct ImageInfoSpecificQCow2 ImageInfoSpecificQCow2;

typedef struct VmdkExtentInfoList VmdkExtentInfoList;

typedef struct ImageInfoSpecificVmdk ImageInfoSpecificVmdk;

typedef struct VmdkExtentInfo VmdkExtentInfo;

typedef struct ImageInfoSpecificRbd ImageInfoSpecificRbd;

typedef struct ImageInfoSpecificFile ImageInfoSpecificFile;

typedef enum ImageInfoSpecificKind {
    IMAGE_INFO_SPECIFIC_KIND_QCOW2,
    IMAGE_INFO_SPECIFIC_KIND_VMDK,
    IMAGE_INFO_SPECIFIC_KIND_LUKS,
    IMAGE_INFO_SPECIFIC_KIND_RBD,
    IMAGE_INFO_SPECIFIC_KIND_FILE,
    IMAGE_INFO_SPECIFIC_KIND__MAX,
} ImageInfoSpecificKind;

#define ImageInfoSpecificKind_str(val) \
    qapi_enum_lookup(&ImageInfoSpecificKind_lookup, (val))

extern const QEnumLookup ImageInfoSpecificKind_lookup;

typedef struct ImageInfoSpecificQCow2Wrapper ImageInfoSpecificQCow2Wrapper;

typedef struct ImageInfoSpecificVmdkWrapper ImageInfoSpecificVmdkWrapper;

typedef struct ImageInfoSpecificLUKSWrapper ImageInfoSpecificLUKSWrapper;

typedef struct ImageInfoSpecificRbdWrapper ImageInfoSpecificRbdWrapper;

typedef struct ImageInfoSpecificFileWrapper ImageInfoSpecificFileWrapper;

typedef struct q_obj_ImageInfoSpecific_base q_obj_ImageInfoSpecific_base;

typedef struct ImageInfoSpecific ImageInfoSpecific;

typedef struct SnapshotInfoList SnapshotInfoList;

typedef struct BlockNodeInfo BlockNodeInfo;

typedef struct ImageInfo ImageInfo;

typedef struct BlockChildInfo BlockChildInfo;

typedef struct BlockChildInfoList BlockChildInfoList;

typedef struct BlockGraphInfo BlockGraphInfo;

typedef struct ImageCheck ImageCheck;

typedef struct MapEntry MapEntry;

typedef struct BlockdevCacheInfo BlockdevCacheInfo;

typedef struct BlockDirtyInfoList BlockDirtyInfoList;

typedef struct BlockDeviceInfo BlockDeviceInfo;

typedef enum BlockDeviceIoStatus {
    BLOCK_DEVICE_IO_STATUS_OK,
    BLOCK_DEVICE_IO_STATUS_FAILED,
    BLOCK_DEVICE_IO_STATUS_NOSPACE,
    BLOCK_DEVICE_IO_STATUS__MAX,
} BlockDeviceIoStatus;

#define BlockDeviceIoStatus_str(val) \
    qapi_enum_lookup(&BlockDeviceIoStatus_lookup, (val))

extern const QEnumLookup BlockDeviceIoStatus_lookup;

typedef struct BlockDirtyInfo BlockDirtyInfo;

typedef enum Qcow2BitmapInfoFlags {
    QCOW2_BITMAP_INFO_FLAGS_IN_USE,
    QCOW2_BITMAP_INFO_FLAGS_AUTO,
    QCOW2_BITMAP_INFO_FLAGS__MAX,
} Qcow2BitmapInfoFlags;

#define Qcow2BitmapInfoFlags_str(val) \
    qapi_enum_lookup(&Qcow2BitmapInfoFlags_lookup, (val))

extern const QEnumLookup Qcow2BitmapInfoFlags_lookup;

typedef struct Qcow2BitmapInfoFlagsList Qcow2BitmapInfoFlagsList;

typedef struct Qcow2BitmapInfo Qcow2BitmapInfo;

typedef struct BlockLatencyHistogramInfo BlockLatencyHistogramInfo;

typedef struct BlockInfo BlockInfo;

typedef struct BlockMeasureInfo BlockMeasureInfo;

typedef struct BlockInfoList BlockInfoList;

typedef struct BlockDeviceTimedStats BlockDeviceTimedStats;

typedef struct BlockDeviceTimedStatsList BlockDeviceTimedStatsList;

typedef struct BlockDeviceStats BlockDeviceStats;

typedef struct BlockStatsSpecificFile BlockStatsSpecificFile;

typedef struct BlockStatsSpecificNvme BlockStatsSpecificNvme;

typedef struct q_obj_BlockStatsSpecific_base q_obj_BlockStatsSpecific_base;

typedef struct BlockStatsSpecific BlockStatsSpecific;

typedef struct BlockStats BlockStats;

typedef struct q_obj_query_blockstats_arg q_obj_query_blockstats_arg;

typedef struct BlockStatsList BlockStatsList;

typedef enum BlockdevOnError {
    BLOCKDEV_ON_ERROR_REPORT,
    BLOCKDEV_ON_ERROR_IGNORE,
    BLOCKDEV_ON_ERROR_ENOSPC,
    BLOCKDEV_ON_ERROR_STOP,
    BLOCKDEV_ON_ERROR_AUTO,
    BLOCKDEV_ON_ERROR__MAX,
} BlockdevOnError;

#define BlockdevOnError_str(val) \
    qapi_enum_lookup(&BlockdevOnError_lookup, (val))

extern const QEnumLookup BlockdevOnError_lookup;

typedef enum MirrorSyncMode {
    MIRROR_SYNC_MODE_TOP,
    MIRROR_SYNC_MODE_FULL,
    MIRROR_SYNC_MODE_NONE,
    MIRROR_SYNC_MODE_INCREMENTAL,
    MIRROR_SYNC_MODE_BITMAP,
    MIRROR_SYNC_MODE__MAX,
} MirrorSyncMode;

#define MirrorSyncMode_str(val) \
    qapi_enum_lookup(&MirrorSyncMode_lookup, (val))

extern const QEnumLookup MirrorSyncMode_lookup;

typedef enum BitmapSyncMode {
    BITMAP_SYNC_MODE_ON_SUCCESS,
    BITMAP_SYNC_MODE_NEVER,
    BITMAP_SYNC_MODE_ALWAYS,
    BITMAP_SYNC_MODE__MAX,
} BitmapSyncMode;

#define BitmapSyncMode_str(val) \
    qapi_enum_lookup(&BitmapSyncMode_lookup, (val))

extern const QEnumLookup BitmapSyncMode_lookup;

typedef enum MirrorCopyMode {
    MIRROR_COPY_MODE_BACKGROUND,
    MIRROR_COPY_MODE_WRITE_BLOCKING,
    MIRROR_COPY_MODE__MAX,
} MirrorCopyMode;

#define MirrorCopyMode_str(val) \
    qapi_enum_lookup(&MirrorCopyMode_lookup, (val))

extern const QEnumLookup MirrorCopyMode_lookup;

typedef struct BlockJobInfo BlockJobInfo;

typedef struct BlockJobInfoList BlockJobInfoList;

typedef struct q_obj_block_resize_arg q_obj_block_resize_arg;

typedef enum NewImageMode {
    NEW_IMAGE_MODE_EXISTING,
    NEW_IMAGE_MODE_ABSOLUTE_PATHS,
    NEW_IMAGE_MODE__MAX,
} NewImageMode;

#define NewImageMode_str(val) \
    qapi_enum_lookup(&NewImageMode_lookup, (val))

extern const QEnumLookup NewImageMode_lookup;

typedef struct BlockdevSnapshotSync BlockdevSnapshotSync;

typedef struct BlockdevSnapshot BlockdevSnapshot;

typedef struct BackupPerf BackupPerf;

typedef struct BackupCommon BackupCommon;

typedef struct DriveBackup DriveBackup;

typedef struct BlockdevBackup BlockdevBackup;

typedef struct q_obj_change_backing_file_arg q_obj_change_backing_file_arg;

typedef struct q_obj_block_commit_arg q_obj_block_commit_arg;

typedef struct q_obj_query_named_block_nodes_arg q_obj_query_named_block_nodes_arg;

typedef struct BlockDeviceInfoList BlockDeviceInfoList;

typedef enum XDbgBlockGraphNodeType {
    X_DBG_BLOCK_GRAPH_NODE_TYPE_BLOCK_BACKEND,
    X_DBG_BLOCK_GRAPH_NODE_TYPE_BLOCK_JOB,
    X_DBG_BLOCK_GRAPH_NODE_TYPE_BLOCK_DRIVER,
    X_DBG_BLOCK_GRAPH_NODE_TYPE__MAX,
} XDbgBlockGraphNodeType;

#define XDbgBlockGraphNodeType_str(val) \
    qapi_enum_lookup(&XDbgBlockGraphNodeType_lookup, (val))

extern const QEnumLookup XDbgBlockGraphNodeType_lookup;

typedef struct XDbgBlockGraphNode XDbgBlockGraphNode;

typedef enum BlockPermission {
    BLOCK_PERMISSION_CONSISTENT_READ,
    BLOCK_PERMISSION_WRITE,
    BLOCK_PERMISSION_WRITE_UNCHANGED,
    BLOCK_PERMISSION_RESIZE,
    BLOCK_PERMISSION__MAX,
} BlockPermission;

#define BlockPermission_str(val) \
    qapi_enum_lookup(&BlockPermission_lookup, (val))

extern const QEnumLookup BlockPermission_lookup;

typedef struct BlockPermissionList BlockPermissionList;

typedef struct XDbgBlockGraphEdge XDbgBlockGraphEdge;

typedef struct XDbgBlockGraphNodeList XDbgBlockGraphNodeList;

typedef struct XDbgBlockGraphEdgeList XDbgBlockGraphEdgeList;

typedef struct XDbgBlockGraph XDbgBlockGraph;

typedef struct DriveMirror DriveMirror;

typedef struct BlockDirtyBitmap BlockDirtyBitmap;

typedef struct BlockDirtyBitmapAdd BlockDirtyBitmapAdd;

typedef struct BlockDirtyBitmapOrStr BlockDirtyBitmapOrStr;

typedef struct BlockDirtyBitmapOrStrList BlockDirtyBitmapOrStrList;

typedef struct BlockDirtyBitmapMerge BlockDirtyBitmapMerge;

typedef struct BlockDirtyBitmapSha256 BlockDirtyBitmapSha256;

typedef struct q_obj_blockdev_mirror_arg q_obj_blockdev_mirror_arg;

typedef struct BlockIOThrottle BlockIOThrottle;

typedef struct ThrottleLimits ThrottleLimits;

typedef struct ThrottleGroupProperties ThrottleGroupProperties;

typedef struct q_obj_block_stream_arg q_obj_block_stream_arg;

typedef struct q_obj_block_job_set_speed_arg q_obj_block_job_set_speed_arg;

typedef struct q_obj_block_job_cancel_arg q_obj_block_job_cancel_arg;

typedef struct q_obj_block_job_pause_arg q_obj_block_job_pause_arg;

typedef struct q_obj_block_job_resume_arg q_obj_block_job_resume_arg;

typedef struct q_obj_block_job_complete_arg q_obj_block_job_complete_arg;

typedef struct q_obj_block_job_dismiss_arg q_obj_block_job_dismiss_arg;

typedef struct q_obj_block_job_finalize_arg q_obj_block_job_finalize_arg;

typedef enum BlockdevDiscardOptions {
    BLOCKDEV_DISCARD_OPTIONS_IGNORE,
    BLOCKDEV_DISCARD_OPTIONS_UNMAP,
    BLOCKDEV_DISCARD_OPTIONS__MAX,
} BlockdevDiscardOptions;

#define BlockdevDiscardOptions_str(val) \
    qapi_enum_lookup(&BlockdevDiscardOptions_lookup, (val))

extern const QEnumLookup BlockdevDiscardOptions_lookup;

typedef enum BlockdevDetectZeroesOptions {
    BLOCKDEV_DETECT_ZEROES_OPTIONS_OFF,
    BLOCKDEV_DETECT_ZEROES_OPTIONS_ON,
    BLOCKDEV_DETECT_ZEROES_OPTIONS_UNMAP,
    BLOCKDEV_DETECT_ZEROES_OPTIONS__MAX,
} BlockdevDetectZeroesOptions;

#define BlockdevDetectZeroesOptions_str(val) \
    qapi_enum_lookup(&BlockdevDetectZeroesOptions_lookup, (val))

extern const QEnumLookup BlockdevDetectZeroesOptions_lookup;

typedef enum BlockdevAioOptions {
    BLOCKDEV_AIO_OPTIONS_THREADS,
    BLOCKDEV_AIO_OPTIONS_NATIVE,
#if defined(CONFIG_LINUX_IO_URING)
    BLOCKDEV_AIO_OPTIONS_IO_URING,
#endif /* defined(CONFIG_LINUX_IO_URING) */
    BLOCKDEV_AIO_OPTIONS__MAX,
} BlockdevAioOptions;

#define BlockdevAioOptions_str(val) \
    qapi_enum_lookup(&BlockdevAioOptions_lookup, (val))

extern const QEnumLookup BlockdevAioOptions_lookup;

typedef struct BlockdevCacheOptions BlockdevCacheOptions;

typedef enum BlockdevDriver {
    BLOCKDEV_DRIVER_BLKDEBUG,
    BLOCKDEV_DRIVER_BLKLOGWRITES,
    BLOCKDEV_DRIVER_BLKREPLAY,
    BLOCKDEV_DRIVER_BLKVERIFY,
    BLOCKDEV_DRIVER_BOCHS,
    BLOCKDEV_DRIVER_CLOOP,
    BLOCKDEV_DRIVER_COMPRESS,
    BLOCKDEV_DRIVER_COPY_BEFORE_WRITE,
    BLOCKDEV_DRIVER_COPY_ON_READ,
    BLOCKDEV_DRIVER_DMG,
    BLOCKDEV_DRIVER_FILE,
    BLOCKDEV_DRIVER_SNAPSHOT_ACCESS,
    BLOCKDEV_DRIVER_FTP,
    BLOCKDEV_DRIVER_FTPS,
    BLOCKDEV_DRIVER_GLUSTER,
#if defined(HAVE_HOST_BLOCK_DEVICE)
    BLOCKDEV_DRIVER_HOST_CDROM,
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
#if defined(HAVE_HOST_BLOCK_DEVICE)
    BLOCKDEV_DRIVER_HOST_DEVICE,
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
    BLOCKDEV_DRIVER_HTTP,
    BLOCKDEV_DRIVER_HTTPS,
#if defined(CONFIG_BLKIO)
    BLOCKDEV_DRIVER_IO_URING,
#endif /* defined(CONFIG_BLKIO) */
    BLOCKDEV_DRIVER_ISCSI,
    BLOCKDEV_DRIVER_LUKS,
    BLOCKDEV_DRIVER_NBD,
    BLOCKDEV_DRIVER_NFS,
    BLOCKDEV_DRIVER_NULL_AIO,
    BLOCKDEV_DRIVER_NULL_CO,
    BLOCKDEV_DRIVER_NVME,
#if defined(CONFIG_BLKIO)
    BLOCKDEV_DRIVER_NVME_IO_URING,
#endif /* defined(CONFIG_BLKIO) */
    BLOCKDEV_DRIVER_PARALLELS,
    BLOCKDEV_DRIVER_PREALLOCATE,
    BLOCKDEV_DRIVER_QCOW,
    BLOCKDEV_DRIVER_QCOW2,
    BLOCKDEV_DRIVER_QED,
    BLOCKDEV_DRIVER_QUORUM,
    BLOCKDEV_DRIVER_RAW,
    BLOCKDEV_DRIVER_RBD,
#if defined(CONFIG_REPLICATION)
    BLOCKDEV_DRIVER_REPLICATION,
#endif /* defined(CONFIG_REPLICATION) */
    BLOCKDEV_DRIVER_SSH,
    BLOCKDEV_DRIVER_THROTTLE,
    BLOCKDEV_DRIVER_VDI,
    BLOCKDEV_DRIVER_VHDX,
#if defined(CONFIG_BLKIO)
    BLOCKDEV_DRIVER_VIRTIO_BLK_VFIO_PCI,
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_USER,
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
    BLOCKDEV_DRIVER_VIRTIO_BLK_VHOST_VDPA,
#endif /* defined(CONFIG_BLKIO) */
    BLOCKDEV_DRIVER_VMDK,
    BLOCKDEV_DRIVER_VPC,
    BLOCKDEV_DRIVER_VVFAT,
    BLOCKDEV_DRIVER__MAX,
} BlockdevDriver;

#define BlockdevDriver_str(val) \
    qapi_enum_lookup(&BlockdevDriver_lookup, (val))

extern const QEnumLookup BlockdevDriver_lookup;

typedef struct BlockdevOptionsFile BlockdevOptionsFile;

typedef struct BlockdevOptionsNull BlockdevOptionsNull;

typedef struct BlockdevOptionsNVMe BlockdevOptionsNVMe;

typedef struct BlockdevOptionsVVFAT BlockdevOptionsVVFAT;

typedef struct BlockdevOptionsGenericFormat BlockdevOptionsGenericFormat;

typedef struct BlockdevOptionsLUKS BlockdevOptionsLUKS;

typedef struct BlockdevOptionsGenericCOWFormat BlockdevOptionsGenericCOWFormat;

typedef enum Qcow2OverlapCheckMode {
    QCOW2_OVERLAP_CHECK_MODE_NONE,
    QCOW2_OVERLAP_CHECK_MODE_CONSTANT,
    QCOW2_OVERLAP_CHECK_MODE_CACHED,
    QCOW2_OVERLAP_CHECK_MODE_ALL,
    QCOW2_OVERLAP_CHECK_MODE__MAX,
} Qcow2OverlapCheckMode;

#define Qcow2OverlapCheckMode_str(val) \
    qapi_enum_lookup(&Qcow2OverlapCheckMode_lookup, (val))

extern const QEnumLookup Qcow2OverlapCheckMode_lookup;

typedef struct Qcow2OverlapCheckFlags Qcow2OverlapCheckFlags;

typedef struct Qcow2OverlapChecks Qcow2OverlapChecks;

typedef enum BlockdevQcowEncryptionFormat {
    BLOCKDEV_QCOW_ENCRYPTION_FORMAT_AES,
    BLOCKDEV_QCOW_ENCRYPTION_FORMAT__MAX,
} BlockdevQcowEncryptionFormat;

#define BlockdevQcowEncryptionFormat_str(val) \
    qapi_enum_lookup(&BlockdevQcowEncryptionFormat_lookup, (val))

extern const QEnumLookup BlockdevQcowEncryptionFormat_lookup;

typedef struct q_obj_BlockdevQcowEncryption_base q_obj_BlockdevQcowEncryption_base;

typedef struct BlockdevQcowEncryption BlockdevQcowEncryption;

typedef struct BlockdevOptionsQcow BlockdevOptionsQcow;

typedef enum BlockdevQcow2EncryptionFormat {
    BLOCKDEV_QCOW2_ENCRYPTION_FORMAT_AES,
    BLOCKDEV_QCOW2_ENCRYPTION_FORMAT_LUKS,
    BLOCKDEV_QCOW2_ENCRYPTION_FORMAT__MAX,
} BlockdevQcow2EncryptionFormat;

#define BlockdevQcow2EncryptionFormat_str(val) \
    qapi_enum_lookup(&BlockdevQcow2EncryptionFormat_lookup, (val))

extern const QEnumLookup BlockdevQcow2EncryptionFormat_lookup;

typedef struct q_obj_BlockdevQcow2Encryption_base q_obj_BlockdevQcow2Encryption_base;

typedef struct BlockdevQcow2Encryption BlockdevQcow2Encryption;

typedef struct BlockdevOptionsPreallocate BlockdevOptionsPreallocate;

typedef struct BlockdevOptionsQcow2 BlockdevOptionsQcow2;

typedef enum SshHostKeyCheckMode {
    SSH_HOST_KEY_CHECK_MODE_NONE,
    SSH_HOST_KEY_CHECK_MODE_HASH,
    SSH_HOST_KEY_CHECK_MODE_KNOWN_HOSTS,
    SSH_HOST_KEY_CHECK_MODE__MAX,
} SshHostKeyCheckMode;

#define SshHostKeyCheckMode_str(val) \
    qapi_enum_lookup(&SshHostKeyCheckMode_lookup, (val))

extern const QEnumLookup SshHostKeyCheckMode_lookup;

typedef enum SshHostKeyCheckHashType {
    SSH_HOST_KEY_CHECK_HASH_TYPE_MD5,
    SSH_HOST_KEY_CHECK_HASH_TYPE_SHA1,
    SSH_HOST_KEY_CHECK_HASH_TYPE_SHA256,
    SSH_HOST_KEY_CHECK_HASH_TYPE__MAX,
} SshHostKeyCheckHashType;

#define SshHostKeyCheckHashType_str(val) \
    qapi_enum_lookup(&SshHostKeyCheckHashType_lookup, (val))

extern const QEnumLookup SshHostKeyCheckHashType_lookup;

typedef struct SshHostKeyHash SshHostKeyHash;

typedef struct q_obj_SshHostKeyCheck_base q_obj_SshHostKeyCheck_base;

typedef struct SshHostKeyCheck SshHostKeyCheck;

typedef struct BlockdevOptionsSsh BlockdevOptionsSsh;

typedef enum BlkdebugEvent {
    BLKDBG_L1_UPDATE,
    BLKDBG_L1_GROW_ALLOC_TABLE,
    BLKDBG_L1_GROW_WRITE_TABLE,
    BLKDBG_L1_GROW_ACTIVATE_TABLE,
    BLKDBG_L2_LOAD,
    BLKDBG_L2_UPDATE,
    BLKDBG_L2_UPDATE_COMPRESSED,
    BLKDBG_L2_ALLOC_COW_READ,
    BLKDBG_L2_ALLOC_WRITE,
    BLKDBG_READ_AIO,
    BLKDBG_READ_BACKING_AIO,
    BLKDBG_READ_COMPRESSED,
    BLKDBG_WRITE_AIO,
    BLKDBG_WRITE_COMPRESSED,
    BLKDBG_VMSTATE_LOAD,
    BLKDBG_VMSTATE_SAVE,
    BLKDBG_COW_READ,
    BLKDBG_COW_WRITE,
    BLKDBG_REFTABLE_LOAD,
    BLKDBG_REFTABLE_GROW,
    BLKDBG_REFTABLE_UPDATE,
    BLKDBG_REFBLOCK_LOAD,
    BLKDBG_REFBLOCK_UPDATE,
    BLKDBG_REFBLOCK_UPDATE_PART,
    BLKDBG_REFBLOCK_ALLOC,
    BLKDBG_REFBLOCK_ALLOC_HOOKUP,
    BLKDBG_REFBLOCK_ALLOC_WRITE,
    BLKDBG_REFBLOCK_ALLOC_WRITE_BLOCKS,
    BLKDBG_REFBLOCK_ALLOC_WRITE_TABLE,
    BLKDBG_REFBLOCK_ALLOC_SWITCH_TABLE,
    BLKDBG_CLUSTER_ALLOC,
    BLKDBG_CLUSTER_ALLOC_BYTES,
    BLKDBG_CLUSTER_FREE,
    BLKDBG_FLUSH_TO_OS,
    BLKDBG_FLUSH_TO_DISK,
    BLKDBG_PWRITEV_RMW_HEAD,
    BLKDBG_PWRITEV_RMW_AFTER_HEAD,
    BLKDBG_PWRITEV_RMW_TAIL,
    BLKDBG_PWRITEV_RMW_AFTER_TAIL,
    BLKDBG_PWRITEV,
    BLKDBG_PWRITEV_ZERO,
    BLKDBG_PWRITEV_DONE,
    BLKDBG_EMPTY_IMAGE_PREPARE,
    BLKDBG_L1_SHRINK_WRITE_TABLE,
    BLKDBG_L1_SHRINK_FREE_L2_CLUSTERS,
    BLKDBG_COR_WRITE,
    BLKDBG_CLUSTER_ALLOC_SPACE,
    BLKDBG_NONE,
    BLKDBG__MAX,
} BlkdebugEvent;

#define BlkdebugEvent_str(val) \
    qapi_enum_lookup(&BlkdebugEvent_lookup, (val))

extern const QEnumLookup BlkdebugEvent_lookup;

typedef enum BlkdebugIOType {
    BLKDEBUG_IO_TYPE_READ,
    BLKDEBUG_IO_TYPE_WRITE,
    BLKDEBUG_IO_TYPE_WRITE_ZEROES,
    BLKDEBUG_IO_TYPE_DISCARD,
    BLKDEBUG_IO_TYPE_FLUSH,
    BLKDEBUG_IO_TYPE_BLOCK_STATUS,
    BLKDEBUG_IO_TYPE__MAX,
} BlkdebugIOType;

#define BlkdebugIOType_str(val) \
    qapi_enum_lookup(&BlkdebugIOType_lookup, (val))

extern const QEnumLookup BlkdebugIOType_lookup;

typedef struct BlkdebugInjectErrorOptions BlkdebugInjectErrorOptions;

typedef struct BlkdebugSetStateOptions BlkdebugSetStateOptions;

typedef struct BlkdebugInjectErrorOptionsList BlkdebugInjectErrorOptionsList;

typedef struct BlkdebugSetStateOptionsList BlkdebugSetStateOptionsList;

typedef struct BlockdevOptionsBlkdebug BlockdevOptionsBlkdebug;

typedef struct BlockdevOptionsBlklogwrites BlockdevOptionsBlklogwrites;

typedef struct BlockdevOptionsBlkverify BlockdevOptionsBlkverify;

typedef struct BlockdevOptionsBlkreplay BlockdevOptionsBlkreplay;

typedef enum QuorumReadPattern {
    QUORUM_READ_PATTERN_QUORUM,
    QUORUM_READ_PATTERN_FIFO,
    QUORUM_READ_PATTERN__MAX,
} QuorumReadPattern;

#define QuorumReadPattern_str(val) \
    qapi_enum_lookup(&QuorumReadPattern_lookup, (val))

extern const QEnumLookup QuorumReadPattern_lookup;

typedef struct BlockdevRefList BlockdevRefList;

typedef struct BlockdevOptionsQuorum BlockdevOptionsQuorum;

typedef struct BlockdevOptionsGluster BlockdevOptionsGluster;

#if defined(CONFIG_BLKIO)
typedef struct BlockdevOptionsIoUring BlockdevOptionsIoUring;
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
typedef struct BlockdevOptionsNvmeIoUring BlockdevOptionsNvmeIoUring;
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
typedef struct BlockdevOptionsVirtioBlkVfioPci BlockdevOptionsVirtioBlkVfioPci;
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
typedef struct BlockdevOptionsVirtioBlkVhostUser BlockdevOptionsVirtioBlkVhostUser;
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
typedef struct BlockdevOptionsVirtioBlkVhostVdpa BlockdevOptionsVirtioBlkVhostVdpa;
#endif /* defined(CONFIG_BLKIO) */

typedef enum IscsiTransport {
    ISCSI_TRANSPORT_TCP,
    ISCSI_TRANSPORT_ISER,
    ISCSI_TRANSPORT__MAX,
} IscsiTransport;

#define IscsiTransport_str(val) \
    qapi_enum_lookup(&IscsiTransport_lookup, (val))

extern const QEnumLookup IscsiTransport_lookup;

typedef enum IscsiHeaderDigest {
    QAPI_ISCSI_HEADER_DIGEST_CRC32C,
    QAPI_ISCSI_HEADER_DIGEST_NONE,
    QAPI_ISCSI_HEADER_DIGEST_CRC32C_NONE,
    QAPI_ISCSI_HEADER_DIGEST_NONE_CRC32C,
    QAPI_ISCSI_HEADER_DIGEST__MAX,
} IscsiHeaderDigest;

#define IscsiHeaderDigest_str(val) \
    qapi_enum_lookup(&IscsiHeaderDigest_lookup, (val))

extern const QEnumLookup IscsiHeaderDigest_lookup;

typedef struct BlockdevOptionsIscsi BlockdevOptionsIscsi;

typedef enum RbdAuthMode {
    RBD_AUTH_MODE_CEPHX,
    RBD_AUTH_MODE_NONE,
    RBD_AUTH_MODE__MAX,
} RbdAuthMode;

#define RbdAuthMode_str(val) \
    qapi_enum_lookup(&RbdAuthMode_lookup, (val))

extern const QEnumLookup RbdAuthMode_lookup;

typedef enum RbdImageEncryptionFormat {
    RBD_IMAGE_ENCRYPTION_FORMAT_LUKS,
    RBD_IMAGE_ENCRYPTION_FORMAT_LUKS2,
    RBD_IMAGE_ENCRYPTION_FORMAT_LUKS_ANY,
    RBD_IMAGE_ENCRYPTION_FORMAT__MAX,
} RbdImageEncryptionFormat;

#define RbdImageEncryptionFormat_str(val) \
    qapi_enum_lookup(&RbdImageEncryptionFormat_lookup, (val))

extern const QEnumLookup RbdImageEncryptionFormat_lookup;

typedef struct RbdEncryptionOptionsLUKSBase RbdEncryptionOptionsLUKSBase;

typedef struct RbdEncryptionCreateOptionsLUKSBase RbdEncryptionCreateOptionsLUKSBase;

typedef struct RbdEncryptionOptionsLUKS RbdEncryptionOptionsLUKS;

typedef struct RbdEncryptionOptionsLUKS2 RbdEncryptionOptionsLUKS2;

typedef struct RbdEncryptionOptionsLUKSAny RbdEncryptionOptionsLUKSAny;

typedef struct RbdEncryptionCreateOptionsLUKS RbdEncryptionCreateOptionsLUKS;

typedef struct RbdEncryptionCreateOptionsLUKS2 RbdEncryptionCreateOptionsLUKS2;

typedef struct q_obj_RbdEncryptionOptions_base q_obj_RbdEncryptionOptions_base;

typedef struct RbdEncryptionOptions RbdEncryptionOptions;

typedef struct q_obj_RbdEncryptionCreateOptions_base q_obj_RbdEncryptionCreateOptions_base;

typedef struct RbdEncryptionCreateOptions RbdEncryptionCreateOptions;

typedef struct RbdAuthModeList RbdAuthModeList;

typedef struct BlockdevOptionsRbd BlockdevOptionsRbd;

#if defined(CONFIG_REPLICATION)
typedef enum ReplicationMode {
    REPLICATION_MODE_PRIMARY,
    REPLICATION_MODE_SECONDARY,
    REPLICATION_MODE__MAX,
} ReplicationMode;

#define ReplicationMode_str(val) \
    qapi_enum_lookup(&ReplicationMode_lookup, (val))

extern const QEnumLookup ReplicationMode_lookup;
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
typedef struct BlockdevOptionsReplication BlockdevOptionsReplication;
#endif /* defined(CONFIG_REPLICATION) */

typedef enum NFSTransport {
    NFS_TRANSPORT_INET,
    NFS_TRANSPORT__MAX,
} NFSTransport;

#define NFSTransport_str(val) \
    qapi_enum_lookup(&NFSTransport_lookup, (val))

extern const QEnumLookup NFSTransport_lookup;

typedef struct NFSServer NFSServer;

typedef struct BlockdevOptionsNfs BlockdevOptionsNfs;

typedef struct BlockdevOptionsCurlBase BlockdevOptionsCurlBase;

typedef struct BlockdevOptionsCurlHttp BlockdevOptionsCurlHttp;

typedef struct BlockdevOptionsCurlHttps BlockdevOptionsCurlHttps;

typedef struct BlockdevOptionsCurlFtp BlockdevOptionsCurlFtp;

typedef struct BlockdevOptionsCurlFtps BlockdevOptionsCurlFtps;

typedef struct BlockdevOptionsNbd BlockdevOptionsNbd;

typedef struct BlockdevOptionsRaw BlockdevOptionsRaw;

typedef struct BlockdevOptionsThrottle BlockdevOptionsThrottle;

typedef struct BlockdevOptionsCor BlockdevOptionsCor;

typedef enum OnCbwError {
    ON_CBW_ERROR_BREAK_GUEST_WRITE,
    ON_CBW_ERROR_BREAK_SNAPSHOT,
    ON_CBW_ERROR__MAX,
} OnCbwError;

#define OnCbwError_str(val) \
    qapi_enum_lookup(&OnCbwError_lookup, (val))

extern const QEnumLookup OnCbwError_lookup;

typedef struct BlockdevOptionsCbw BlockdevOptionsCbw;

typedef struct q_obj_BlockdevOptions_base q_obj_BlockdevOptions_base;

typedef struct BlockdevOptions BlockdevOptions;

typedef struct BlockdevRef BlockdevRef;

typedef struct BlockdevRefOrNull BlockdevRefOrNull;

typedef struct BlockdevOptionsList BlockdevOptionsList;

typedef struct q_obj_blockdev_reopen_arg q_obj_blockdev_reopen_arg;

typedef struct q_obj_blockdev_del_arg q_obj_blockdev_del_arg;

typedef struct BlockdevCreateOptionsFile BlockdevCreateOptionsFile;

typedef struct BlockdevCreateOptionsGluster BlockdevCreateOptionsGluster;

typedef struct BlockdevCreateOptionsLUKS BlockdevCreateOptionsLUKS;

typedef struct BlockdevCreateOptionsNfs BlockdevCreateOptionsNfs;

typedef struct BlockdevCreateOptionsParallels BlockdevCreateOptionsParallels;

typedef struct BlockdevCreateOptionsQcow BlockdevCreateOptionsQcow;

typedef enum BlockdevQcow2Version {
    BLOCKDEV_QCOW2_VERSION_V2,
    BLOCKDEV_QCOW2_VERSION_V3,
    BLOCKDEV_QCOW2_VERSION__MAX,
} BlockdevQcow2Version;

#define BlockdevQcow2Version_str(val) \
    qapi_enum_lookup(&BlockdevQcow2Version_lookup, (val))

extern const QEnumLookup BlockdevQcow2Version_lookup;

typedef enum Qcow2CompressionType {
    QCOW2_COMPRESSION_TYPE_ZLIB,
#if defined(CONFIG_ZSTD)
    QCOW2_COMPRESSION_TYPE_ZSTD,
#endif /* defined(CONFIG_ZSTD) */
    QCOW2_COMPRESSION_TYPE__MAX,
} Qcow2CompressionType;

#define Qcow2CompressionType_str(val) \
    qapi_enum_lookup(&Qcow2CompressionType_lookup, (val))

extern const QEnumLookup Qcow2CompressionType_lookup;

typedef struct BlockdevCreateOptionsQcow2 BlockdevCreateOptionsQcow2;

typedef struct BlockdevCreateOptionsQed BlockdevCreateOptionsQed;

typedef struct BlockdevCreateOptionsRbd BlockdevCreateOptionsRbd;

typedef enum BlockdevVmdkSubformat {
    BLOCKDEV_VMDK_SUBFORMAT_MONOLITHICSPARSE,
    BLOCKDEV_VMDK_SUBFORMAT_MONOLITHICFLAT,
    BLOCKDEV_VMDK_SUBFORMAT_TWOGBMAXEXTENTSPARSE,
    BLOCKDEV_VMDK_SUBFORMAT_TWOGBMAXEXTENTFLAT,
    BLOCKDEV_VMDK_SUBFORMAT_STREAMOPTIMIZED,
    BLOCKDEV_VMDK_SUBFORMAT__MAX,
} BlockdevVmdkSubformat;

#define BlockdevVmdkSubformat_str(val) \
    qapi_enum_lookup(&BlockdevVmdkSubformat_lookup, (val))

extern const QEnumLookup BlockdevVmdkSubformat_lookup;

typedef enum BlockdevVmdkAdapterType {
    BLOCKDEV_VMDK_ADAPTER_TYPE_IDE,
    BLOCKDEV_VMDK_ADAPTER_TYPE_BUSLOGIC,
    BLOCKDEV_VMDK_ADAPTER_TYPE_LSILOGIC,
    BLOCKDEV_VMDK_ADAPTER_TYPE_LEGACYESX,
    BLOCKDEV_VMDK_ADAPTER_TYPE__MAX,
} BlockdevVmdkAdapterType;

#define BlockdevVmdkAdapterType_str(val) \
    qapi_enum_lookup(&BlockdevVmdkAdapterType_lookup, (val))

extern const QEnumLookup BlockdevVmdkAdapterType_lookup;

typedef struct BlockdevCreateOptionsVmdk BlockdevCreateOptionsVmdk;

typedef struct BlockdevCreateOptionsSsh BlockdevCreateOptionsSsh;

typedef struct BlockdevCreateOptionsVdi BlockdevCreateOptionsVdi;

typedef enum BlockdevVhdxSubformat {
    BLOCKDEV_VHDX_SUBFORMAT_DYNAMIC,
    BLOCKDEV_VHDX_SUBFORMAT_FIXED,
    BLOCKDEV_VHDX_SUBFORMAT__MAX,
} BlockdevVhdxSubformat;

#define BlockdevVhdxSubformat_str(val) \
    qapi_enum_lookup(&BlockdevVhdxSubformat_lookup, (val))

extern const QEnumLookup BlockdevVhdxSubformat_lookup;

typedef struct BlockdevCreateOptionsVhdx BlockdevCreateOptionsVhdx;

typedef enum BlockdevVpcSubformat {
    BLOCKDEV_VPC_SUBFORMAT_DYNAMIC,
    BLOCKDEV_VPC_SUBFORMAT_FIXED,
    BLOCKDEV_VPC_SUBFORMAT__MAX,
} BlockdevVpcSubformat;

#define BlockdevVpcSubformat_str(val) \
    qapi_enum_lookup(&BlockdevVpcSubformat_lookup, (val))

extern const QEnumLookup BlockdevVpcSubformat_lookup;

typedef struct BlockdevCreateOptionsVpc BlockdevCreateOptionsVpc;

typedef struct q_obj_BlockdevCreateOptions_base q_obj_BlockdevCreateOptions_base;

typedef struct BlockdevCreateOptions BlockdevCreateOptions;

typedef struct q_obj_blockdev_create_arg q_obj_blockdev_create_arg;

typedef struct BlockdevAmendOptionsLUKS BlockdevAmendOptionsLUKS;

typedef struct BlockdevAmendOptionsQcow2 BlockdevAmendOptionsQcow2;

typedef struct q_obj_BlockdevAmendOptions_base q_obj_BlockdevAmendOptions_base;

typedef struct BlockdevAmendOptions BlockdevAmendOptions;

typedef struct q_obj_x_blockdev_amend_arg q_obj_x_blockdev_amend_arg;

typedef enum BlockErrorAction {
    BLOCK_ERROR_ACTION_IGNORE,
    BLOCK_ERROR_ACTION_REPORT,
    BLOCK_ERROR_ACTION_STOP,
    BLOCK_ERROR_ACTION__MAX,
} BlockErrorAction;

#define BlockErrorAction_str(val) \
    qapi_enum_lookup(&BlockErrorAction_lookup, (val))

extern const QEnumLookup BlockErrorAction_lookup;

typedef struct q_obj_BLOCK_IMAGE_CORRUPTED_arg q_obj_BLOCK_IMAGE_CORRUPTED_arg;

typedef struct q_obj_BLOCK_IO_ERROR_arg q_obj_BLOCK_IO_ERROR_arg;

typedef struct q_obj_BLOCK_JOB_COMPLETED_arg q_obj_BLOCK_JOB_COMPLETED_arg;

typedef struct q_obj_BLOCK_JOB_CANCELLED_arg q_obj_BLOCK_JOB_CANCELLED_arg;

typedef struct q_obj_BLOCK_JOB_ERROR_arg q_obj_BLOCK_JOB_ERROR_arg;

typedef struct q_obj_BLOCK_JOB_READY_arg q_obj_BLOCK_JOB_READY_arg;

typedef struct q_obj_BLOCK_JOB_PENDING_arg q_obj_BLOCK_JOB_PENDING_arg;

typedef enum PreallocMode {
    PREALLOC_MODE_OFF,
    PREALLOC_MODE_METADATA,
    PREALLOC_MODE_FALLOC,
    PREALLOC_MODE_FULL,
    PREALLOC_MODE__MAX,
} PreallocMode;

#define PreallocMode_str(val) \
    qapi_enum_lookup(&PreallocMode_lookup, (val))

extern const QEnumLookup PreallocMode_lookup;

typedef struct q_obj_BLOCK_WRITE_THRESHOLD_arg q_obj_BLOCK_WRITE_THRESHOLD_arg;

typedef struct q_obj_block_set_write_threshold_arg q_obj_block_set_write_threshold_arg;

typedef struct q_obj_x_blockdev_change_arg q_obj_x_blockdev_change_arg;

typedef struct q_obj_x_blockdev_set_iothread_arg q_obj_x_blockdev_set_iothread_arg;

typedef enum QuorumOpType {
    QUORUM_OP_TYPE_READ,
    QUORUM_OP_TYPE_WRITE,
    QUORUM_OP_TYPE_FLUSH,
    QUORUM_OP_TYPE__MAX,
} QuorumOpType;

#define QuorumOpType_str(val) \
    qapi_enum_lookup(&QuorumOpType_lookup, (val))

extern const QEnumLookup QuorumOpType_lookup;

typedef struct q_obj_QUORUM_FAILURE_arg q_obj_QUORUM_FAILURE_arg;

typedef struct q_obj_QUORUM_REPORT_BAD_arg q_obj_QUORUM_REPORT_BAD_arg;

typedef struct BlockdevSnapshotInternal BlockdevSnapshotInternal;

typedef struct q_obj_blockdev_snapshot_delete_internal_sync_arg q_obj_blockdev_snapshot_delete_internal_sync_arg;

typedef struct BlockGraphInfoList BlockGraphInfoList;

typedef struct DummyBlockCoreForceArrays DummyBlockCoreForceArrays;

struct SnapshotInfo {
    char *id;
    char *name;
    int64_t vm_state_size;
    int64_t date_sec;
    int64_t date_nsec;
    int64_t vm_clock_sec;
    int64_t vm_clock_nsec;
    bool has_icount;
    int64_t icount;
};

void qapi_free_SnapshotInfo(SnapshotInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SnapshotInfo, qapi_free_SnapshotInfo)

struct ImageInfoSpecificQCow2EncryptionBase {
    BlockdevQcow2EncryptionFormat format;
};

void qapi_free_ImageInfoSpecificQCow2EncryptionBase(ImageInfoSpecificQCow2EncryptionBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificQCow2EncryptionBase, qapi_free_ImageInfoSpecificQCow2EncryptionBase)

struct ImageInfoSpecificQCow2Encryption {
    /* Members inherited from ImageInfoSpecificQCow2EncryptionBase: */
    BlockdevQcow2EncryptionFormat format;
    /* Own members: */
    union { /* union tag is @format */
        QCryptoBlockInfoLUKS luks;
    } u;
};

static inline ImageInfoSpecificQCow2EncryptionBase *qapi_ImageInfoSpecificQCow2Encryption_base(const ImageInfoSpecificQCow2Encryption *obj)
{
    return (ImageInfoSpecificQCow2EncryptionBase *)obj;
}

void qapi_free_ImageInfoSpecificQCow2Encryption(ImageInfoSpecificQCow2Encryption *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificQCow2Encryption, qapi_free_ImageInfoSpecificQCow2Encryption)

struct Qcow2BitmapInfoList {
    Qcow2BitmapInfoList *next;
    Qcow2BitmapInfo *value;
};

void qapi_free_Qcow2BitmapInfoList(Qcow2BitmapInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Qcow2BitmapInfoList, qapi_free_Qcow2BitmapInfoList)

struct ImageInfoSpecificQCow2 {
    char *compat;
    bool has_data_file;
    char *data_file;
    bool has_data_file_raw;
    bool data_file_raw;
    bool has_extended_l2;
    bool extended_l2;
    bool has_lazy_refcounts;
    bool lazy_refcounts;
    bool has_corrupt;
    bool corrupt;
    int64_t refcount_bits;
    bool has_encrypt;
    ImageInfoSpecificQCow2Encryption *encrypt;
    bool has_bitmaps;
    Qcow2BitmapInfoList *bitmaps;
    Qcow2CompressionType compression_type;
};

void qapi_free_ImageInfoSpecificQCow2(ImageInfoSpecificQCow2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificQCow2, qapi_free_ImageInfoSpecificQCow2)

struct VmdkExtentInfoList {
    VmdkExtentInfoList *next;
    VmdkExtentInfo *value;
};

void qapi_free_VmdkExtentInfoList(VmdkExtentInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VmdkExtentInfoList, qapi_free_VmdkExtentInfoList)

struct ImageInfoSpecificVmdk {
    char *create_type;
    int64_t cid;
    int64_t parent_cid;
    VmdkExtentInfoList *extents;
};

void qapi_free_ImageInfoSpecificVmdk(ImageInfoSpecificVmdk *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificVmdk, qapi_free_ImageInfoSpecificVmdk)

struct VmdkExtentInfo {
    char *filename;
    char *format;
    int64_t virtual_size;
    bool has_cluster_size;
    int64_t cluster_size;
    bool has_compressed;
    bool compressed;
};

void qapi_free_VmdkExtentInfo(VmdkExtentInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VmdkExtentInfo, qapi_free_VmdkExtentInfo)

struct ImageInfoSpecificRbd {
    bool has_encryption_format;
    RbdImageEncryptionFormat encryption_format;
};

void qapi_free_ImageInfoSpecificRbd(ImageInfoSpecificRbd *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificRbd, qapi_free_ImageInfoSpecificRbd)

struct ImageInfoSpecificFile {
    bool has_extent_size_hint;
    uint64_t extent_size_hint;
};

void qapi_free_ImageInfoSpecificFile(ImageInfoSpecificFile *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificFile, qapi_free_ImageInfoSpecificFile)

struct ImageInfoSpecificQCow2Wrapper {
    ImageInfoSpecificQCow2 *data;
};

void qapi_free_ImageInfoSpecificQCow2Wrapper(ImageInfoSpecificQCow2Wrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificQCow2Wrapper, qapi_free_ImageInfoSpecificQCow2Wrapper)

struct ImageInfoSpecificVmdkWrapper {
    ImageInfoSpecificVmdk *data;
};

void qapi_free_ImageInfoSpecificVmdkWrapper(ImageInfoSpecificVmdkWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificVmdkWrapper, qapi_free_ImageInfoSpecificVmdkWrapper)

struct ImageInfoSpecificLUKSWrapper {
    QCryptoBlockInfoLUKS *data;
};

void qapi_free_ImageInfoSpecificLUKSWrapper(ImageInfoSpecificLUKSWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificLUKSWrapper, qapi_free_ImageInfoSpecificLUKSWrapper)

struct ImageInfoSpecificRbdWrapper {
    ImageInfoSpecificRbd *data;
};

void qapi_free_ImageInfoSpecificRbdWrapper(ImageInfoSpecificRbdWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificRbdWrapper, qapi_free_ImageInfoSpecificRbdWrapper)

struct ImageInfoSpecificFileWrapper {
    ImageInfoSpecificFile *data;
};

void qapi_free_ImageInfoSpecificFileWrapper(ImageInfoSpecificFileWrapper *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecificFileWrapper, qapi_free_ImageInfoSpecificFileWrapper)

struct q_obj_ImageInfoSpecific_base {
    ImageInfoSpecificKind type;
};

void qapi_free_q_obj_ImageInfoSpecific_base(q_obj_ImageInfoSpecific_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_ImageInfoSpecific_base, qapi_free_q_obj_ImageInfoSpecific_base)

struct ImageInfoSpecific {
    ImageInfoSpecificKind type;
    union { /* union tag is @type */
        ImageInfoSpecificQCow2Wrapper qcow2;
        ImageInfoSpecificVmdkWrapper vmdk;
        ImageInfoSpecificLUKSWrapper luks;
        ImageInfoSpecificRbdWrapper rbd;
        ImageInfoSpecificFileWrapper file;
    } u;
};

void qapi_free_ImageInfoSpecific(ImageInfoSpecific *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfoSpecific, qapi_free_ImageInfoSpecific)

struct SnapshotInfoList {
    SnapshotInfoList *next;
    SnapshotInfo *value;
};

void qapi_free_SnapshotInfoList(SnapshotInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SnapshotInfoList, qapi_free_SnapshotInfoList)

struct BlockNodeInfo {
    char *filename;
    char *format;
    bool has_dirty_flag;
    bool dirty_flag;
    bool has_actual_size;
    int64_t actual_size;
    int64_t virtual_size;
    bool has_cluster_size;
    int64_t cluster_size;
    bool has_encrypted;
    bool encrypted;
    bool has_compressed;
    bool compressed;
    bool has_backing_filename;
    char *backing_filename;
    bool has_full_backing_filename;
    char *full_backing_filename;
    bool has_backing_filename_format;
    char *backing_filename_format;
    bool has_snapshots;
    SnapshotInfoList *snapshots;
    bool has_format_specific;
    ImageInfoSpecific *format_specific;
};

void qapi_free_BlockNodeInfo(BlockNodeInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockNodeInfo, qapi_free_BlockNodeInfo)

struct ImageInfo {
    /* Members inherited from BlockNodeInfo: */
    char *filename;
    char *format;
    bool has_dirty_flag;
    bool dirty_flag;
    bool has_actual_size;
    int64_t actual_size;
    int64_t virtual_size;
    bool has_cluster_size;
    int64_t cluster_size;
    bool has_encrypted;
    bool encrypted;
    bool has_compressed;
    bool compressed;
    bool has_backing_filename;
    char *backing_filename;
    bool has_full_backing_filename;
    char *full_backing_filename;
    bool has_backing_filename_format;
    char *backing_filename_format;
    bool has_snapshots;
    SnapshotInfoList *snapshots;
    bool has_format_specific;
    ImageInfoSpecific *format_specific;
    /* Own members: */
    bool has_backing_image;
    ImageInfo *backing_image;
};

static inline BlockNodeInfo *qapi_ImageInfo_base(const ImageInfo *obj)
{
    return (BlockNodeInfo *)obj;
}

void qapi_free_ImageInfo(ImageInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageInfo, qapi_free_ImageInfo)

struct BlockChildInfo {
    char *name;
    BlockGraphInfo *info;
};

void qapi_free_BlockChildInfo(BlockChildInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockChildInfo, qapi_free_BlockChildInfo)

struct BlockChildInfoList {
    BlockChildInfoList *next;
    BlockChildInfo *value;
};

void qapi_free_BlockChildInfoList(BlockChildInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockChildInfoList, qapi_free_BlockChildInfoList)

struct BlockGraphInfo {
    /* Members inherited from BlockNodeInfo: */
    char *filename;
    char *format;
    bool has_dirty_flag;
    bool dirty_flag;
    bool has_actual_size;
    int64_t actual_size;
    int64_t virtual_size;
    bool has_cluster_size;
    int64_t cluster_size;
    bool has_encrypted;
    bool encrypted;
    bool has_compressed;
    bool compressed;
    bool has_backing_filename;
    char *backing_filename;
    bool has_full_backing_filename;
    char *full_backing_filename;
    bool has_backing_filename_format;
    char *backing_filename_format;
    bool has_snapshots;
    SnapshotInfoList *snapshots;
    bool has_format_specific;
    ImageInfoSpecific *format_specific;
    /* Own members: */
    BlockChildInfoList *children;
};

static inline BlockNodeInfo *qapi_BlockGraphInfo_base(const BlockGraphInfo *obj)
{
    return (BlockNodeInfo *)obj;
}

void qapi_free_BlockGraphInfo(BlockGraphInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockGraphInfo, qapi_free_BlockGraphInfo)

struct ImageCheck {
    char *filename;
    char *format;
    int64_t check_errors;
    bool has_image_end_offset;
    int64_t image_end_offset;
    bool has_corruptions;
    int64_t corruptions;
    bool has_leaks;
    int64_t leaks;
    bool has_corruptions_fixed;
    int64_t corruptions_fixed;
    bool has_leaks_fixed;
    int64_t leaks_fixed;
    bool has_total_clusters;
    int64_t total_clusters;
    bool has_allocated_clusters;
    int64_t allocated_clusters;
    bool has_fragmented_clusters;
    int64_t fragmented_clusters;
    bool has_compressed_clusters;
    int64_t compressed_clusters;
};

void qapi_free_ImageCheck(ImageCheck *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ImageCheck, qapi_free_ImageCheck)

struct MapEntry {
    int64_t start;
    int64_t length;
    bool data;
    bool zero;
    int64_t depth;
    bool present;
    bool has_offset;
    int64_t offset;
    bool has_filename;
    char *filename;
};

void qapi_free_MapEntry(MapEntry *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MapEntry, qapi_free_MapEntry)

struct BlockdevCacheInfo {
    bool writeback;
    bool direct;
    bool no_flush;
};

void qapi_free_BlockdevCacheInfo(BlockdevCacheInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCacheInfo, qapi_free_BlockdevCacheInfo)

struct BlockDirtyInfoList {
    BlockDirtyInfoList *next;
    BlockDirtyInfo *value;
};

void qapi_free_BlockDirtyInfoList(BlockDirtyInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyInfoList, qapi_free_BlockDirtyInfoList)

struct BlockDeviceInfo {
    char *file;
    bool has_node_name;
    char *node_name;
    bool ro;
    char *drv;
    bool has_backing_file;
    char *backing_file;
    int64_t backing_file_depth;
    bool encrypted;
    BlockdevDetectZeroesOptions detect_zeroes;
    int64_t bps;
    int64_t bps_rd;
    int64_t bps_wr;
    int64_t iops;
    int64_t iops_rd;
    int64_t iops_wr;
    ImageInfo *image;
    bool has_bps_max;
    int64_t bps_max;
    bool has_bps_rd_max;
    int64_t bps_rd_max;
    bool has_bps_wr_max;
    int64_t bps_wr_max;
    bool has_iops_max;
    int64_t iops_max;
    bool has_iops_rd_max;
    int64_t iops_rd_max;
    bool has_iops_wr_max;
    int64_t iops_wr_max;
    bool has_bps_max_length;
    int64_t bps_max_length;
    bool has_bps_rd_max_length;
    int64_t bps_rd_max_length;
    bool has_bps_wr_max_length;
    int64_t bps_wr_max_length;
    bool has_iops_max_length;
    int64_t iops_max_length;
    bool has_iops_rd_max_length;
    int64_t iops_rd_max_length;
    bool has_iops_wr_max_length;
    int64_t iops_wr_max_length;
    bool has_iops_size;
    int64_t iops_size;
    bool has_group;
    char *group;
    BlockdevCacheInfo *cache;
    int64_t write_threshold;
    bool has_dirty_bitmaps;
    BlockDirtyInfoList *dirty_bitmaps;
};

void qapi_free_BlockDeviceInfo(BlockDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDeviceInfo, qapi_free_BlockDeviceInfo)

struct BlockDirtyInfo {
    bool has_name;
    char *name;
    int64_t count;
    uint32_t granularity;
    bool recording;
    bool busy;
    bool persistent;
    bool has_inconsistent;
    bool inconsistent;
};

void qapi_free_BlockDirtyInfo(BlockDirtyInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyInfo, qapi_free_BlockDirtyInfo)

struct Qcow2BitmapInfoFlagsList {
    Qcow2BitmapInfoFlagsList *next;
    Qcow2BitmapInfoFlags value;
};

void qapi_free_Qcow2BitmapInfoFlagsList(Qcow2BitmapInfoFlagsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Qcow2BitmapInfoFlagsList, qapi_free_Qcow2BitmapInfoFlagsList)

struct Qcow2BitmapInfo {
    char *name;
    uint32_t granularity;
    Qcow2BitmapInfoFlagsList *flags;
};

void qapi_free_Qcow2BitmapInfo(Qcow2BitmapInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Qcow2BitmapInfo, qapi_free_Qcow2BitmapInfo)

struct BlockLatencyHistogramInfo {
    uint64List *boundaries;
    uint64List *bins;
};

void qapi_free_BlockLatencyHistogramInfo(BlockLatencyHistogramInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockLatencyHistogramInfo, qapi_free_BlockLatencyHistogramInfo)

struct BlockInfo {
    char *device;
    bool has_qdev;
    char *qdev;
    char *type;
    bool removable;
    bool locked;
    bool has_inserted;
    BlockDeviceInfo *inserted;
    bool has_tray_open;
    bool tray_open;
    bool has_io_status;
    BlockDeviceIoStatus io_status;
};

void qapi_free_BlockInfo(BlockInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockInfo, qapi_free_BlockInfo)

struct BlockMeasureInfo {
    int64_t required;
    int64_t fully_allocated;
    bool has_bitmaps;
    int64_t bitmaps;
};

void qapi_free_BlockMeasureInfo(BlockMeasureInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockMeasureInfo, qapi_free_BlockMeasureInfo)

struct BlockInfoList {
    BlockInfoList *next;
    BlockInfo *value;
};

void qapi_free_BlockInfoList(BlockInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockInfoList, qapi_free_BlockInfoList)

struct BlockDeviceTimedStats {
    int64_t interval_length;
    int64_t min_rd_latency_ns;
    int64_t max_rd_latency_ns;
    int64_t avg_rd_latency_ns;
    int64_t min_wr_latency_ns;
    int64_t max_wr_latency_ns;
    int64_t avg_wr_latency_ns;
    int64_t min_flush_latency_ns;
    int64_t max_flush_latency_ns;
    int64_t avg_flush_latency_ns;
    double avg_rd_queue_depth;
    double avg_wr_queue_depth;
};

void qapi_free_BlockDeviceTimedStats(BlockDeviceTimedStats *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDeviceTimedStats, qapi_free_BlockDeviceTimedStats)

struct BlockDeviceTimedStatsList {
    BlockDeviceTimedStatsList *next;
    BlockDeviceTimedStats *value;
};

void qapi_free_BlockDeviceTimedStatsList(BlockDeviceTimedStatsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDeviceTimedStatsList, qapi_free_BlockDeviceTimedStatsList)

struct BlockDeviceStats {
    int64_t rd_bytes;
    int64_t wr_bytes;
    int64_t unmap_bytes;
    int64_t rd_operations;
    int64_t wr_operations;
    int64_t flush_operations;
    int64_t unmap_operations;
    int64_t rd_total_time_ns;
    int64_t wr_total_time_ns;
    int64_t flush_total_time_ns;
    int64_t unmap_total_time_ns;
    int64_t wr_highest_offset;
    int64_t rd_merged;
    int64_t wr_merged;
    int64_t unmap_merged;
    bool has_idle_time_ns;
    int64_t idle_time_ns;
    int64_t failed_rd_operations;
    int64_t failed_wr_operations;
    int64_t failed_flush_operations;
    int64_t failed_unmap_operations;
    int64_t invalid_rd_operations;
    int64_t invalid_wr_operations;
    int64_t invalid_flush_operations;
    int64_t invalid_unmap_operations;
    bool account_invalid;
    bool account_failed;
    BlockDeviceTimedStatsList *timed_stats;
    bool has_rd_latency_histogram;
    BlockLatencyHistogramInfo *rd_latency_histogram;
    bool has_wr_latency_histogram;
    BlockLatencyHistogramInfo *wr_latency_histogram;
    bool has_flush_latency_histogram;
    BlockLatencyHistogramInfo *flush_latency_histogram;
};

void qapi_free_BlockDeviceStats(BlockDeviceStats *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDeviceStats, qapi_free_BlockDeviceStats)

struct BlockStatsSpecificFile {
    uint64_t discard_nb_ok;
    uint64_t discard_nb_failed;
    uint64_t discard_bytes_ok;
};

void qapi_free_BlockStatsSpecificFile(BlockStatsSpecificFile *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockStatsSpecificFile, qapi_free_BlockStatsSpecificFile)

struct BlockStatsSpecificNvme {
    uint64_t completion_errors;
    uint64_t aligned_accesses;
    uint64_t unaligned_accesses;
};

void qapi_free_BlockStatsSpecificNvme(BlockStatsSpecificNvme *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockStatsSpecificNvme, qapi_free_BlockStatsSpecificNvme)

struct q_obj_BlockStatsSpecific_base {
    BlockdevDriver driver;
};

void qapi_free_q_obj_BlockStatsSpecific_base(q_obj_BlockStatsSpecific_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BlockStatsSpecific_base, qapi_free_q_obj_BlockStatsSpecific_base)

struct BlockStatsSpecific {
    BlockdevDriver driver;
    union { /* union tag is @driver */
        BlockStatsSpecificFile file;
#if defined(HAVE_HOST_BLOCK_DEVICE)
        BlockStatsSpecificFile host_device;
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
        BlockStatsSpecificNvme nvme;
    } u;
};

void qapi_free_BlockStatsSpecific(BlockStatsSpecific *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockStatsSpecific, qapi_free_BlockStatsSpecific)

struct BlockStats {
    bool has_device;
    char *device;
    bool has_qdev;
    char *qdev;
    bool has_node_name;
    char *node_name;
    BlockDeviceStats *stats;
    bool has_driver_specific;
    BlockStatsSpecific *driver_specific;
    bool has_parent;
    BlockStats *parent;
    bool has_backing;
    BlockStats *backing;
};

void qapi_free_BlockStats(BlockStats *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockStats, qapi_free_BlockStats)

struct q_obj_query_blockstats_arg {
    bool has_query_nodes;
    bool query_nodes;
};

void qapi_free_q_obj_query_blockstats_arg(q_obj_query_blockstats_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_blockstats_arg, qapi_free_q_obj_query_blockstats_arg)

struct BlockStatsList {
    BlockStatsList *next;
    BlockStats *value;
};

void qapi_free_BlockStatsList(BlockStatsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockStatsList, qapi_free_BlockStatsList)

struct BlockJobInfo {
    char *type;
    char *device;
    int64_t len;
    int64_t offset;
    bool busy;
    bool paused;
    int64_t speed;
    BlockDeviceIoStatus io_status;
    bool ready;
    JobStatus status;
    bool auto_finalize;
    bool auto_dismiss;
    bool has_error;
    char *error;
};

void qapi_free_BlockJobInfo(BlockJobInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockJobInfo, qapi_free_BlockJobInfo)

struct BlockJobInfoList {
    BlockJobInfoList *next;
    BlockJobInfo *value;
};

void qapi_free_BlockJobInfoList(BlockJobInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockJobInfoList, qapi_free_BlockJobInfoList)

struct q_obj_block_resize_arg {
    bool has_device;
    char *device;
    bool has_node_name;
    char *node_name;
    int64_t size;
};

void qapi_free_q_obj_block_resize_arg(q_obj_block_resize_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_resize_arg, qapi_free_q_obj_block_resize_arg)

struct BlockdevSnapshotSync {
    bool has_device;
    char *device;
    bool has_node_name;
    char *node_name;
    char *snapshot_file;
    bool has_snapshot_node_name;
    char *snapshot_node_name;
    bool has_format;
    char *format;
    bool has_mode;
    NewImageMode mode;
};

void qapi_free_BlockdevSnapshotSync(BlockdevSnapshotSync *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevSnapshotSync, qapi_free_BlockdevSnapshotSync)

struct BlockdevSnapshot {
    char *node;
    char *overlay;
};

void qapi_free_BlockdevSnapshot(BlockdevSnapshot *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevSnapshot, qapi_free_BlockdevSnapshot)

struct BackupPerf {
    bool has_use_copy_range;
    bool use_copy_range;
    bool has_max_workers;
    int64_t max_workers;
    bool has_max_chunk;
    int64_t max_chunk;
};

void qapi_free_BackupPerf(BackupPerf *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BackupPerf, qapi_free_BackupPerf)

struct BackupCommon {
    bool has_job_id;
    char *job_id;
    char *device;
    MirrorSyncMode sync;
    bool has_speed;
    int64_t speed;
    bool has_bitmap;
    char *bitmap;
    bool has_bitmap_mode;
    BitmapSyncMode bitmap_mode;
    bool has_compress;
    bool compress;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
    bool has_auto_finalize;
    bool auto_finalize;
    bool has_auto_dismiss;
    bool auto_dismiss;
    bool has_filter_node_name;
    char *filter_node_name;
    bool has_x_perf;
    BackupPerf *x_perf;
};

void qapi_free_BackupCommon(BackupCommon *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BackupCommon, qapi_free_BackupCommon)

struct DriveBackup {
    /* Members inherited from BackupCommon: */
    bool has_job_id;
    char *job_id;
    char *device;
    MirrorSyncMode sync;
    bool has_speed;
    int64_t speed;
    bool has_bitmap;
    char *bitmap;
    bool has_bitmap_mode;
    BitmapSyncMode bitmap_mode;
    bool has_compress;
    bool compress;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
    bool has_auto_finalize;
    bool auto_finalize;
    bool has_auto_dismiss;
    bool auto_dismiss;
    bool has_filter_node_name;
    char *filter_node_name;
    bool has_x_perf;
    BackupPerf *x_perf;
    /* Own members: */
    char *target;
    bool has_format;
    char *format;
    bool has_mode;
    NewImageMode mode;
};

static inline BackupCommon *qapi_DriveBackup_base(const DriveBackup *obj)
{
    return (BackupCommon *)obj;
}

void qapi_free_DriveBackup(DriveBackup *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DriveBackup, qapi_free_DriveBackup)

struct BlockdevBackup {
    /* Members inherited from BackupCommon: */
    bool has_job_id;
    char *job_id;
    char *device;
    MirrorSyncMode sync;
    bool has_speed;
    int64_t speed;
    bool has_bitmap;
    char *bitmap;
    bool has_bitmap_mode;
    BitmapSyncMode bitmap_mode;
    bool has_compress;
    bool compress;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
    bool has_auto_finalize;
    bool auto_finalize;
    bool has_auto_dismiss;
    bool auto_dismiss;
    bool has_filter_node_name;
    char *filter_node_name;
    bool has_x_perf;
    BackupPerf *x_perf;
    /* Own members: */
    char *target;
};

static inline BackupCommon *qapi_BlockdevBackup_base(const BlockdevBackup *obj)
{
    return (BackupCommon *)obj;
}

void qapi_free_BlockdevBackup(BlockdevBackup *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevBackup, qapi_free_BlockdevBackup)

struct q_obj_change_backing_file_arg {
    char *device;
    char *image_node_name;
    char *backing_file;
};

void qapi_free_q_obj_change_backing_file_arg(q_obj_change_backing_file_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_change_backing_file_arg, qapi_free_q_obj_change_backing_file_arg)

struct q_obj_block_commit_arg {
    bool has_job_id;
    char *job_id;
    char *device;
    bool has_base_node;
    char *base_node;
    bool has_base;
    char *base;
    bool has_top_node;
    char *top_node;
    bool has_top;
    char *top;
    bool has_backing_file;
    char *backing_file;
    bool has_speed;
    int64_t speed;
    bool has_on_error;
    BlockdevOnError on_error;
    bool has_filter_node_name;
    char *filter_node_name;
    bool has_auto_finalize;
    bool auto_finalize;
    bool has_auto_dismiss;
    bool auto_dismiss;
};

void qapi_free_q_obj_block_commit_arg(q_obj_block_commit_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_commit_arg, qapi_free_q_obj_block_commit_arg)

struct q_obj_query_named_block_nodes_arg {
    bool has_flat;
    bool flat;
};

void qapi_free_q_obj_query_named_block_nodes_arg(q_obj_query_named_block_nodes_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_named_block_nodes_arg, qapi_free_q_obj_query_named_block_nodes_arg)

struct BlockDeviceInfoList {
    BlockDeviceInfoList *next;
    BlockDeviceInfo *value;
};

void qapi_free_BlockDeviceInfoList(BlockDeviceInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDeviceInfoList, qapi_free_BlockDeviceInfoList)

struct XDbgBlockGraphNode {
    uint64_t id;
    XDbgBlockGraphNodeType type;
    char *name;
};

void qapi_free_XDbgBlockGraphNode(XDbgBlockGraphNode *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(XDbgBlockGraphNode, qapi_free_XDbgBlockGraphNode)

struct BlockPermissionList {
    BlockPermissionList *next;
    BlockPermission value;
};

void qapi_free_BlockPermissionList(BlockPermissionList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockPermissionList, qapi_free_BlockPermissionList)

struct XDbgBlockGraphEdge {
    uint64_t parent;
    uint64_t child;
    char *name;
    BlockPermissionList *perm;
    BlockPermissionList *shared_perm;
};

void qapi_free_XDbgBlockGraphEdge(XDbgBlockGraphEdge *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(XDbgBlockGraphEdge, qapi_free_XDbgBlockGraphEdge)

struct XDbgBlockGraphNodeList {
    XDbgBlockGraphNodeList *next;
    XDbgBlockGraphNode *value;
};

void qapi_free_XDbgBlockGraphNodeList(XDbgBlockGraphNodeList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(XDbgBlockGraphNodeList, qapi_free_XDbgBlockGraphNodeList)

struct XDbgBlockGraphEdgeList {
    XDbgBlockGraphEdgeList *next;
    XDbgBlockGraphEdge *value;
};

void qapi_free_XDbgBlockGraphEdgeList(XDbgBlockGraphEdgeList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(XDbgBlockGraphEdgeList, qapi_free_XDbgBlockGraphEdgeList)

struct XDbgBlockGraph {
    XDbgBlockGraphNodeList *nodes;
    XDbgBlockGraphEdgeList *edges;
};

void qapi_free_XDbgBlockGraph(XDbgBlockGraph *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(XDbgBlockGraph, qapi_free_XDbgBlockGraph)

struct DriveMirror {
    bool has_job_id;
    char *job_id;
    char *device;
    char *target;
    bool has_format;
    char *format;
    bool has_node_name;
    char *node_name;
    bool has_replaces;
    char *replaces;
    MirrorSyncMode sync;
    bool has_mode;
    NewImageMode mode;
    bool has_speed;
    int64_t speed;
    bool has_granularity;
    uint32_t granularity;
    bool has_buf_size;
    int64_t buf_size;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
    bool has_unmap;
    bool unmap;
    bool has_copy_mode;
    MirrorCopyMode copy_mode;
    bool has_auto_finalize;
    bool auto_finalize;
    bool has_auto_dismiss;
    bool auto_dismiss;
};

void qapi_free_DriveMirror(DriveMirror *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DriveMirror, qapi_free_DriveMirror)

struct BlockDirtyBitmap {
    char *node;
    char *name;
};

void qapi_free_BlockDirtyBitmap(BlockDirtyBitmap *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmap, qapi_free_BlockDirtyBitmap)

struct BlockDirtyBitmapAdd {
    char *node;
    char *name;
    bool has_granularity;
    uint32_t granularity;
    bool has_persistent;
    bool persistent;
    bool has_disabled;
    bool disabled;
};

void qapi_free_BlockDirtyBitmapAdd(BlockDirtyBitmapAdd *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmapAdd, qapi_free_BlockDirtyBitmapAdd)

struct BlockDirtyBitmapOrStr {
    QType type;
    union { /* union tag is @type */
        char *local;
        BlockDirtyBitmap external;
    } u;
};

void qapi_free_BlockDirtyBitmapOrStr(BlockDirtyBitmapOrStr *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmapOrStr, qapi_free_BlockDirtyBitmapOrStr)

struct BlockDirtyBitmapOrStrList {
    BlockDirtyBitmapOrStrList *next;
    BlockDirtyBitmapOrStr *value;
};

void qapi_free_BlockDirtyBitmapOrStrList(BlockDirtyBitmapOrStrList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmapOrStrList, qapi_free_BlockDirtyBitmapOrStrList)

struct BlockDirtyBitmapMerge {
    char *node;
    char *target;
    BlockDirtyBitmapOrStrList *bitmaps;
};

void qapi_free_BlockDirtyBitmapMerge(BlockDirtyBitmapMerge *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmapMerge, qapi_free_BlockDirtyBitmapMerge)

struct BlockDirtyBitmapSha256 {
    char *sha256;
};

void qapi_free_BlockDirtyBitmapSha256(BlockDirtyBitmapSha256 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockDirtyBitmapSha256, qapi_free_BlockDirtyBitmapSha256)

struct q_obj_blockdev_mirror_arg {
    bool has_job_id;
    char *job_id;
    char *device;
    char *target;
    bool has_replaces;
    char *replaces;
    MirrorSyncMode sync;
    bool has_speed;
    int64_t speed;
    bool has_granularity;
    uint32_t granularity;
    bool has_buf_size;
    int64_t buf_size;
    bool has_on_source_error;
    BlockdevOnError on_source_error;
    bool has_on_target_error;
    BlockdevOnError on_target_error;
    bool has_filter_node_name;
    char *filter_node_name;
    bool has_copy_mode;
    MirrorCopyMode copy_mode;
    bool has_auto_finalize;
    bool auto_finalize;
    bool has_auto_dismiss;
    bool auto_dismiss;
};

void qapi_free_q_obj_blockdev_mirror_arg(q_obj_blockdev_mirror_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_blockdev_mirror_arg, qapi_free_q_obj_blockdev_mirror_arg)

struct BlockIOThrottle {
    bool has_device;
    char *device;
    bool has_id;
    char *id;
    int64_t bps;
    int64_t bps_rd;
    int64_t bps_wr;
    int64_t iops;
    int64_t iops_rd;
    int64_t iops_wr;
    bool has_bps_max;
    int64_t bps_max;
    bool has_bps_rd_max;
    int64_t bps_rd_max;
    bool has_bps_wr_max;
    int64_t bps_wr_max;
    bool has_iops_max;
    int64_t iops_max;
    bool has_iops_rd_max;
    int64_t iops_rd_max;
    bool has_iops_wr_max;
    int64_t iops_wr_max;
    bool has_bps_max_length;
    int64_t bps_max_length;
    bool has_bps_rd_max_length;
    int64_t bps_rd_max_length;
    bool has_bps_wr_max_length;
    int64_t bps_wr_max_length;
    bool has_iops_max_length;
    int64_t iops_max_length;
    bool has_iops_rd_max_length;
    int64_t iops_rd_max_length;
    bool has_iops_wr_max_length;
    int64_t iops_wr_max_length;
    bool has_iops_size;
    int64_t iops_size;
    bool has_group;
    char *group;
};

void qapi_free_BlockIOThrottle(BlockIOThrottle *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockIOThrottle, qapi_free_BlockIOThrottle)

struct ThrottleLimits {
    bool has_iops_total;
    int64_t iops_total;
    bool has_iops_total_max;
    int64_t iops_total_max;
    bool has_iops_total_max_length;
    int64_t iops_total_max_length;
    bool has_iops_read;
    int64_t iops_read;
    bool has_iops_read_max;
    int64_t iops_read_max;
    bool has_iops_read_max_length;
    int64_t iops_read_max_length;
    bool has_iops_write;
    int64_t iops_write;
    bool has_iops_write_max;
    int64_t iops_write_max;
    bool has_iops_write_max_length;
    int64_t iops_write_max_length;
    bool has_bps_total;
    int64_t bps_total;
    bool has_bps_total_max;
    int64_t bps_total_max;
    bool has_bps_total_max_length;
    int64_t bps_total_max_length;
    bool has_bps_read;
    int64_t bps_read;
    bool has_bps_read_max;
    int64_t bps_read_max;
    bool has_bps_read_max_length;
    int64_t bps_read_max_length;
    bool has_bps_write;
    int64_t bps_write;
    bool has_bps_write_max;
    int64_t bps_write_max;
    bool has_bps_write_max_length;
    int64_t bps_write_max_length;
    bool has_iops_size;
    int64_t iops_size;
};

void qapi_free_ThrottleLimits(ThrottleLimits *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ThrottleLimits, qapi_free_ThrottleLimits)

struct ThrottleGroupProperties {
    bool has_limits;
    ThrottleLimits *limits;
    bool has_x_iops_total;
    int64_t x_iops_total;
    bool has_x_iops_total_max;
    int64_t x_iops_total_max;
    bool has_x_iops_total_max_length;
    int64_t x_iops_total_max_length;
    bool has_x_iops_read;
    int64_t x_iops_read;
    bool has_x_iops_read_max;
    int64_t x_iops_read_max;
    bool has_x_iops_read_max_length;
    int64_t x_iops_read_max_length;
    bool has_x_iops_write;
    int64_t x_iops_write;
    bool has_x_iops_write_max;
    int64_t x_iops_write_max;
    bool has_x_iops_write_max_length;
    int64_t x_iops_write_max_length;
    bool has_x_bps_total;
    int64_t x_bps_total;
    bool has_x_bps_total_max;
    int64_t x_bps_total_max;
    bool has_x_bps_total_max_length;
    int64_t x_bps_total_max_length;
    bool has_x_bps_read;
    int64_t x_bps_read;
    bool has_x_bps_read_max;
    int64_t x_bps_read_max;
    bool has_x_bps_read_max_length;
    int64_t x_bps_read_max_length;
    bool has_x_bps_write;
    int64_t x_bps_write;
    bool has_x_bps_write_max;
    int64_t x_bps_write_max;
    bool has_x_bps_write_max_length;
    int64_t x_bps_write_max_length;
    bool has_x_iops_size;
    int64_t x_iops_size;
};

void qapi_free_ThrottleGroupProperties(ThrottleGroupProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ThrottleGroupProperties, qapi_free_ThrottleGroupProperties)

struct q_obj_block_stream_arg {
    bool has_job_id;
    char *job_id;
    char *device;
    bool has_base;
    char *base;
    bool has_base_node;
    char *base_node;
    bool has_backing_file;
    char *backing_file;
    bool has_bottom;
    char *bottom;
    bool has_speed;
    int64_t speed;
    bool has_on_error;
    BlockdevOnError on_error;
    bool has_filter_node_name;
    char *filter_node_name;
    bool has_auto_finalize;
    bool auto_finalize;
    bool has_auto_dismiss;
    bool auto_dismiss;
};

void qapi_free_q_obj_block_stream_arg(q_obj_block_stream_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_stream_arg, qapi_free_q_obj_block_stream_arg)

struct q_obj_block_job_set_speed_arg {
    char *device;
    int64_t speed;
};

void qapi_free_q_obj_block_job_set_speed_arg(q_obj_block_job_set_speed_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_job_set_speed_arg, qapi_free_q_obj_block_job_set_speed_arg)

struct q_obj_block_job_cancel_arg {
    char *device;
    bool has_force;
    bool force;
};

void qapi_free_q_obj_block_job_cancel_arg(q_obj_block_job_cancel_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_job_cancel_arg, qapi_free_q_obj_block_job_cancel_arg)

struct q_obj_block_job_pause_arg {
    char *device;
};

void qapi_free_q_obj_block_job_pause_arg(q_obj_block_job_pause_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_job_pause_arg, qapi_free_q_obj_block_job_pause_arg)

struct q_obj_block_job_resume_arg {
    char *device;
};

void qapi_free_q_obj_block_job_resume_arg(q_obj_block_job_resume_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_job_resume_arg, qapi_free_q_obj_block_job_resume_arg)

struct q_obj_block_job_complete_arg {
    char *device;
};

void qapi_free_q_obj_block_job_complete_arg(q_obj_block_job_complete_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_job_complete_arg, qapi_free_q_obj_block_job_complete_arg)

struct q_obj_block_job_dismiss_arg {
    char *id;
};

void qapi_free_q_obj_block_job_dismiss_arg(q_obj_block_job_dismiss_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_job_dismiss_arg, qapi_free_q_obj_block_job_dismiss_arg)

struct q_obj_block_job_finalize_arg {
    char *id;
};

void qapi_free_q_obj_block_job_finalize_arg(q_obj_block_job_finalize_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_job_finalize_arg, qapi_free_q_obj_block_job_finalize_arg)

struct BlockdevCacheOptions {
    bool has_direct;
    bool direct;
    bool has_no_flush;
    bool no_flush;
};

void qapi_free_BlockdevCacheOptions(BlockdevCacheOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCacheOptions, qapi_free_BlockdevCacheOptions)

struct BlockdevOptionsFile {
    char *filename;
    bool has_pr_manager;
    char *pr_manager;
    bool has_locking;
    OnOffAuto locking;
    bool has_aio;
    BlockdevAioOptions aio;
    bool has_aio_max_batch;
    int64_t aio_max_batch;
#if defined(CONFIG_LINUX)
    bool has_drop_cache;
    bool drop_cache;
#endif /* defined(CONFIG_LINUX) */
    bool has_x_check_cache_dropped;
    bool x_check_cache_dropped;
};

void qapi_free_BlockdevOptionsFile(BlockdevOptionsFile *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsFile, qapi_free_BlockdevOptionsFile)

struct BlockdevOptionsNull {
    bool has_size;
    int64_t size;
    bool has_latency_ns;
    uint64_t latency_ns;
    bool has_read_zeroes;
    bool read_zeroes;
};

void qapi_free_BlockdevOptionsNull(BlockdevOptionsNull *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsNull, qapi_free_BlockdevOptionsNull)

struct BlockdevOptionsNVMe {
    char *device;
    int64_t q_namespace;
};

void qapi_free_BlockdevOptionsNVMe(BlockdevOptionsNVMe *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsNVMe, qapi_free_BlockdevOptionsNVMe)

struct BlockdevOptionsVVFAT {
    char *dir;
    bool has_fat_type;
    int64_t fat_type;
    bool has_floppy;
    bool floppy;
    bool has_label;
    char *label;
    bool has_rw;
    bool rw;
};

void qapi_free_BlockdevOptionsVVFAT(BlockdevOptionsVVFAT *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsVVFAT, qapi_free_BlockdevOptionsVVFAT)

struct BlockdevOptionsGenericFormat {
    BlockdevRef *file;
};

void qapi_free_BlockdevOptionsGenericFormat(BlockdevOptionsGenericFormat *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsGenericFormat, qapi_free_BlockdevOptionsGenericFormat)

struct BlockdevOptionsLUKS {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    bool has_key_secret;
    char *key_secret;
};

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsLUKS_base(const BlockdevOptionsLUKS *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsLUKS(BlockdevOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsLUKS, qapi_free_BlockdevOptionsLUKS)

struct BlockdevOptionsGenericCOWFormat {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    bool has_backing;
    BlockdevRefOrNull *backing;
};

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsGenericCOWFormat_base(const BlockdevOptionsGenericCOWFormat *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsGenericCOWFormat(BlockdevOptionsGenericCOWFormat *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsGenericCOWFormat, qapi_free_BlockdevOptionsGenericCOWFormat)

struct Qcow2OverlapCheckFlags {
    bool has_q_template;
    Qcow2OverlapCheckMode q_template;
    bool has_main_header;
    bool main_header;
    bool has_active_l1;
    bool active_l1;
    bool has_active_l2;
    bool active_l2;
    bool has_refcount_table;
    bool refcount_table;
    bool has_refcount_block;
    bool refcount_block;
    bool has_snapshot_table;
    bool snapshot_table;
    bool has_inactive_l1;
    bool inactive_l1;
    bool has_inactive_l2;
    bool inactive_l2;
    bool has_bitmap_directory;
    bool bitmap_directory;
};

void qapi_free_Qcow2OverlapCheckFlags(Qcow2OverlapCheckFlags *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Qcow2OverlapCheckFlags, qapi_free_Qcow2OverlapCheckFlags)

struct Qcow2OverlapChecks {
    QType type;
    union { /* union tag is @type */
        Qcow2OverlapCheckFlags flags;
        Qcow2OverlapCheckMode mode;
    } u;
};

void qapi_free_Qcow2OverlapChecks(Qcow2OverlapChecks *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Qcow2OverlapChecks, qapi_free_Qcow2OverlapChecks)

struct q_obj_BlockdevQcowEncryption_base {
    BlockdevQcowEncryptionFormat format;
};

void qapi_free_q_obj_BlockdevQcowEncryption_base(q_obj_BlockdevQcowEncryption_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BlockdevQcowEncryption_base, qapi_free_q_obj_BlockdevQcowEncryption_base)

struct BlockdevQcowEncryption {
    BlockdevQcowEncryptionFormat format;
    union { /* union tag is @format */
        QCryptoBlockOptionsQCow aes;
    } u;
};

void qapi_free_BlockdevQcowEncryption(BlockdevQcowEncryption *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevQcowEncryption, qapi_free_BlockdevQcowEncryption)

struct BlockdevOptionsQcow {
    /* Members inherited from BlockdevOptionsGenericCOWFormat: */
    BlockdevRef *file;
    bool has_backing;
    BlockdevRefOrNull *backing;
    /* Own members: */
    bool has_encrypt;
    BlockdevQcowEncryption *encrypt;
};

static inline BlockdevOptionsGenericCOWFormat *qapi_BlockdevOptionsQcow_base(const BlockdevOptionsQcow *obj)
{
    return (BlockdevOptionsGenericCOWFormat *)obj;
}

void qapi_free_BlockdevOptionsQcow(BlockdevOptionsQcow *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsQcow, qapi_free_BlockdevOptionsQcow)

struct q_obj_BlockdevQcow2Encryption_base {
    BlockdevQcow2EncryptionFormat format;
};

void qapi_free_q_obj_BlockdevQcow2Encryption_base(q_obj_BlockdevQcow2Encryption_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BlockdevQcow2Encryption_base, qapi_free_q_obj_BlockdevQcow2Encryption_base)

struct BlockdevQcow2Encryption {
    BlockdevQcow2EncryptionFormat format;
    union { /* union tag is @format */
        QCryptoBlockOptionsQCow aes;
        QCryptoBlockOptionsLUKS luks;
    } u;
};

void qapi_free_BlockdevQcow2Encryption(BlockdevQcow2Encryption *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevQcow2Encryption, qapi_free_BlockdevQcow2Encryption)

struct BlockdevOptionsPreallocate {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    bool has_prealloc_align;
    int64_t prealloc_align;
    bool has_prealloc_size;
    int64_t prealloc_size;
};

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsPreallocate_base(const BlockdevOptionsPreallocate *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsPreallocate(BlockdevOptionsPreallocate *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsPreallocate, qapi_free_BlockdevOptionsPreallocate)

struct BlockdevOptionsQcow2 {
    /* Members inherited from BlockdevOptionsGenericCOWFormat: */
    BlockdevRef *file;
    bool has_backing;
    BlockdevRefOrNull *backing;
    /* Own members: */
    bool has_lazy_refcounts;
    bool lazy_refcounts;
    bool has_pass_discard_request;
    bool pass_discard_request;
    bool has_pass_discard_snapshot;
    bool pass_discard_snapshot;
    bool has_pass_discard_other;
    bool pass_discard_other;
    bool has_overlap_check;
    Qcow2OverlapChecks *overlap_check;
    bool has_cache_size;
    int64_t cache_size;
    bool has_l2_cache_size;
    int64_t l2_cache_size;
    bool has_l2_cache_entry_size;
    int64_t l2_cache_entry_size;
    bool has_refcount_cache_size;
    int64_t refcount_cache_size;
    bool has_cache_clean_interval;
    int64_t cache_clean_interval;
    bool has_encrypt;
    BlockdevQcow2Encryption *encrypt;
    bool has_data_file;
    BlockdevRef *data_file;
};

static inline BlockdevOptionsGenericCOWFormat *qapi_BlockdevOptionsQcow2_base(const BlockdevOptionsQcow2 *obj)
{
    return (BlockdevOptionsGenericCOWFormat *)obj;
}

void qapi_free_BlockdevOptionsQcow2(BlockdevOptionsQcow2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsQcow2, qapi_free_BlockdevOptionsQcow2)

struct SshHostKeyHash {
    SshHostKeyCheckHashType type;
    char *hash;
};

void qapi_free_SshHostKeyHash(SshHostKeyHash *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SshHostKeyHash, qapi_free_SshHostKeyHash)

struct q_obj_SshHostKeyCheck_base {
    SshHostKeyCheckMode mode;
};

void qapi_free_q_obj_SshHostKeyCheck_base(q_obj_SshHostKeyCheck_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_SshHostKeyCheck_base, qapi_free_q_obj_SshHostKeyCheck_base)

struct SshHostKeyCheck {
    SshHostKeyCheckMode mode;
    union { /* union tag is @mode */
        SshHostKeyHash hash;
    } u;
};

void qapi_free_SshHostKeyCheck(SshHostKeyCheck *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SshHostKeyCheck, qapi_free_SshHostKeyCheck)

struct BlockdevOptionsSsh {
    InetSocketAddress *server;
    char *path;
    bool has_user;
    char *user;
    bool has_host_key_check;
    SshHostKeyCheck *host_key_check;
};

void qapi_free_BlockdevOptionsSsh(BlockdevOptionsSsh *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsSsh, qapi_free_BlockdevOptionsSsh)

struct BlkdebugInjectErrorOptions {
    BlkdebugEvent event;
    bool has_state;
    int64_t state;
    bool has_iotype;
    BlkdebugIOType iotype;
    bool has_q_errno;
    int64_t q_errno;
    bool has_sector;
    int64_t sector;
    bool has_once;
    bool once;
    bool has_immediately;
    bool immediately;
};

void qapi_free_BlkdebugInjectErrorOptions(BlkdebugInjectErrorOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlkdebugInjectErrorOptions, qapi_free_BlkdebugInjectErrorOptions)

struct BlkdebugSetStateOptions {
    BlkdebugEvent event;
    bool has_state;
    int64_t state;
    int64_t new_state;
};

void qapi_free_BlkdebugSetStateOptions(BlkdebugSetStateOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlkdebugSetStateOptions, qapi_free_BlkdebugSetStateOptions)

struct BlkdebugInjectErrorOptionsList {
    BlkdebugInjectErrorOptionsList *next;
    BlkdebugInjectErrorOptions *value;
};

void qapi_free_BlkdebugInjectErrorOptionsList(BlkdebugInjectErrorOptionsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlkdebugInjectErrorOptionsList, qapi_free_BlkdebugInjectErrorOptionsList)

struct BlkdebugSetStateOptionsList {
    BlkdebugSetStateOptionsList *next;
    BlkdebugSetStateOptions *value;
};

void qapi_free_BlkdebugSetStateOptionsList(BlkdebugSetStateOptionsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlkdebugSetStateOptionsList, qapi_free_BlkdebugSetStateOptionsList)

struct BlockdevOptionsBlkdebug {
    BlockdevRef *image;
    bool has_config;
    char *config;
    bool has_align;
    int64_t align;
    bool has_max_transfer;
    int32_t max_transfer;
    bool has_opt_write_zero;
    int32_t opt_write_zero;
    bool has_max_write_zero;
    int32_t max_write_zero;
    bool has_opt_discard;
    int32_t opt_discard;
    bool has_max_discard;
    int32_t max_discard;
    bool has_inject_error;
    BlkdebugInjectErrorOptionsList *inject_error;
    bool has_set_state;
    BlkdebugSetStateOptionsList *set_state;
    bool has_take_child_perms;
    BlockPermissionList *take_child_perms;
    bool has_unshare_child_perms;
    BlockPermissionList *unshare_child_perms;
};

void qapi_free_BlockdevOptionsBlkdebug(BlockdevOptionsBlkdebug *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsBlkdebug, qapi_free_BlockdevOptionsBlkdebug)

struct BlockdevOptionsBlklogwrites {
    BlockdevRef *file;
    BlockdevRef *log;
    bool has_log_sector_size;
    uint32_t log_sector_size;
    bool has_log_append;
    bool log_append;
    bool has_log_super_update_interval;
    uint64_t log_super_update_interval;
};

void qapi_free_BlockdevOptionsBlklogwrites(BlockdevOptionsBlklogwrites *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsBlklogwrites, qapi_free_BlockdevOptionsBlklogwrites)

struct BlockdevOptionsBlkverify {
    BlockdevRef *test;
    BlockdevRef *raw;
};

void qapi_free_BlockdevOptionsBlkverify(BlockdevOptionsBlkverify *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsBlkverify, qapi_free_BlockdevOptionsBlkverify)

struct BlockdevOptionsBlkreplay {
    BlockdevRef *image;
};

void qapi_free_BlockdevOptionsBlkreplay(BlockdevOptionsBlkreplay *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsBlkreplay, qapi_free_BlockdevOptionsBlkreplay)

struct BlockdevRefList {
    BlockdevRefList *next;
    BlockdevRef *value;
};

void qapi_free_BlockdevRefList(BlockdevRefList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevRefList, qapi_free_BlockdevRefList)

struct BlockdevOptionsQuorum {
    bool has_blkverify;
    bool blkverify;
    BlockdevRefList *children;
    int64_t vote_threshold;
    bool has_rewrite_corrupted;
    bool rewrite_corrupted;
    bool has_read_pattern;
    QuorumReadPattern read_pattern;
};

void qapi_free_BlockdevOptionsQuorum(BlockdevOptionsQuorum *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsQuorum, qapi_free_BlockdevOptionsQuorum)

struct BlockdevOptionsGluster {
    char *volume;
    char *path;
    SocketAddressList *server;
    bool has_debug;
    int64_t debug;
    bool has_logfile;
    char *logfile;
};

void qapi_free_BlockdevOptionsGluster(BlockdevOptionsGluster *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsGluster, qapi_free_BlockdevOptionsGluster)

#if defined(CONFIG_BLKIO)
struct BlockdevOptionsIoUring {
    char *filename;
};
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsIoUring(BlockdevOptionsIoUring *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsIoUring, qapi_free_BlockdevOptionsIoUring)
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
struct BlockdevOptionsNvmeIoUring {
    char *path;
};
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsNvmeIoUring(BlockdevOptionsNvmeIoUring *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsNvmeIoUring, qapi_free_BlockdevOptionsNvmeIoUring)
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
struct BlockdevOptionsVirtioBlkVfioPci {
    char *path;
};
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsVirtioBlkVfioPci(BlockdevOptionsVirtioBlkVfioPci *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsVirtioBlkVfioPci, qapi_free_BlockdevOptionsVirtioBlkVfioPci)
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
struct BlockdevOptionsVirtioBlkVhostUser {
    char *path;
};
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsVirtioBlkVhostUser(BlockdevOptionsVirtioBlkVhostUser *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsVirtioBlkVhostUser, qapi_free_BlockdevOptionsVirtioBlkVhostUser)
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
struct BlockdevOptionsVirtioBlkVhostVdpa {
    char *path;
};
#endif /* defined(CONFIG_BLKIO) */

#if defined(CONFIG_BLKIO)
void qapi_free_BlockdevOptionsVirtioBlkVhostVdpa(BlockdevOptionsVirtioBlkVhostVdpa *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsVirtioBlkVhostVdpa, qapi_free_BlockdevOptionsVirtioBlkVhostVdpa)
#endif /* defined(CONFIG_BLKIO) */

struct BlockdevOptionsIscsi {
    IscsiTransport transport;
    char *portal;
    char *target;
    bool has_lun;
    int64_t lun;
    bool has_user;
    char *user;
    bool has_password_secret;
    char *password_secret;
    bool has_initiator_name;
    char *initiator_name;
    bool has_header_digest;
    IscsiHeaderDigest header_digest;
    bool has_timeout;
    int64_t timeout;
};

void qapi_free_BlockdevOptionsIscsi(BlockdevOptionsIscsi *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsIscsi, qapi_free_BlockdevOptionsIscsi)

struct RbdEncryptionOptionsLUKSBase {
    char *key_secret;
};

void qapi_free_RbdEncryptionOptionsLUKSBase(RbdEncryptionOptionsLUKSBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionOptionsLUKSBase, qapi_free_RbdEncryptionOptionsLUKSBase)

struct RbdEncryptionCreateOptionsLUKSBase {
    /* Members inherited from RbdEncryptionOptionsLUKSBase: */
    char *key_secret;
    /* Own members: */
    bool has_cipher_alg;
    QCryptoCipherAlgorithm cipher_alg;
};

static inline RbdEncryptionOptionsLUKSBase *qapi_RbdEncryptionCreateOptionsLUKSBase_base(const RbdEncryptionCreateOptionsLUKSBase *obj)
{
    return (RbdEncryptionOptionsLUKSBase *)obj;
}

void qapi_free_RbdEncryptionCreateOptionsLUKSBase(RbdEncryptionCreateOptionsLUKSBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionCreateOptionsLUKSBase, qapi_free_RbdEncryptionCreateOptionsLUKSBase)

struct RbdEncryptionOptionsLUKS {
    /* Members inherited from RbdEncryptionOptionsLUKSBase: */
    char *key_secret;
    /* Own members: */
};

static inline RbdEncryptionOptionsLUKSBase *qapi_RbdEncryptionOptionsLUKS_base(const RbdEncryptionOptionsLUKS *obj)
{
    return (RbdEncryptionOptionsLUKSBase *)obj;
}

void qapi_free_RbdEncryptionOptionsLUKS(RbdEncryptionOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionOptionsLUKS, qapi_free_RbdEncryptionOptionsLUKS)

struct RbdEncryptionOptionsLUKS2 {
    /* Members inherited from RbdEncryptionOptionsLUKSBase: */
    char *key_secret;
    /* Own members: */
};

static inline RbdEncryptionOptionsLUKSBase *qapi_RbdEncryptionOptionsLUKS2_base(const RbdEncryptionOptionsLUKS2 *obj)
{
    return (RbdEncryptionOptionsLUKSBase *)obj;
}

void qapi_free_RbdEncryptionOptionsLUKS2(RbdEncryptionOptionsLUKS2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionOptionsLUKS2, qapi_free_RbdEncryptionOptionsLUKS2)

struct RbdEncryptionOptionsLUKSAny {
    /* Members inherited from RbdEncryptionOptionsLUKSBase: */
    char *key_secret;
    /* Own members: */
};

static inline RbdEncryptionOptionsLUKSBase *qapi_RbdEncryptionOptionsLUKSAny_base(const RbdEncryptionOptionsLUKSAny *obj)
{
    return (RbdEncryptionOptionsLUKSBase *)obj;
}

void qapi_free_RbdEncryptionOptionsLUKSAny(RbdEncryptionOptionsLUKSAny *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionOptionsLUKSAny, qapi_free_RbdEncryptionOptionsLUKSAny)

struct RbdEncryptionCreateOptionsLUKS {
    /* Members inherited from RbdEncryptionCreateOptionsLUKSBase: */
    char *key_secret;
    bool has_cipher_alg;
    QCryptoCipherAlgorithm cipher_alg;
    /* Own members: */
};

static inline RbdEncryptionCreateOptionsLUKSBase *qapi_RbdEncryptionCreateOptionsLUKS_base(const RbdEncryptionCreateOptionsLUKS *obj)
{
    return (RbdEncryptionCreateOptionsLUKSBase *)obj;
}

void qapi_free_RbdEncryptionCreateOptionsLUKS(RbdEncryptionCreateOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionCreateOptionsLUKS, qapi_free_RbdEncryptionCreateOptionsLUKS)

struct RbdEncryptionCreateOptionsLUKS2 {
    /* Members inherited from RbdEncryptionCreateOptionsLUKSBase: */
    char *key_secret;
    bool has_cipher_alg;
    QCryptoCipherAlgorithm cipher_alg;
    /* Own members: */
};

static inline RbdEncryptionCreateOptionsLUKSBase *qapi_RbdEncryptionCreateOptionsLUKS2_base(const RbdEncryptionCreateOptionsLUKS2 *obj)
{
    return (RbdEncryptionCreateOptionsLUKSBase *)obj;
}

void qapi_free_RbdEncryptionCreateOptionsLUKS2(RbdEncryptionCreateOptionsLUKS2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionCreateOptionsLUKS2, qapi_free_RbdEncryptionCreateOptionsLUKS2)

struct q_obj_RbdEncryptionOptions_base {
    RbdImageEncryptionFormat format;
    bool has_parent;
    RbdEncryptionOptions *parent;
};

void qapi_free_q_obj_RbdEncryptionOptions_base(q_obj_RbdEncryptionOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_RbdEncryptionOptions_base, qapi_free_q_obj_RbdEncryptionOptions_base)

struct RbdEncryptionOptions {
    RbdImageEncryptionFormat format;
    bool has_parent;
    RbdEncryptionOptions *parent;
    union { /* union tag is @format */
        RbdEncryptionOptionsLUKS luks;
        RbdEncryptionOptionsLUKS2 luks2;
        RbdEncryptionOptionsLUKSAny luks_any;
    } u;
};

void qapi_free_RbdEncryptionOptions(RbdEncryptionOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionOptions, qapi_free_RbdEncryptionOptions)

struct q_obj_RbdEncryptionCreateOptions_base {
    RbdImageEncryptionFormat format;
};

void qapi_free_q_obj_RbdEncryptionCreateOptions_base(q_obj_RbdEncryptionCreateOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_RbdEncryptionCreateOptions_base, qapi_free_q_obj_RbdEncryptionCreateOptions_base)

struct RbdEncryptionCreateOptions {
    RbdImageEncryptionFormat format;
    union { /* union tag is @format */
        RbdEncryptionCreateOptionsLUKS luks;
        RbdEncryptionCreateOptionsLUKS2 luks2;
    } u;
};

void qapi_free_RbdEncryptionCreateOptions(RbdEncryptionCreateOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdEncryptionCreateOptions, qapi_free_RbdEncryptionCreateOptions)

struct RbdAuthModeList {
    RbdAuthModeList *next;
    RbdAuthMode value;
};

void qapi_free_RbdAuthModeList(RbdAuthModeList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RbdAuthModeList, qapi_free_RbdAuthModeList)

struct BlockdevOptionsRbd {
    char *pool;
    bool has_q_namespace;
    char *q_namespace;
    char *image;
    bool has_conf;
    char *conf;
    bool has_snapshot;
    char *snapshot;
    bool has_encrypt;
    RbdEncryptionOptions *encrypt;
    bool has_user;
    char *user;
    bool has_auth_client_required;
    RbdAuthModeList *auth_client_required;
    bool has_key_secret;
    char *key_secret;
    bool has_server;
    InetSocketAddressBaseList *server;
};

void qapi_free_BlockdevOptionsRbd(BlockdevOptionsRbd *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsRbd, qapi_free_BlockdevOptionsRbd)

#if defined(CONFIG_REPLICATION)
struct BlockdevOptionsReplication {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    ReplicationMode mode;
    bool has_top_id;
    char *top_id;
};
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsReplication_base(const BlockdevOptionsReplication *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsReplication(BlockdevOptionsReplication *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsReplication, qapi_free_BlockdevOptionsReplication)
#endif /* defined(CONFIG_REPLICATION) */

struct NFSServer {
    NFSTransport type;
    char *host;
};

void qapi_free_NFSServer(NFSServer *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NFSServer, qapi_free_NFSServer)

struct BlockdevOptionsNfs {
    NFSServer *server;
    char *path;
    bool has_user;
    int64_t user;
    bool has_group;
    int64_t group;
    bool has_tcp_syn_count;
    int64_t tcp_syn_count;
    bool has_readahead_size;
    int64_t readahead_size;
    bool has_page_cache_size;
    int64_t page_cache_size;
    bool has_debug;
    int64_t debug;
};

void qapi_free_BlockdevOptionsNfs(BlockdevOptionsNfs *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsNfs, qapi_free_BlockdevOptionsNfs)

struct BlockdevOptionsCurlBase {
    char *url;
    bool has_readahead;
    int64_t readahead;
    bool has_timeout;
    int64_t timeout;
    bool has_username;
    char *username;
    bool has_password_secret;
    char *password_secret;
    bool has_proxy_username;
    char *proxy_username;
    bool has_proxy_password_secret;
    char *proxy_password_secret;
};

void qapi_free_BlockdevOptionsCurlBase(BlockdevOptionsCurlBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsCurlBase, qapi_free_BlockdevOptionsCurlBase)

struct BlockdevOptionsCurlHttp {
    /* Members inherited from BlockdevOptionsCurlBase: */
    char *url;
    bool has_readahead;
    int64_t readahead;
    bool has_timeout;
    int64_t timeout;
    bool has_username;
    char *username;
    bool has_password_secret;
    char *password_secret;
    bool has_proxy_username;
    char *proxy_username;
    bool has_proxy_password_secret;
    char *proxy_password_secret;
    /* Own members: */
    bool has_cookie;
    char *cookie;
    bool has_cookie_secret;
    char *cookie_secret;
};

static inline BlockdevOptionsCurlBase *qapi_BlockdevOptionsCurlHttp_base(const BlockdevOptionsCurlHttp *obj)
{
    return (BlockdevOptionsCurlBase *)obj;
}

void qapi_free_BlockdevOptionsCurlHttp(BlockdevOptionsCurlHttp *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsCurlHttp, qapi_free_BlockdevOptionsCurlHttp)

struct BlockdevOptionsCurlHttps {
    /* Members inherited from BlockdevOptionsCurlBase: */
    char *url;
    bool has_readahead;
    int64_t readahead;
    bool has_timeout;
    int64_t timeout;
    bool has_username;
    char *username;
    bool has_password_secret;
    char *password_secret;
    bool has_proxy_username;
    char *proxy_username;
    bool has_proxy_password_secret;
    char *proxy_password_secret;
    /* Own members: */
    bool has_cookie;
    char *cookie;
    bool has_sslverify;
    bool sslverify;
    bool has_cookie_secret;
    char *cookie_secret;
};

static inline BlockdevOptionsCurlBase *qapi_BlockdevOptionsCurlHttps_base(const BlockdevOptionsCurlHttps *obj)
{
    return (BlockdevOptionsCurlBase *)obj;
}

void qapi_free_BlockdevOptionsCurlHttps(BlockdevOptionsCurlHttps *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsCurlHttps, qapi_free_BlockdevOptionsCurlHttps)

struct BlockdevOptionsCurlFtp {
    /* Members inherited from BlockdevOptionsCurlBase: */
    char *url;
    bool has_readahead;
    int64_t readahead;
    bool has_timeout;
    int64_t timeout;
    bool has_username;
    char *username;
    bool has_password_secret;
    char *password_secret;
    bool has_proxy_username;
    char *proxy_username;
    bool has_proxy_password_secret;
    char *proxy_password_secret;
    /* Own members: */
};

static inline BlockdevOptionsCurlBase *qapi_BlockdevOptionsCurlFtp_base(const BlockdevOptionsCurlFtp *obj)
{
    return (BlockdevOptionsCurlBase *)obj;
}

void qapi_free_BlockdevOptionsCurlFtp(BlockdevOptionsCurlFtp *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsCurlFtp, qapi_free_BlockdevOptionsCurlFtp)

struct BlockdevOptionsCurlFtps {
    /* Members inherited from BlockdevOptionsCurlBase: */
    char *url;
    bool has_readahead;
    int64_t readahead;
    bool has_timeout;
    int64_t timeout;
    bool has_username;
    char *username;
    bool has_password_secret;
    char *password_secret;
    bool has_proxy_username;
    char *proxy_username;
    bool has_proxy_password_secret;
    char *proxy_password_secret;
    /* Own members: */
    bool has_sslverify;
    bool sslverify;
};

static inline BlockdevOptionsCurlBase *qapi_BlockdevOptionsCurlFtps_base(const BlockdevOptionsCurlFtps *obj)
{
    return (BlockdevOptionsCurlBase *)obj;
}

void qapi_free_BlockdevOptionsCurlFtps(BlockdevOptionsCurlFtps *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsCurlFtps, qapi_free_BlockdevOptionsCurlFtps)

struct BlockdevOptionsNbd {
    SocketAddress *server;
    bool has_export;
    char *export;
    bool has_tls_creds;
    char *tls_creds;
    bool has_tls_hostname;
    char *tls_hostname;
    bool has_x_dirty_bitmap;
    char *x_dirty_bitmap;
    bool has_reconnect_delay;
    uint32_t reconnect_delay;
    bool has_open_timeout;
    uint32_t open_timeout;
};

void qapi_free_BlockdevOptionsNbd(BlockdevOptionsNbd *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsNbd, qapi_free_BlockdevOptionsNbd)

struct BlockdevOptionsRaw {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    bool has_offset;
    int64_t offset;
    bool has_size;
    int64_t size;
};

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsRaw_base(const BlockdevOptionsRaw *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsRaw(BlockdevOptionsRaw *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsRaw, qapi_free_BlockdevOptionsRaw)

struct BlockdevOptionsThrottle {
    char *throttle_group;
    BlockdevRef *file;
};

void qapi_free_BlockdevOptionsThrottle(BlockdevOptionsThrottle *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsThrottle, qapi_free_BlockdevOptionsThrottle)

struct BlockdevOptionsCor {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    bool has_bottom;
    char *bottom;
};

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsCor_base(const BlockdevOptionsCor *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsCor(BlockdevOptionsCor *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsCor, qapi_free_BlockdevOptionsCor)

struct BlockdevOptionsCbw {
    /* Members inherited from BlockdevOptionsGenericFormat: */
    BlockdevRef *file;
    /* Own members: */
    BlockdevRef *target;
    bool has_bitmap;
    BlockDirtyBitmap *bitmap;
    bool has_on_cbw_error;
    OnCbwError on_cbw_error;
    bool has_cbw_timeout;
    uint32_t cbw_timeout;
};

static inline BlockdevOptionsGenericFormat *qapi_BlockdevOptionsCbw_base(const BlockdevOptionsCbw *obj)
{
    return (BlockdevOptionsGenericFormat *)obj;
}

void qapi_free_BlockdevOptionsCbw(BlockdevOptionsCbw *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsCbw, qapi_free_BlockdevOptionsCbw)

struct q_obj_BlockdevOptions_base {
    BlockdevDriver driver;
    bool has_node_name;
    char *node_name;
    bool has_discard;
    BlockdevDiscardOptions discard;
    bool has_cache;
    BlockdevCacheOptions *cache;
    bool has_read_only;
    bool read_only;
    bool has_auto_read_only;
    bool auto_read_only;
    bool has_force_share;
    bool force_share;
    bool has_detect_zeroes;
    BlockdevDetectZeroesOptions detect_zeroes;
};

void qapi_free_q_obj_BlockdevOptions_base(q_obj_BlockdevOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BlockdevOptions_base, qapi_free_q_obj_BlockdevOptions_base)

struct BlockdevOptions {
    BlockdevDriver driver;
    bool has_node_name;
    char *node_name;
    bool has_discard;
    BlockdevDiscardOptions discard;
    bool has_cache;
    BlockdevCacheOptions *cache;
    bool has_read_only;
    bool read_only;
    bool has_auto_read_only;
    bool auto_read_only;
    bool has_force_share;
    bool force_share;
    bool has_detect_zeroes;
    BlockdevDetectZeroesOptions detect_zeroes;
    union { /* union tag is @driver */
        BlockdevOptionsBlkdebug blkdebug;
        BlockdevOptionsBlklogwrites blklogwrites;
        BlockdevOptionsBlkverify blkverify;
        BlockdevOptionsBlkreplay blkreplay;
        BlockdevOptionsGenericFormat bochs;
        BlockdevOptionsGenericFormat cloop;
        BlockdevOptionsGenericFormat compress;
        BlockdevOptionsCbw copy_before_write;
        BlockdevOptionsCor copy_on_read;
        BlockdevOptionsGenericFormat dmg;
        BlockdevOptionsFile file;
        BlockdevOptionsCurlFtp ftp;
        BlockdevOptionsCurlFtps ftps;
        BlockdevOptionsGluster gluster;
#if defined(HAVE_HOST_BLOCK_DEVICE)
        BlockdevOptionsFile host_cdrom;
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
#if defined(HAVE_HOST_BLOCK_DEVICE)
        BlockdevOptionsFile host_device;
#endif /* defined(HAVE_HOST_BLOCK_DEVICE) */
        BlockdevOptionsCurlHttp http;
        BlockdevOptionsCurlHttps https;
#if defined(CONFIG_BLKIO)
        BlockdevOptionsIoUring io_uring;
#endif /* defined(CONFIG_BLKIO) */
        BlockdevOptionsIscsi iscsi;
        BlockdevOptionsLUKS luks;
        BlockdevOptionsNbd nbd;
        BlockdevOptionsNfs nfs;
        BlockdevOptionsNull null_aio;
        BlockdevOptionsNull null_co;
        BlockdevOptionsNVMe nvme;
#if defined(CONFIG_BLKIO)
        BlockdevOptionsNvmeIoUring nvme_io_uring;
#endif /* defined(CONFIG_BLKIO) */
        BlockdevOptionsGenericFormat parallels;
        BlockdevOptionsPreallocate preallocate;
        BlockdevOptionsQcow2 qcow2;
        BlockdevOptionsQcow qcow;
        BlockdevOptionsGenericCOWFormat qed;
        BlockdevOptionsQuorum quorum;
        BlockdevOptionsRaw raw;
        BlockdevOptionsRbd rbd;
#if defined(CONFIG_REPLICATION)
        BlockdevOptionsReplication replication;
#endif /* defined(CONFIG_REPLICATION) */
        BlockdevOptionsGenericFormat snapshot_access;
        BlockdevOptionsSsh ssh;
        BlockdevOptionsThrottle throttle;
        BlockdevOptionsGenericFormat vdi;
        BlockdevOptionsGenericFormat vhdx;
#if defined(CONFIG_BLKIO)
        BlockdevOptionsVirtioBlkVfioPci virtio_blk_vfio_pci;
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
        BlockdevOptionsVirtioBlkVhostUser virtio_blk_vhost_user;
#endif /* defined(CONFIG_BLKIO) */
#if defined(CONFIG_BLKIO)
        BlockdevOptionsVirtioBlkVhostVdpa virtio_blk_vhost_vdpa;
#endif /* defined(CONFIG_BLKIO) */
        BlockdevOptionsGenericCOWFormat vmdk;
        BlockdevOptionsGenericFormat vpc;
        BlockdevOptionsVVFAT vvfat;
    } u;
};

void qapi_free_BlockdevOptions(BlockdevOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptions, qapi_free_BlockdevOptions)

struct BlockdevRef {
    QType type;
    union { /* union tag is @type */
        BlockdevOptions definition;
        char *reference;
    } u;
};

void qapi_free_BlockdevRef(BlockdevRef *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevRef, qapi_free_BlockdevRef)

struct BlockdevRefOrNull {
    QType type;
    union { /* union tag is @type */
        BlockdevOptions definition;
        char *reference;
        CFNullRef null;
    } u;
};

void qapi_free_BlockdevRefOrNull(BlockdevRefOrNull *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevRefOrNull, qapi_free_BlockdevRefOrNull)

struct BlockdevOptionsList {
    BlockdevOptionsList *next;
    BlockdevOptions *value;
};

void qapi_free_BlockdevOptionsList(BlockdevOptionsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevOptionsList, qapi_free_BlockdevOptionsList)

struct q_obj_blockdev_reopen_arg {
    BlockdevOptionsList *options;
};

void qapi_free_q_obj_blockdev_reopen_arg(q_obj_blockdev_reopen_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_blockdev_reopen_arg, qapi_free_q_obj_blockdev_reopen_arg)

struct q_obj_blockdev_del_arg {
    char *node_name;
};

void qapi_free_q_obj_blockdev_del_arg(q_obj_blockdev_del_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_blockdev_del_arg, qapi_free_q_obj_blockdev_del_arg)

struct BlockdevCreateOptionsFile {
    char *filename;
    uint64_t size;
    bool has_preallocation;
    PreallocMode preallocation;
    bool has_nocow;
    bool nocow;
    bool has_extent_size_hint;
    uint64_t extent_size_hint;
};

void qapi_free_BlockdevCreateOptionsFile(BlockdevCreateOptionsFile *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsFile, qapi_free_BlockdevCreateOptionsFile)

struct BlockdevCreateOptionsGluster {
    BlockdevOptionsGluster *location;
    uint64_t size;
    bool has_preallocation;
    PreallocMode preallocation;
};

void qapi_free_BlockdevCreateOptionsGluster(BlockdevCreateOptionsGluster *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsGluster, qapi_free_BlockdevCreateOptionsGluster)

struct BlockdevCreateOptionsLUKS {
    /* Members inherited from QCryptoBlockCreateOptionsLUKS: */
    bool has_key_secret;
    char *key_secret;
    bool has_cipher_alg;
    QCryptoCipherAlgorithm cipher_alg;
    bool has_cipher_mode;
    QCryptoCipherMode cipher_mode;
    bool has_ivgen_alg;
    QCryptoIVGenAlgorithm ivgen_alg;
    bool has_ivgen_hash_alg;
    QCryptoHashAlgorithm ivgen_hash_alg;
    bool has_hash_alg;
    QCryptoHashAlgorithm hash_alg;
    bool has_iter_time;
    int64_t iter_time;
    /* Own members: */
    BlockdevRef *file;
    uint64_t size;
    bool has_preallocation;
    PreallocMode preallocation;
};

static inline QCryptoBlockCreateOptionsLUKS *qapi_BlockdevCreateOptionsLUKS_base(const BlockdevCreateOptionsLUKS *obj)
{
    return (QCryptoBlockCreateOptionsLUKS *)obj;
}

void qapi_free_BlockdevCreateOptionsLUKS(BlockdevCreateOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsLUKS, qapi_free_BlockdevCreateOptionsLUKS)

struct BlockdevCreateOptionsNfs {
    BlockdevOptionsNfs *location;
    uint64_t size;
};

void qapi_free_BlockdevCreateOptionsNfs(BlockdevCreateOptionsNfs *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsNfs, qapi_free_BlockdevCreateOptionsNfs)

struct BlockdevCreateOptionsParallels {
    BlockdevRef *file;
    uint64_t size;
    bool has_cluster_size;
    uint64_t cluster_size;
};

void qapi_free_BlockdevCreateOptionsParallels(BlockdevCreateOptionsParallels *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsParallels, qapi_free_BlockdevCreateOptionsParallels)

struct BlockdevCreateOptionsQcow {
    BlockdevRef *file;
    uint64_t size;
    bool has_backing_file;
    char *backing_file;
    bool has_encrypt;
    QCryptoBlockCreateOptions *encrypt;
};

void qapi_free_BlockdevCreateOptionsQcow(BlockdevCreateOptionsQcow *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsQcow, qapi_free_BlockdevCreateOptionsQcow)

struct BlockdevCreateOptionsQcow2 {
    BlockdevRef *file;
    bool has_data_file;
    BlockdevRef *data_file;
    bool has_data_file_raw;
    bool data_file_raw;
    bool has_extended_l2;
    bool extended_l2;
    uint64_t size;
    bool has_version;
    BlockdevQcow2Version version;
    bool has_backing_file;
    char *backing_file;
    bool has_backing_fmt;
    BlockdevDriver backing_fmt;
    bool has_encrypt;
    QCryptoBlockCreateOptions *encrypt;
    bool has_cluster_size;
    uint64_t cluster_size;
    bool has_preallocation;
    PreallocMode preallocation;
    bool has_lazy_refcounts;
    bool lazy_refcounts;
    bool has_refcount_bits;
    int64_t refcount_bits;
    bool has_compression_type;
    Qcow2CompressionType compression_type;
};

void qapi_free_BlockdevCreateOptionsQcow2(BlockdevCreateOptionsQcow2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsQcow2, qapi_free_BlockdevCreateOptionsQcow2)

struct BlockdevCreateOptionsQed {
    BlockdevRef *file;
    uint64_t size;
    bool has_backing_file;
    char *backing_file;
    bool has_backing_fmt;
    BlockdevDriver backing_fmt;
    bool has_cluster_size;
    uint64_t cluster_size;
    bool has_table_size;
    int64_t table_size;
};

void qapi_free_BlockdevCreateOptionsQed(BlockdevCreateOptionsQed *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsQed, qapi_free_BlockdevCreateOptionsQed)

struct BlockdevCreateOptionsRbd {
    BlockdevOptionsRbd *location;
    uint64_t size;
    bool has_cluster_size;
    uint64_t cluster_size;
    bool has_encrypt;
    RbdEncryptionCreateOptions *encrypt;
};

void qapi_free_BlockdevCreateOptionsRbd(BlockdevCreateOptionsRbd *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsRbd, qapi_free_BlockdevCreateOptionsRbd)

struct BlockdevCreateOptionsVmdk {
    BlockdevRef *file;
    uint64_t size;
    bool has_extents;
    BlockdevRefList *extents;
    bool has_subformat;
    BlockdevVmdkSubformat subformat;
    bool has_backing_file;
    char *backing_file;
    bool has_adapter_type;
    BlockdevVmdkAdapterType adapter_type;
    bool has_hwversion;
    char *hwversion;
    bool has_toolsversion;
    char *toolsversion;
    bool has_zeroed_grain;
    bool zeroed_grain;
};

void qapi_free_BlockdevCreateOptionsVmdk(BlockdevCreateOptionsVmdk *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsVmdk, qapi_free_BlockdevCreateOptionsVmdk)

struct BlockdevCreateOptionsSsh {
    BlockdevOptionsSsh *location;
    uint64_t size;
};

void qapi_free_BlockdevCreateOptionsSsh(BlockdevCreateOptionsSsh *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsSsh, qapi_free_BlockdevCreateOptionsSsh)

struct BlockdevCreateOptionsVdi {
    BlockdevRef *file;
    uint64_t size;
    bool has_preallocation;
    PreallocMode preallocation;
};

void qapi_free_BlockdevCreateOptionsVdi(BlockdevCreateOptionsVdi *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsVdi, qapi_free_BlockdevCreateOptionsVdi)

struct BlockdevCreateOptionsVhdx {
    BlockdevRef *file;
    uint64_t size;
    bool has_log_size;
    uint64_t log_size;
    bool has_block_size;
    uint64_t block_size;
    bool has_subformat;
    BlockdevVhdxSubformat subformat;
    bool has_block_state_zero;
    bool block_state_zero;
};

void qapi_free_BlockdevCreateOptionsVhdx(BlockdevCreateOptionsVhdx *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsVhdx, qapi_free_BlockdevCreateOptionsVhdx)

struct BlockdevCreateOptionsVpc {
    BlockdevRef *file;
    uint64_t size;
    bool has_subformat;
    BlockdevVpcSubformat subformat;
    bool has_force_size;
    bool force_size;
};

void qapi_free_BlockdevCreateOptionsVpc(BlockdevCreateOptionsVpc *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptionsVpc, qapi_free_BlockdevCreateOptionsVpc)

struct q_obj_BlockdevCreateOptions_base {
    BlockdevDriver driver;
};

void qapi_free_q_obj_BlockdevCreateOptions_base(q_obj_BlockdevCreateOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BlockdevCreateOptions_base, qapi_free_q_obj_BlockdevCreateOptions_base)

struct BlockdevCreateOptions {
    BlockdevDriver driver;
    union { /* union tag is @driver */
        BlockdevCreateOptionsFile file;
        BlockdevCreateOptionsGluster gluster;
        BlockdevCreateOptionsLUKS luks;
        BlockdevCreateOptionsNfs nfs;
        BlockdevCreateOptionsParallels parallels;
        BlockdevCreateOptionsQcow qcow;
        BlockdevCreateOptionsQcow2 qcow2;
        BlockdevCreateOptionsQed qed;
        BlockdevCreateOptionsRbd rbd;
        BlockdevCreateOptionsSsh ssh;
        BlockdevCreateOptionsVdi vdi;
        BlockdevCreateOptionsVhdx vhdx;
        BlockdevCreateOptionsVmdk vmdk;
        BlockdevCreateOptionsVpc vpc;
    } u;
};

void qapi_free_BlockdevCreateOptions(BlockdevCreateOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevCreateOptions, qapi_free_BlockdevCreateOptions)

struct q_obj_blockdev_create_arg {
    char *job_id;
    BlockdevCreateOptions *options;
};

void qapi_free_q_obj_blockdev_create_arg(q_obj_blockdev_create_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_blockdev_create_arg, qapi_free_q_obj_blockdev_create_arg)

struct BlockdevAmendOptionsLUKS {
    /* Members inherited from QCryptoBlockAmendOptionsLUKS: */
    QCryptoBlockLUKSKeyslotState state;
    bool has_new_secret;
    char *new_secret;
    bool has_old_secret;
    char *old_secret;
    bool has_keyslot;
    int64_t keyslot;
    bool has_iter_time;
    int64_t iter_time;
    bool has_secret;
    char *secret;
    /* Own members: */
};

static inline QCryptoBlockAmendOptionsLUKS *qapi_BlockdevAmendOptionsLUKS_base(const BlockdevAmendOptionsLUKS *obj)
{
    return (QCryptoBlockAmendOptionsLUKS *)obj;
}

void qapi_free_BlockdevAmendOptionsLUKS(BlockdevAmendOptionsLUKS *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevAmendOptionsLUKS, qapi_free_BlockdevAmendOptionsLUKS)

struct BlockdevAmendOptionsQcow2 {
    bool has_encrypt;
    QCryptoBlockAmendOptions *encrypt;
};

void qapi_free_BlockdevAmendOptionsQcow2(BlockdevAmendOptionsQcow2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevAmendOptionsQcow2, qapi_free_BlockdevAmendOptionsQcow2)

struct q_obj_BlockdevAmendOptions_base {
    BlockdevDriver driver;
};

void qapi_free_q_obj_BlockdevAmendOptions_base(q_obj_BlockdevAmendOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BlockdevAmendOptions_base, qapi_free_q_obj_BlockdevAmendOptions_base)

struct BlockdevAmendOptions {
    BlockdevDriver driver;
    union { /* union tag is @driver */
        BlockdevAmendOptionsLUKS luks;
        BlockdevAmendOptionsQcow2 qcow2;
    } u;
};

void qapi_free_BlockdevAmendOptions(BlockdevAmendOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevAmendOptions, qapi_free_BlockdevAmendOptions)

struct q_obj_x_blockdev_amend_arg {
    char *job_id;
    char *node_name;
    BlockdevAmendOptions *options;
    bool has_force;
    bool force;
};

void qapi_free_q_obj_x_blockdev_amend_arg(q_obj_x_blockdev_amend_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_x_blockdev_amend_arg, qapi_free_q_obj_x_blockdev_amend_arg)

struct q_obj_BLOCK_IMAGE_CORRUPTED_arg {
    char *device;
    bool has_node_name;
    char *node_name;
    char *msg;
    bool has_offset;
    int64_t offset;
    bool has_size;
    int64_t size;
    bool fatal;
};

void qapi_free_q_obj_BLOCK_IMAGE_CORRUPTED_arg(q_obj_BLOCK_IMAGE_CORRUPTED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_IMAGE_CORRUPTED_arg, qapi_free_q_obj_BLOCK_IMAGE_CORRUPTED_arg)

struct q_obj_BLOCK_IO_ERROR_arg {
    char *device;
    bool has_node_name;
    char *node_name;
    IoOperationType operation;
    BlockErrorAction action;
    bool has_nospace;
    bool nospace;
    char *reason;
};

void qapi_free_q_obj_BLOCK_IO_ERROR_arg(q_obj_BLOCK_IO_ERROR_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_IO_ERROR_arg, qapi_free_q_obj_BLOCK_IO_ERROR_arg)

struct q_obj_BLOCK_JOB_COMPLETED_arg {
    JobType type;
    char *device;
    int64_t len;
    int64_t offset;
    int64_t speed;
    bool has_error;
    char *error;
};

void qapi_free_q_obj_BLOCK_JOB_COMPLETED_arg(q_obj_BLOCK_JOB_COMPLETED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_JOB_COMPLETED_arg, qapi_free_q_obj_BLOCK_JOB_COMPLETED_arg)

struct q_obj_BLOCK_JOB_CANCELLED_arg {
    JobType type;
    char *device;
    int64_t len;
    int64_t offset;
    int64_t speed;
};

void qapi_free_q_obj_BLOCK_JOB_CANCELLED_arg(q_obj_BLOCK_JOB_CANCELLED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_JOB_CANCELLED_arg, qapi_free_q_obj_BLOCK_JOB_CANCELLED_arg)

struct q_obj_BLOCK_JOB_ERROR_arg {
    char *device;
    IoOperationType operation;
    BlockErrorAction action;
};

void qapi_free_q_obj_BLOCK_JOB_ERROR_arg(q_obj_BLOCK_JOB_ERROR_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_JOB_ERROR_arg, qapi_free_q_obj_BLOCK_JOB_ERROR_arg)

struct q_obj_BLOCK_JOB_READY_arg {
    JobType type;
    char *device;
    int64_t len;
    int64_t offset;
    int64_t speed;
};

void qapi_free_q_obj_BLOCK_JOB_READY_arg(q_obj_BLOCK_JOB_READY_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_JOB_READY_arg, qapi_free_q_obj_BLOCK_JOB_READY_arg)

struct q_obj_BLOCK_JOB_PENDING_arg {
    JobType type;
    char *id;
};

void qapi_free_q_obj_BLOCK_JOB_PENDING_arg(q_obj_BLOCK_JOB_PENDING_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_JOB_PENDING_arg, qapi_free_q_obj_BLOCK_JOB_PENDING_arg)

struct q_obj_BLOCK_WRITE_THRESHOLD_arg {
    char *node_name;
    uint64_t amount_exceeded;
    uint64_t write_threshold;
};

void qapi_free_q_obj_BLOCK_WRITE_THRESHOLD_arg(q_obj_BLOCK_WRITE_THRESHOLD_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_BLOCK_WRITE_THRESHOLD_arg, qapi_free_q_obj_BLOCK_WRITE_THRESHOLD_arg)

struct q_obj_block_set_write_threshold_arg {
    char *node_name;
    uint64_t write_threshold;
};

void qapi_free_q_obj_block_set_write_threshold_arg(q_obj_block_set_write_threshold_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_block_set_write_threshold_arg, qapi_free_q_obj_block_set_write_threshold_arg)

struct q_obj_x_blockdev_change_arg {
    char *parent;
    bool has_child;
    char *child;
    bool has_node;
    char *node;
};

void qapi_free_q_obj_x_blockdev_change_arg(q_obj_x_blockdev_change_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_x_blockdev_change_arg, qapi_free_q_obj_x_blockdev_change_arg)

struct q_obj_x_blockdev_set_iothread_arg {
    char *node_name;
    StrOrNull *iothread;
    bool has_force;
    bool force;
};

void qapi_free_q_obj_x_blockdev_set_iothread_arg(q_obj_x_blockdev_set_iothread_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_x_blockdev_set_iothread_arg, qapi_free_q_obj_x_blockdev_set_iothread_arg)

struct q_obj_QUORUM_FAILURE_arg {
    char *reference;
    int64_t sector_num;
    int64_t sectors_count;
};

void qapi_free_q_obj_QUORUM_FAILURE_arg(q_obj_QUORUM_FAILURE_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_QUORUM_FAILURE_arg, qapi_free_q_obj_QUORUM_FAILURE_arg)

struct q_obj_QUORUM_REPORT_BAD_arg {
    QuorumOpType type;
    bool has_error;
    char *error;
    char *node_name;
    int64_t sector_num;
    int64_t sectors_count;
};

void qapi_free_q_obj_QUORUM_REPORT_BAD_arg(q_obj_QUORUM_REPORT_BAD_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_QUORUM_REPORT_BAD_arg, qapi_free_q_obj_QUORUM_REPORT_BAD_arg)

struct BlockdevSnapshotInternal {
    char *device;
    char *name;
};

void qapi_free_BlockdevSnapshotInternal(BlockdevSnapshotInternal *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockdevSnapshotInternal, qapi_free_BlockdevSnapshotInternal)

struct q_obj_blockdev_snapshot_delete_internal_sync_arg {
    char *device;
    bool has_id;
    char *id;
    bool has_name;
    char *name;
};

void qapi_free_q_obj_blockdev_snapshot_delete_internal_sync_arg(q_obj_blockdev_snapshot_delete_internal_sync_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_blockdev_snapshot_delete_internal_sync_arg, qapi_free_q_obj_blockdev_snapshot_delete_internal_sync_arg)

struct BlockGraphInfoList {
    BlockGraphInfoList *next;
    BlockGraphInfo *value;
};

void qapi_free_BlockGraphInfoList(BlockGraphInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(BlockGraphInfoList, qapi_free_BlockGraphInfoList)

struct DummyBlockCoreForceArrays {
    BlockGraphInfoList *unused_block_graph_info;
};

void qapi_free_DummyBlockCoreForceArrays(DummyBlockCoreForceArrays *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DummyBlockCoreForceArrays, qapi_free_DummyBlockCoreForceArrays)

#endif /* QAPI_TYPES_BLOCK_CORE_H */
