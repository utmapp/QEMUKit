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
#include "qapi-types-job.h"
#include "qapi-visit-job.h"

const QEnumLookup JobType_lookup = {
    .array = (const char *const[]) {
        [JOB_TYPE_COMMIT] = "commit",
        [JOB_TYPE_STREAM] = "stream",
        [JOB_TYPE_MIRROR] = "mirror",
        [JOB_TYPE_BACKUP] = "backup",
        [JOB_TYPE_CREATE] = "create",
        [JOB_TYPE_AMEND] = "amend",
        [JOB_TYPE_SNAPSHOT_LOAD] = "snapshot-load",
        [JOB_TYPE_SNAPSHOT_SAVE] = "snapshot-save",
        [JOB_TYPE_SNAPSHOT_DELETE] = "snapshot-delete",
    },
    .size = JOB_TYPE__MAX
};

const QEnumLookup JobStatus_lookup = {
    .array = (const char *const[]) {
        [JOB_STATUS_UNDEFINED] = "undefined",
        [JOB_STATUS_CREATED] = "created",
        [JOB_STATUS_RUNNING] = "running",
        [JOB_STATUS_PAUSED] = "paused",
        [JOB_STATUS_READY] = "ready",
        [JOB_STATUS_STANDBY] = "standby",
        [JOB_STATUS_WAITING] = "waiting",
        [JOB_STATUS_PENDING] = "pending",
        [JOB_STATUS_ABORTING] = "aborting",
        [JOB_STATUS_CONCLUDED] = "concluded",
        [JOB_STATUS_NULL] = "null",
    },
    .size = JOB_STATUS__MAX
};

const QEnumLookup JobVerb_lookup = {
    .array = (const char *const[]) {
        [JOB_VERB_CANCEL] = "cancel",
        [JOB_VERB_PAUSE] = "pause",
        [JOB_VERB_RESUME] = "resume",
        [JOB_VERB_SET_SPEED] = "set-speed",
        [JOB_VERB_COMPLETE] = "complete",
        [JOB_VERB_DISMISS] = "dismiss",
        [JOB_VERB_FINALIZE] = "finalize",
    },
    .size = JOB_VERB__MAX
};

void qapi_free_q_obj_JOB_STATUS_CHANGE_arg(q_obj_JOB_STATUS_CHANGE_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_JOB_STATUS_CHANGE_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_job_pause_arg(q_obj_job_pause_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_job_pause_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_job_resume_arg(q_obj_job_resume_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_job_resume_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_job_cancel_arg(q_obj_job_cancel_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_job_cancel_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_job_complete_arg(q_obj_job_complete_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_job_complete_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_job_dismiss_arg(q_obj_job_dismiss_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_job_dismiss_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_job_finalize_arg(q_obj_job_finalize_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_job_finalize_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_JobInfo(JobInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_JobInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_JobInfoList(JobInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_JobInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_job_c;
