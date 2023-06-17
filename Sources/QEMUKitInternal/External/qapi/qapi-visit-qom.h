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

#ifndef QAPI_VISIT_QOM_H
#define QAPI_VISIT_QOM_H

#include "qapi-builtin-visit.h"
#include "qapi-types-qom.h"

#include "qapi-visit-authz.h"
#include "qapi-visit-block-core.h"
#include "qapi-visit-common.h"
#include "qapi-visit-crypto.h"

bool visit_type_ObjectPropertyInfo_members(Visitor *v, ObjectPropertyInfo *obj, Error **errp);

bool visit_type_ObjectPropertyInfo(Visitor *v, const char *name,
                 ObjectPropertyInfo **obj, Error **errp);

bool visit_type_q_obj_qom_list_arg_members(Visitor *v, q_obj_qom_list_arg *obj, Error **errp);

bool visit_type_q_obj_qom_list_arg(Visitor *v, const char *name,
                 q_obj_qom_list_arg **obj, Error **errp);

bool visit_type_ObjectPropertyInfoList(Visitor *v, const char *name,
                 ObjectPropertyInfoList **obj, Error **errp);

bool visit_type_q_obj_qom_get_arg_members(Visitor *v, q_obj_qom_get_arg *obj, Error **errp);

bool visit_type_q_obj_qom_get_arg(Visitor *v, const char *name,
                 q_obj_qom_get_arg **obj, Error **errp);

bool visit_type_q_obj_qom_set_arg_members(Visitor *v, q_obj_qom_set_arg *obj, Error **errp);

bool visit_type_q_obj_qom_set_arg(Visitor *v, const char *name,
                 q_obj_qom_set_arg **obj, Error **errp);

bool visit_type_ObjectTypeInfo_members(Visitor *v, ObjectTypeInfo *obj, Error **errp);

bool visit_type_ObjectTypeInfo(Visitor *v, const char *name,
                 ObjectTypeInfo **obj, Error **errp);

bool visit_type_q_obj_qom_list_types_arg_members(Visitor *v, q_obj_qom_list_types_arg *obj, Error **errp);

bool visit_type_q_obj_qom_list_types_arg(Visitor *v, const char *name,
                 q_obj_qom_list_types_arg **obj, Error **errp);

bool visit_type_ObjectTypeInfoList(Visitor *v, const char *name,
                 ObjectTypeInfoList **obj, Error **errp);

bool visit_type_q_obj_qom_list_properties_arg_members(Visitor *v, q_obj_qom_list_properties_arg *obj, Error **errp);

bool visit_type_q_obj_qom_list_properties_arg(Visitor *v, const char *name,
                 q_obj_qom_list_properties_arg **obj, Error **errp);

bool visit_type_CanHostSocketcanProperties_members(Visitor *v, CanHostSocketcanProperties *obj, Error **errp);

bool visit_type_CanHostSocketcanProperties(Visitor *v, const char *name,
                 CanHostSocketcanProperties **obj, Error **errp);

bool visit_type_ColoCompareProperties_members(Visitor *v, ColoCompareProperties *obj, Error **errp);

bool visit_type_ColoCompareProperties(Visitor *v, const char *name,
                 ColoCompareProperties **obj, Error **errp);

bool visit_type_CryptodevBackendProperties_members(Visitor *v, CryptodevBackendProperties *obj, Error **errp);

bool visit_type_CryptodevBackendProperties(Visitor *v, const char *name,
                 CryptodevBackendProperties **obj, Error **errp);

bool visit_type_CryptodevVhostUserProperties_members(Visitor *v, CryptodevVhostUserProperties *obj, Error **errp);

bool visit_type_CryptodevVhostUserProperties(Visitor *v, const char *name,
                 CryptodevVhostUserProperties **obj, Error **errp);

bool visit_type_DBusVMStateProperties_members(Visitor *v, DBusVMStateProperties *obj, Error **errp);

bool visit_type_DBusVMStateProperties(Visitor *v, const char *name,
                 DBusVMStateProperties **obj, Error **errp);

bool visit_type_NetfilterInsert(Visitor *v, const char *name,
                 NetfilterInsert *obj, Error **errp);

bool visit_type_NetfilterProperties_members(Visitor *v, NetfilterProperties *obj, Error **errp);

bool visit_type_NetfilterProperties(Visitor *v, const char *name,
                 NetfilterProperties **obj, Error **errp);

bool visit_type_FilterBufferProperties_members(Visitor *v, FilterBufferProperties *obj, Error **errp);

bool visit_type_FilterBufferProperties(Visitor *v, const char *name,
                 FilterBufferProperties **obj, Error **errp);

bool visit_type_FilterDumpProperties_members(Visitor *v, FilterDumpProperties *obj, Error **errp);

bool visit_type_FilterDumpProperties(Visitor *v, const char *name,
                 FilterDumpProperties **obj, Error **errp);

bool visit_type_FilterMirrorProperties_members(Visitor *v, FilterMirrorProperties *obj, Error **errp);

bool visit_type_FilterMirrorProperties(Visitor *v, const char *name,
                 FilterMirrorProperties **obj, Error **errp);

bool visit_type_FilterRedirectorProperties_members(Visitor *v, FilterRedirectorProperties *obj, Error **errp);

bool visit_type_FilterRedirectorProperties(Visitor *v, const char *name,
                 FilterRedirectorProperties **obj, Error **errp);

bool visit_type_FilterRewriterProperties_members(Visitor *v, FilterRewriterProperties *obj, Error **errp);

