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

#ifndef QAPI_TYPES_RDMA_H
#define QAPI_TYPES_RDMA_H

#include "qapi-builtin-types.h"

typedef struct q_obj_RDMA_GID_STATUS_CHANGED_arg q_obj_RDMA_GID_STATUS_CHANGED_arg;

struct q_obj_RDMA_GID_STATUS_CHANGED_arg {
    char *netdev;
    bool gid_status;
    uint64_t subnet_prefix;
    uint64_t interface_id;
};

void qapi_free_q_obj_RDMA_GID_STATUS_CHANGED_arg(q_obj_RDMA_GID_STATUS_CHANGED_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_RDMA_GID_STATUS_CHANGED_arg, qapi_free_q_obj_RDMA_GID_STATUS_CHANGED_arg)

#endif /* QAPI_TYPES_RDMA_H */
