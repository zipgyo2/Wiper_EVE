/** @file     Rte_Const.h
  * 
  * @brief    RTA-RTE related configuration constants
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_CONST_H
#define RTE_CONST_H

#define OSENV_RTAOS40                                                                        (1)
#define RTE_CALPRM_NONE                                                                      (1)
#define RTE_MAINFUNCTION_PERIOD_MS                                                           (10)
#define RTE_MAINFUNCTION_PERIOD_NS                                                           (10000000)
#define RTE_MAINFUNCTION_PERIOD_US                                                           (10000)
#define RTE_MAX_USED_CORE_ID                                                                 (-1)
#define RTE_MEASUREMENT_ENABLED                                                              (1)
#define RTE_NUM_TASKS                                                                        (4)
#define RTE_NUM_TIMEOUT_ALARMS                                                               (0)
#define RTE_OSAPI_AUTOSAR_R40                                                                (1)
#define RTE_OSCFG_AUTOSAR_R40                                                                (1)
#define RTE_PERIODIC_COUNTER_TICK_INTERVAL_US                                                (100000)
#define RTE_RIPS_SUPPORT                                                                     (0)
#define RTE_TASKS_ARRAYSIZE                                                                  (4)
#define RTE_VENDOR_MODE                                                                      (1)
#define RTE_WOWP_EVENTS                                                                      (0)
#define _EcuInstance_0_FlatView_SwComponentTypes_EcuInstance_0_FlatView_CPT_ECU_ABS          CPT_ECU_ABS
#define _EcuInstance_0_FlatView_SwComponentTypes_EcuInstance_0_FlatView_CPT_Rain_Sensor      CPT_Rain_Sensor
#define _EcuInstance_0_FlatView_SwComponentTypes_EcuInstance_0_FlatView_CPT_Switch_Sensor    CPT_Switch_Sensor
#define _EcuInstance_0_FlatView_SwComponentTypes_EcuInstance_0_FlatView_CPT_Wiper_Controller CPT_Wiper_Controller
#define _EcuInstance_0_FlatView_SwComponentTypes_EcuInstance_0_FlatView_CPT_Wiper_Motor      CPT_Wiper_Motor
#define _EcuInstance_0_FlatView_SwComponentTypes_EcuInstance_0_FlatView_CPT_Wiper_Motor_0    CPT_Wiper_Motor_0
/* Box: Rte: OS Environment begin */
/* The following OSENV_ macros are supported by this OS DLL: */
/* OSENV_UNSUPPORTED */
/* OSENV_RTAOS40 */
#if defined(OSENV_RTAOS40)
#if defined( OSENV_UNSUPPORTED )
#error "Please define exactly one of [ OSENV_RTAOS40, OSENV_UNSUPPORTED ] for OS_AUTOSAR40 DLL OS API."
#endif /* defined( OSENV_UNSUPPORTED ) */
#elif defined(OSENV_UNSUPPORTED)
#else
#error "Please define exactly one of [ OSENV_RTAOS40, OSENV_UNSUPPORTED ] for OS_AUTOSAR40 DLL OS API."
#endif
/* Box: User declared atomic BSW types: begin */
/* Box: User declared atomic BSW types: end */
/* Box: Rte: OS Environment end */
#endif /* RTE_CONST_H */
