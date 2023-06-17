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
#include "qapi-visit-audio.h"

bool visit_type_AudiodevPerDirectionOptions_members(Visitor *v, AudiodevPerDirectionOptions *obj, Error **errp)
{
    if (visit_optional(v, "mixing-engine", &obj->has_mixing_engine)) {
        if (!visit_type_bool(v, "mixing-engine", &obj->mixing_engine, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "fixed-settings", &obj->has_fixed_settings)) {
        if (!visit_type_bool(v, "fixed-settings", &obj->fixed_settings, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "frequency", &obj->has_frequency)) {
        if (!visit_type_uint32(v, "frequency", &obj->frequency, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "channels", &obj->has_channels)) {
        if (!visit_type_uint32(v, "channels", &obj->channels, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "voices", &obj->has_voices)) {
        if (!visit_type_uint32(v, "voices", &obj->voices, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "format", &obj->has_format)) {
        if (!visit_type_AudioFormat(v, "format", &obj->format, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "buffer-length", &obj->has_buffer_length)) {
        if (!visit_type_uint32(v, "buffer-length", &obj->buffer_length, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevPerDirectionOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevPerDirectionOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevPerDirectionOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevPerDirectionOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevGenericOptions_members(Visitor *v, AudiodevGenericOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevGenericOptions(Visitor *v, const char *name,
                 AudiodevGenericOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevGenericOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevGenericOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevGenericOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevAlsaPerDirectionOptions_members(Visitor *v, AudiodevAlsaPerDirectionOptions *obj, Error **errp)
{
    if (!visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "dev", &obj->has_dev)) {
        if (!visit_type_str(v, "dev", &obj->dev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "period-length", &obj->has_period_length)) {
        if (!visit_type_uint32(v, "period-length", &obj->period_length, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "try-poll", &obj->has_try_poll)) {
        if (!visit_type_bool(v, "try-poll", &obj->try_poll, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevAlsaPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevAlsaPerDirectionOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevAlsaPerDirectionOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevAlsaPerDirectionOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevAlsaPerDirectionOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevAlsaOptions_members(Visitor *v, AudiodevAlsaOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevAlsaPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevAlsaPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "threshold", &obj->has_threshold)) {
        if (!visit_type_uint32(v, "threshold", &obj->threshold, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevAlsaOptions(Visitor *v, const char *name,
                 AudiodevAlsaOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevAlsaOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevAlsaOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevAlsaOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevSndioOptions_members(Visitor *v, AudiodevSndioOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dev", &obj->has_dev)) {
        if (!visit_type_str(v, "dev", &obj->dev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "latency", &obj->has_latency)) {
        if (!visit_type_uint32(v, "latency", &obj->latency, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevSndioOptions(Visitor *v, const char *name,
                 AudiodevSndioOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevSndioOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevSndioOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevSndioOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevCoreaudioPerDirectionOptions_members(Visitor *v, AudiodevCoreaudioPerDirectionOptions *obj, Error **errp)
{
    if (!visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "buffer-count", &obj->has_buffer_count)) {
        if (!visit_type_uint32(v, "buffer-count", &obj->buffer_count, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevCoreaudioPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevCoreaudioPerDirectionOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevCoreaudioPerDirectionOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevCoreaudioPerDirectionOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevCoreaudioPerDirectionOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevCoreaudioOptions_members(Visitor *v, AudiodevCoreaudioOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevCoreaudioPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevCoreaudioPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevCoreaudioOptions(Visitor *v, const char *name,
                 AudiodevCoreaudioOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevCoreaudioOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevCoreaudioOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevCoreaudioOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevDsoundOptions_members(Visitor *v, AudiodevDsoundOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "latency", &obj->has_latency)) {
        if (!visit_type_uint32(v, "latency", &obj->latency, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevDsoundOptions(Visitor *v, const char *name,
                 AudiodevDsoundOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevDsoundOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevDsoundOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevDsoundOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevJackPerDirectionOptions_members(Visitor *v, AudiodevJackPerDirectionOptions *obj, Error **errp)
{
    if (!visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "server-name", &obj->has_server_name)) {
        if (!visit_type_str(v, "server-name", &obj->server_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "client-name", &obj->has_client_name)) {
        if (!visit_type_str(v, "client-name", &obj->client_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "connect-ports", &obj->has_connect_ports)) {
        if (!visit_type_str(v, "connect-ports", &obj->connect_ports, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "start-server", &obj->has_start_server)) {
        if (!visit_type_bool(v, "start-server", &obj->start_server, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "exact-name", &obj->has_exact_name)) {
        if (!visit_type_bool(v, "exact-name", &obj->exact_name, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevJackPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevJackPerDirectionOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevJackPerDirectionOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevJackPerDirectionOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevJackPerDirectionOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevJackOptions_members(Visitor *v, AudiodevJackOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevJackPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevJackPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevJackOptions(Visitor *v, const char *name,
                 AudiodevJackOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevJackOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevJackOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevJackOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevOssPerDirectionOptions_members(Visitor *v, AudiodevOssPerDirectionOptions *obj, Error **errp)
{
    if (!visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "dev", &obj->has_dev)) {
        if (!visit_type_str(v, "dev", &obj->dev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "buffer-count", &obj->has_buffer_count)) {
        if (!visit_type_uint32(v, "buffer-count", &obj->buffer_count, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "try-poll", &obj->has_try_poll)) {
        if (!visit_type_bool(v, "try-poll", &obj->try_poll, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevOssPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevOssPerDirectionOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevOssPerDirectionOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevOssPerDirectionOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevOssPerDirectionOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevOssOptions_members(Visitor *v, AudiodevOssOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevOssPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevOssPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "try-mmap", &obj->has_try_mmap)) {
        if (!visit_type_bool(v, "try-mmap", &obj->try_mmap, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "exclusive", &obj->has_exclusive)) {
        if (!visit_type_bool(v, "exclusive", &obj->exclusive, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dsp-policy", &obj->has_dsp_policy)) {
        if (!visit_type_uint32(v, "dsp-policy", &obj->dsp_policy, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevOssOptions(Visitor *v, const char *name,
                 AudiodevOssOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevOssOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevOssOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevOssOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevPaPerDirectionOptions_members(Visitor *v, AudiodevPaPerDirectionOptions *obj, Error **errp)
{
    if (!visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "name", &obj->has_name)) {
        if (!visit_type_str(v, "name", &obj->name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "stream-name", &obj->has_stream_name)) {
        if (!visit_type_str(v, "stream-name", &obj->stream_name, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "latency", &obj->has_latency)) {
        if (!visit_type_uint32(v, "latency", &obj->latency, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevPaPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevPaPerDirectionOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevPaPerDirectionOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevPaPerDirectionOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevPaPerDirectionOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevPaOptions_members(Visitor *v, AudiodevPaOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevPaPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevPaPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "server", &obj->has_server)) {
        if (!visit_type_str(v, "server", &obj->server, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevPaOptions(Visitor *v, const char *name,
                 AudiodevPaOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevPaOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevPaOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevPaOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevSdlPerDirectionOptions_members(Visitor *v, AudiodevSdlPerDirectionOptions *obj, Error **errp)
{
    if (!visit_type_AudiodevPerDirectionOptions_members(v, (AudiodevPerDirectionOptions *)obj, errp)) {
        return false;
    }
    if (visit_optional(v, "buffer-count", &obj->has_buffer_count)) {
        if (!visit_type_uint32(v, "buffer-count", &obj->buffer_count, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevSdlPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevSdlPerDirectionOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevSdlPerDirectionOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevSdlPerDirectionOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevSdlPerDirectionOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevSdlOptions_members(Visitor *v, AudiodevSdlOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevSdlPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevSdlPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevSdlOptions(Visitor *v, const char *name,
                 AudiodevSdlOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevSdlOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevSdlOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevSdlOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevWavOptions_members(Visitor *v, AudiodevWavOptions *obj, Error **errp)
{
    if (visit_optional(v, "in", &obj->has_in)) {
        if (!visit_type_AudiodevPerDirectionOptions(v, "in", &obj->in, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "out", &obj->has_out)) {
        if (!visit_type_AudiodevPerDirectionOptions(v, "out", &obj->out, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "path", &obj->has_path)) {
        if (!visit_type_str(v, "path", &obj->path, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_AudiodevWavOptions(Visitor *v, const char *name,
                 AudiodevWavOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(AudiodevWavOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_AudiodevWavOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevWavOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudioFormat(Visitor *v, const char *name,
                 AudioFormat *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &AudioFormat_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_AudiodevDriver(Visitor *v, const char *name,
                 AudiodevDriver *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &AudiodevDriver_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_Audiodev_base_members(Visitor *v, q_obj_Audiodev_base *obj, Error **errp)
{
    if (!visit_type_str(v, "id", &obj->id, errp)) {
        return false;
    }
    if (!visit_type_AudiodevDriver(v, "driver", &obj->driver, errp)) {
        return false;
    }
    if (visit_optional(v, "timer-period", &obj->has_timer_period)) {
        if (!visit_type_uint32(v, "timer-period", &obj->timer_period, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_Audiodev_base(Visitor *v, const char *name,
                 q_obj_Audiodev_base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(q_obj_Audiodev_base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_q_obj_Audiodev_base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_q_obj_Audiodev_base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Audiodev_members(Visitor *v, Audiodev *obj, Error **errp)
{
    if (!visit_type_q_obj_Audiodev_base_members(v, (q_obj_Audiodev_base *)obj, errp)) {
        return false;
    }
    switch (obj->driver) {
    case AUDIODEV_DRIVER_NONE:
        return visit_type_AudiodevGenericOptions_members(v, &obj->u.none, errp);
#if defined(CONFIG_AUDIO_ALSA)
    case AUDIODEV_DRIVER_ALSA:
        return visit_type_AudiodevAlsaOptions_members(v, &obj->u.alsa, errp);
#endif /* defined(CONFIG_AUDIO_ALSA) */
#if defined(CONFIG_AUDIO_COREAUDIO)
    case AUDIODEV_DRIVER_COREAUDIO:
        return visit_type_AudiodevCoreaudioOptions_members(v, &obj->u.coreaudio, errp);
#endif /* defined(CONFIG_AUDIO_COREAUDIO) */
#if defined(CONFIG_DBUS_DISPLAY)
    case AUDIODEV_DRIVER_DBUS:
        return visit_type_AudiodevGenericOptions_members(v, &obj->u.dbus, errp);
#endif /* defined(CONFIG_DBUS_DISPLAY) */
#if defined(CONFIG_AUDIO_DSOUND)
    case AUDIODEV_DRIVER_DSOUND:
        return visit_type_AudiodevDsoundOptions_members(v, &obj->u.dsound, errp);
#endif /* defined(CONFIG_AUDIO_DSOUND) */
#if defined(CONFIG_AUDIO_JACK)
    case AUDIODEV_DRIVER_JACK:
        return visit_type_AudiodevJackOptions_members(v, &obj->u.jack, errp);
#endif /* defined(CONFIG_AUDIO_JACK) */
#if defined(CONFIG_AUDIO_OSS)
    case AUDIODEV_DRIVER_OSS:
        return visit_type_AudiodevOssOptions_members(v, &obj->u.oss, errp);
#endif /* defined(CONFIG_AUDIO_OSS) */
#if defined(CONFIG_AUDIO_PA)
    case AUDIODEV_DRIVER_PA:
        return visit_type_AudiodevPaOptions_members(v, &obj->u.pa, errp);
#endif /* defined(CONFIG_AUDIO_PA) */
#if defined(CONFIG_AUDIO_SDL)
    case AUDIODEV_DRIVER_SDL:
        return visit_type_AudiodevSdlOptions_members(v, &obj->u.sdl, errp);
#endif /* defined(CONFIG_AUDIO_SDL) */
#if defined(CONFIG_AUDIO_SNDIO)
    case AUDIODEV_DRIVER_SNDIO:
        return visit_type_AudiodevSndioOptions_members(v, &obj->u.sndio, errp);
#endif /* defined(CONFIG_AUDIO_SNDIO) */
#if defined(CONFIG_SPICE)
    case AUDIODEV_DRIVER_SPICE:
        return visit_type_AudiodevGenericOptions_members(v, &obj->u.spice, errp);
#endif /* defined(CONFIG_SPICE) */
    case AUDIODEV_DRIVER_WAV:
        return visit_type_AudiodevWavOptions_members(v, &obj->u.wav, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_Audiodev(Visitor *v, const char *name,
                 Audiodev **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Audiodev), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Audiodev_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Audiodev(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AudiodevList(Visitor *v, const char *name,
                 AudiodevList **obj, Error **errp)
{
    bool ok = false;
    AudiodevList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (AudiodevList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_Audiodev(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AudiodevList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_audio_c;
