/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ETSI_ITS_CDD_SteeringWheelAngle_H_
#define	_ETSI_ITS_CDD_SteeringWheelAngle_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ETSI-ITS-CDD_SteeringWheelAngleValue.h"
#include "ETSI-ITS-CDD_SteeringWheelAngleConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ETSI-ITS-CDD_SteeringWheelAngle */
typedef struct ETSI_ITS_CDD_SteeringWheelAngle {
	ETSI_ITS_CDD_SteeringWheelAngleValue_t	 steeringWheelAngleValue;
	ETSI_ITS_CDD_SteeringWheelAngleConfidence_t	 steeringWheelAngleConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ETSI_ITS_CDD_SteeringWheelAngle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ETSI_ITS_CDD_SteeringWheelAngle;

#ifdef __cplusplus
}
#endif

#endif	/* _ETSI_ITS_CDD_SteeringWheelAngle_H_ */
#include "asn_internal.h"
