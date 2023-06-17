/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu-compat.h"
#include "cf-output-visitor.h"
#include "cf-input-visitor.h"
#include "dealloc-visitor.h"
#include "error.h"
#include "qapi-visit-misc-target.h"
#include "qapi-commands-misc-target.h"


#if defined(TARGET_I386)
void qmp_rtc_reset_reinjection(Error **errp, void *ctx)

{
    const char *cmdname = "rtc-reset-reinjection";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static SevInfo *qmp_marshal_rpc_SevInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    SevInfo *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_SevInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
SevInfo *qmp_query_sev(Error **errp, void *ctx)

{
    const char *cmdname = "query-sev";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SevInfo *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_SevInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static SevLaunchMeasureInfo *qmp_marshal_rpc_SevLaunchMeasureInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    SevLaunchMeasureInfo *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_SevLaunchMeasureInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
SevLaunchMeasureInfo *qmp_query_sev_launch_measure(Error **errp, void *ctx)

{
    const char *cmdname = "query-sev-launch-measure";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SevLaunchMeasureInfo *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_SevLaunchMeasureInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static SevCapability *qmp_marshal_rpc_SevCapability(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    SevCapability *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_SevCapability(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
SevCapability *qmp_query_sev_capabilities(Error **errp, void *ctx)

{
    const char *cmdname = "query-sev-capabilities";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SevCapability *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_SevCapability(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_sev_inject_launch_secret(const char *packet_header, const char *secret, bool has_gpa, uint64_t gpa, Error **errp, void *ctx)

{
    const char *cmdname = "sev-inject-launch-secret";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_sev_inject_launch_secret_arg _arg = {
        .packet_header = (char *)packet_header,
        .secret = (char *)secret,
        .has_gpa = has_gpa,
        .gpa = gpa,
    };
    q_obj_sev_inject_launch_secret_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_sev_inject_launch_secret_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static SevAttestationReport *qmp_marshal_rpc_SevAttestationReport(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    SevAttestationReport *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_SevAttestationReport(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
SevAttestationReport *qmp_query_sev_attestation_report(const char *mnonce, Error **errp, void *ctx)

{
    const char *cmdname = "query-sev-attestation-report";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SevAttestationReport *ret = {0};
    q_obj_query_sev_attestation_report_arg _arg = {
        .mnonce = (char *)mnonce,
    };
    q_obj_query_sev_attestation_report_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_sev_attestation_report_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_SevAttestationReport(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
void qmp_dump_skeys(const char *filename, Error **errp, void *ctx)

{
    const char *cmdname = "dump-skeys";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_dump_skeys_arg _arg = {
        .filename = (char *)filename,
    };
    q_obj_dump_skeys_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_dump_skeys_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
static GICCapabilityList *qmp_marshal_rpc_GICCapabilityList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    GICCapabilityList *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_GICCapabilityList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
GICCapabilityList *qmp_query_gic_capabilities(Error **errp, void *ctx)

{
    const char *cmdname = "query-gic-capabilities";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    GICCapabilityList *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_GICCapabilityList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_I386)
static SGXInfo *qmp_marshal_rpc_SGXInfo(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    SGXInfo *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_SGXInfo(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
SGXInfo *qmp_query_sgx(Error **errp, void *ctx)

{
    const char *cmdname = "query-sgx";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SGXInfo *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_SGXInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
SGXInfo *qmp_query_sgx_capabilities(Error **errp, void *ctx)

{
    const char *cmdname = "query-sgx-capabilities";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    SGXInfo *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_SGXInfo(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static EvtchnInfoList *qmp_marshal_rpc_EvtchnInfoList(CFDictionaryRef args, Error **errp, void *ctx)
{
    Error *err = NULL;
    Visitor *v;
    CFDictionaryRef cfret;
    EvtchnInfoList *ret = {0};

    qmp_rpc_call(args, &cfret, &err, ctx);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    v = cf_input_visitor_new(cfret);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        error_propagate(errp, err);
        return ret;
    }
    visit_type_EvtchnInfoList(v, "return", &ret, &err);
    error_propagate(errp, err);
    visit_end_struct(v, NULL);
    visit_free(v);
    CFRelease(cfret);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
EvtchnInfoList *qmp_xen_event_list(Error **errp, void *ctx)

{
    const char *cmdname = "xen-event-list";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    EvtchnInfoList *ret = {0};

    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    ret = qmp_marshal_rpc_EvtchnInfoList(cfargs, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
    return ret;
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_xen_event_inject(uint32_t port, Error **errp, void *ctx)

{
    const char *cmdname = "xen-event-inject";
    CFDictionaryRef cfargs;
    Error *err = NULL;
    Visitor *v = NULL;
    q_obj_xen_event_inject_arg _arg = {
        .port = port,
    };
    q_obj_xen_event_inject_arg *argp = &_arg;
    v = cf_output_visitor_new((CFTypeRef *)&cfargs);
    visit_start_struct(v, "command", NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "execute", (char **)&cmdname, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_xen_event_inject_arg(v, "arguments", &argp, &err);
    if (err) {
        goto out;
    }
    visit_end_struct(v, NULL);
    visit_complete(v, &cfargs);
    qmp_rpc_call(cfargs, NULL, &err, ctx);
    CFRelease(cfargs);

out:
    error_propagate(errp, err);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_misc_target_c;
