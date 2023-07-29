/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v211-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_CauseCodeChoice_H_
#define	_CauseCodeChoice_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ETSI-ITS-CDD_SubCauseCodeType.h"
#include "ETSI-ITS-CDD_TrafficConditionSubCauseCode.h"
#include "ETSI-ITS-CDD_AccidentSubCauseCode.h"
#include "ETSI-ITS-CDD_RoadworksSubCauseCode.h"
#include "ETSI-ITS-CDD_AdverseWeatherCondition-AdhesionSubCauseCode.h"
#include "ETSI-ITS-CDD_HazardousLocation-SurfaceConditionSubCauseCode.h"
#include "ETSI-ITS-CDD_HazardousLocation-ObstacleOnTheRoadSubCauseCode.h"
#include "ETSI-ITS-CDD_HazardousLocation-AnimalOnTheRoadSubCauseCode.h"
#include "ETSI-ITS-CDD_HumanPresenceOnTheRoadSubCauseCode.h"
#include "ETSI-ITS-CDD_WrongWayDrivingSubCauseCode.h"
#include "ETSI-ITS-CDD_RescueAndRecoveryWorkInProgressSubCauseCode.h"
#include "ETSI-ITS-CDD_AdverseWeatherCondition-ExtremeWeatherConditionSubCauseCode.h"
#include "ETSI-ITS-CDD_AdverseWeatherCondition-VisibilitySubCauseCode.h"
#include "ETSI-ITS-CDD_AdverseWeatherCondition-PrecipitationSubCauseCode.h"
#include "ETSI-ITS-CDD_SlowVehicleSubCauseCode.h"
#include "ETSI-ITS-CDD_DangerousEndOfQueueSubCauseCode.h"
#include "ETSI-ITS-CDD_VehicleBreakdownSubCauseCode.h"
#include "ETSI-ITS-CDD_PostCrashSubCauseCode.h"
#include "ETSI-ITS-CDD_HumanProblemSubCauseCode.h"
#include "ETSI-ITS-CDD_StationaryVehicleSubCauseCode.h"
#include "ETSI-ITS-CDD_EmergencyVehicleApproachingSubCauseCode.h"
#include "ETSI-ITS-CDD_HazardousLocation-DangerousCurveSubCauseCode.h"
#include "ETSI-ITS-CDD_CollisionRiskSubCauseCode.h"
#include "ETSI-ITS-CDD_SignalViolationSubCauseCode.h"
#include "ETSI-ITS-CDD_DangerousSituationSubCauseCode.h"
#include "RailwayLevelCrossingSubCauseCode.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseCodeChoice_PR {
	CauseCodeChoice_PR_NOTHING,	/* No components present */
	CauseCodeChoice_PR_reserved0,
	CauseCodeChoice_PR_trafficCondition1,
	CauseCodeChoice_PR_accident2,
	CauseCodeChoice_PR_roadworks3,
	CauseCodeChoice_PR_reserved4,
	CauseCodeChoice_PR_impassability5,
	CauseCodeChoice_PR_adverseWeatherCondition_Adhesion6,
	CauseCodeChoice_PR_aquaplaning7,
	CauseCodeChoice_PR_reserved8,
	CauseCodeChoice_PR_hazardousLocation_SurfaceCondition9,
	CauseCodeChoice_PR_hazardousLocation_ObstacleOnTheRoad10,
	CauseCodeChoice_PR_hazardousLocation_AnimalOnTheRoad11,
	CauseCodeChoice_PR_humanPresenceOnTheRoad12,
	CauseCodeChoice_PR_reserved13,
	CauseCodeChoice_PR_wrongWayDriving14,
	CauseCodeChoice_PR_rescueAndRecoveryWorkInProgress15,
	CauseCodeChoice_PR_reserved16,
	CauseCodeChoice_PR_adverseWeatherCondition_ExtremeWeatherCondition17,
	CauseCodeChoice_PR_adverseWeatherCondition_Visibility18,
	CauseCodeChoice_PR_adverseWeatherCondition_Precipitation19,
	CauseCodeChoice_PR_violence20,
	CauseCodeChoice_PR_reserved21,
	CauseCodeChoice_PR_reserved22,
	CauseCodeChoice_PR_reserved23,
	CauseCodeChoice_PR_reserved24,
	CauseCodeChoice_PR_reserved25,
	CauseCodeChoice_PR_slowVehicle26,
	CauseCodeChoice_PR_dangerousEndOfQueue27,
	CauseCodeChoice_PR_reserved28,
	CauseCodeChoice_PR_reserved29,
	CauseCodeChoice_PR_reserved30,
	CauseCodeChoice_PR_reserved31,
	CauseCodeChoice_PR_reserved32,
	CauseCodeChoice_PR_reserved33,
	CauseCodeChoice_PR_reserved34,
	CauseCodeChoice_PR_reserved35,
	CauseCodeChoice_PR_reserved36,
	CauseCodeChoice_PR_reserved37,
	CauseCodeChoice_PR_reserved38,
	CauseCodeChoice_PR_reserved39,
	CauseCodeChoice_PR_reserved40,
	CauseCodeChoice_PR_reserved41,
	CauseCodeChoice_PR_reserved42,
	CauseCodeChoice_PR_reserved43,
	CauseCodeChoice_PR_reserved44,
	CauseCodeChoice_PR_reserved45,
	CauseCodeChoice_PR_reserved46,
	CauseCodeChoice_PR_reserved47,
	CauseCodeChoice_PR_reserved48,
	CauseCodeChoice_PR_reserved49,
	CauseCodeChoice_PR_reserved50,
	CauseCodeChoice_PR_reserved51,
	CauseCodeChoice_PR_reserved52,
	CauseCodeChoice_PR_reserved53,
	CauseCodeChoice_PR_reserved54,
	CauseCodeChoice_PR_reserved55,
	CauseCodeChoice_PR_reserved56,
	CauseCodeChoice_PR_reserved57,
	CauseCodeChoice_PR_reserved58,
	CauseCodeChoice_PR_reserved59,
	CauseCodeChoice_PR_reserved60,
	CauseCodeChoice_PR_reserved61,
	CauseCodeChoice_PR_reserved62,
	CauseCodeChoice_PR_reserved63,
	CauseCodeChoice_PR_reserved64,
	CauseCodeChoice_PR_reserved65,
	CauseCodeChoice_PR_reserved66,
	CauseCodeChoice_PR_reserved67,
	CauseCodeChoice_PR_reserved68,
	CauseCodeChoice_PR_reserved69,
	CauseCodeChoice_PR_reserved70,
	CauseCodeChoice_PR_reserved71,
	CauseCodeChoice_PR_reserved72,
	CauseCodeChoice_PR_reserved73,
	CauseCodeChoice_PR_reserved74,
	CauseCodeChoice_PR_reserved75,
	CauseCodeChoice_PR_reserved76,
	CauseCodeChoice_PR_reserved77,
	CauseCodeChoice_PR_reserved78,
	CauseCodeChoice_PR_reserved79,
	CauseCodeChoice_PR_reserved80,
	CauseCodeChoice_PR_reserved81,
	CauseCodeChoice_PR_reserved82,
	CauseCodeChoice_PR_reserved83,
	CauseCodeChoice_PR_reserved84,
	CauseCodeChoice_PR_reserved85,
	CauseCodeChoice_PR_reserved86,
	CauseCodeChoice_PR_reserved87,
	CauseCodeChoice_PR_reserved88,
	CauseCodeChoice_PR_reserved89,
	CauseCodeChoice_PR_reserved90,
	CauseCodeChoice_PR_vehicleBreakdown91,
	CauseCodeChoice_PR_postCrash92,
	CauseCodeChoice_PR_humanProblem93,
	CauseCodeChoice_PR_stationaryVehicle94,
	CauseCodeChoice_PR_emergencyVehicleApproaching95,
	CauseCodeChoice_PR_hazardousLocation_DangerousCurve96,
	CauseCodeChoice_PR_collisionRisk97,
	CauseCodeChoice_PR_signalViolation98,
	CauseCodeChoice_PR_dangerousSituation99,
	CauseCodeChoice_PR_railwayLevelCrossing100,
	CauseCodeChoice_PR_reserved101,
	CauseCodeChoice_PR_reserved102,
	CauseCodeChoice_PR_reserved103,
	CauseCodeChoice_PR_reserved104,
	CauseCodeChoice_PR_reserved105,
	CauseCodeChoice_PR_reserved106,
	CauseCodeChoice_PR_reserved107,
	CauseCodeChoice_PR_reserved108,
	CauseCodeChoice_PR_reserved109,
	CauseCodeChoice_PR_reserved110,
	CauseCodeChoice_PR_reserved111,
	CauseCodeChoice_PR_reserved112,
	CauseCodeChoice_PR_reserved113,
	CauseCodeChoice_PR_reserved114,
	CauseCodeChoice_PR_reserved115,
	CauseCodeChoice_PR_reserved116,
	CauseCodeChoice_PR_reserved117,
	CauseCodeChoice_PR_reserved118,
	CauseCodeChoice_PR_reserved119,
	CauseCodeChoice_PR_reserved120,
	CauseCodeChoice_PR_reserved121,
	CauseCodeChoice_PR_reserved122,
	CauseCodeChoice_PR_reserved123,
	CauseCodeChoice_PR_reserved124,
	CauseCodeChoice_PR_reserved125,
	CauseCodeChoice_PR_reserved126,
	CauseCodeChoice_PR_reserved127,
	CauseCodeChoice_PR_reserved128
} CauseCodeChoice_PR;

