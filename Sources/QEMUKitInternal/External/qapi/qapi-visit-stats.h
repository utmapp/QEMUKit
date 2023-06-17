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

#ifndef QAPI_VISIT_STATS_H
#define QAPI_VISIT_STATS_H

#include "qapi-builtin-visit.h"
#include "qapi-types-stats.h"


bool visit_type_StatsType(Visitor *v, const char *name,
                 StatsType *obj, Error **errp);

bool visit_type_StatsUnit(Visitor *v, const char *name,
                 StatsUnit *obj, Error **errp);

bool visit_type_StatsProvider(Visitor *v, const char *name,
                 StatsProvider *obj, Error **errp);

bool visit_type_StatsTarget(Visitor *v, const char *name,
                 StatsTarget *obj, Error **errp);

bool visit_type_StatsRequest_members(Visitor *v, StatsRequest *obj, Error **errp);

bool visit_type_StatsRequest(Visitor *v, const char *name,
                 StatsRequest **obj, Error **errp);

bool visit_type_StatsVCPUFilter_members(Visitor *v, StatsVCPUFilter *obj, Error **errp);

bool visit_type_StatsVCPUFilter(Visitor *v, const char *name,
                 StatsVCPUFilter **obj, Error **errp);

bool visit_type_StatsRequestList(Visitor *v, const char *name,
                 StatsRequestList **obj, Error **errp);

bool visit_type_q_obj_StatsFilter_base_members(Visitor *v, q_obj_StatsFilter_base *obj, Error **errp);

bool visit_type_q_obj_StatsFilter_base(Visitor *v, const char *name,
                 q_obj_StatsFilter_base **obj, Error **errp);

bool visit_type_StatsFilter_members(Visitor *v, StatsFilter *obj, Error **errp);

bool visit_type_StatsFilter(Visitor *v, const char *name,
                 StatsFilter **obj, Error **errp);

bool visit_type_StatsValue(Visitor *v, const char *name,
                 StatsValue **obj, Error **errp);

bool visit_type_Stats_members(Visitor *v, Stats *obj, Error **errp);

bool visit_type_Stats(Visitor *v, const char *name,
                 Stats **obj, Error **errp);

bool visit_type_StatsList(Visitor *v, const char *name,
                 StatsList **obj, Error **errp);

bool visit_type_StatsResult_members(Visitor *v, StatsResult *obj, Error **errp);

bool visit_type_StatsResult(Visitor *v, const char *name,
                 StatsResult **obj, Error **errp);

bool visit_type_StatsResultList(Visitor *v, const char *name,
                 StatsResultList **obj, Error **errp);

bool visit_type_StatsSchemaValue_members(Visitor *v, StatsSchemaValue *obj, Error **errp);

bool visit_type_StatsSchemaValue(Visitor *v, const char *name,
                 StatsSchemaValue **obj, Error **errp);

bool visit_type_StatsSchemaValueList(Visitor *v, const char *name,
                 StatsSchemaValueList **obj, Error **errp);

bool visit_type_StatsSchema_members(Visitor *v, StatsSchema *obj, Error **errp);

bool visit_type_StatsSchema(Visitor *v, const char *name,
                 StatsSchema **obj, Error **errp);

bool visit_type_q_obj_query_stats_schemas_arg_members(Visitor *v, q_obj_query_stats_schemas_arg *obj, Error **errp);

bool visit_type_q_obj_query_stats_schemas_arg(Visitor *v, const char *name,
                 q_obj_query_stats_schemas_arg **obj, Error **errp);

bool visit_type_StatsSchemaList(Visitor *v, const char *name,
                 StatsSchemaList **obj, Error **errp);

#endif /* QAPI_VISIT_STATS_H */
