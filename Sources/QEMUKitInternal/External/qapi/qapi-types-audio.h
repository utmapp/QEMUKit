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

#ifndef QAPI_TYPES_AUDIO_H
#define QAPI_TYPES_AUDIO_H

#include "qapi-builtin-types.h"

typedef struct AudiodevPerDirectionOptions AudiodevPerDirectionOptions;

typedef struct AudiodevGenericOptions AudiodevGenericOptions;

typedef struct AudiodevAlsaPerDirectionOptions AudiodevAlsaPerDirectionOptions;

typedef struct AudiodevAlsaOptions AudiodevAlsaOptions;

typedef struct AudiodevSndioOptions AudiodevSndioOptions;

typedef struct AudiodevCoreaudioPerDirectionOptions AudiodevCoreaudioPerDirectionOptions;

typedef struct AudiodevCoreaudioOptions AudiodevCoreaudioOptions;

typedef struct AudiodevDsoundOptions AudiodevDsoundOptions;

typedef struct AudiodevJackPerDirectionOptions AudiodevJackPerDirectionOptions;

typedef struct AudiodevJackOptions AudiodevJackOptions;

typedef struct AudiodevOssPerDirectionOptions AudiodevOssPerDirectionOptions;

typedef struct AudiodevOssOptions AudiodevOssOptions;

typedef struct AudiodevPaPerDirectionOptions AudiodevPaPerDirectionOptions;

typedef struct AudiodevPaOptions AudiodevPaOptions;

typedef struct AudiodevSdlPerDirectionOptions AudiodevSdlPerDirectionOptions;

typedef struct AudiodevSdlOptions AudiodevSdlOptions;

typedef struct AudiodevWavOptions AudiodevWavOptions;

typedef enum AudioFormat {
    AUDIO_FORMAT_U8,
    AUDIO_FORMAT_S8,
    AUDIO_FORMAT_U16,
    AUDIO_FORMAT_S16,
    AUDIO_FORMAT_U32,
    AUDIO_FORMAT_S32,
    AUDIO_FORMAT_F32,
    AUDIO_FORMAT__MAX,
} AudioFormat;

#define AudioFormat_str(val) \
    qapi_enum_lookup(&AudioFormat_lookup, (val))

extern const QEnumLookup AudioFormat_lookup;

typedef enum AudiodevDriver {
    AUDIODEV_DRIVER_NONE,
#if defined(CONFIG_AUDIO_ALSA)
    AUDIODEV_DRIVER_ALSA,
#endif /* defined(CONFIG_AUDIO_ALSA) */
#if defined(CONFIG_AUDIO_COREAUDIO)
    AUDIODEV_DRIVER_COREAUDIO,
#endif /* defined(CONFIG_AUDIO_COREAUDIO) */
#if defined(CONFIG_DBUS_DISPLAY)
    AUDIODEV_DRIVER_DBUS,
#endif /* defined(CONFIG_DBUS_DISPLAY) */
#if defined(CONFIG_AUDIO_DSOUND)
    AUDIODEV_DRIVER_DSOUND,
#endif /* defined(CONFIG_AUDIO_DSOUND) */
#if defined(CONFIG_AUDIO_JACK)
    AUDIODEV_DRIVER_JACK,
#endif /* defined(CONFIG_AUDIO_JACK) */
#if defined(CONFIG_AUDIO_OSS)
    AUDIODEV_DRIVER_OSS,
#endif /* defined(CONFIG_AUDIO_OSS) */
#if defined(CONFIG_AUDIO_PA)
    AUDIODEV_DRIVER_PA,
#endif /* defined(CONFIG_AUDIO_PA) */
#if defined(CONFIG_AUDIO_SDL)
    AUDIODEV_DRIVER_SDL,
#endif /* defined(CONFIG_AUDIO_SDL) */
#if defined(CONFIG_AUDIO_SNDIO)
    AUDIODEV_DRIVER_SNDIO,
#endif /* defined(CONFIG_AUDIO_SNDIO) */
#if defined(CONFIG_SPICE)
    AUDIODEV_DRIVER_SPICE,
#endif /* defined(CONFIG_SPICE) */
    AUDIODEV_DRIVER_WAV,
    AUDIODEV_DRIVER__MAX,
} AudiodevDriver;

#define AudiodevDriver_str(val) \
    qapi_enum_lookup(&AudiodevDriver_lookup, (val))

extern const QEnumLookup AudiodevDriver_lookup;

typedef struct q_obj_Audiodev_base q_obj_Audiodev_base;

typedef struct Audiodev Audiodev;

typedef struct AudiodevList AudiodevList;

struct AudiodevPerDirectionOptions {
    bool has_mixing_engine;
    bool mixing_engine;
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
};

void qapi_free_AudiodevPerDirectionOptions(AudiodevPerDirectionOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevPerDirectionOptions, qapi_free_AudiodevPerDirectionOptions)

