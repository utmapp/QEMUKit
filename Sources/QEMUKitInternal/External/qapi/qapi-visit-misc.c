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

#include "qemu-compat.h"
#include "error.h"
#include "qerror.h"
#include "qapi-visit-misc.h"

bool visit_type_q_obj_add_client_arg_members(Visitor *v, q_obj_add_client_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "protocol", &obj->protocol, errp)) {
        return false;
    }
    if (!visit_type_str(v, "fdname", &obj->fdname, errp)) {
        return false;
    }
    if (visit_optional(v, "skipauth", &obj->has_skipauth)) {
        if (!visit_type_bool(v, "skipauth", &obj->skipauth, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "tls", &obj->has_tls)) {
        if (!visit_type_bool(v, "tls", &obj->tls, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_add_client_arg(Visitor *v, const char *name,
                 q_obj_add_client_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_add_client_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_add_client_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_add_client_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NameInfo_members(Visitor *v, NameInfo *obj, Error **errp)
{
    if (visit_optional(v, "name", &obj->has_name)) {
        if (!visit_type_str(v, "name", &obj->name, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NameInfo(Visitor *v, const char *name,
                 NameInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NameInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NameInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NameInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_IOThreadInfo_members(Visitor *v, IOThreadInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_int(v, "thread-id", &obj->thread_id, errp)) {
        return false;
    }
    if (!visit_type_int(v, "poll-max-ns", &obj->poll_max_ns, errp)) {
        return false;
    }
    if (!visit_type_int(v, "poll-grow", &obj->poll_grow, errp)) {
        return false;
    }
    if (!visit_type_int(v, "poll-shrink", &obj->poll_shrink, errp)) {
        return false;
    }
    if (!visit_type_int(v, "aio-max-batch", &obj->aio_max_batch, errp)) {
        return false;
    }
    return true;
}

bool visit_type_IOThreadInfo(Visitor *v, const char *name,
                 IOThreadInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(IOThreadInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_IOThreadInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_IOThreadInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_IOThreadInfoList(Visitor *v, const char *name,
                 IOThreadInfoList **obj, Error **errp)
{
    bool ok = false;
    IOThreadInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (IOThreadInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_IOThreadInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_IOThreadInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_human_monitor_command_arg_members(Visitor *v, q_obj_human_monitor_command_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "command-line", &obj->command_line, errp)) {
        return false;
    }
    if (visit_optional(v, "cpu-index", &obj->has_cpu_index)) {
        if (!visit_type_int(v, "cpu-index", &obj->cpu_index, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_human_monitor_command_arg(Visitor *v, const char *name,
                 q_obj_human_monitor_command_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_human_monitor_command_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_human_monitor_command_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_human_monitor_command_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

#if defined(CONFIG_POSIX)
bool visit_type_q_obj_getfd_arg_members(Visitor *v, q_obj_getfd_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "fdname", &obj->fdname, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_getfd_arg(Visitor *v, const char *name,
                 q_obj_getfd_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_getfd_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_getfd_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_getfd_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_POSIX) */

#if defined(CONFIG_WIN32)
bool visit_type_q_obj_get_win32_socket_arg_members(Visitor *v, q_obj_get_win32_socket_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "info", &obj->info, errp)) {
        return false;
    }
    if (!visit_type_str(v, "fdname", &obj->fdname, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_get_win32_socket_arg(Visitor *v, const char *name,
                 q_obj_get_win32_socket_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_get_win32_socket_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_get_win32_socket_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_get_win32_socket_arg(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(CONFIG_WIN32) */

bool visit_type_q_obj_closefd_arg_members(Visitor *v, q_obj_closefd_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "fdname", &obj->fdname, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_closefd_arg(Visitor *v, const char *name,
                 q_obj_closefd_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_closefd_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_closefd_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_closefd_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AddfdInfo_members(Visitor *v, AddfdInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "fdset-id", &obj->fdset_id, errp)) {
        return false;
    }
    if (!visit_type_int(v, "fd", &obj->fd, errp)) {
        return false;
    }
    return true;
}

bool visit_type_AddfdInfo(Visitor *v, const char *name,
                 AddfdInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AddfdInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AddfdInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AddfdInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_add_fd_arg_members(Visitor *v, q_obj_add_fd_arg *obj, Error **errp)
{
    if (visit_optional(v, "fdset-id", &obj->has_fdset_id)) {
        if (!visit_type_int(v, "fdset-id", &obj->fdset_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "opaque", &obj->has_opaque)) {
        if (!visit_type_str(v, "opaque", &obj->opaque, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_add_fd_arg(Visitor *v, const char *name,
                 q_obj_add_fd_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_add_fd_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_add_fd_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_add_fd_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_remove_fd_arg_members(Visitor *v, q_obj_remove_fd_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "fdset-id", &obj->fdset_id, errp)) {
        return false;
    }
    if (visit_optional(v, "fd", &obj->has_fd)) {
        if (!visit_type_int(v, "fd", &obj->fd, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_remove_fd_arg(Visitor *v, const char *name,
                 q_obj_remove_fd_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_remove_fd_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_remove_fd_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_remove_fd_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FdsetFdInfo_members(Visitor *v, FdsetFdInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "fd", &obj->fd, errp)) {
        return false;
    }
    if (visit_optional(v, "opaque", &obj->has_opaque)) {
        if (!visit_type_str(v, "opaque", &obj->opaque, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_FdsetFdInfo(Visitor *v, const char *name,
                 FdsetFdInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FdsetFdInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FdsetFdInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FdsetFdInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FdsetFdInfoList(Visitor *v, const char *name,
                 FdsetFdInfoList **obj, Error **errp)
{
    bool ok = false;
    FdsetFdInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (FdsetFdInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_FdsetFdInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FdsetFdInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FdsetInfo_members(Visitor *v, FdsetInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "fdset-id", &obj->fdset_id, errp)) {
        return false;
    }
    if (!visit_type_FdsetFdInfoList(v, "fds", &obj->fds, errp)) {
        return false;
    }
    return true;
}

bool visit_type_FdsetInfo(Visitor *v, const char *name,
                 FdsetInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FdsetInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FdsetInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FdsetInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FdsetInfoList(Visitor *v, const char *name,
                 FdsetInfoList **obj, Error **errp)
{
    bool ok = false;
    FdsetInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (FdsetInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_FdsetInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FdsetInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CommandLineParameterType(Visitor *v, const char *name,
                 CommandLineParameterType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CommandLineParameterType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CommandLineParameterInfo_members(Visitor *v, CommandLineParameterInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (!visit_type_CommandLineParameterType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (visit_optional(v, "help", &obj->has_help)) {
        if (!visit_type_str(v, "help", &obj->help, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "default", &obj->has_q_default)) {
        if (!visit_type_str(v, "default", &obj->q_default, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_CommandLineParameterInfo(Visitor *v, const char *name,
                 CommandLineParameterInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CommandLineParameterInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CommandLineParameterInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CommandLineParameterInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CommandLineParameterInfoList(Visitor *v, const char *name,
                 CommandLineParameterInfoList **obj, Error **errp)
{
    bool ok = false;
    CommandLineParameterInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CommandLineParameterInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CommandLineParameterInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CommandLineParameterInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CommandLineOptionInfo_members(Visitor *v, CommandLineOptionInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "option", &obj->option, errp)) {
        return false;
    }
    if (!visit_type_CommandLineParameterInfoList(v, "parameters", &obj->parameters, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CommandLineOptionInfo(Visitor *v, const char *name,
                 CommandLineOptionInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CommandLineOptionInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CommandLineOptionInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CommandLineOptionInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_query_command_line_options_arg_members(Visitor *v, q_obj_query_command_line_options_arg *obj, Error **errp)
{
    if (visit_optional(v, "option", &obj->has_option)) {
        if (!visit_type_str(v, "option", &obj->option, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_query_command_line_options_arg(Visitor *v, const char *name,
                 q_obj_query_command_line_options_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_query_command_line_options_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_query_command_line_options_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_query_command_line_options_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CommandLineOptionInfoList(Visitor *v, const char *name,
                 CommandLineOptionInfoList **obj, Error **errp)
{
    bool ok = false;
    CommandLineOptionInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CommandLineOptionInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CommandLineOptionInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CommandLineOptionInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_RTC_CHANGE_arg_members(Visitor *v, q_obj_RTC_CHANGE_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "offset", &obj->offset, errp)) {
        return false;
    }
    if (!visit_type_str(v, "qom-path", &obj->qom_path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_RTC_CHANGE_arg(Visitor *v, const char *name,
                 q_obj_RTC_CHANGE_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_RTC_CHANGE_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_RTC_CHANGE_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_RTC_CHANGE_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_VFU_CLIENT_HANGUP_arg_members(Visitor *v, q_obj_VFU_CLIENT_HANGUP_arg *obj, Error **errp)
{
    if (!visit_type_str(v, "vfu-id", &obj->vfu_id, errp)) {
        return false;
    }
    if (!visit_type_str(v, "vfu-qom-path", &obj->vfu_qom_path, errp)) {
        return false;
    }
    if (!visit_type_str(v, "dev-id", &obj->dev_id, errp)) {
        return false;
    }
    if (!visit_type_str(v, "dev-qom-path", &obj->dev_qom_path, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_VFU_CLIENT_HANGUP_arg(Visitor *v, const char *name,
                 q_obj_VFU_CLIENT_HANGUP_arg **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_VFU_CLIENT_HANGUP_arg), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_VFU_CLIENT_HANGUP_arg_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_VFU_CLIENT_HANGUP_arg(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_misc_c;
