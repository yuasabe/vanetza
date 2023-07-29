/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "ETSI-ITS-CDD_ProtectedZoneType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ETSI_ITS_CDD_ProtectedZoneType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ETSI_ITS_CDD_ProtectedZoneType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_ETSI_ITS_CDD_ProtectedZoneType_value2enum_1[] = {
	{ 0,	23,	"permanentCenDsrcTolling" },
	{ 1,	23,	"temporaryCenDsrcTolling" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ETSI_ITS_CDD_ProtectedZoneType_enum2value_1[] = {
	0,	/* permanentCenDsrcTolling(0) */
	1	/* temporaryCenDsrcTolling(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_ETSI_ITS_CDD_ProtectedZoneType_specs_1 = {
	asn_MAP_ETSI_ITS_CDD_ProtectedZoneType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ETSI_ITS_CDD_ProtectedZoneType_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ETSI_ITS_CDD_ProtectedZoneType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ETSI_ITS_CDD_ProtectedZoneType = {
	"ProtectedZoneType",
	"ProtectedZoneType",
	&asn_OP_NativeEnumerated,
	asn_DEF_ETSI_ITS_CDD_ProtectedZoneType_tags_1,
	sizeof(asn_DEF_ETSI_ITS_CDD_ProtectedZoneType_tags_1)
		/sizeof(asn_DEF_ETSI_ITS_CDD_ProtectedZoneType_tags_1[0]), /* 1 */
	asn_DEF_ETSI_ITS_CDD_ProtectedZoneType_tags_1,	/* Same as above */
	sizeof(asn_DEF_ETSI_ITS_CDD_ProtectedZoneType_tags_1)
		/sizeof(asn_DEF_ETSI_ITS_CDD_ProtectedZoneType_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ETSI_ITS_CDD_ProtectedZoneType_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ETSI_ITS_CDD_ProtectedZoneType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ETSI_ITS_CDD_ProtectedZoneType_specs_1	/* Additional specs */
};

