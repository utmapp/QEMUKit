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

#ifndef QAPI_VISIT_JOB_H
#define QAPI_VISIT_JOB_H

#include "qapi-builtin-visit.h"
#include "qapi-types-job.h"


bool visit_type_JobType(Visitor *v, const char *name,
                 JobType *obj, Error **errp);

bool visit_type_JobStatus(Visitor *v, const char *name,
                 JobStatus *obj, Error **errp);

bool visit_type_JobVerb(Visitor *v, const char *name,
                 JobVerb *obj, Error **errp);

bool visit_type_q_obj_JOB_STATUS_CHANGE_arg_members(Visitor *v, q_obj_JOB_STATUS_CHANGE_arg *obj, Error **errp);

bool visit_type_q_obj_JOB_STATUS_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_JOB_STATUS_CHANGE_arg **obj, Error **errp);

bool visit_type_q_obj_job_pause_arg_members(Visitor *v, q_obj_job_pause_arg *obj, Error **errp);

bool visit_type_q_obj_job_pause_arg(Visitor *v, const char *name,
                 q_obj_job_pause_arg **obj, Error **errp);

bool visit_type_q_obj_job_resume_arg_members(Visitor *v, q_obj_job_resume_arg *obj, Error **errp);

bool visit_type_q_obj_job_resume_arg(Visitor *v, const char *name,
                 q_obj_job_resume_arg **obj, Error **errp);

bool visit_type_q_obj_job_cancel_arg_members(Visitor *v, q_obj_job_cancel_arg *obj, Error **errp);

bool visit_type_q_obj_job_cancel_arg(Visitor *v, const char *name,
                 q_obj_job_cancel_arg **obj, Error **errp);

bool visit_type_q_obj_job_complete_arg_members(Visitor *v, q_obj_job_complete_arg *obj, Error **errp);

bool visit_type_q_obj_job_complete_arg(Visitor *v, const char *name,
                 q_obj_job_complete_arg **obj, Error **errp);

bool visit_type_q_obj_job_dismiss_arg_members(Visitor *v, q_obj_job_dismiss_arg *obj, Error **errp);

bool visit_type_q_obj_job_dismiss_arg(Visitor *v, const char *name,
                 q_obj_job_dismiss_arg **obj, Error **errp);

bool visit_type_q_obj_job_finalize_arg_members(Visitor *v, q_obj_job_finalize_arg *obj, Error **errp);

bool visit_type_q_obj_job_finalize_arg(Visitor *v, const char *name,
                 q_obj_job_finalize_arg **obj, Error **errp);

bool visit_type_JobInfo_members(Visitor *v, JobInfo *obj, Error **errp);

bool visit_type_JobInfo(Visitor *v, const char *name,
                 JobInfo **obj, Error **errp);

bool visit_type_JobInfoList(Visitor *v, const char *name,
                 JobInfoList **obj, Error **errp);

#endif /* QAPI_VISIT_JOB_H */
