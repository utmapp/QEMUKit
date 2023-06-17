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

#ifndef QAPI_VISIT_MISC_H
#define QAPI_VISIT_MISC_H

#include "qapi-builtin-visit.h"
#include "qapi-types-misc.h"

#include "qapi-visit-common.h"

bool visit_type_q_obj_add_client_arg_members(Visitor *v, q_obj_add_client_arg *obj, Error **errp);

bool visit_type_q_obj_add_client_arg(Visitor *v, const char *name,
                 q_obj_add_client_arg **obj, Error **errp);

bool visit_type_NameInfo_members(Visitor *v, NameInfo *obj, Error **errp);

bool visit_type_NameInfo(Visitor *v, const char *name,
                 NameInfo **obj, Error **errp);

bool visit_type_IOThreadInfo_members(Visitor *v, IOThreadInfo *obj, Error **errp);

bool visit_type_IOThreadInfo(Visitor *v, const char *name,
                 IOThreadInfo **obj, Error **errp);

bool visit_type_IOThreadInfoList(Visitor *v, const char *name,
                 IOThreadInfoList **obj, Error **errp);

bool visit_type_q_obj_human_monitor_command_arg_members(Visitor *v, q_obj_human_monitor_command_arg *obj, Error **errp);

bool visit_type_q_obj_human_monitor_command_arg(Visitor *v, const char *name,
                 q_obj_human_monitor_command_arg **obj, Error **errp);

#if defined(CONFIG_POSIX)
bool visit_type_q_obj_getfd_arg_members(Visitor *v, q_obj_getfd_arg *obj, Error **errp);

bool visit_type_q_obj_getfd_arg(Visitor *v, const char *name,
                 q_obj_getfd_arg **obj, Error **errp);
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_WIN32)
bool visit_type_q_obj_get_win32_socket_arg_members(Visitor *v, q_obj_get_win32_socket_arg *obj, Error **errp);

bool visit_type_q_obj_get_win32_socket_arg(Visitor *v, const char *name,
                 q_obj_get_win32_socket_arg **obj, Error **errp);
#endif /* defined(CONFIG_WIN32) */

bool visit_type_q_obj_closefd_arg_members(Visitor *v, q_obj_closefd_arg *obj, Error **errp);

bool visit_type_q_obj_closefd_arg(Visitor *v, const char *name,
                 q_obj_closefd_arg **obj, Error **errp);

bool visit_type_AddfdInfo_members(Visitor *v, AddfdInfo *obj, Error **errp);

bool visit_type_AddfdInfo(Visitor *v, const char *name,
                 AddfdInfo **obj, Error **errp);

bool visit_type_q_obj_add_fd_arg_members(Visitor *v, q_obj_add_fd_arg *obj, Error **errp);

bool visit_type_q_obj_add_fd_arg(Visitor *v, const char *name,
                 q_obj_add_fd_arg **obj, Error **errp);

bool visit_type_q_obj_remove_fd_arg_members(Visitor *v, q_obj_remove_fd_arg *obj, Error **errp);

bool visit_type_q_obj_remove_fd_arg(Visitor *v, const char *name,
                 q_obj_remove_fd_arg **obj, Error **errp);

bool visit_type_FdsetFdInfo_members(Visitor *v, FdsetFdInfo *obj, Error **errp);

bool visit_type_FdsetFdInfo(Visitor *v, const char *name,
                 FdsetFdInfo **obj, Error **errp);

bool visit_type_FdsetFdInfoList(Visitor *v, const char *name,
                 FdsetFdInfoList **obj, Error **errp);

bool visit_type_FdsetInfo_members(Visitor *v, FdsetInfo *obj, Error **errp);

bool visit_type_FdsetInfo(Visitor *v, const char *name,
                 FdsetInfo **obj, Error **errp);

bool visit_type_FdsetInfoList(Visitor *v, const char *name,
                 FdsetInfoList **obj, Error **errp);

bool visit_type_CommandLineParameterType(Visitor *v, const char *name,
                 CommandLineParameterType *obj, Error **errp);

bool visit_type_CommandLineParameterInfo_members(Visitor *v, CommandLineParameterInfo *obj, Error **errp);

bool visit_type_CommandLineParameterInfo(Visitor *v, const char *name,
                 CommandLineParameterInfo **obj, Error **errp);

bool visit_type_CommandLineParameterInfoList(Visitor *v, const char *name,
                 CommandLineParameterInfoList **obj, Error **errp);

bool visit_type_CommandLineOptionInfo_members(Visitor *v, CommandLineOptionInfo *obj, Error **errp);

bool visit_type_CommandLineOptionInfo(Visitor *v, const char *name,
                 CommandLineOptionInfo **obj, Error **errp);

bool visit_type_q_obj_query_command_line_options_arg_members(Visitor *v, q_obj_query_command_line_options_arg *obj, Error **errp);

bool visit_type_q_obj_query_command_line_options_arg(Visitor *v, const char *name,
                 q_obj_query_command_line_options_arg **obj, Error **errp);

bool visit_type_CommandLineOptionInfoList(Visitor *v, const char *name,
                 CommandLineOptionInfoList **obj, Error **errp);

bool visit_type_q_obj_RTC_CHANGE_arg_members(Visitor *v, q_obj_RTC_CHANGE_arg *obj, Error **errp);

bool visit_type_q_obj_RTC_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_RTC_CHANGE_arg **obj, Error **errp);

bool visit_type_q_obj_VFU_CLIENT_HANGUP_arg_members(Visitor *v, q_obj_VFU_CLIENT_HANGUP_arg *obj, Error **errp);

bool visit_type_q_obj_VFU_CLIENT_HANGUP_arg(Visitor *v, const char *name,
                 q_obj_VFU_CLIENT_HANGUP_arg **obj, Error **errp);

#endif /* QAPI_VISIT_MISC_H */
