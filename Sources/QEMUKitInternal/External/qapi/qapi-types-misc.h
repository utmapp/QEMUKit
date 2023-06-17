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

#ifndef QAPI_TYPES_MISC_H
#define QAPI_TYPES_MISC_H

#include "qapi-builtin-types.h"
#include "qapi-types-common.h"

typedef struct q_obj_add_client_arg q_obj_add_client_arg;

typedef struct NameInfo NameInfo;

typedef struct IOThreadInfo IOThreadInfo;

typedef struct IOThreadInfoList IOThreadInfoList;

typedef struct q_obj_human_monitor_command_arg q_obj_human_monitor_command_arg;

#if defined(CONFIG_POSIX)
typedef struct q_obj_getfd_arg q_obj_getfd_arg;
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_WIN32)
typedef struct q_obj_get_win32_socket_arg q_obj_get_win32_socket_arg;
#endif /* defined(CONFIG_WIN32) */

typedef struct q_obj_closefd_arg q_obj_closefd_arg;

typedef struct AddfdInfo AddfdInfo;

typedef struct q_obj_add_fd_arg q_obj_add_fd_arg;

typedef struct q_obj_remove_fd_arg q_obj_remove_fd_arg;

typedef struct FdsetFdInfo FdsetFdInfo;

typedef struct FdsetFdInfoList FdsetFdInfoList;

typedef struct FdsetInfo FdsetInfo;

typedef struct FdsetInfoList FdsetInfoList;

typedef enum CommandLineParameterType {
    COMMAND_LINE_PARAMETER_TYPE_STRING,
    COMMAND_LINE_PARAMETER_TYPE_BOOLEAN,
    COMMAND_LINE_PARAMETER_TYPE_NUMBER,
    COMMAND_LINE_PARAMETER_TYPE_SIZE,
    COMMAND_LINE_PARAMETER_TYPE__MAX,
} CommandLineParameterType;

#define CommandLineParameterType_str(val) \
    qapi_enum_lookup(&CommandLineParameterType_lookup, (val))

extern const QEnumLookup CommandLineParameterType_lookup;

typedef struct CommandLineParameterInfo CommandLineParameterInfo;

typedef struct CommandLineParameterInfoList CommandLineParameterInfoList;

typedef struct CommandLineOptionInfo CommandLineOptionInfo;

typedef struct q_obj_query_command_line_options_arg q_obj_query_command_line_options_arg;

typedef struct CommandLineOptionInfoList CommandLineOptionInfoList;

typedef struct q_obj_RTC_CHANGE_arg q_obj_RTC_CHANGE_arg;

typedef struct q_obj_VFU_CLIENT_HANGUP_arg q_obj_VFU_CLIENT_HANGUP_arg;

struct q_obj_add_client_arg {
    char *protocol;
    char *fdname;
    bool has_skipauth;
    bool skipauth;
    bool has_tls;
    bool tls;
};

void qapi_free_q_obj_add_client_arg(q_obj_add_client_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_add_client_arg, qapi_free_q_obj_add_client_arg)

struct NameInfo {
    bool has_name;
    char *name;
};

void qapi_free_NameInfo(NameInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NameInfo, qapi_free_NameInfo)

struct IOThreadInfo {
    char *id;
    int64_t thread_id;
    int64_t poll_max_ns;
    int64_t poll_grow;
    int64_t poll_shrink;
    int64_t aio_max_batch;
};

void qapi_free_IOThreadInfo(IOThreadInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(IOThreadInfo, qapi_free_IOThreadInfo)

struct IOThreadInfoList {
    IOThreadInfoList *next;
    IOThreadInfo *value;
};

void qapi_free_IOThreadInfoList(IOThreadInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(IOThreadInfoList, qapi_free_IOThreadInfoList)

struct q_obj_human_monitor_command_arg {
    char *command_line;
    bool has_cpu_index;
    int64_t cpu_index;
};

void qapi_free_q_obj_human_monitor_command_arg(q_obj_human_monitor_command_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_human_monitor_command_arg, qapi_free_q_obj_human_monitor_command_arg)

#if defined(CONFIG_POSIX)
struct q_obj_getfd_arg {
    char *fdname;
};
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_POSIX)
void qapi_free_q_obj_getfd_arg(q_obj_getfd_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_getfd_arg, qapi_free_q_obj_getfd_arg)
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_WIN32)
struct q_obj_get_win32_socket_arg {
    char *info;
    char *fdname;
};
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
void qapi_free_q_obj_get_win32_socket_arg(q_obj_get_win32_socket_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_get_win32_socket_arg, qapi_free_q_obj_get_win32_socket_arg)
#endif /* defined(CONFIG_WIN32) */

