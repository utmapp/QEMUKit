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

#ifndef QAPI_TYPES_MISC_TARGET_H
#define QAPI_TYPES_MISC_TARGET_H

#include "qapi-builtin-types.h"

#if defined(TARGET_I386)
typedef enum SevState {
    SEV_STATE_UNINIT,
    SEV_STATE_LAUNCH_UPDATE,
    SEV_STATE_LAUNCH_SECRET,
    SEV_STATE_RUNNING,
    SEV_STATE_SEND_UPDATE,
    SEV_STATE_RECEIVE_UPDATE,
    SEV_STATE__MAX,
} SevState;

#define SevState_str(val) \
    qapi_enum_lookup(&SevState_lookup, (val))

extern const QEnumLookup SevState_lookup;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevInfo SevInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevLaunchMeasureInfo SevLaunchMeasureInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevCapability SevCapability;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct q_obj_sev_inject_launch_secret_arg q_obj_sev_inject_launch_secret_arg;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevAttestationReport SevAttestationReport;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct q_obj_query_sev_attestation_report_arg q_obj_query_sev_attestation_report_arg;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
typedef struct q_obj_dump_skeys_arg q_obj_dump_skeys_arg;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
typedef struct GICCapability GICCapability;
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
typedef struct GICCapabilityList GICCapabilityList;
#endif /* defined(TARGET_ARM) */

typedef struct SGXEPCSection SGXEPCSection;

typedef struct SGXEPCSectionList SGXEPCSectionList;

#if defined(TARGET_I386)
typedef struct SGXInfo SGXInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef enum EvtchnPortType {
    EVTCHN_PORT_TYPE_CLOSED,
    EVTCHN_PORT_TYPE_UNBOUND,
    EVTCHN_PORT_TYPE_INTERDOMAIN,
    EVTCHN_PORT_TYPE_PIRQ,
    EVTCHN_PORT_TYPE_VIRQ,
    EVTCHN_PORT_TYPE_IPI,
    EVTCHN_PORT_TYPE__MAX,
} EvtchnPortType;

#define EvtchnPortType_str(val) \
    qapi_enum_lookup(&EvtchnPortType_lookup, (val))

extern const QEnumLookup EvtchnPortType_lookup;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct EvtchnInfo EvtchnInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct EvtchnInfoList EvtchnInfoList;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct q_obj_xen_event_inject_arg q_obj_xen_event_inject_arg;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevInfo {
    bool enabled;
    uint8_t api_major;
    uint8_t api_minor;
    uint8_t build_id;
    uint32_t policy;
    SevState state;
    uint32_t handle;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevInfo(SevInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevInfo, qapi_free_SevInfo)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevLaunchMeasureInfo {
    char *data;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevLaunchMeasureInfo(SevLaunchMeasureInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevLaunchMeasureInfo, qapi_free_SevLaunchMeasureInfo)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevCapability {
    char *pdh;
    char *cert_chain;
    char *cpu0_id;
    int64_t cbitpos;
    int64_t reduced_phys_bits;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevCapability(SevCapability *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevCapability, qapi_free_SevCapability)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct q_obj_sev_inject_launch_secret_arg {
    char *packet_header;
    char *secret;
    bool has_gpa;
    uint64_t gpa;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_q_obj_sev_inject_launch_secret_arg(q_obj_sev_inject_launch_secret_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_sev_inject_launch_secret_arg, qapi_free_q_obj_sev_inject_launch_secret_arg)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevAttestationReport {
    char *data;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevAttestationReport(SevAttestationReport *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevAttestationReport, qapi_free_SevAttestationReport)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct q_obj_query_sev_attestation_report_arg {
    char *mnonce;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_q_obj_query_sev_attestation_report_arg(q_obj_query_sev_attestation_report_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_sev_attestation_report_arg, qapi_free_q_obj_query_sev_attestation_report_arg)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
struct q_obj_dump_skeys_arg {
    char *filename;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_q_obj_dump_skeys_arg(q_obj_dump_skeys_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_dump_skeys_arg, qapi_free_q_obj_dump_skeys_arg)
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
struct GICCapability {
    int64_t version;
    bool emulated;
    bool kernel;
};
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
void qapi_free_GICCapability(GICCapability *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GICCapability, qapi_free_GICCapability)
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
struct GICCapabilityList {
    GICCapabilityList *next;
    GICCapability *value;
};

void qapi_free_GICCapabilityList(GICCapabilityList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GICCapabilityList, qapi_free_GICCapabilityList)
#endif /* defined(TARGET_ARM) */

struct SGXEPCSection {
    int64_t node;
    uint64_t size;
};

void qapi_free_SGXEPCSection(SGXEPCSection *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SGXEPCSection, qapi_free_SGXEPCSection)

struct SGXEPCSectionList {
    SGXEPCSectionList *next;
    SGXEPCSection *value;
};

void qapi_free_SGXEPCSectionList(SGXEPCSectionList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SGXEPCSectionList, qapi_free_SGXEPCSectionList)

#if defined(TARGET_I386)
struct SGXInfo {
    bool sgx;
    bool sgx1;
    bool sgx2;
    bool flc;
    SGXEPCSectionList *sections;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SGXInfo(SGXInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SGXInfo, qapi_free_SGXInfo)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct EvtchnInfo {
    uint16_t port;
    uint32_t vcpu;
    EvtchnPortType type;
    char *remote_domain;
    uint16_t target;
    bool pending;
    bool masked;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_EvtchnInfo(EvtchnInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(EvtchnInfo, qapi_free_EvtchnInfo)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct EvtchnInfoList {
    EvtchnInfoList *next;
    EvtchnInfo *value;
};

void qapi_free_EvtchnInfoList(EvtchnInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(EvtchnInfoList, qapi_free_EvtchnInfoList)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct q_obj_xen_event_inject_arg {
    uint32_t port;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_q_obj_xen_event_inject_arg(q_obj_xen_event_inject_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_xen_event_inject_arg, qapi_free_q_obj_xen_event_inject_arg)
#endif /* defined(TARGET_I386) */

#endif /* QAPI_TYPES_MISC_TARGET_H */
