/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "ETSI-ITS-CDD_PathHistory.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ETSI_ITS_CDD_PathHistory_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	40	/* (SIZE(40..40)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ETSI_ITS_CDD_PathHistory_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_ETSI_ITS_CDD_PathHistory_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ETSI_ITS_CDD_PathPoint,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ETSI_ITS_CDD_PathHistory_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ETSI_ITS_CDD_PathHistory_specs_1 = {
	sizeof(struct ETSI_ITS_CDD_PathHistory),
	offsetof(struct ETSI_ITS_CDD_PathHistory, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ETSI_ITS_CDD_PathHistory = {
	"PathHistory",
	"PathHistory",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ETSI_ITS_CDD_PathHistory_tags_1,
	sizeof(asn_DEF_ETSI_ITS_CDD_PathHistory_tags_1)
		/sizeof(asn_DEF_ETSI_ITS_CDD_PathHistory_tags_1[0]), /* 1 */
	asn_DEF_ETSI_ITS_CDD_PathHistory_tags_1,	/* Same as above */
	sizeof(asn_DEF_ETSI_ITS_CDD_PathHistory_tags_1)
		/sizeof(asn_DEF_ETSI_ITS_CDD_PathHistory_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ETSI_ITS_CDD_PathHistory_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ETSI_ITS_CDD_PathHistory_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_ETSI_ITS_CDD_PathHistory_1,
	1,	/* Single element */
	&asn_SPC_ETSI_ITS_CDD_PathHistory_specs_1	/* Additional specs */
};

