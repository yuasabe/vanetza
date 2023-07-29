/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "asn1/TS103324v211-CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_CPM_PDU_Descriptions_ManagementContainer_H_
#define	_CPM_PDU_Descriptions_ManagementContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ETSI-ITS-CDD_TimestampIts.h"
#include "ETSI-ITS-CDD_ReferencePosition.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MessageSegmentationInfo;
struct MessageRateRange;

/* CPM-PDU-Descriptions_ManagementContainer */
typedef struct CPM_PDU_Descriptions_ManagementContainer {
	ETSI_ITS_CDD_TimestampIts_t	 referenceTime;
	ETSI_ITS_CDD_ReferencePosition_t	 referencePosition;
	struct MessageSegmentationInfo	*segmentationInfo;	/* OPTIONAL */
	struct MessageRateRange	*messageRateRange;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPM_PDU_Descriptions_ManagementContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPM_PDU_Descriptions_ManagementContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_CPM_PDU_Descriptions_ManagementContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_CPM_PDU_Descriptions_ManagementContainer_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MessageSegmentationInfo.h"
#include "MessageRateRange.h"

#endif	/* _CPM_PDU_Descriptions_ManagementContainer_H_ */
#include "asn_internal.h"
