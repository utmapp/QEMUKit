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

#ifndef QAPI_TYPES_QOM_H
#define QAPI_TYPES_QOM_H

#include "qapi-builtin-types.h"
#include "qapi-types-authz.h"
#include "qapi-types-block-core.h"
#include "qapi-types-common.h"
#include "qapi-types-crypto.h"

typedef struct ObjectPropertyInfo ObjectPropertyInfo;

typedef struct q_obj_qom_list_arg q_obj_qom_list_arg;

typedef struct ObjectPropertyInfoList ObjectPropertyInfoList;

typedef struct q_obj_qom_get_arg q_obj_qom_get_arg;

typedef struct q_obj_qom_set_arg q_obj_qom_set_arg;

typedef struct ObjectTypeInfo ObjectTypeInfo;

typedef struct q_obj_qom_list_types_arg q_obj_qom_list_types_arg;

typedef struct ObjectTypeInfoList ObjectTypeInfoList;

typedef struct q_obj_qom_list_properties_arg q_obj_qom_list_properties_arg;

typedef struct CanHostSocketcanProperties CanHostSocketcanProperties;

typedef struct ColoCompareProperties ColoCompareProperties;

typedef struct CryptodevBackendProperties CryptodevBackendProperties;

typedef struct CryptodevVhostUserProperties CryptodevVhostUserProperties;

typedef struct DBusVMStateProperties DBusVMStateProperties;

typedef enum NetfilterInsert {
    NETFILTER_INSERT_BEFORE,
    NETFILTER_INSERT_BEHIND,
    NETFILTER_INSERT__MAX,
} NetfilterInsert;

#define NetfilterInsert_str(val) \
    qapi_enum_lookup(&NetfilterInsert_lookup, (val))

extern const QEnumLookup NetfilterInsert_lookup;

typedef struct NetfilterProperties NetfilterProperties;

typedef struct FilterBufferProperties FilterBufferProperties;

typedef struct FilterDumpProperties FilterDumpProperties;

typedef struct FilterMirrorProperties FilterMirrorProperties;

typedef struct FilterRedirectorProperties FilterRedirectorProperties;

typedef struct FilterRewriterProperties FilterRewriterProperties;

typedef struct InputBarrierProperties InputBarrierProperties;

typedef struct InputLinuxProperties InputLinuxProperties;

typedef struct EventLoopBaseProperties EventLoopBaseProperties;

typedef struct IothreadProperties IothreadProperties;

typedef struct MainLoopProperties MainLoopProperties;

typedef struct MemoryBackendProperties MemoryBackendProperties;

typedef struct MemoryBackendFileProperties MemoryBackendFileProperties;

typedef struct MemoryBackendMemfdProperties MemoryBackendMemfdProperties;

typedef struct MemoryBackendEpcProperties MemoryBackendEpcProperties;

typedef struct PrManagerHelperProperties PrManagerHelperProperties;

typedef struct QtestProperties QtestProperties;

typedef struct RemoteObjectProperties RemoteObjectProperties;

typedef struct VfioUserServerProperties VfioUserServerProperties;

typedef struct RngProperties RngProperties;

typedef struct RngEgdProperties RngEgdProperties;

typedef struct RngRandomProperties RngRandomProperties;

typedef struct SevGuestProperties SevGuestProperties;

typedef struct ThreadContextProperties ThreadContextProperties;

