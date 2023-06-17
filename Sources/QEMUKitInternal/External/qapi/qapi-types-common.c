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

#include "qemu-compat.h"
#include "dealloc-visitor.h"
#include "qapi-types-common.h"
#include "qapi-visit-common.h"

const QEnumLookup IoOperationType_lookup = {
    .array = (const char *const[]) {
        [IO_OPERATION_TYPE_READ] = "read",
        [IO_OPERATION_TYPE_WRITE] = "write",
    },
    .size = IO_OPERATION_TYPE__MAX
};

const QEnumLookup OnOffAuto_lookup = {
    .array = (const char *const[]) {
        [ON_OFF_AUTO_AUTO] = "auto",
        [ON_OFF_AUTO_ON] = "on",
        [ON_OFF_AUTO_OFF] = "off",
    },
    .size = ON_OFF_AUTO__MAX
};

const QEnumLookup OnOffSplit_lookup = {
    .array = (const char *const[]) {
        [ON_OFF_SPLIT_ON] = "on",
        [ON_OFF_SPLIT_OFF] = "off",
        [ON_OFF_SPLIT_SPLIT] = "split",
    },
    .size = ON_OFF_SPLIT__MAX
};

void qapi_free_String(String *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_String(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StrOrNull(StrOrNull *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StrOrNull(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup OffAutoPCIBAR_lookup = {
    .array = (const char *const[]) {
        [OFF_AUTOPCIBAR_OFF] = "off",
        [OFF_AUTOPCIBAR_AUTO] = "auto",
        [OFF_AUTOPCIBAR_BAR0] = "bar0",
        [OFF_AUTOPCIBAR_BAR1] = "bar1",
        [OFF_AUTOPCIBAR_BAR2] = "bar2",
        [OFF_AUTOPCIBAR_BAR3] = "bar3",
        [OFF_AUTOPCIBAR_BAR4] = "bar4",
        [OFF_AUTOPCIBAR_BAR5] = "bar5",
    },
    .size = OFF_AUTOPCIBAR__MAX
};

const QEnumLookup PCIELinkSpeed_lookup = {
    .array = (const char *const[]) {
        [PCIE_LINK_SPEED_2_5] = "2_5",
        [PCIE_LINK_SPEED_5] = "5",
        [PCIE_LINK_SPEED_8] = "8",
        [PCIE_LINK_SPEED_16] = "16",
    },
    .size = PCIE_LINK_SPEED__MAX
};

const QEnumLookup PCIELinkWidth_lookup = {
    .array = (const char *const[]) {
        [PCIE_LINK_WIDTH_1] = "1",
        [PCIE_LINK_WIDTH_2] = "2",
        [PCIE_LINK_WIDTH_4] = "4",
        [PCIE_LINK_WIDTH_8] = "8",
        [PCIE_LINK_WIDTH_12] = "12",
        [PCIE_LINK_WIDTH_16] = "16",
        [PCIE_LINK_WIDTH_32] = "32",
    },
    .size = PCIE_LINK_WIDTH__MAX
};

const QEnumLookup HostMemPolicy_lookup = {
    .array = (const char *const[]) {
        [HOST_MEM_POLICY_DEFAULT] = "default",
        [HOST_MEM_POLICY_PREFERRED] = "preferred",
        [HOST_MEM_POLICY_BIND] = "bind",
        [HOST_MEM_POLICY_INTERLEAVE] = "interleave",
    },
    .size = HOST_MEM_POLICY__MAX
};

const QEnumLookup NetFilterDirection_lookup = {
    .array = (const char *const[]) {
        [NET_FILTER_DIRECTION_ALL] = "all",
        [NET_FILTER_DIRECTION_RX] = "rx",
        [NET_FILTER_DIRECTION_TX] = "tx",
    },
    .size = NET_FILTER_DIRECTION__MAX
};

const QEnumLookup GrabToggleKeys_lookup = {
    .array = (const char *const[]) {
        [GRAB_TOGGLE_KEYS_CTRL_CTRL] = "ctrl-ctrl",
        [GRAB_TOGGLE_KEYS_ALT_ALT] = "alt-alt",
        [GRAB_TOGGLE_KEYS_SHIFT_SHIFT] = "shift-shift",
        [GRAB_TOGGLE_KEYS_META_META] = "meta-meta",
        [GRAB_TOGGLE_KEYS_SCROLLLOCK] = "scrolllock",
        [GRAB_TOGGLE_KEYS_CTRL_SCROLLLOCK] = "ctrl-scrolllock",
    },
    .size = GRAB_TOGGLE_KEYS__MAX
};

void qapi_free_HumanReadableText(HumanReadableText *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_HumanReadableText(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_StringList(StringList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_StringList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_common_c;
