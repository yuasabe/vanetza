/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_TrafficIslandPosition_H_
#define	_TrafficIslandPosition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LanePositionAndType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TrafficIslandPosition */
typedef struct TrafficIslandPosition {
	LanePositionAndType_t	 oneSide;
	LanePositionAndType_t	 otherSide;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficIslandPosition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficIslandPosition;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficIslandPosition_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficIslandPosition_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficIslandPosition_H_ */
#include "asn_internal.h"