typedef enum ObjectType {
    OBJECT_TYPE_AUTHZ_LIST,
    OBJECT_TYPE_AUTHZ_LISTFILE,
    OBJECT_TYPE_AUTHZ_PAM,
    OBJECT_TYPE_AUTHZ_SIMPLE,
    OBJECT_TYPE_CAN_BUS,
#if defined(CONFIG_LINUX)
    OBJECT_TYPE_CAN_HOST_SOCKETCAN,
#endif /* defined(CONFIG_LINUX) */
    OBJECT_TYPE_COLO_COMPARE,
    OBJECT_TYPE_CRYPTODEV_BACKEND,
    OBJECT_TYPE_CRYPTODEV_BACKEND_BUILTIN,
    OBJECT_TYPE_CRYPTODEV_BACKEND_LKCF,
#if defined(CONFIG_VHOST_CRYPTO)
    OBJECT_TYPE_CRYPTODEV_VHOST_USER,
#endif /* defined(CONFIG_VHOST_CRYPTO) */
    OBJECT_TYPE_DBUS_VMSTATE,
    OBJECT_TYPE_FILTER_BUFFER,
    OBJECT_TYPE_FILTER_DUMP,
    OBJECT_TYPE_FILTER_MIRROR,
    OBJECT_TYPE_FILTER_REDIRECTOR,
    OBJECT_TYPE_FILTER_REPLAY,
    OBJECT_TYPE_FILTER_REWRITER,
    OBJECT_TYPE_INPUT_BARRIER,
#if defined(CONFIG_LINUX)
    OBJECT_TYPE_INPUT_LINUX,
#endif /* defined(CONFIG_LINUX) */
    OBJECT_TYPE_IOTHREAD,
    OBJECT_TYPE_MAIN_LOOP,
#if defined(CONFIG_LINUX)
    OBJECT_TYPE_MEMORY_BACKEND_EPC,
#endif /* defined(CONFIG_LINUX) */
    OBJECT_TYPE_MEMORY_BACKEND_FILE,
#if defined(CONFIG_LINUX)
    OBJECT_TYPE_MEMORY_BACKEND_MEMFD,
#endif /* defined(CONFIG_LINUX) */
    OBJECT_TYPE_MEMORY_BACKEND_RAM,
    OBJECT_TYPE_PEF_GUEST,
#if defined(CONFIG_LINUX)
    OBJECT_TYPE_PR_MANAGER_HELPER,
#endif /* defined(CONFIG_LINUX) */
    OBJECT_TYPE_QTEST,
    OBJECT_TYPE_RNG_BUILTIN,
    OBJECT_TYPE_RNG_EGD,
#if defined(CONFIG_POSIX)
    OBJECT_TYPE_RNG_RANDOM,
#endif /* defined(CONFIG_POSIX) */
    OBJECT_TYPE_SECRET,
#if defined(CONFIG_SECRET_KEYRING)
    OBJECT_TYPE_SECRET_KEYRING,
#endif /* defined(CONFIG_SECRET_KEYRING) */
    OBJECT_TYPE_SEV_GUEST,
    OBJECT_TYPE_THREAD_CONTEXT,
    OBJECT_TYPE_S390_PV_GUEST,
    OBJECT_TYPE_THROTTLE_GROUP,
    OBJECT_TYPE_TLS_CREDS_ANON,
    OBJECT_TYPE_TLS_CREDS_PSK,
    OBJECT_TYPE_TLS_CREDS_X509,
    OBJECT_TYPE_TLS_CIPHER_SUITES,
    OBJECT_TYPE_X_REMOTE_OBJECT,
    OBJECT_TYPE_X_VFIO_USER_SERVER,
    OBJECT_TYPE__MAX,
} ObjectType;

#define ObjectType_str(val) \
    qapi_enum_lookup(&ObjectType_lookup, (val))

extern const QEnumLookup ObjectType_lookup;

typedef struct q_obj_ObjectOptions_base q_obj_ObjectOptions_base;

typedef struct ObjectOptions ObjectOptions;

typedef struct q_obj_object_del_arg q_obj_object_del_arg;

struct ObjectPropertyInfo {
    char *name;
    char *type;
    bool has_description;
    char *description;
    bool has_default_value;
    CFTypeRef default_value;
};

void qapi_free_ObjectPropertyInfo(ObjectPropertyInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectPropertyInfo, qapi_free_ObjectPropertyInfo)

struct q_obj_qom_list_arg {
    char *path;
};

void qapi_free_q_obj_qom_list_arg(q_obj_qom_list_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_qom_list_arg, qapi_free_q_obj_qom_list_arg)

struct ObjectPropertyInfoList {
    ObjectPropertyInfoList *next;
    ObjectPropertyInfo *value;
};

void qapi_free_ObjectPropertyInfoList(ObjectPropertyInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectPropertyInfoList, qapi_free_ObjectPropertyInfoList)

struct q_obj_qom_get_arg {
    char *path;
    char *property;
};

void qapi_free_q_obj_qom_get_arg(q_obj_qom_get_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_qom_get_arg, qapi_free_q_obj_qom_get_arg)

