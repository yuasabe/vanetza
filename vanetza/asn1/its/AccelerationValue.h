/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_AccelerationValue_H_
#define	_AccelerationValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccelerationValue {
	AccelerationValue_negativeOutOfRange	= -160,
	AccelerationValue_positiveOutOfRange	= 160,
	AccelerationValue_unavailable	= 161
} e_AccelerationValue;

/* AccelerationValue */
typedef long	 AccelerationValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AccelerationValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AccelerationValue;
asn_struct_free_f AccelerationValue_free;
asn_struct_print_f AccelerationValue_print;
asn_constr_check_f AccelerationValue_constraint;
ber_type_decoder_f AccelerationValue_decode_ber;
der_type_encoder_f AccelerationValue_encode_der;
xer_type_decoder_f AccelerationValue_decode_xer;
xer_type_encoder_f AccelerationValue_encode_xer;
jer_type_encoder_f AccelerationValue_encode_jer;
oer_type_decoder_f AccelerationValue_decode_oer;
oer_type_encoder_f AccelerationValue_encode_oer;
per_type_decoder_f AccelerationValue_decode_uper;
per_type_encoder_f AccelerationValue_encode_uper;
per_type_decoder_f AccelerationValue_decode_aper;
per_type_encoder_f AccelerationValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccelerationValue_H_ */
#include "asn_internal.h"
