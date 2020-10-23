/** @file     Rte_ECU_ABS.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_ECU_ABS_H
#define RTE_ECU_ABS_H

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
#include "Rte_ECU_ABS_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_ECU_to_RainSensor)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_RE_ECU_to_SwitchSensor)
#elif defined(RTE_RUNNABLEAPI_RE_ECU_to_WiperMotor)
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
struct Rte_CDS_ECU_ABS {
   uint8 _dummy;
};
typedef struct Rte_CDS_ECU_ABS Rte_CDS_ECU_ABS;

/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_ECU_ABS, RTE_CONST) Rte_Inst_ECU_ABS;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_ECU_ABS, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define ECU_ABS_START_SEC_CODE
#include "ECU_ABS_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, ECU_ABS_CODE) RE_ECU_to_RainSensor(CONSTP2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) rain_sensor_value);
FUNC(void, ECU_ABS_CODE) RE_ECU_to_SwitchSensor(CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) switch_sensor_value);
FUNC(void, ECU_ABS_CODE) RE_ECU_to_WiperMotor(VAR(uint8, AUTOMATIC) wipermotor_speed_value);
#define ECU_ABS_STOP_SEC_CODE
#include "ECU_ABS_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_ECU_ABS_H */
