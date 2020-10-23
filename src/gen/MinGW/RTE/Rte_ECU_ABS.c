/** @file     Rte_ECU_ABS.c
  * 
  * @brief    RTE Sample SWC implementation skeleton file
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#include "Rte_ECU_ABS.h"

/* --------------------------------------------------------------------------- */
/* RTE Event: /ECU_Abstractions/ECU_ABS/IB_ECU_ABS/OIE_ECU_to_SwitchSensor */

FUNC(void, ECU_ABS_CODE) RE_ECU_to_SwitchSensor(CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) switch_sensor_value)
{
   /* ... */
}

/* --------------------------------------------------------------------------- */
/* RTE Event: /ECU_Abstractions/ECU_ABS/IB_ECU_ABS/OIE_ECU_to_WiperSensor */

FUNC(void, ECU_ABS_CODE) RE_ECU_to_RainSensor(CONSTP2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) rain_sensor_value)
{
   /* ... */
}

/* --------------------------------------------------------------------------- */
/* RTE Event: /ECU_Abstractions/ECU_ABS/IB_ECU_ABS/OIE_ECU_to_Wipermotor */

FUNC(void, ECU_ABS_CODE) RE_ECU_to_WiperMotor(VAR(uint8, AUTOMATIC) wipermotor_speed_value)
{
   /* ... */
}