struct q_obj_qom_set_arg {
    char *path;
    char *property;
    CFTypeRef value;
};

void qapi_free_q_obj_qom_set_arg(q_obj_qom_set_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_qom_set_arg, qapi_free_q_obj_qom_set_arg)

struct ObjectTypeInfo {
    char *name;
    bool has_abstract;
    bool abstract;
    bool has_parent;
    char *parent;
};

void qapi_free_ObjectTypeInfo(ObjectTypeInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectTypeInfo, qapi_free_ObjectTypeInfo)

struct q_obj_qom_list_types_arg {
    bool has_implements;
    char *implements;
    bool has_abstract;
    bool abstract;
};

void qapi_free_q_obj_qom_list_types_arg(q_obj_qom_list_types_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_qom_list_types_arg, qapi_free_q_obj_qom_list_types_arg)

struct ObjectTypeInfoList {
    ObjectTypeInfoList *next;
    ObjectTypeInfo *value;
};

void qapi_free_ObjectTypeInfoList(ObjectTypeInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectTypeInfoList, qapi_free_ObjectTypeInfoList)

struct q_obj_qom_list_properties_arg {
    char *q_typename;
};

void qapi_free_q_obj_qom_list_properties_arg(q_obj_qom_list_properties_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_qom_list_properties_arg, qapi_free_q_obj_qom_list_properties_arg)

struct CanHostSocketcanProperties {
    char *q_if;
    char *canbus;
};

void qapi_free_CanHostSocketcanProperties(CanHostSocketcanProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CanHostSocketcanProperties, qapi_free_CanHostSocketcanProperties)

struct ColoCompareProperties {
    char *primary_in;
    char *secondary_in;
    char *outdev;
    char *iothread;
    bool has_notify_dev;
    char *notify_dev;
    bool has_compare_timeout;
    uint64_t compare_timeout;
    bool has_expired_scan_cycle;
    uint32_t expired_scan_cycle;
    bool has_max_queue_size;
    uint32_t max_queue_size;
    bool has_vnet_hdr_support;
    bool vnet_hdr_support;
};

void qapi_free_ColoCompareProperties(ColoCompareProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ColoCompareProperties, qapi_free_ColoCompareProperties)

struct CryptodevBackendProperties {
    bool has_queues;
    uint32_t queues;
    bool has_throttle_bps;
    uint64_t throttle_bps;
    bool has_throttle_ops;
    uint64_t throttle_ops;
};

void qapi_free_CryptodevBackendProperties(CryptodevBackendProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CryptodevBackendProperties, qapi_free_CryptodevBackendProperties)

struct CryptodevVhostUserProperties {
    /* Members inherited from CryptodevBackendProperties: */
    bool has_queues;
    uint32_t queues;
    bool has_throttle_bps;
    uint64_t throttle_bps;
    bool has_throttle_ops;
    uint64_t throttle_ops;
    /* Own members: */
    char *chardev;
};

static inline CryptodevBackendProperties *qapi_CryptodevVhostUserProperties_base(const CryptodevVhostUserProperties *obj)
{
    return (CryptodevBackendProperties *)obj;
}

void qapi_free_CryptodevVhostUserProperties(CryptodevVhostUserProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CryptodevVhostUserProperties, qapi_free_CryptodevVhostUserProperties)

struct DBusVMStateProperties {
    char *addr;
    bool has_id_list;
    char *id_list;
};

