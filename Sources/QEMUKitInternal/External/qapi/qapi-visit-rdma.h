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

#ifndef QAPI_VISIT_RDMA_H
#define QAPI_VISIT_RDMA_H

#include "qapi-builtin-visit.h"
#include "qapi-types-rdma.h"


bool visit_type_q_obj_RDMA_GID_STATUS_CHANGED_arg_members(Visitor *v, q_obj_RDMA_GID_STATUS_CHANGED_arg *obj, Error **errp);

bool visit_type_q_obj_RDMA_GID_STATUS_CHANGED_arg(Visitor *v, const char *name,
                 q_obj_RDMA_GID_STATUS_CHANGED_arg **obj, Error **errp);

#endif /* QAPI_VISIT_RDMA_H */
