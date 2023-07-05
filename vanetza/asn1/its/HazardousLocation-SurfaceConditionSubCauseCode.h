/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "asn1/TS102894-2v131-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_HazardousLocation_SurfaceConditionSubCauseCode_H_
#define	_HazardousLocation_SurfaceConditionSubCauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HazardousLocation_SurfaceConditionSubCauseCode {
	HazardousLocation_SurfaceConditionSubCauseCode_unavailable	= 0,
	HazardousLocation_SurfaceConditionSubCauseCode_rockfalls	= 1,
	HazardousLocation_SurfaceConditionSubCauseCode_earthquakeDamage	= 2,
	HazardousLocation_SurfaceConditionSubCauseCode_sewerCollapse	= 3,
	HazardousLocation_SurfaceConditionSubCauseCode_subsidence	= 4,
	HazardousLocation_SurfaceConditionSubCauseCode_snowDrifts	= 5,
	HazardousLocation_SurfaceConditionSubCauseCode_stormDamage	= 6,
	HazardousLocation_SurfaceConditionSubCauseCode_burstPipe	= 7,
	HazardousLocation_SurfaceConditionSubCauseCode_volcanoEruption	= 8,
	HazardousLocation_SurfaceConditionSubCauseCode_fallingIce	= 9
} e_HazardousLocation_SurfaceConditionSubCauseCode;

/* HazardousLocation-SurfaceConditionSubCauseCode */
typedef long	 HazardousLocation_SurfaceConditionSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HazardousLocation_SurfaceConditionSubCauseCode;
asn_struct_free_f HazardousLocation_SurfaceConditionSubCauseCode_free;
asn_struct_print_f HazardousLocation_SurfaceConditionSubCauseCode_print;
asn_constr_check_f HazardousLocation_SurfaceConditionSubCauseCode_constraint;
ber_type_decoder_f HazardousLocation_SurfaceConditionSubCauseCode_decode_ber;
der_type_encoder_f HazardousLocation_SurfaceConditionSubCauseCode_encode_der;
xer_type_decoder_f HazardousLocation_SurfaceConditionSubCauseCode_decode_xer;
xer_type_encoder_f HazardousLocation_SurfaceConditionSubCauseCode_encode_xer;
jer_type_encoder_f HazardousLocation_SurfaceConditionSubCauseCode_encode_jer;
oer_type_decoder_f HazardousLocation_SurfaceConditionSubCauseCode_decode_oer;
oer_type_encoder_f HazardousLocation_SurfaceConditionSubCauseCode_encode_oer;
per_type_decoder_f HazardousLocation_SurfaceConditionSubCauseCode_decode_uper;
per_type_encoder_f HazardousLocation_SurfaceConditionSubCauseCode_encode_uper;
per_type_decoder_f HazardousLocation_SurfaceConditionSubCauseCode_decode_aper;
per_type_encoder_f HazardousLocation_SurfaceConditionSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HazardousLocation_SurfaceConditionSubCauseCode_H_ */
#include "asn_internal.h"