struct AudiodevGenericOptions {
    bool has_in;
    AudiodevPerDirectionOptions *in;
    bool has_out;
    AudiodevPerDirectionOptions *out;
};

void qapi_free_AudiodevGenericOptions(AudiodevGenericOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevGenericOptions, qapi_free_AudiodevGenericOptions)

struct AudiodevAlsaPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_mixing_engine;
    bool mixing_engine;
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_dev;
    char *dev;
    bool has_period_length;
    uint32_t period_length;
    bool has_try_poll;
    bool try_poll;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevAlsaPerDirectionOptions_base(const AudiodevAlsaPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevAlsaPerDirectionOptions(AudiodevAlsaPerDirectionOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevAlsaPerDirectionOptions, qapi_free_AudiodevAlsaPerDirectionOptions)

struct AudiodevAlsaOptions {
    bool has_in;
    AudiodevAlsaPerDirectionOptions *in;
    bool has_out;
    AudiodevAlsaPerDirectionOptions *out;
    bool has_threshold;
    uint32_t threshold;
};

void qapi_free_AudiodevAlsaOptions(AudiodevAlsaOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevAlsaOptions, qapi_free_AudiodevAlsaOptions)

struct AudiodevSndioOptions {
    bool has_in;
    AudiodevPerDirectionOptions *in;
    bool has_out;
    AudiodevPerDirectionOptions *out;
    bool has_dev;
    char *dev;
    bool has_latency;
    uint32_t latency;
};

void qapi_free_AudiodevSndioOptions(AudiodevSndioOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevSndioOptions, qapi_free_AudiodevSndioOptions)

struct AudiodevCoreaudioPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_mixing_engine;
    bool mixing_engine;
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_buffer_count;
    uint32_t buffer_count;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevCoreaudioPerDirectionOptions_base(const AudiodevCoreaudioPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevCoreaudioPerDirectionOptions(AudiodevCoreaudioPerDirectionOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevCoreaudioPerDirectionOptions, qapi_free_AudiodevCoreaudioPerDirectionOptions)

struct AudiodevCoreaudioOptions {
    bool has_in;
    AudiodevCoreaudioPerDirectionOptions *in;
    bool has_out;
    AudiodevCoreaudioPerDirectionOptions *out;
};

void qapi_free_AudiodevCoreaudioOptions(AudiodevCoreaudioOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevCoreaudioOptions, qapi_free_AudiodevCoreaudioOptions)

struct AudiodevDsoundOptions {
    bool has_in;
    AudiodevPerDirectionOptions *in;
    bool has_out;
    AudiodevPerDirectionOptions *out;
    bool has_latency;
    uint32_t latency;
};

void qapi_free_AudiodevDsoundOptions(AudiodevDsoundOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevDsoundOptions, qapi_free_AudiodevDsoundOptions)

struct AudiodevJackPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_mixing_engine;
    bool mixing_engine;
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_server_name;
    char *server_name;
    bool has_client_name;
    char *client_name;
    bool has_connect_ports;
    char *connect_ports;
    bool has_start_server;
    bool start_server;
    bool has_exact_name;
    bool exact_name;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevJackPerDirectionOptions_base(const AudiodevJackPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevJackPerDirectionOptions(AudiodevJackPerDirectionOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevJackPerDirectionOptions, qapi_free_AudiodevJackPerDirectionOptions)

struct AudiodevJackOptions {
    bool has_in;
    AudiodevJackPerDirectionOptions *in;
    bool has_out;
    AudiodevJackPerDirectionOptions *out;
};

void qapi_free_AudiodevJackOptions(AudiodevJackOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevJackOptions, qapi_free_AudiodevJackOptions)

struct AudiodevOssPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_mixing_engine;
    bool mixing_engine;
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_dev;
    char *dev;
    bool has_buffer_count;
    uint32_t buffer_count;
    bool has_try_poll;
    bool try_poll;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevOssPerDirectionOptions_base(const AudiodevOssPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevOssPerDirectionOptions(AudiodevOssPerDirectionOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevOssPerDirectionOptions, qapi_free_AudiodevOssPerDirectionOptions)

struct AudiodevOssOptions {
    bool has_in;
    AudiodevOssPerDirectionOptions *in;
    bool has_out;
    AudiodevOssPerDirectionOptions *out;
    bool has_try_mmap;
    bool try_mmap;
    bool has_exclusive;
    bool exclusive;
    bool has_dsp_policy;
    uint32_t dsp_policy;
};

void qapi_free_AudiodevOssOptions(AudiodevOssOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevOssOptions, qapi_free_AudiodevOssOptions)

struct AudiodevPaPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_mixing_engine;
    bool mixing_engine;
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_name;
    char *name;
    bool has_stream_name;
    char *stream_name;
    bool has_latency;
    uint32_t latency;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevPaPerDirectionOptions_base(const AudiodevPaPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevPaPerDirectionOptions(AudiodevPaPerDirectionOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevPaPerDirectionOptions, qapi_free_AudiodevPaPerDirectionOptions)

struct AudiodevPaOptions {
    bool has_in;
    AudiodevPaPerDirectionOptions *in;
    bool has_out;
    AudiodevPaPerDirectionOptions *out;
    bool has_server;
    char *server;
};

void qapi_free_AudiodevPaOptions(AudiodevPaOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevPaOptions, qapi_free_AudiodevPaOptions)

struct AudiodevSdlPerDirectionOptions {
    /* Members inherited from AudiodevPerDirectionOptions: */
    bool has_mixing_engine;
    bool mixing_engine;
    bool has_fixed_settings;
    bool fixed_settings;
    bool has_frequency;
    uint32_t frequency;
    bool has_channels;
    uint32_t channels;
    bool has_voices;
    uint32_t voices;
    bool has_format;
    AudioFormat format;
    bool has_buffer_length;
    uint32_t buffer_length;
    /* Own members: */
    bool has_buffer_count;
    uint32_t buffer_count;
};

static inline AudiodevPerDirectionOptions *qapi_AudiodevSdlPerDirectionOptions_base(const AudiodevSdlPerDirectionOptions *obj)
{
    return (AudiodevPerDirectionOptions *)obj;
}

void qapi_free_AudiodevSdlPerDirectionOptions(AudiodevSdlPerDirectionOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevSdlPerDirectionOptions, qapi_free_AudiodevSdlPerDirectionOptions)

struct AudiodevSdlOptions {
    bool has_in;
    AudiodevSdlPerDirectionOptions *in;
    bool has_out;
    AudiodevSdlPerDirectionOptions *out;
};

void qapi_free_AudiodevSdlOptions(AudiodevSdlOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevSdlOptions, qapi_free_AudiodevSdlOptions)

struct AudiodevWavOptions {
    bool has_in;
    AudiodevPerDirectionOptions *in;
    bool has_out;
    AudiodevPerDirectionOptions *out;
    bool has_path;
    char *path;
};

void qapi_free_AudiodevWavOptions(AudiodevWavOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevWavOptions, qapi_free_AudiodevWavOptions)

struct q_obj_Audiodev_base {
    char *id;
    AudiodevDriver driver;
    bool has_timer_period;
    uint32_t timer_period;
};

void qapi_free_q_obj_Audiodev_base(q_obj_Audiodev_base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(q_obj_Audiodev_base, qapi_free_q_obj_Audiodev_base)

struct Audiodev {
    char *id;
    AudiodevDriver driver;
    bool has_timer_period;
    uint32_t timer_period;
    union { /* union tag is @driver */
        AudiodevGenericOptions none;
#if defined(CONFIG_AUDIO_ALSA)
        AudiodevAlsaOptions alsa;
#endif /* defined(CONFIG_AUDIO_ALSA) */
#if defined(CONFIG_AUDIO_COREAUDIO)
        AudiodevCoreaudioOptions coreaudio;
#endif /* defined(CONFIG_AUDIO_COREAUDIO) */
#if defined(CONFIG_DBUS_DISPLAY)
        AudiodevGenericOptions dbus;
#endif /* defined(CONFIG_DBUS_DISPLAY) */
#if defined(CONFIG_AUDIO_DSOUND)
        AudiodevDsoundOptions dsound;
#endif /* defined(CONFIG_AUDIO_DSOUND) */
#if defined(CONFIG_AUDIO_JACK)
        AudiodevJackOptions jack;
#endif /* defined(CONFIG_AUDIO_JACK) */
#if defined(CONFIG_AUDIO_OSS)
        AudiodevOssOptions oss;
#endif /* defined(CONFIG_AUDIO_OSS) */
#if defined(CONFIG_AUDIO_PA)
        AudiodevPaOptions pa;
#endif /* defined(CONFIG_AUDIO_PA) */
#if defined(CONFIG_AUDIO_SDL)
        AudiodevSdlOptions sdl;
#endif /* defined(CONFIG_AUDIO_SDL) */
#if defined(CONFIG_AUDIO_SNDIO)
        AudiodevSndioOptions sndio;
#endif /* defined(CONFIG_AUDIO_SNDIO) */
#if defined(CONFIG_SPICE)
        AudiodevGenericOptions spice;
#endif /* defined(CONFIG_SPICE) */
        AudiodevWavOptions wav;
    } u;
};

void qapi_free_Audiodev(Audiodev *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Audiodev, qapi_free_Audiodev)

struct AudiodevList {
    AudiodevList *next;
    Audiodev *value;
};

void qapi_free_AudiodevList(AudiodevList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AudiodevList, qapi_free_AudiodevList)

#endif /* QAPI_TYPES_AUDIO_H */
