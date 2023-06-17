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

#ifndef QAPI_VISIT_AUDIO_H
#define QAPI_VISIT_AUDIO_H

#include "qapi-builtin-visit.h"
#include "qapi-types-audio.h"


bool visit_type_AudiodevPerDirectionOptions_members(Visitor *v, AudiodevPerDirectionOptions *obj, Error **errp);

bool visit_type_AudiodevPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevPerDirectionOptions **obj, Error **errp);

bool visit_type_AudiodevGenericOptions_members(Visitor *v, AudiodevGenericOptions *obj, Error **errp);

bool visit_type_AudiodevGenericOptions(Visitor *v, const char *name,
                 AudiodevGenericOptions **obj, Error **errp);

bool visit_type_AudiodevAlsaPerDirectionOptions_members(Visitor *v, AudiodevAlsaPerDirectionOptions *obj, Error **errp);

bool visit_type_AudiodevAlsaPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevAlsaPerDirectionOptions **obj, Error **errp);

bool visit_type_AudiodevAlsaOptions_members(Visitor *v, AudiodevAlsaOptions *obj, Error **errp);

bool visit_type_AudiodevAlsaOptions(Visitor *v, const char *name,
                 AudiodevAlsaOptions **obj, Error **errp);

bool visit_type_AudiodevSndioOptions_members(Visitor *v, AudiodevSndioOptions *obj, Error **errp);

bool visit_type_AudiodevSndioOptions(Visitor *v, const char *name,
                 AudiodevSndioOptions **obj, Error **errp);

bool visit_type_AudiodevCoreaudioPerDirectionOptions_members(Visitor *v, AudiodevCoreaudioPerDirectionOptions *obj, Error **errp);

bool visit_type_AudiodevCoreaudioPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevCoreaudioPerDirectionOptions **obj, Error **errp);

bool visit_type_AudiodevCoreaudioOptions_members(Visitor *v, AudiodevCoreaudioOptions *obj, Error **errp);

bool visit_type_AudiodevCoreaudioOptions(Visitor *v, const char *name,
                 AudiodevCoreaudioOptions **obj, Error **errp);

bool visit_type_AudiodevDsoundOptions_members(Visitor *v, AudiodevDsoundOptions *obj, Error **errp);

bool visit_type_AudiodevDsoundOptions(Visitor *v, const char *name,
                 AudiodevDsoundOptions **obj, Error **errp);

bool visit_type_AudiodevJackPerDirectionOptions_members(Visitor *v, AudiodevJackPerDirectionOptions *obj, Error **errp);

bool visit_type_AudiodevJackPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevJackPerDirectionOptions **obj, Error **errp);

bool visit_type_AudiodevJackOptions_members(Visitor *v, AudiodevJackOptions *obj, Error **errp);

bool visit_type_AudiodevJackOptions(Visitor *v, const char *name,
                 AudiodevJackOptions **obj, Error **errp);

bool visit_type_AudiodevOssPerDirectionOptions_members(Visitor *v, AudiodevOssPerDirectionOptions *obj, Error **errp);

bool visit_type_AudiodevOssPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevOssPerDirectionOptions **obj, Error **errp);

bool visit_type_AudiodevOssOptions_members(Visitor *v, AudiodevOssOptions *obj, Error **errp);

bool visit_type_AudiodevOssOptions(Visitor *v, const char *name,
                 AudiodevOssOptions **obj, Error **errp);

bool visit_type_AudiodevPaPerDirectionOptions_members(Visitor *v, AudiodevPaPerDirectionOptions *obj, Error **errp);

bool visit_type_AudiodevPaPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevPaPerDirectionOptions **obj, Error **errp);

bool visit_type_AudiodevPaOptions_members(Visitor *v, AudiodevPaOptions *obj, Error **errp);

bool visit_type_AudiodevPaOptions(Visitor *v, const char *name,
                 AudiodevPaOptions **obj, Error **errp);

bool visit_type_AudiodevSdlPerDirectionOptions_members(Visitor *v, AudiodevSdlPerDirectionOptions *obj, Error **errp);

bool visit_type_AudiodevSdlPerDirectionOptions(Visitor *v, const char *name,
                 AudiodevSdlPerDirectionOptions **obj, Error **errp);

bool visit_type_AudiodevSdlOptions_members(Visitor *v, AudiodevSdlOptions *obj, Error **errp);

bool visit_type_AudiodevSdlOptions(Visitor *v, const char *name,
                 AudiodevSdlOptions **obj, Error **errp);

bool visit_type_AudiodevWavOptions_members(Visitor *v, AudiodevWavOptions *obj, Error **errp);

bool visit_type_AudiodevWavOptions(Visitor *v, const char *name,
                 AudiodevWavOptions **obj, Error **errp);

bool visit_type_AudioFormat(Visitor *v, const char *name,
                 AudioFormat *obj, Error **errp);

bool visit_type_AudiodevDriver(Visitor *v, const char *name,
                 AudiodevDriver *obj, Error **errp);

bool visit_type_q_obj_Audiodev_base_members(Visitor *v, q_obj_Audiodev_base *obj, Error **errp);

bool visit_type_q_obj_Audiodev_base(Visitor *v, const char *name,
                 q_obj_Audiodev_base **obj, Error **errp);

bool visit_type_Audiodev_members(Visitor *v, Audiodev *obj, Error **errp);

bool visit_type_Audiodev(Visitor *v, const char *name,
                 Audiodev **obj, Error **errp);

bool visit_type_AudiodevList(Visitor *v, const char *name,
                 AudiodevList **obj, Error **errp);

#endif /* QAPI_VISIT_AUDIO_H */
