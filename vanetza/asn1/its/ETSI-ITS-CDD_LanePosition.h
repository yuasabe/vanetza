/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ETSI_ITS_CDD_LanePosition_H_
#define	_ETSI_ITS_CDD_LanePosition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ETSI_ITS_CDD_LanePosition {
	ETSI_ITS_CDD_LanePosition_offTheRoad	= -1,
	ETSI_ITS_CDD_LanePosition_innerHardShoulder	= 0,
	ETSI_ITS_CDD_LanePosition_outerHardShoulder	= 14
} e_ETSI_ITS_CDD_LanePosition;

/* ETSI-ITS-CDD_LanePosition */
typedef long	 ETSI_ITS_CDD_LanePosition_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ETSI_ITS_CDD_LanePosition_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ETSI_ITS_CDD_LanePosition;
asn_struct_free_f ETSI_ITS_CDD_LanePosition_free;
asn_struct_print_f ETSI_ITS_CDD_LanePosition_print;
asn_constr_check_f ETSI_ITS_CDD_LanePosition_constraint;
ber_type_decoder_f ETSI_ITS_CDD_LanePosition_decode_ber;
der_type_encoder_f ETSI_ITS_CDD_LanePosition_encode_der;
xer_type_decoder_f ETSI_ITS_CDD_LanePosition_decode_xer;
xer_type_encoder_f ETSI_ITS_CDD_LanePosition_encode_xer;
jer_type_encoder_f ETSI_ITS_CDD_LanePosition_encode_jer;
oer_type_decoder_f ETSI_ITS_CDD_LanePosition_decode_oer;
oer_type_encoder_f ETSI_ITS_CDD_LanePosition_encode_oer;
per_type_decoder_f ETSI_ITS_CDD_LanePosition_decode_uper;
per_type_encoder_f ETSI_ITS_CDD_LanePosition_encode_uper;
per_type_decoder_f ETSI_ITS_CDD_LanePosition_decode_aper;
per_type_encoder_f ETSI_ITS_CDD_LanePosition_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ETSI_ITS_CDD_LanePosition_H_ */
#include "asn_internal.h"
