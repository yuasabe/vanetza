/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "TrajectoryInterceptionIndication.h"

asn_TYPE_member_t asn_MBR_TrajectoryInterceptionIndication_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TrajectoryInterceptionIndication, subjectStation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StationId,
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
		"subjectStation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrajectoryInterceptionIndication, trajectoryInterceptionProbability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrajectoryInterceptionProbability,
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
		"trajectoryInterceptionProbability"
		},
	{ ATF_POINTER, 1, offsetof(struct TrajectoryInterceptionIndication, trajectoryInterceptionConfidence),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrajectoryInterceptionConfidence,
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
		"trajectoryInterceptionConfidence"
		},
};
static const int asn_MAP_TrajectoryInterceptionIndication_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_TrajectoryInterceptionIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrajectoryInterceptionIndication_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subjectStation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trajectoryInterceptionProbability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* trajectoryInterceptionConfidence */
};
asn_SEQUENCE_specifics_t asn_SPC_TrajectoryInterceptionIndication_specs_1 = {
	sizeof(struct TrajectoryInterceptionIndication),
	offsetof(struct TrajectoryInterceptionIndication, _asn_ctx),
	asn_MAP_TrajectoryInterceptionIndication_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_TrajectoryInterceptionIndication_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrajectoryInterceptionIndication = {
	"TrajectoryInterceptionIndication",
	"TrajectoryInterceptionIndication",
	&asn_OP_SEQUENCE,
	asn_DEF_TrajectoryInterceptionIndication_tags_1,
	sizeof(asn_DEF_TrajectoryInterceptionIndication_tags_1)
		/sizeof(asn_DEF_TrajectoryInterceptionIndication_tags_1[0]), /* 1 */
	asn_DEF_TrajectoryInterceptionIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrajectoryInterceptionIndication_tags_1)
		/sizeof(asn_DEF_TrajectoryInterceptionIndication_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TrajectoryInterceptionIndication_1,
	3,	/* Elements count */
	&asn_SPC_TrajectoryInterceptionIndication_specs_1	/* Additional specs */
};

