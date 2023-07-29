/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "ETSI-ITS-CDD_PositionOfOccupants.h"

int
ETSI_ITS_CDD_PositionOfOccupants_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 20UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ETSI_ITS_CDD_PositionOfOccupants_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	20	/* (SIZE(20..20)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ETSI_ITS_CDD_PositionOfOccupants_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  20,  20 }	/* (SIZE(20..20)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_ETSI_ITS_CDD_PositionOfOccupants_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ETSI_ITS_CDD_PositionOfOccupants = {
	"PositionOfOccupants",
	"PositionOfOccupants",
	&asn_OP_BIT_STRING,
	asn_DEF_ETSI_ITS_CDD_PositionOfOccupants_tags_1,
	sizeof(asn_DEF_ETSI_ITS_CDD_PositionOfOccupants_tags_1)
		/sizeof(asn_DEF_ETSI_ITS_CDD_PositionOfOccupants_tags_1[0]), /* 1 */
	asn_DEF_ETSI_ITS_CDD_PositionOfOccupants_tags_1,	/* Same as above */
	sizeof(asn_DEF_ETSI_ITS_CDD_PositionOfOccupants_tags_1)
		/sizeof(asn_DEF_ETSI_ITS_CDD_PositionOfOccupants_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ETSI_ITS_CDD_PositionOfOccupants_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ETSI_ITS_CDD_PositionOfOccupants_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		ETSI_ITS_CDD_PositionOfOccupants_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};