void qapi_free_DBusVMStateProperties(DBusVMStateProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(DBusVMStateProperties, qapi_free_DBusVMStateProperties)

struct NetfilterProperties {
    char *netdev;
    bool has_queue;
    NetFilterDirection queue;
    bool has_status;
    char *status;
    bool has_position;
    char *position;
    bool has_insert;
    NetfilterInsert insert;
};

void qapi_free_NetfilterProperties(NetfilterProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetfilterProperties, qapi_free_NetfilterProperties)

struct FilterBufferProperties {
    /* Members inherited from NetfilterProperties: */
    char *netdev;
    bool has_queue;
    NetFilterDirection queue;
    bool has_status;
    char *status;
    bool has_position;
    char *position;
    bool has_insert;
    NetfilterInsert insert;
    /* Own members: */
    uint32_t interval;
};

static inline NetfilterProperties *qapi_FilterBufferProperties_base(const FilterBufferProperties *obj)
{
    return (NetfilterProperties *)obj;
}

void qapi_free_FilterBufferProperties(FilterBufferProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FilterBufferProperties, qapi_free_FilterBufferProperties)

struct FilterDumpProperties {
    /* Members inherited from NetfilterProperties: */
    char *netdev;
    bool has_queue;
    NetFilterDirection queue;
    bool has_status;
    char *status;
    bool has_position;
    char *position;
    bool has_insert;
    NetfilterInsert insert;
    /* Own members: */
    char *file;
    bool has_maxlen;
    uint32_t maxlen;
};

static inline NetfilterProperties *qapi_FilterDumpProperties_base(const FilterDumpProperties *obj)
{
    return (NetfilterProperties *)obj;
}

void qapi_free_FilterDumpProperties(FilterDumpProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FilterDumpProperties, qapi_free_FilterDumpProperties)

struct FilterMirrorProperties {
    /* Members inherited from NetfilterProperties: */
    char *netdev;
    bool has_queue;
    NetFilterDirection queue;
    bool has_status;
    char *status;
    bool has_position;
    char *position;
    bool has_insert;
    NetfilterInsert insert;
    /* Own members: */
    char *outdev;
    bool has_vnet_hdr_support;
    bool vnet_hdr_support;
};

static inline NetfilterProperties *qapi_FilterMirrorProperties_base(const FilterMirrorProperties *obj)
{
    return (NetfilterProperties *)obj;
}

void qapi_free_FilterMirrorProperties(FilterMirrorProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FilterMirrorProperties, qapi_free_FilterMirrorProperties)

struct FilterRedirectorProperties {
    /* Members inherited from NetfilterProperties: */
    char *netdev;
    bool has_queue;
    NetFilterDirection queue;
    bool has_status;
    char *status;
    bool has_position;
    char *position;
    bool has_insert;
    NetfilterInsert insert;
    /* Own members: */
    bool has_indev;
    char *indev;
    bool has_outdev;
    char *outdev;
    bool has_vnet_hdr_support;
    bool vnet_hdr_support;
};

static inline NetfilterProperties *qapi_FilterRedirectorProperties_base(const FilterRedirectorProperties *obj)
{
    return (NetfilterProperties *)obj;
}

void qapi_free_FilterRedirectorProperties(FilterRedirectorProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FilterRedirectorProperties, qapi_free_FilterRedirectorProperties)

struct FilterRewriterProperties {
    /* Members inherited from NetfilterProperties: */
    char *netdev;
    bool has_queue;
    NetFilterDirection queue;
    bool has_status;
    char *status;
    bool has_position;
    char *position;
    bool has_insert;
    NetfilterInsert insert;
    /* Own members: */
    bool has_vnet_hdr_support;
    bool vnet_hdr_support;
};

static inline NetfilterProperties *qapi_FilterRewriterProperties_base(const FilterRewriterProperties *obj)
{
    return (NetfilterProperties *)obj;
}

void qapi_free_FilterRewriterProperties(FilterRewriterProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FilterRewriterProperties, qapi_free_FilterRewriterProperties)

struct InputBarrierProperties {
    char *name;
    bool has_server;
    char *server;
    bool has_port;
    char *port;
    bool has_x_origin;
    char *x_origin;
    bool has_y_origin;
    char *y_origin;
    bool has_width;
    char *width;
    bool has_height;
    char *height;
};

void qapi_free_InputBarrierProperties(InputBarrierProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputBarrierProperties, qapi_free_InputBarrierProperties)

struct InputLinuxProperties {
    char *evdev;
    bool has_grab_all;
    bool grab_all;
    bool has_repeat;
    bool repeat;
    bool has_grab_toggle;
    GrabToggleKeys grab_toggle;
};

void qapi_free_InputLinuxProperties(InputLinuxProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(InputLinuxProperties, qapi_free_InputLinuxProperties)

struct EventLoopBaseProperties {
    bool has_aio_max_batch;
    int64_t aio_max_batch;
    bool has_thread_pool_min;
    int64_t thread_pool_min;
    bool has_thread_pool_max;
    int64_t thread_pool_max;
};

void qapi_free_EventLoopBaseProperties(EventLoopBaseProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(EventLoopBaseProperties, qapi_free_EventLoopBaseProperties)

struct IothreadProperties {
    /* Members inherited from EventLoopBaseProperties: */
    bool has_aio_max_batch;
    int64_t aio_max_batch;
    bool has_thread_pool_min;
    int64_t thread_pool_min;
    bool has_thread_pool_max;
    int64_t thread_pool_max;
    /* Own members: */
    bool has_poll_max_ns;
    int64_t poll_max_ns;
    bool has_poll_grow;
    int64_t poll_grow;
    bool has_poll_shrink;
    int64_t poll_shrink;
};

static inline EventLoopBaseProperties *qapi_IothreadProperties_base(const IothreadProperties *obj)
{
    return (EventLoopBaseProperties *)obj;
}

void qapi_free_IothreadProperties(IothreadProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(IothreadProperties, qapi_free_IothreadProperties)

struct MainLoopProperties {
    /* Members inherited from EventLoopBaseProperties: */
    bool has_aio_max_batch;
    int64_t aio_max_batch;
    bool has_thread_pool_min;
    int64_t thread_pool_min;
    bool has_thread_pool_max;
    int64_t thread_pool_max;
    /* Own members: */
};

static inline EventLoopBaseProperties *qapi_MainLoopProperties_base(const MainLoopProperties *obj)
{
    return (EventLoopBaseProperties *)obj;
}

void qapi_free_MainLoopProperties(MainLoopProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MainLoopProperties, qapi_free_MainLoopProperties)

struct MemoryBackendProperties {
    bool has_dump;
    bool dump;
    bool has_host_nodes;
    uint16List *host_nodes;
    bool has_merge;
    bool merge;
    bool has_policy;
    HostMemPolicy policy;
    bool has_prealloc;
    bool prealloc;
    bool has_prealloc_threads;
    uint32_t prealloc_threads;
    bool has_prealloc_context;
    char *prealloc_context;
    bool has_share;
    bool share;
    bool has_reserve;
    bool reserve;
    uint64_t size;
    bool has_x_use_canonical_path_for_ramblock_id;
    bool x_use_canonical_path_for_ramblock_id;
};

void qapi_free_MemoryBackendProperties(MemoryBackendProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemoryBackendProperties, qapi_free_MemoryBackendProperties)

struct MemoryBackendFileProperties {
    /* Members inherited from MemoryBackendProperties: */
    bool has_dump;
    bool dump;
    bool has_host_nodes;
    uint16List *host_nodes;
    bool has_merge;
    bool merge;
    bool has_policy;
    HostMemPolicy policy;
    bool has_prealloc;
    bool prealloc;
    bool has_prealloc_threads;
    uint32_t prealloc_threads;
    bool has_prealloc_context;
    char *prealloc_context;
    bool has_share;
    bool share;
    bool has_reserve;
    bool reserve;
    uint64_t size;
    bool has_x_use_canonical_path_for_ramblock_id;
    bool x_use_canonical_path_for_ramblock_id;
    /* Own members: */
    bool has_align;
    uint64_t align;
    bool has_discard_data;
    bool discard_data;
    char *mem_path;
#if defined(CONFIG_LIBPMEM)
    bool has_pmem;
    bool pmem;
#endif /* defined(CONFIG_LIBPMEM) */
    bool has_readonly;
    bool readonly;
};

static inline MemoryBackendProperties *qapi_MemoryBackendFileProperties_base(const MemoryBackendFileProperties *obj)
{
    return (MemoryBackendProperties *)obj;
}

void qapi_free_MemoryBackendFileProperties(MemoryBackendFileProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemoryBackendFileProperties, qapi_free_MemoryBackendFileProperties)

struct MemoryBackendMemfdProperties {
    /* Members inherited from MemoryBackendProperties: */
    bool has_dump;
    bool dump;
    bool has_host_nodes;
    uint16List *host_nodes;
    bool has_merge;
    bool merge;
    bool has_policy;
    HostMemPolicy policy;
    bool has_prealloc;
    bool prealloc;
    bool has_prealloc_threads;
    uint32_t prealloc_threads;
    bool has_prealloc_context;
    char *prealloc_context;
    bool has_share;
    bool share;
    bool has_reserve;
    bool reserve;
    uint64_t size;
    bool has_x_use_canonical_path_for_ramblock_id;
    bool x_use_canonical_path_for_ramblock_id;
    /* Own members: */
    bool has_hugetlb;
    bool hugetlb;
    bool has_hugetlbsize;
    uint64_t hugetlbsize;
    bool has_seal;
    bool seal;
};

static inline MemoryBackendProperties *qapi_MemoryBackendMemfdProperties_base(const MemoryBackendMemfdProperties *obj)
{
    return (MemoryBackendProperties *)obj;
}

void qapi_free_MemoryBackendMemfdProperties(MemoryBackendMemfdProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemoryBackendMemfdProperties, qapi_free_MemoryBackendMemfdProperties)

struct MemoryBackendEpcProperties {
    /* Members inherited from MemoryBackendProperties: */
    bool has_dump;
    bool dump;
    bool has_host_nodes;
    uint16List *host_nodes;
    bool has_merge;
    bool merge;
    bool has_policy;
    HostMemPolicy policy;
    bool has_prealloc;
    bool prealloc;
    bool has_prealloc_threads;
    uint32_t prealloc_threads;
    bool has_prealloc_context;
    char *prealloc_context;
    bool has_share;
    bool share;
    bool has_reserve;
    bool reserve;
    uint64_t size;
    bool has_x_use_canonical_path_for_ramblock_id;
    bool x_use_canonical_path_for_ramblock_id;
    /* Own members: */
};

static inline MemoryBackendProperties *qapi_MemoryBackendEpcProperties_base(const MemoryBackendEpcProperties *obj)
{
    return (MemoryBackendProperties *)obj;
}

void qapi_free_MemoryBackendEpcProperties(MemoryBackendEpcProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(MemoryBackendEpcProperties, qapi_free_MemoryBackendEpcProperties)

struct PrManagerHelperProperties {
    char *path;
};

void qapi_free_PrManagerHelperProperties(PrManagerHelperProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(PrManagerHelperProperties, qapi_free_PrManagerHelperProperties)

struct QtestProperties {
    char *chardev;
    bool has_log;
    char *log;
};

void qapi_free_QtestProperties(QtestProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(QtestProperties, qapi_free_QtestProperties)

struct RemoteObjectProperties {
    char *fd;
    char *devid;
};

void qapi_free_RemoteObjectProperties(RemoteObjectProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RemoteObjectProperties, qapi_free_RemoteObjectProperties)

struct VfioUserServerProperties {
    SocketAddress *socket;
    char *device;
};

void qapi_free_VfioUserServerProperties(VfioUserServerProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(VfioUserServerProperties, qapi_free_VfioUserServerProperties)

struct RngProperties {
    bool has_opened;
    bool opened;
};

void qapi_free_RngProperties(RngProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RngProperties, qapi_free_RngProperties)

struct RngEgdProperties {
    /* Members inherited from RngProperties: */
    bool has_opened;
    bool opened;
    /* Own members: */
    char *chardev;
};

static inline RngProperties *qapi_RngEgdProperties_base(const RngEgdProperties *obj)
{
    return (RngProperties *)obj;
}

void qapi_free_RngEgdProperties(RngEgdProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RngEgdProperties, qapi_free_RngEgdProperties)

struct RngRandomProperties {
    /* Members inherited from RngProperties: */
    bool has_opened;
    bool opened;
    /* Own members: */
    bool has_filename;
    char *filename;
};

static inline RngProperties *qapi_RngRandomProperties_base(const RngRandomProperties *obj)
{
    return (RngProperties *)obj;
}

void qapi_free_RngRandomProperties(RngRandomProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RngRandomProperties, qapi_free_RngRandomProperties)

struct SevGuestProperties {
    bool has_sev_device;
    char *sev_device;
    bool has_dh_cert_file;
    char *dh_cert_file;
    bool has_session_file;
    char *session_file;
    bool has_policy;
    uint32_t policy;
    bool has_handle;
    uint32_t handle;
    bool has_cbitpos;
    uint32_t cbitpos;
    uint32_t reduced_phys_bits;
    bool has_kernel_hashes;
    bool kernel_hashes;
};

void qapi_free_SevGuestProperties(SevGuestProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevGuestProperties, qapi_free_SevGuestProperties)

struct ThreadContextProperties {
    bool has_cpu_affinity;
    uint16List *cpu_affinity;
    bool has_node_affinity;
    uint16List *node_affinity;
};

void qapi_free_ThreadContextProperties(ThreadContextProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ThreadContextProperties, qapi_free_ThreadContextProperties)

struct q_obj_ObjectOptions_base {
    ObjectType qom_type;
    char *id;
};

void qapi_free_q_obj_ObjectOptions_base(q_obj_ObjectOptions_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_ObjectOptions_base, qapi_free_q_obj_ObjectOptions_base)

struct ObjectOptions {
    ObjectType qom_type;
    char *id;
    union { /* union tag is @qom_type */
        AuthZListProperties authz_list;
        AuthZListFileProperties authz_listfile;
        AuthZPAMProperties authz_pam;
        AuthZSimpleProperties authz_simple;
#if defined(CONFIG_LINUX)
        CanHostSocketcanProperties can_host_socketcan;
#endif /* defined(CONFIG_LINUX) */
        ColoCompareProperties colo_compare;
        CryptodevBackendProperties cryptodev_backend;
        CryptodevBackendProperties cryptodev_backend_builtin;
        CryptodevBackendProperties cryptodev_backend_lkcf;
#if defined(CONFIG_VHOST_CRYPTO)
        CryptodevVhostUserProperties cryptodev_vhost_user;
#endif /* defined(CONFIG_VHOST_CRYPTO) */
        DBusVMStateProperties dbus_vmstate;
        FilterBufferProperties filter_buffer;
        FilterDumpProperties filter_dump;
        FilterMirrorProperties filter_mirror;
        FilterRedirectorProperties filter_redirector;
        NetfilterProperties filter_replay;
        FilterRewriterProperties filter_rewriter;
        InputBarrierProperties input_barrier;
#if defined(CONFIG_LINUX)
        InputLinuxProperties input_linux;
#endif /* defined(CONFIG_LINUX) */
        IothreadProperties iothread;
        MainLoopProperties main_loop;
#if defined(CONFIG_LINUX)
        MemoryBackendEpcProperties memory_backend_epc;
#endif /* defined(CONFIG_LINUX) */
        MemoryBackendFileProperties memory_backend_file;
#if defined(CONFIG_LINUX)
        MemoryBackendMemfdProperties memory_backend_memfd;
#endif /* defined(CONFIG_LINUX) */
        MemoryBackendProperties memory_backend_ram;
#if defined(CONFIG_LINUX)
        PrManagerHelperProperties pr_manager_helper;
#endif /* defined(CONFIG_LINUX) */
        QtestProperties qtest;
        RngProperties rng_builtin;
        RngEgdProperties rng_egd;
#if defined(CONFIG_POSIX)
        RngRandomProperties rng_random;
#endif /* defined(CONFIG_POSIX) */
        SecretProperties secret;
#if defined(CONFIG_SECRET_KEYRING)
        SecretKeyringProperties secret_keyring;
#endif /* defined(CONFIG_SECRET_KEYRING) */
        SevGuestProperties sev_guest;
        ThreadContextProperties thread_context;
        ThrottleGroupProperties throttle_group;
        TlsCredsAnonProperties tls_creds_anon;
        TlsCredsPskProperties tls_creds_psk;
        TlsCredsX509Properties tls_creds_x509;
        TlsCredsProperties tls_cipher_suites;
        RemoteObjectProperties x_remote_object;
        VfioUserServerProperties x_vfio_user_server;
    } u;
};

void qapi_free_ObjectOptions(ObjectOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ObjectOptions, qapi_free_ObjectOptions)

struct q_obj_object_del_arg {
    char *id;
};

void qapi_free_q_obj_object_del_arg(q_obj_object_del_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_object_del_arg, qapi_free_q_obj_object_del_arg)

#endif /* QAPI_TYPES_QOM_H */