bool visit_type_FilterRewriterProperties(Visitor *v, const char *name,
                 FilterRewriterProperties **obj, Error **errp);

bool visit_type_InputBarrierProperties_members(Visitor *v, InputBarrierProperties *obj, Error **errp);

bool visit_type_InputBarrierProperties(Visitor *v, const char *name,
                 InputBarrierProperties **obj, Error **errp);

bool visit_type_InputLinuxProperties_members(Visitor *v, InputLinuxProperties *obj, Error **errp);

bool visit_type_InputLinuxProperties(Visitor *v, const char *name,
                 InputLinuxProperties **obj, Error **errp);

bool visit_type_EventLoopBaseProperties_members(Visitor *v, EventLoopBaseProperties *obj, Error **errp);

bool visit_type_EventLoopBaseProperties(Visitor *v, const char *name,
                 EventLoopBaseProperties **obj, Error **errp);

bool visit_type_IothreadProperties_members(Visitor *v, IothreadProperties *obj, Error **errp);

bool visit_type_IothreadProperties(Visitor *v, const char *name,
                 IothreadProperties **obj, Error **errp);

bool visit_type_MainLoopProperties_members(Visitor *v, MainLoopProperties *obj, Error **errp);

bool visit_type_MainLoopProperties(Visitor *v, const char *name,
                 MainLoopProperties **obj, Error **errp);

bool visit_type_MemoryBackendProperties_members(Visitor *v, MemoryBackendProperties *obj, Error **errp);

bool visit_type_MemoryBackendProperties(Visitor *v, const char *name,
                 MemoryBackendProperties **obj, Error **errp);

bool visit_type_MemoryBackendFileProperties_members(Visitor *v, MemoryBackendFileProperties *obj, Error **errp);

bool visit_type_MemoryBackendFileProperties(Visitor *v, const char *name,
                 MemoryBackendFileProperties **obj, Error **errp);

bool visit_type_MemoryBackendMemfdProperties_members(Visitor *v, MemoryBackendMemfdProperties *obj, Error **errp);

bool visit_type_MemoryBackendMemfdProperties(Visitor *v, const char *name,
                 MemoryBackendMemfdProperties **obj, Error **errp);

bool visit_type_MemoryBackendEpcProperties_members(Visitor *v, MemoryBackendEpcProperties *obj, Error **errp);

bool visit_type_MemoryBackendEpcProperties(Visitor *v, const char *name,
                 MemoryBackendEpcProperties **obj, Error **errp);

bool visit_type_PrManagerHelperProperties_members(Visitor *v, PrManagerHelperProperties *obj, Error **errp);

bool visit_type_PrManagerHelperProperties(Visitor *v, const char *name,
                 PrManagerHelperProperties **obj, Error **errp);

bool visit_type_QtestProperties_members(Visitor *v, QtestProperties *obj, Error **errp);

bool visit_type_QtestProperties(Visitor *v, const char *name,
                 QtestProperties **obj, Error **errp);

bool visit_type_RemoteObjectProperties_members(Visitor *v, RemoteObjectProperties *obj, Error **errp);

bool visit_type_RemoteObjectProperties(Visitor *v, const char *name,
                 RemoteObjectProperties **obj, Error **errp);

bool visit_type_VfioUserServerProperties_members(Visitor *v, VfioUserServerProperties *obj, Error **errp);

bool visit_type_VfioUserServerProperties(Visitor *v, const char *name,
                 VfioUserServerProperties **obj, Error **errp);

bool visit_type_RngProperties_members(Visitor *v, RngProperties *obj, Error **errp);

bool visit_type_RngProperties(Visitor *v, const char *name,
                 RngProperties **obj, Error **errp);

bool visit_type_RngEgdProperties_members(Visitor *v, RngEgdProperties *obj, Error **errp);

bool visit_type_RngEgdProperties(Visitor *v, const char *name,
                 RngEgdProperties **obj, Error **errp);

bool visit_type_RngRandomProperties_members(Visitor *v, RngRandomProperties *obj, Error **errp);

bool visit_type_RngRandomProperties(Visitor *v, const char *name,
                 RngRandomProperties **obj, Error **errp);

bool visit_type_SevGuestProperties_members(Visitor *v, SevGuestProperties *obj, Error **errp);

bool visit_type_SevGuestProperties(Visitor *v, const char *name,
                 SevGuestProperties **obj, Error **errp);

bool visit_type_ThreadContextProperties_members(Visitor *v, ThreadContextProperties *obj, Error **errp);

bool visit_type_ThreadContextProperties(Visitor *v, const char *name,
                 ThreadContextProperties **obj, Error **errp);

bool visit_type_ObjectType(Visitor *v, const char *name,
                 ObjectType *obj, Error **errp);

bool visit_type_q_obj_ObjectOptions_base_members(Visitor *v, q_obj_ObjectOptions_base *obj, Error **errp);

bool visit_type_q_obj_ObjectOptions_base(Visitor *v, const char *name,
                 q_obj_ObjectOptions_base **obj, Error **errp);

bool visit_type_ObjectOptions_members(Visitor *v, ObjectOptions *obj, Error **errp);

bool visit_type_ObjectOptions(Visitor *v, const char *name,
                 ObjectOptions **obj, Error **errp);

bool visit_type_q_obj_object_del_arg_members(Visitor *v, q_obj_object_del_arg *obj, Error **errp);

bool visit_type_q_obj_object_del_arg(Visitor *v, const char *name,
                 q_obj_object_del_arg **obj, Error **errp);

#endif /* QAPI_VISIT_QOM_H */
