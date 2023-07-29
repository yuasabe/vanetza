/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "asn1/EN302637-2v141-CAM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_BasicVehicleContainerHighFrequency_H_
#define	_BasicVehicleContainerHighFrequency_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ITS-Container_Heading.h"
#include "ITS-Container_Speed.h"
#include "ITS-Container_DriveDirection.h"
#include "ITS-Container_VehicleLength.h"
#include "ITS-Container_VehicleWidth.h"
#include "ITS-Container_LongitudinalAcceleration.h"
#include "ITS-Container_Curvature.h"
#include "ITS-Container_CurvatureCalculationMode.h"
#include "ITS-Container_YawRate.h"
#include "ITS-Container_AccelerationControl.h"
#include "ITS-Container_LanePosition.h"
#include "ITS-Container_PerformanceClass.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SteeringWheelAngle;
struct LateralAcceleration;
struct VerticalAcceleration;
struct CenDsrcTollingZone;

/* BasicVehicleContainerHighFrequency */
typedef struct BasicVehicleContainerHighFrequency {
	ITS_Container_Heading_t	 heading;
	ITS_Container_Speed_t	 speed;
	ITS_Container_DriveDirection_t	 driveDirection;
	ITS_Container_VehicleLength_t	 vehicleLength;
	ITS_Container_VehicleWidth_t	 vehicleWidth;
	ITS_Container_LongitudinalAcceleration_t	 longitudinalAcceleration;
	ITS_Container_Curvature_t	 curvature;
	ITS_Container_CurvatureCalculationMode_t	 curvatureCalculationMode;
	ITS_Container_YawRate_t	 yawRate;
	ITS_Container_AccelerationControl_t	*accelerationControl;	/* OPTIONAL */
	ITS_Container_LanePosition_t	*lanePosition;	/* OPTIONAL */
	struct SteeringWheelAngle	*steeringWheelAngle;	/* OPTIONAL */
	struct LateralAcceleration	*lateralAcceleration;	/* OPTIONAL */
	struct VerticalAcceleration	*verticalAcceleration;	/* OPTIONAL */
	ITS_Container_PerformanceClass_t	*performanceClass;	/* OPTIONAL */
	struct CenDsrcTollingZone	*cenDsrcTollingZone;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicVehicleContainerHighFrequency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicVehicleContainerHighFrequency;
extern asn_SEQUENCE_specifics_t asn_SPC_BasicVehicleContainerHighFrequency_specs_1;
extern asn_TYPE_member_t asn_MBR_BasicVehicleContainerHighFrequency_1[16];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ITS-Container_SteeringWheelAngle.h"
#include "ITS-Container_LateralAcceleration.h"
#include "ITS-Container_VerticalAcceleration.h"
#include "ITS-Container_CenDsrcTollingZone.h"

#endif	/* _BasicVehicleContainerHighFrequency_H_ */
#include "asn_internal.h"