struct q_obj_closefd_arg {
    char *fdname;
};

void qapi_free_q_obj_closefd_arg(q_obj_closefd_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_closefd_arg, qapi_free_q_obj_closefd_arg)

struct AddfdInfo {
    int64_t fdset_id;
    int64_t fd;
};

void qapi_free_AddfdInfo(AddfdInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AddfdInfo, qapi_free_AddfdInfo)

struct q_obj_add_fd_arg {
    bool has_fdset_id;
    int64_t fdset_id;
    bool has_opaque;
    char *opaque;
};

void qapi_free_q_obj_add_fd_arg(q_obj_add_fd_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_add_fd_arg, qapi_free_q_obj_add_fd_arg)

struct q_obj_remove_fd_arg {
    int64_t fdset_id;
    bool has_fd;
    int64_t fd;
};

void qapi_free_q_obj_remove_fd_arg(q_obj_remove_fd_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_remove_fd_arg, qapi_free_q_obj_remove_fd_arg)

struct FdsetFdInfo {
    int64_t fd;
    bool has_opaque;
    char *opaque;
};

void qapi_free_FdsetFdInfo(FdsetFdInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FdsetFdInfo, qapi_free_FdsetFdInfo)

struct FdsetFdInfoList {
    FdsetFdInfoList *next;
    FdsetFdInfo *value;
};

void qapi_free_FdsetFdInfoList(FdsetFdInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FdsetFdInfoList, qapi_free_FdsetFdInfoList)

struct FdsetInfo {
    int64_t fdset_id;
    FdsetFdInfoList *fds;
};

void qapi_free_FdsetInfo(FdsetInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FdsetInfo, qapi_free_FdsetInfo)

struct FdsetInfoList {
    FdsetInfoList *next;
    FdsetInfo *value;
};

void qapi_free_FdsetInfoList(FdsetInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FdsetInfoList, qapi_free_FdsetInfoList)

struct CommandLineParameterInfo {
    char *name;
    CommandLineParameterType type;
    bool has_help;
    char *help;
    bool has_q_default;
    char *q_default;
};

void qapi_free_CommandLineParameterInfo(CommandLineParameterInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CommandLineParameterInfo, qapi_free_CommandLineParameterInfo)

struct CommandLineParameterInfoList {
    CommandLineParameterInfoList *next;
    CommandLineParameterInfo *value;
};

void qapi_free_CommandLineParameterInfoList(CommandLineParameterInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CommandLineParameterInfoList, qapi_free_CommandLineParameterInfoList)

struct CommandLineOptionInfo {
    char *option;
    CommandLineParameterInfoList *parameters;
};

void qapi_free_CommandLineOptionInfo(CommandLineOptionInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CommandLineOptionInfo, qapi_free_CommandLineOptionInfo)

struct q_obj_query_command_line_options_arg {
    bool has_option;
    char *option;
};

void qapi_free_q_obj_query_command_line_options_arg(q_obj_query_command_line_options_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_query_command_line_options_arg, qapi_free_q_obj_query_command_line_options_arg)

struct CommandLineOptionInfoList {
    CommandLineOptionInfoList *next;
    CommandLineOptionInfo *value;
};

void qapi_free_CommandLineOptionInfoList(CommandLineOptionInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CommandLineOptionInfoList, qapi_free_CommandLineOptionInfoList)

struct q_obj_RTC_CHANGE_arg {
    int64_t offset;
    char *qom_path;
};

void qapi_free_q_obj_RTC_CHANGE_arg(q_obj_RTC_CHANGE_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_RTC_CHANGE_arg, qapi_free_q_obj_RTC_CHANGE_arg)

struct q_obj_VFU_CLIENT_HANGUP_arg {
    char *vfu_id;
    char *vfu_qom_path;
    char *dev_id;
    char *dev_qom_path;
};

void qapi_free_q_obj_VFU_CLIENT_HANGUP_arg(q_obj_VFU_CLIENT_HANGUP_arg *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_VFU_CLIENT_HANGUP_arg, qapi_free_q_obj_VFU_CLIENT_HANGUP_arg)

#endif /* QAPI_TYPES_MISC_H */
