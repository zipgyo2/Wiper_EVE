/** @file     Rte_Wiper_Motor.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_WIPER_MOTOR_H
#define RTE_WIPER_MOTOR_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif /* RTE_APPLICATION_HEADER_FILE */
#define RTE_APPLICATION_HEADER_FILE
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Includes
 ***
 *******************************************************/

#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_Wiper_Motor_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_WiperMotor)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/


/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
typedef struct {
   Rte_CallFP_Wiper_Motor_CS_ECU_to_Actuator_CS_Oper_ECU_to_WiperMotor Call_CS_Oper_ECU_to_WiperMotor;
} Rte_PDS_Wiper_Motor_CS_ECU_to_Actuator_R;

typedef Rte_PDS_Wiper_Motor_CS_ECU_to_Actuator_R Rte_PDS_Wiper_Motor_CS_ECU_to_Actuator_RA[1];

typedef struct {
   Rte_ReadFP_Wiper_Motor_SR_App_to_Actuator_wipermotor_Speed_Value Read_wipermotor_Speed_Value;
} Rte_PDS_Wiper_Motor_SR_App_to_Actuator_R;

typedef Rte_PDS_Wiper_Motor_SR_App_to_Actuator_R Rte_PDS_Wiper_Motor_SR_App_to_Actuator_RA[1];

struct Rte_CDS_Wiper_Motor {
   /* Port Data Structure Arrays */
   Rte_PDS_Wiper_Motor_CS_ECU_to_Actuator_RA Rport_ECU_to_WiperMotor;
   Rte_PDS_Wiper_Motor_SR_App_to_Actuator_RA Rport_WiperController_to_WiperMotor;
};
typedef struct Rte_CDS_Wiper_Motor Rte_CDS_Wiper_Motor;

/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
#ifndef RTE_CORE
typedef P2CONST(Rte_PDS_Wiper_Motor_CS_ECU_to_Actuator_R, AUTOMATIC, RTE_CONST) Rte_PortHandle_CS_ECU_to_Actuator_R;

typedef P2CONST(Rte_PDS_Wiper_Motor_SR_App_to_Actuator_R, AUTOMATIC, RTE_CONST) Rte_PortHandle_SR_App_to_Actuator_R;

#endif /* RTE_CORE */

/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_Wiper_Motor, RTE_CONST) Rte_Instance_CPT_Wiper_Motor;
extern CONST(struct Rte_CDS_Wiper_Motor, RTE_CONST) Rte_Instance_CPT_Wiper_Motor_0;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_Wiper_Motor, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_WiperMotor)
#define Rte_Call_Rport_ECU_to_WiperMotor_CS_Oper_ECU_to_WiperMotor( self, wipermotor_speed_value ) ((self)->Rport_ECU_to_WiperMotor[0].Call_CS_Oper_ECU_to_WiperMotor(wipermotor_speed_value))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_WiperMotor)
#define Rte_Read_Rport_WiperController_to_WiperMotor_wipermotor_Speed_Value( self, data ) ((self)->Rport_WiperController_to_WiperMotor[0].Read_wipermotor_Speed_Value(data))
#endif

/* Rte_Port API */
#define Rte_Port_Rport_ECU_to_WiperMotor(self) ((Rte_PortHandle_CS_ECU_to_Actuator_R)&((self)->Rport_ECU_to_WiperMotor[0]))
#define Rte_Port_Rport_WiperController_to_WiperMotor(self) ((Rte_PortHandle_SR_App_to_Actuator_R)&((self)->Rport_WiperController_to_WiperMotor[0]))

/* Rte_NPorts API */
#define Rte_NPorts_CS_ECU_to_Actuator_R(self) ((uint8)1)
#define Rte_NPorts_SR_App_to_Actuator_R(self) ((uint8)1)

/* Rte_Ports API */
#define Rte_Ports_CS_ECU_to_Actuator_R(self) ((Rte_PortHandle_CS_ECU_to_Actuator_R)&((self)->Rport_ECU_to_WiperMotor[0]))
#define Rte_Ports_SR_App_to_Actuator_R(self) ((Rte_PortHandle_SR_App_to_Actuator_R)&((self)->Rport_WiperController_to_WiperMotor[0]))

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define Wiper_Motor_START_SEC_CODE
#include "Wiper_Motor_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Wiper_Motor_CODE) RE_WiperMotor(CONST(Rte_SelfType_Wiper_Motor, AUTOMATIC) self);
#define Wiper_Motor_STOP_SEC_CODE
#include "Wiper_Motor_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_WIPER_MOTOR_H */