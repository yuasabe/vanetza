/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ETSI_ITS_CDD_PositioningSolutionType_H_
#define	_ETSI_ITS_CDD_PositioningSolutionType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ETSI_ITS_CDD_PositioningSolutionType {
	ETSI_ITS_CDD_PositioningSolutionType_noPositioningSolution	= 0,
	ETSI_ITS_CDD_PositioningSolutionType_sGNSS	= 1,
	ETSI_ITS_CDD_PositioningSolutionType_dGNSS	= 2,
	ETSI_ITS_CDD_PositioningSolutionType_sGNSSplusDR	= 3,
	ETSI_ITS_CDD_PositioningSolutionType_dGNSSplusDR	= 4,
	ETSI_ITS_CDD_PositioningSolutionType_dR	= 5
	/*
	 * Enumeration is extensible
	 */
} e_ETSI_ITS_CDD_PositioningSolutionType;

/* ETSI-ITS-CDD_PositioningSolutionType */
typedef long	 ETSI_ITS_CDD_PositioningSolutionType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ETSI_ITS_CDD_PositioningSolutionType;
asn_struct_free_f ETSI_ITS_CDD_PositioningSolutionType_free;
asn_struct_print_f ETSI_ITS_CDD_PositioningSolutionType_print;
asn_constr_check_f ETSI_ITS_CDD_PositioningSolutionType_constraint;
ber_type_decoder_f ETSI_ITS_CDD_PositioningSolutionType_decode_ber;
der_type_encoder_f ETSI_ITS_CDD_PositioningSolutionType_encode_der;
xer_type_decoder_f ETSI_ITS_CDD_PositioningSolutionType_decode_xer;
xer_type_encoder_f ETSI_ITS_CDD_PositioningSolutionType_encode_xer;
jer_type_encoder_f ETSI_ITS_CDD_PositioningSolutionType_encode_jer;
oer_type_decoder_f ETSI_ITS_CDD_PositioningSolutionType_decode_oer;
oer_type_encoder_f ETSI_ITS_CDD_PositioningSolutionType_encode_oer;
per_type_decoder_f ETSI_ITS_CDD_PositioningSolutionType_decode_uper;
per_type_encoder_f ETSI_ITS_CDD_PositioningSolutionType_encode_uper;
per_type_decoder_f ETSI_ITS_CDD_PositioningSolutionType_decode_aper;
per_type_encoder_f ETSI_ITS_CDD_PositioningSolutionType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ETSI_ITS_CDD_PositioningSolutionType_H_ */
#include "asn_internal.h"
