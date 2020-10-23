/** @file     Rte_Type.h
  * 
  * @brief    RTE type definitions
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_TYPE_H
#define RTE_TYPE_H

#include "Rte.h"
#include "Rte_Cfg.h"

/*******************************************************
 ***
 *** Forward Declarations
 ***
 *******************************************************/

struct Rte_CDS_ECU_ABS;
struct Rte_CDS_Rain_Sensor;
struct Rte_CDS_Switch_Sensor;
struct Rte_CDS_Wiper_Controller;
struct Rte_CDS_Wiper_Motor;

/*******************************************************
 ***
 *** Types
 ***
 *******************************************************/

/* Information: No typedef for ImplementationDataType boolean because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType float32 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType float64 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType sint16 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType sint32 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType sint8 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType uint32 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType uint8 because the SwBaseType.nativeDeclaration is empty. */

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Rain_Sensor_CS_ECU_to_Sensor_CS_Oper_ECU_to_RainSensor) (CONSTP2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) rain_sensor_value);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Switch_Sensor_CS_ECU_to_Sensor_CS_Oper_ECU_to_SwitchSensor) (CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) switch_sensor_value);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Wiper_Controller_CS_Sensor_to_App_CS_Oper_RainSensor_to_WiperController) (CONSTP2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) rain_sensor_value);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Wiper_Motor_CS_ECU_to_Actuator_CS_Oper_ECU_to_WiperMotor) (VAR(uint8, AUTOMATIC) wipermotor_speed_value);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_ReadFP_Wiper_Controller_SR_SwitchSensor_to_WiperController_switch_sensor_value) (CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) data);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_ReadFP_Wiper_Motor_SR_App_to_Actuator_wipermotor_Speed_Value) (CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) data);

typedef CONSTP2CONST(struct Rte_CDS_ECU_ABS,AUTOMATIC,RTE_CONST) Rte_SelfType_ECU_ABS;

typedef CONSTP2CONST(struct Rte_CDS_Rain_Sensor,AUTOMATIC,RTE_CONST) Rte_SelfType_Rain_Sensor;

typedef CONSTP2CONST(struct Rte_CDS_Switch_Sensor,AUTOMATIC,RTE_CONST) Rte_SelfType_Switch_Sensor;

typedef CONSTP2CONST(struct Rte_CDS_Wiper_Controller,AUTOMATIC,RTE_CONST) Rte_SelfType_Wiper_Controller;

typedef CONSTP2CONST(struct Rte_CDS_Wiper_Motor,AUTOMATIC,RTE_CONST) Rte_SelfType_Wiper_Motor;

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_WriteFP_Switch_Sensor_SR_SwitchSensor_to_WiperController_switch_sensor_value) (VAR(uint8, AUTOMATIC) data);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_WriteFP_Wiper_Controller_SR_App_to_Actuator_wipermotor_Speed_Value) (VAR(uint8, AUTOMATIC) data);

#endif /* !RTE_TYPE_H */