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
#include "qapi-visit-job.h"

bool visit_type_JobType(Visitor *v, const char *name,
                 JobType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &JobType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_JobStatus(Visitor *v, const char *name,
                 JobStatus *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &JobStatus_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_JobVerb(Visitor *v, const char *name,
                 JobVerb *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &JobVerb_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_JOB_STATUS_CHANGE_arg_members(Visitor *v, q_obj_JOB_STATUS_CHANGE_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_JobStatus(v, "status", &obj->status, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_JOB_STATUS_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_JOB_STATUS_CHANGE_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_JOB_STATUS_CHANGE_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_JOB_STATUS_CHANGE_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_JOB_STATUS_CHANGE_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_job_pause_arg_members(Visitor *v, q_obj_job_pause_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_job_pause_arg(Visitor *v, const char *name,
                 q_obj_job_pause_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_job_pause_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_job_pause_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_job_pause_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_job_resume_arg_members(Visitor *v, q_obj_job_resume_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_job_resume_arg(Visitor *v, const char *name,
                 q_obj_job_resume_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_job_resume_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_job_resume_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_job_resume_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_job_cancel_arg_members(Visitor *v, q_obj_job_cancel_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_job_cancel_arg(Visitor *v, const char *name,
                 q_obj_job_cancel_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_job_cancel_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_job_cancel_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_job_cancel_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_job_complete_arg_members(Visitor *v, q_obj_job_complete_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_job_complete_arg(Visitor *v, const char *name,
                 q_obj_job_complete_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_job_complete_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_job_complete_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_job_complete_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_job_dismiss_arg_members(Visitor *v, q_obj_job_dismiss_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_job_dismiss_arg(Visitor *v, const char *name,
                 q_obj_job_dismiss_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_job_dismiss_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_job_dismiss_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_job_dismiss_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_job_finalize_arg_members(Visitor *v, q_obj_job_finalize_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_job_finalize_arg(Visitor *v, const char *name,
                 q_obj_job_finalize_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_job_finalize_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_job_finalize_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_job_finalize_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_JobInfo_members(Visitor *v, JobInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_JobType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_JobStatus(v, "status", &obj->status, errp)) {
        return false;
    }
    if (!visit_type_int(v, "current-progress", &obj->current_progress, errp)) {
        return false;
    }
    if (!visit_type_int(v, "total-progress", &obj->total_progress, errp)) {
        return false;
    }
    if (visit_optional(v, "error", &obj->has_error)) {
        if (!visit_type_str(v, "error", &obj->error, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_JobInfo(Visitor *v, const char *name,
                 JobInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(JobInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_JobInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_JobInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_JobInfoList(Visitor *v, const char *name,
                 JobInfoList **obj, Error **errp)
{
    bool ok = false;
    JobInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (JobInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_JobInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_JobInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_job_c;
