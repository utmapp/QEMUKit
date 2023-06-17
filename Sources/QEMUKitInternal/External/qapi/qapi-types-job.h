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

#ifndef QAPI_TYPES_JOB_H
#define QAPI_TYPES_JOB_H

#include "qapi-builtin-types.h"

typedef enum JobType {
    JOB_TYPE_COMMIT,
    JOB_TYPE_STREAM,
    JOB_TYPE_MIRROR,
    JOB_TYPE_BACKUP,
    JOB_TYPE_CREATE,
    JOB_TYPE_AMEND,
    JOB_TYPE_SNAPSHOT_LOAD,
    JOB_TYPE_SNAPSHOT_SAVE,
    JOB_TYPE_SNAPSHOT_DELETE,
    JOB_TYPE__MAX,
} JobType;

#define JobType_str(val) \
    qapi_enum_lookup(&JobType_lookup, (val))

extern const QEnumLookup JobType_lookup;

typedef enum JobStatus {
    JOB_STATUS_UNDEFINED,
    JOB_STATUS_CREATED,
    JOB_STATUS_RUNNING,
    JOB_STATUS_PAUSED,
    JOB_STATUS_READY,
    JOB_STATUS_STANDBY,
    JOB_STATUS_WAITING,
    JOB_STATUS_PENDING,
    JOB_STATUS_ABORTING,
    JOB_STATUS_CONCLUDED,
    JOB_STATUS_NULL,
    JOB_STATUS__MAX,
} JobStatus;

#define JobStatus_str(val) \
    qapi_enum_lookup(&JobStatus_lookup, (val))

extern const QEnumLookup JobStatus_lookup;

typedef enum JobVerb {
    JOB_VERB_CANCEL,
    JOB_VERB_PAUSE,
    JOB_VERB_RESUME,
    JOB_VERB_SET_SPEED,
    JOB_VERB_COMPLETE,
    JOB_VERB_DISMISS,
    JOB_VERB_FINALIZE,
    JOB_VERB__MAX,
} JobVerb;

#define JobVerb_str(val) \
    qapi_enum_lookup(&JobVerb_lookup, (val))

extern const QEnumLookup JobVerb_lookup;

typedef struct q_obj_JOB_STATUS_CHANGE_arg q_obj_JOB_STATUS_CHANGE_arg;

typedef struct q_obj_job_pause_arg q_obj_job_pause_arg;

typedef struct q_obj_job_resume_arg q_obj_job_resume_arg;

typedef struct q_obj_job_cancel_arg q_obj_job_cancel_arg;

typedef struct q_obj_job_complete_arg q_obj_job_complete_arg;

typedef struct q_obj_job_dismiss_arg q_obj_job_dismiss_arg;

typedef struct q_obj_job_finalize_arg q_obj_job_finalize_arg;

typedef struct JobInfo JobInfo;

typedef struct JobInfoList JobInfoList;

struct q_obj_JOB_STATUS_CHANGE_arg {
    char *id;
    JobStatus status;
};

void qapi_free_q_obj_JOB_STATUS_CHANGE_arg(q_obj_JOB_STATUS_CHANGE_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_JOB_STATUS_CHANGE_arg, qapi_free_q_obj_JOB_STATUS_CHANGE_arg)

struct q_obj_job_pause_arg {
    char *id;
};

void qapi_free_q_obj_job_pause_arg(q_obj_job_pause_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_job_pause_arg, qapi_free_q_obj_job_pause_arg)

struct q_obj_job_resume_arg {
    char *id;
};

void qapi_free_q_obj_job_resume_arg(q_obj_job_resume_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_job_resume_arg, qapi_free_q_obj_job_resume_arg)

struct q_obj_job_cancel_arg {
    char *id;
};

void qapi_free_q_obj_job_cancel_arg(q_obj_job_cancel_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_job_cancel_arg, qapi_free_q_obj_job_cancel_arg)

struct q_obj_job_complete_arg {
    char *id;
};

void qapi_free_q_obj_job_complete_arg(q_obj_job_complete_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_job_complete_arg, qapi_free_q_obj_job_complete_arg)

struct q_obj_job_dismiss_arg {
    char *id;
};

void qapi_free_q_obj_job_dismiss_arg(q_obj_job_dismiss_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_job_dismiss_arg, qapi_free_q_obj_job_dismiss_arg)

struct q_obj_job_finalize_arg {
    char *id;
};

void qapi_free_q_obj_job_finalize_arg(q_obj_job_finalize_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_job_finalize_arg, qapi_free_q_obj_job_finalize_arg)

struct JobInfo {
    char *id;
    JobType type;
    JobStatus status;
    int64_t current_progress;
    int64_t total_progress;
    bool has_error;
    char *error;
};

void qapi_free_JobInfo(JobInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(JobInfo, qapi_free_JobInfo)

struct JobInfoList {
    JobInfoList *next;
    JobInfo *value;
};

void qapi_free_JobInfoList(JobInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(JobInfoList, qapi_free_JobInfoList)

#endif /* QAPI_TYPES_JOB_H */
