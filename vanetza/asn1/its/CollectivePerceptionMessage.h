/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "asn1/TR103562v211-CPM_edited.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_CollectivePerceptionMessage_H_
#define	_CollectivePerceptionMessage_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TimestampIts.h"
#include "CpmParameters.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CollectivePerceptionMessage */
typedef struct CollectivePerceptionMessage {
	TimestampIts_t	 generationTime;
	CpmParameters_t	 cpmParameters;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CollectivePerceptionMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CollectivePerceptionMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_CollectivePerceptionMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_CollectivePerceptionMessage_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CollectivePerceptionMessage_H_ */
#include "asn_internal.h"
