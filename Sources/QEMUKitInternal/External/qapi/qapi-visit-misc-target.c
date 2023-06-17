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

#include "qemu-compat.h"
#include "error.h"
#include "qerror.h"
#include "qapi-visit-misc-target.h"

#if defined(TARGET_I386)
bool visit_type_SevState(Visitor *v, const char *name,
                 SevState *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SevState_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevInfo_members(Visitor *v, SevInfo *obj, Error **errp)
{
    if (!visit_type_bool(v, "enabled", &obj->enabled, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "api-major", &obj->api_major, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "api-minor", &obj->api_minor, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "build-id", &obj->build_id, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "policy", &obj->policy, errp)) {
        return false;
    }
    if (!visit_type_SevState(v, "state", &obj->state, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "handle", &obj->handle, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SevInfo(Visitor *v, const char *name,
                 SevInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SevInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SevInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SevInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevLaunchMeasureInfo_members(Visitor *v, SevLaunchMeasureInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SevLaunchMeasureInfo(Visitor *v, const char *name,
                 SevLaunchMeasureInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SevLaunchMeasureInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SevLaunchMeasureInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SevLaunchMeasureInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevCapability_members(Visitor *v, SevCapability *obj, Error **errp)
{
    if (!visit_type_str(v, "pdh", &obj->pdh, errp)) {
        return false;
    }
    if (!visit_type_str(v, "cert-chain", &obj->cert_chain, errp)) {
        return false;
    }
    if (!visit_type_str(v, "cpu0-id", &obj->cpu0_id, errp)) {
        return false;
    }
    if (!visit_type_int(v, "cbitpos", &obj->cbitpos, errp)) {
        return false;
    }
    if (!visit_type_int(v, "reduced-phys-bits", &obj->reduced_phys_bits, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SevCapability(Visitor *v, const char *name,
                 SevCapability **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SevCapability), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SevCapability_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SevCapability(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_q_obj_sev_inject_launch_secret_arg_members(Visitor *v, q_obj_sev_inject_launch_secret_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "packet-header", &obj->packet_header, errp)) {
        return false;
    }
    if (!visit_type_str(v, "secret", &obj->secret, errp)) {
        return false;
    }
    if (visit_optional(v, "gpa", &obj->has_gpa)) {
        if (!visit_type_uint64(v, "gpa", &obj->gpa, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_sev_inject_launch_secret_arg(Visitor *v, const char *name,
                 q_obj_sev_inject_launch_secret_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_sev_inject_launch_secret_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_sev_inject_launch_secret_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_sev_inject_launch_secret_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_SevAttestationReport_members(Visitor *v, SevAttestationReport *obj, Error **errp)
{
    if (!visit_type_str(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SevAttestationReport(Visitor *v, const char *name,
                 SevAttestationReport **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SevAttestationReport), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SevAttestationReport_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SevAttestationReport(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_q_obj_query_sev_attestation_report_arg_members(Visitor *v, q_obj_query_sev_attestation_report_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "mnonce", &obj->mnonce, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_query_sev_attestation_report_arg(Visitor *v, const char *name,
                 q_obj_query_sev_attestation_report_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_sev_attestation_report_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_sev_attestation_report_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_sev_attestation_report_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
bool visit_type_q_obj_dump_skeys_arg_members(Visitor *v, q_obj_dump_skeys_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "filename", &obj->filename, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_dump_skeys_arg(Visitor *v, const char *name,
                 q_obj_dump_skeys_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_dump_skeys_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_dump_skeys_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_dump_skeys_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
bool visit_type_GICCapability_members(Visitor *v, GICCapability *obj, Error **errp)
{
    if (!visit_type_int(v, "version", &obj->version, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "emulated", &obj->emulated, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "kernel", &obj->kernel, errp)) {
        return false;
    }
    return true;
}

bool visit_type_GICCapability(Visitor *v, const char *name,
                 GICCapability **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(GICCapability), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_GICCapability_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GICCapability(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
bool visit_type_GICCapabilityList(Visitor *v, const char *name,
                 GICCapabilityList **obj, Error **errp)
{
    bool ok = false;
    GICCapabilityList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (GICCapabilityList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_GICCapability(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_GICCapabilityList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_ARM) */

bool visit_type_SGXEPCSection_members(Visitor *v, SGXEPCSection *obj, Error **errp)
{
    if (!visit_type_int(v, "node", &obj->node, errp)) {
        return false;
    }
    if (!visit_type_uint64(v, "size", &obj->size, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SGXEPCSection(Visitor *v, const char *name,
                 SGXEPCSection **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SGXEPCSection), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SGXEPCSection_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SGXEPCSection(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_SGXEPCSectionList(Visitor *v, const char *name,
                 SGXEPCSectionList **obj, Error **errp)
{
    bool ok = false;
    SGXEPCSectionList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (SGXEPCSectionList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_SGXEPCSection(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SGXEPCSectionList(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(TARGET_I386)
bool visit_type_SGXInfo_members(Visitor *v, SGXInfo *obj, Error **errp)
{
    if (!visit_type_bool(v, "sgx", &obj->sgx, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "sgx1", &obj->sgx1, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "sgx2", &obj->sgx2, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "flc", &obj->flc, errp)) {
        return false;
    }
    if (!visit_type_SGXEPCSectionList(v, "sections", &obj->sections, errp)) {
        return false;
    }
    return true;
}

bool visit_type_SGXInfo(Visitor *v, const char *name,
                 SGXInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(SGXInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_SGXInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_SGXInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_EvtchnPortType(Visitor *v, const char *name,
                 EvtchnPortType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &EvtchnPortType_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_EvtchnInfo_members(Visitor *v, EvtchnInfo *obj, Error **errp)
{
    if (!visit_type_uint16(v, "port", &obj->port, errp)) {
        return false;
    }
    if (!visit_type_uint32(v, "vcpu", &obj->vcpu, errp)) {
        return false;
    }
    if (!visit_type_EvtchnPortType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_str(v, "remote-domain", &obj->remote_domain, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "target", &obj->target, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "pending", &obj->pending, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "masked", &obj->masked, errp)) {
        return false;
    }
    return true;
}

bool visit_type_EvtchnInfo(Visitor *v, const char *name,
                 EvtchnInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(EvtchnInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_EvtchnInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_EvtchnInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_EvtchnInfoList(Visitor *v, const char *name,
                 EvtchnInfoList **obj, Error **errp)
{
    bool ok = false;
    EvtchnInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (EvtchnInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_EvtchnInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_EvtchnInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
bool visit_type_q_obj_xen_event_inject_arg_members(Visitor *v, q_obj_xen_event_inject_arg *obj, Error **errp)
{
    if (!visit_type_uint32(v, "port", &obj->port, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_xen_event_inject_arg(Visitor *v, const char *name,
                 q_obj_xen_event_inject_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_xen_event_inject_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_xen_event_inject_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_xen_event_inject_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_I386) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_misc_target_c;