/* CauseCodeChoice */
typedef struct CauseCodeChoice {
	CauseCodeChoice_PR present;
	union CauseCodeChoice_u {
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved0;
		ETSI_ITS_CDD_TrafficConditionSubCauseCode_t	 trafficCondition1;
		ETSI_ITS_CDD_AccidentSubCauseCode_t	 accident2;
		ETSI_ITS_CDD_RoadworksSubCauseCode_t	 roadworks3;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved4;
		ETSI_ITS_CDD_SubCauseCodeType_t	 impassability5;
		ETSI_ITS_CDD_AdverseWeatherCondition_AdhesionSubCauseCode_t	 adverseWeatherCondition_Adhesion6;
		ETSI_ITS_CDD_SubCauseCodeType_t	 aquaplaning7;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved8;
		ETSI_ITS_CDD_HazardousLocation_SurfaceConditionSubCauseCode_t	 hazardousLocation_SurfaceCondition9;
		ETSI_ITS_CDD_HazardousLocation_ObstacleOnTheRoadSubCauseCode_t	 hazardousLocation_ObstacleOnTheRoad10;
		ETSI_ITS_CDD_HazardousLocation_AnimalOnTheRoadSubCauseCode_t	 hazardousLocation_AnimalOnTheRoad11;
		ETSI_ITS_CDD_HumanPresenceOnTheRoadSubCauseCode_t	 humanPresenceOnTheRoad12;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved13;
		ETSI_ITS_CDD_WrongWayDrivingSubCauseCode_t	 wrongWayDriving14;
		ETSI_ITS_CDD_RescueAndRecoveryWorkInProgressSubCauseCode_t	 rescueAndRecoveryWorkInProgress15;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved16;
		ETSI_ITS_CDD_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_t	 adverseWeatherCondition_ExtremeWeatherCondition17;
		ETSI_ITS_CDD_AdverseWeatherCondition_VisibilitySubCauseCode_t	 adverseWeatherCondition_Visibility18;
		ETSI_ITS_CDD_AdverseWeatherCondition_PrecipitationSubCauseCode_t	 adverseWeatherCondition_Precipitation19;
		ETSI_ITS_CDD_SubCauseCodeType_t	 violence20;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved21;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved22;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved23;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved24;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved25;
		ETSI_ITS_CDD_SlowVehicleSubCauseCode_t	 slowVehicle26;
		ETSI_ITS_CDD_DangerousEndOfQueueSubCauseCode_t	 dangerousEndOfQueue27;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved28;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved29;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved30;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved31;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved32;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved33;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved34;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved35;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved36;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved37;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved38;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved39;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved40;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved41;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved42;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved43;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved44;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved45;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved46;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved47;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved48;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved49;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved50;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved51;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved52;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved53;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved54;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved55;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved56;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved57;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved58;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved59;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved60;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved61;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved62;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved63;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved64;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved65;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved66;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved67;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved68;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved69;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved70;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved71;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved72;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved73;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved74;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved75;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved76;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved77;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved78;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved79;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved80;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved81;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved82;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved83;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved84;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved85;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved86;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved87;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved88;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved89;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved90;
		ETSI_ITS_CDD_VehicleBreakdownSubCauseCode_t	 vehicleBreakdown91;
		ETSI_ITS_CDD_PostCrashSubCauseCode_t	 postCrash92;
		ETSI_ITS_CDD_HumanProblemSubCauseCode_t	 humanProblem93;
		ETSI_ITS_CDD_StationaryVehicleSubCauseCode_t	 stationaryVehicle94;
		ETSI_ITS_CDD_EmergencyVehicleApproachingSubCauseCode_t	 emergencyVehicleApproaching95;
		ETSI_ITS_CDD_HazardousLocation_DangerousCurveSubCauseCode_t	 hazardousLocation_DangerousCurve96;
		ETSI_ITS_CDD_CollisionRiskSubCauseCode_t	 collisionRisk97;
		ETSI_ITS_CDD_SignalViolationSubCauseCode_t	 signalViolation98;
		ETSI_ITS_CDD_DangerousSituationSubCauseCode_t	 dangerousSituation99;
		RailwayLevelCrossingSubCauseCode_t	 railwayLevelCrossing100;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved101;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved102;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved103;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved104;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved105;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved106;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved107;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved108;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved109;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved110;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved111;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved112;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved113;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved114;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved115;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved116;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved117;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved118;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved119;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved120;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved121;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved122;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved123;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved124;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved125;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved126;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved127;
		ETSI_ITS_CDD_SubCauseCodeType_t	 reserved128;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CauseCodeChoice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CauseCodeChoice;
extern asn_CHOICE_specifics_t asn_SPC_CauseCodeChoice_specs_1;
extern asn_TYPE_member_t asn_MBR_CauseCodeChoice_1[129];
extern asn_per_constraints_t asn_PER_type_CauseCodeChoice_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseCodeChoice_H_ */
#include "asn_internal.h"
