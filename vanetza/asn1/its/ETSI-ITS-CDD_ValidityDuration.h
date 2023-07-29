/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ETSI_ITS_CDD_ValidityDuration_H_
#define	_ETSI_ITS_CDD_ValidityDuration_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ETSI_ITS_CDD_ValidityDuration {
	ETSI_ITS_CDD_ValidityDuration_timeOfDetection	= 0,
	ETSI_ITS_CDD_ValidityDuration_oneSecondAfterDetection	= 1
} e_ETSI_ITS_CDD_ValidityDuration;

/* ETSI-ITS-CDD_ValidityDuration */
typedef long	 ETSI_ITS_CDD_ValidityDuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ETSI_ITS_CDD_ValidityDuration;
asn_struct_free_f ETSI_ITS_CDD_ValidityDuration_free;
asn_struct_print_f ETSI_ITS_CDD_ValidityDuration_print;
asn_constr_check_f ETSI_ITS_CDD_ValidityDuration_constraint;
ber_type_decoder_f ETSI_ITS_CDD_ValidityDuration_decode_ber;
der_type_encoder_f ETSI_ITS_CDD_ValidityDuration_encode_der;
xer_type_decoder_f ETSI_ITS_CDD_ValidityDuration_decode_xer;
xer_type_encoder_f ETSI_ITS_CDD_ValidityDuration_encode_xer;
jer_type_encoder_f ETSI_ITS_CDD_ValidityDuration_encode_jer;
oer_type_decoder_f ETSI_ITS_CDD_ValidityDuration_decode_oer;
oer_type_encoder_f ETSI_ITS_CDD_ValidityDuration_encode_oer;
per_type_decoder_f ETSI_ITS_CDD_ValidityDuration_decode_uper;
per_type_encoder_f ETSI_ITS_CDD_ValidityDuration_encode_uper;
per_type_decoder_f ETSI_ITS_CDD_ValidityDuration_decode_aper;
per_type_encoder_f ETSI_ITS_CDD_ValidityDuration_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ETSI_ITS_CDD_ValidityDuration_H_ */
#include "asn_internal.h"
