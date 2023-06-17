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

#ifndef QAPI_VISIT_MISC_TARGET_H
#define QAPI_VISIT_MISC_TARGET_H

#include "qapi-builtin-visit.h"
#include "qapi-types-misc-target.h"


#if defined(TARGET_I386)
bool visit_type_SevState(Visitor *v, const char *name,
                 SevState *obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevInfo_members(Visitor *v, SevInfo *obj, Error **errp);

bool visit_type_SevInfo(Visitor *v, const char *name,
                 SevInfo **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevLaunchMeasureInfo_members(Visitor *v, SevLaunchMeasureInfo *obj, Error **errp);

bool visit_type_SevLaunchMeasureInfo(Visitor *v, const char *name,
                 SevLaunchMeasureInfo **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevCapability_members(Visitor *v, SevCapability *obj, Error **errp);

bool visit_type_SevCapability(Visitor *v, const char *name,
                 SevCapability **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_q_obj_sev_inject_launch_secret_arg_members(Visitor *v, q_obj_sev_inject_launch_secret_arg *obj, Error **errp);

bool visit_type_q_obj_sev_inject_launch_secret_arg(Visitor *v, const char *name,
                 q_obj_sev_inject_launch_secret_arg **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevAttestationReport_members(Visitor *v, SevAttestationReport *obj, Error **errp);

bool visit_type_SevAttestationReport(Visitor *v, const char *name,
                 SevAttestationReport **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_q_obj_query_sev_attestation_report_arg_members(Visitor *v, q_obj_query_sev_attestation_report_arg *obj, Error **errp);

bool visit_type_q_obj_query_sev_attestation_report_arg(Visitor *v, const char *name,
                 q_obj_query_sev_attestation_report_arg **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
bool visit_type_q_obj_dump_skeys_arg_members(Visitor *v, q_obj_dump_skeys_arg *obj, Error **errp);

bool visit_type_q_obj_dump_skeys_arg(Visitor *v, const char *name,
                 q_obj_dump_skeys_arg **obj, Error **errp);
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
bool visit_type_GICCapability_members(Visitor *v, GICCapability *obj, Error **errp);

bool visit_type_GICCapability(Visitor *v, const char *name,
                 GICCapability **obj, Error **errp);
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
bool visit_type_GICCapabilityList(Visitor *v, const char *name,
                 GICCapabilityList **obj, Error **errp);
#endif /* defined(TARGET_ARM) */

bool visit_type_SGXEPCSection_members(Visitor *v, SGXEPCSection *obj, Error **errp);

bool visit_type_SGXEPCSection(Visitor *v, const char *name,
                 SGXEPCSection **obj, Error **errp);

bool visit_type_SGXEPCSectionList(Visitor *v, const char *name,
                 SGXEPCSectionList **obj, Error **errp);

#if defined(TARGET_I386)
bool visit_type_SGXInfo_members(Visitor *v, SGXInfo *obj, Error **errp);

bool visit_type_SGXInfo(Visitor *v, const char *name,
                 SGXInfo **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_EvtchnPortType(Visitor *v, const char *name,
                 EvtchnPortType *obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_EvtchnInfo_members(Visitor *v, EvtchnInfo *obj, Error **errp);

bool visit_type_EvtchnInfo(Visitor *v, const char *name,
                 EvtchnInfo **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_EvtchnInfoList(Visitor *v, const char *name,
                 EvtchnInfoList **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_q_obj_xen_event_inject_arg_members(Visitor *v, q_obj_xen_event_inject_arg *obj, Error **errp);

bool visit_type_q_obj_xen_event_inject_arg(Visitor *v, const char *name,
                 q_obj_xen_event_inject_arg **obj, Error **errp);
#endif /* defined(TARGET_I386) */

#endif /* QAPI_VISIT_MISC_TARGET_H */
