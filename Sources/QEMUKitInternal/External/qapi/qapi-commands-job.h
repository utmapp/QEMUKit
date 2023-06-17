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

#ifndef QAPI_COMMANDS_JOB_H
#define QAPI_COMMANDS_JOB_H

#include "qapi-types-job.h"

void qmp_job_pause(const char *id, Error **errp, void *ctx);
void qmp_job_resume(const char *id, Error **errp, void *ctx);
void qmp_job_cancel(const char *id, Error **errp, void *ctx);
void qmp_job_complete(const char *id, Error **errp, void *ctx);
void qmp_job_dismiss(const char *id, Error **errp, void *ctx);
void qmp_job_finalize(const char *id, Error **errp, void *ctx);
JobInfoList *qmp_query_jobs(Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_JOB_H */
