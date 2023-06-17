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

#ifndef QAPI_COMMANDS_TPM_H
#define QAPI_COMMANDS_TPM_H

#include "qapi-types-tpm.h"

#if defined(CONFIG_TPM)
TpmModelList *qmp_query_tpm_models(Error **errp, void *ctx);
#endif /* defined(CONFIG_TPM) */
#if defined(CONFIG_TPM)
TpmTypeList *qmp_query_tpm_types(Error **errp, void *ctx);
#endif /* defined(CONFIG_TPM) */
#if defined(CONFIG_TPM)
TPMInfoList *qmp_query_tpm(Error **errp, void *ctx);
#endif /* defined(CONFIG_TPM) */

#endif /* QAPI_COMMANDS_TPM_H */
