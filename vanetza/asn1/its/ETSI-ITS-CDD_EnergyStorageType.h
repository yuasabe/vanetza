/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ETSI_ITS_CDD_EnergyStorageType_H_
#define	_ETSI_ITS_CDD_EnergyStorageType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ETSI_ITS_CDD_EnergyStorageType {
	ETSI_ITS_CDD_EnergyStorageType_hydrogenStorage	= 0,
	ETSI_ITS_CDD_EnergyStorageType_electricEnergyStorage	= 1,
	ETSI_ITS_CDD_EnergyStorageType_liquidPropaneGas	= 2,
	ETSI_ITS_CDD_EnergyStorageType_compressedNaturalGas	= 3,
	ETSI_ITS_CDD_EnergyStorageType_diesel	= 4,
	ETSI_ITS_CDD_EnergyStorageType_gasoline	= 5,
	ETSI_ITS_CDD_EnergyStorageType_ammonia	= 6
} e_ETSI_ITS_CDD_EnergyStorageType;

/* ETSI-ITS-CDD_EnergyStorageType */
typedef BIT_STRING_t	 ETSI_ITS_CDD_EnergyStorageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ETSI_ITS_CDD_EnergyStorageType;
asn_struct_free_f ETSI_ITS_CDD_EnergyStorageType_free;
asn_struct_print_f ETSI_ITS_CDD_EnergyStorageType_print;
asn_constr_check_f ETSI_ITS_CDD_EnergyStorageType_constraint;
ber_type_decoder_f ETSI_ITS_CDD_EnergyStorageType_decode_ber;
der_type_encoder_f ETSI_ITS_CDD_EnergyStorageType_encode_der;
xer_type_decoder_f ETSI_ITS_CDD_EnergyStorageType_decode_xer;
xer_type_encoder_f ETSI_ITS_CDD_EnergyStorageType_encode_xer;
jer_type_encoder_f ETSI_ITS_CDD_EnergyStorageType_encode_jer;
oer_type_decoder_f ETSI_ITS_CDD_EnergyStorageType_decode_oer;
oer_type_encoder_f ETSI_ITS_CDD_EnergyStorageType_encode_oer;
per_type_decoder_f ETSI_ITS_CDD_EnergyStorageType_decode_uper;
per_type_encoder_f ETSI_ITS_CDD_EnergyStorageType_encode_uper;
per_type_decoder_f ETSI_ITS_CDD_EnergyStorageType_decode_aper;
per_type_encoder_f ETSI_ITS_CDD_EnergyStorageType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ETSI_ITS_CDD_EnergyStorageType_H_ */
#include "asn_internal.h"
