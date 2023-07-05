/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "build.asn1/iso/ISO19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ISO14823Attribute_H_
#define	_ISO14823Attribute_H_


#include "asn_application.h"

/* Including external dependencies */
#include "InternationalSign-applicablePeriod.h"
#include "InternationalSign-exemptedApplicablePeriod.h"
#include "InternationalSign-directionalFlowOfLane.h"
#include "InternationalSign-applicableVehicleDimensions.h"
#include "InternationalSign-speedLimits.h"
#include "InternationalSign-rateOfIncline.h"
#include "InternationalSign-distanceBetweenVehicles.h"
#include "InternationalSign-destinationInformation.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ISO14823Attribute_PR {
	ISO14823Attribute_PR_NOTHING,	/* No components present */
	ISO14823Attribute_PR_dtm,
	ISO14823Attribute_PR_edt,
	ISO14823Attribute_PR_dfl,
	ISO14823Attribute_PR_ved,
	ISO14823Attribute_PR_spe,
	ISO14823Attribute_PR_roi,
	ISO14823Attribute_PR_dbv,
	ISO14823Attribute_PR_ddd
} ISO14823Attribute_PR;

/* ISO14823Attribute */
typedef struct ISO14823Attribute {
	ISO14823Attribute_PR present;
	union ISO14823Attribute_u {
		InternationalSign_applicablePeriod_t	 dtm;
		InternationalSign_exemptedApplicablePeriod_t	 edt;
		InternationalSign_directionalFlowOfLane_t	 dfl;
		InternationalSign_applicableVehicleDimensions_t	 ved;
		InternationalSign_speedLimits_t	 spe;
		InternationalSign_rateOfIncline_t	 roi;
		InternationalSign_distanceBetweenVehicles_t	 dbv;
		InternationalSign_destinationInformation_t	 ddd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ISO14823Attribute_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ISO14823Attribute;
extern asn_CHOICE_specifics_t asn_SPC_ISO14823Attribute_specs_1;
extern asn_TYPE_member_t asn_MBR_ISO14823Attribute_1[8];
extern asn_per_constraints_t asn_PER_type_ISO14823Attribute_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ISO14823Attribute_H_ */
#include "asn_internal.h"
