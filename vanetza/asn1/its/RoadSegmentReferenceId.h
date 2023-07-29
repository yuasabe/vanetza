/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_RoadSegmentReferenceId_H_
#define	_RoadSegmentReferenceId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier2B.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RoadSegmentReferenceId */
typedef struct RoadSegmentReferenceId {
	Identifier2B_t	*region;	/* OPTIONAL */
	Identifier2B_t	 id;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadSegmentReferenceId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadSegmentReferenceId;
extern asn_SEQUENCE_specifics_t asn_SPC_RoadSegmentReferenceId_specs_1;
extern asn_TYPE_member_t asn_MBR_RoadSegmentReferenceId_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RoadSegmentReferenceId_H_ */
#include "asn_internal.h"
