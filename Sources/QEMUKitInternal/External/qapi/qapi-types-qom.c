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
#include "qapi-types-qom.h"
#include "qapi-visit-qom.h"

void qapi_free_ObjectPropertyInfo(ObjectPropertyInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectPropertyInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_qom_list_arg(q_obj_qom_list_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_qom_list_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ObjectPropertyInfoList(ObjectPropertyInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectPropertyInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_qom_get_arg(q_obj_qom_get_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_qom_get_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_qom_set_arg(q_obj_qom_set_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_qom_set_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ObjectTypeInfo(ObjectTypeInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectTypeInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_qom_list_types_arg(q_obj_qom_list_types_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_qom_list_types_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ObjectTypeInfoList(ObjectTypeInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectTypeInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_qom_list_properties_arg(q_obj_qom_list_properties_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_qom_list_properties_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CanHostSocketcanProperties(CanHostSocketcanProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CanHostSocketcanProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ColoCompareProperties(ColoCompareProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ColoCompareProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CryptodevBackendProperties(CryptodevBackendProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CryptodevBackendProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CryptodevVhostUserProperties(CryptodevVhostUserProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CryptodevVhostUserProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DBusVMStateProperties(DBusVMStateProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DBusVMStateProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup NetfilterInsert_lookup = {
    .array = (const char *const[]) {
        [NETFILTER_INSERT_BEFORE] = "before",
        [NETFILTER_INSERT_BEHIND] = "behind",
    },
    .size = NETFILTER_INSERT__MAX
};

void qapi_free_NetfilterProperties(NetfilterProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NetfilterProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FilterBufferProperties(FilterBufferProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FilterBufferProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FilterDumpProperties(FilterDumpProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FilterDumpProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FilterMirrorProperties(FilterMirrorProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FilterMirrorProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FilterRedirectorProperties(FilterRedirectorProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FilterRedirectorProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_FilterRewriterProperties(FilterRewriterProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_FilterRewriterProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_InputBarrierProperties(InputBarrierProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_InputBarrierProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_InputLinuxProperties(InputLinuxProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_InputLinuxProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_EventLoopBaseProperties(EventLoopBaseProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_EventLoopBaseProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_IothreadProperties(IothreadProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_IothreadProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MainLoopProperties(MainLoopProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MainLoopProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemoryBackendProperties(MemoryBackendProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemoryBackendProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemoryBackendFileProperties(MemoryBackendFileProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemoryBackendFileProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemoryBackendMemfdProperties(MemoryBackendMemfdProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemoryBackendMemfdProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemoryBackendEpcProperties(MemoryBackendEpcProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemoryBackendEpcProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_PrManagerHelperProperties(PrManagerHelperProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_PrManagerHelperProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_QtestProperties(QtestProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_QtestProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RemoteObjectProperties(RemoteObjectProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RemoteObjectProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_VfioUserServerProperties(VfioUserServerProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_VfioUserServerProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RngProperties(RngProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RngProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RngEgdProperties(RngEgdProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RngEgdProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_RngRandomProperties(RngRandomProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_RngRandomProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_SevGuestProperties(SevGuestProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SevGuestProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ThreadContextProperties(ThreadContextProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ThreadContextProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup ObjectType_lookup = {
    .array = (const char *const[]) {
        [OBJECT_TYPE_AUTHZ_LIST] = "authz-list",
        [OBJECT_TYPE_AUTHZ_LISTFILE] = "authz-listfile",
        [OBJECT_TYPE_AUTHZ_PAM] = "authz-pam",
        [OBJECT_TYPE_AUTHZ_SIMPLE] = "authz-simple",
        [OBJECT_TYPE_CAN_BUS] = "can-bus",
#if defined(CONFIG_LINUX)
        [OBJECT_TYPE_CAN_HOST_SOCKETCAN] = "can-host-socketcan",
#endif /* defined(CONFIG_LINUX) */
        [OBJECT_TYPE_COLO_COMPARE] = "colo-compare",
        [OBJECT_TYPE_CRYPTODEV_BACKEND] = "cryptodev-backend",
        [OBJECT_TYPE_CRYPTODEV_BACKEND_BUILTIN] = "cryptodev-backend-builtin",
        [OBJECT_TYPE_CRYPTODEV_BACKEND_LKCF] = "cryptodev-backend-lkcf",
#if defined(CONFIG_VHOST_CRYPTO)
        [OBJECT_TYPE_CRYPTODEV_VHOST_USER] = "cryptodev-vhost-user",
#endif /* defined(CONFIG_VHOST_CRYPTO) */
        [OBJECT_TYPE_DBUS_VMSTATE] = "dbus-vmstate",
        [OBJECT_TYPE_FILTER_BUFFER] = "filter-buffer",
        [OBJECT_TYPE_FILTER_DUMP] = "filter-dump",
        [OBJECT_TYPE_FILTER_MIRROR] = "filter-mirror",
        [OBJECT_TYPE_FILTER_REDIRECTOR] = "filter-redirector",
        [OBJECT_TYPE_FILTER_REPLAY] = "filter-replay",
        [OBJECT_TYPE_FILTER_REWRITER] = "filter-rewriter",
        [OBJECT_TYPE_INPUT_BARRIER] = "input-barrier",
#if defined(CONFIG_LINUX)
        [OBJECT_TYPE_INPUT_LINUX] = "input-linux",
#endif /* defined(CONFIG_LINUX) */
        [OBJECT_TYPE_IOTHREAD] = "iothread",
        [OBJECT_TYPE_MAIN_LOOP] = "main-loop",
#if defined(CONFIG_LINUX)
        [OBJECT_TYPE_MEMORY_BACKEND_EPC] = "memory-backend-epc",
#endif /* defined(CONFIG_LINUX) */
        [OBJECT_TYPE_MEMORY_BACKEND_FILE] = "memory-backend-file",
#if defined(CONFIG_LINUX)
        [OBJECT_TYPE_MEMORY_BACKEND_MEMFD] = "memory-backend-memfd",
#endif /* defined(CONFIG_LINUX) */
        [OBJECT_TYPE_MEMORY_BACKEND_RAM] = "memory-backend-ram",
        [OBJECT_TYPE_PEF_GUEST] = "pef-guest",
#if defined(CONFIG_LINUX)
        [OBJECT_TYPE_PR_MANAGER_HELPER] = "pr-manager-helper",
#endif /* defined(CONFIG_LINUX) */
        [OBJECT_TYPE_QTEST] = "qtest",
        [OBJECT_TYPE_RNG_BUILTIN] = "rng-builtin",
        [OBJECT_TYPE_RNG_EGD] = "rng-egd",
#if defined(CONFIG_POSIX)
        [OBJECT_TYPE_RNG_RANDOM] = "rng-random",
#endif /* defined(CONFIG_POSIX) */
        [OBJECT_TYPE_SECRET] = "secret",
#if defined(CONFIG_SECRET_KEYRING)
        [OBJECT_TYPE_SECRET_KEYRING] = "secret_keyring",
#endif /* defined(CONFIG_SECRET_KEYRING) */
        [OBJECT_TYPE_SEV_GUEST] = "sev-guest",
        [OBJECT_TYPE_THREAD_CONTEXT] = "thread-context",
        [OBJECT_TYPE_S390_PV_GUEST] = "s390-pv-guest",
        [OBJECT_TYPE_THROTTLE_GROUP] = "throttle-group",
        [OBJECT_TYPE_TLS_CREDS_ANON] = "tls-creds-anon",
        [OBJECT_TYPE_TLS_CREDS_PSK] = "tls-creds-psk",
        [OBJECT_TYPE_TLS_CREDS_X509] = "tls-creds-x509",
        [OBJECT_TYPE_TLS_CIPHER_SUITES] = "tls-cipher-suites",
        [OBJECT_TYPE_X_REMOTE_OBJECT] = "x-remote-object",
        [OBJECT_TYPE_X_VFIO_USER_SERVER] = "x-vfio-user-server",
    },
    .special_features = (const unsigned char[OBJECT_TYPE__MAX]) {
        [OBJECT_TYPE_X_REMOTE_OBJECT] = 1u << QAPI_UNSTABLE,
        [OBJECT_TYPE_X_VFIO_USER_SERVER] = 1u << QAPI_UNSTABLE,
    },
    .size = OBJECT_TYPE__MAX
};

void qapi_free_q_obj_ObjectOptions_base(q_obj_ObjectOptions_base *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_ObjectOptions_base(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_ObjectOptions(ObjectOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_ObjectOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_object_del_arg(q_obj_object_del_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_object_del_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_qom_c;
