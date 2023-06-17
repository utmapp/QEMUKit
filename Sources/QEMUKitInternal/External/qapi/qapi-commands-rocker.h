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

#ifndef QAPI_COMMANDS_ROCKER_H
#define QAPI_COMMANDS_ROCKER_H

#include "qapi-types-rocker.h"

RockerSwitch *qmp_query_rocker(const char *name, Error **errp, void *ctx);
RockerPortList *qmp_query_rocker_ports(const char *name, Error **errp, void *ctx);
RockerOfDpaFlowList *qmp_query_rocker_of_dpa_flows(const char *name, bool has_tbl_id, uint32_t tbl_id, Error **errp, void *ctx);
RockerOfDpaGroupList *qmp_query_rocker_of_dpa_groups(const char *name, bool has_type, uint8_t type, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_ROCKER_H */
