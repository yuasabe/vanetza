/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_VelocityComponent_H_
#define	_VelocityComponent_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VelocityComponentValue.h"
#include "ETSI-ITS-CDD_SpeedConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VelocityComponent */
typedef struct VelocityComponent {
	VelocityComponentValue_t	 value;
	ETSI_ITS_CDD_SpeedConfidence_t	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VelocityComponent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VelocityComponent;
extern asn_SEQUENCE_specifics_t asn_SPC_VelocityComponent_specs_1;
extern asn_TYPE_member_t asn_MBR_VelocityComponent_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _VelocityComponent_H_ */
#include "asn_internal.h"
