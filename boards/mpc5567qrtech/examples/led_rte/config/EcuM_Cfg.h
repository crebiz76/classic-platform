/*
* Configuration of module: EcuM (EcuM_Cfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC5567
*
* Module vendor:           ArcCore
* Generator version:       2.0.2
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Thu Jul 14 11:22:51 CEST 2011
*/


#if !(((ECUM_SW_MAJOR_VERSION == 2) && (ECUM_SW_MINOR_VERSION == 0)) )
#error EcuM: Configuration file expected BSW module version to be 2.0.*
#endif



#ifndef ECUM_CFG_H_
#define ECUM_CFG_H_

#define ECUM_VERSION_INFO_API	STD_OFF
#define ECUM_DEV_ERROR_DETECT	STD_OFF

#include "EcuM_Generated_Types.h"

#define ECUM_MAIN_FUNCTION_PERIOD  (200)
#define ECUM_NVRAM_READALL_TIMEOUT (10000)
#define ECUM_NVRAM_WRITEALL_TIMEOUT (10000)
#define ECUM_NVRAM_MIN_RUN_DURATION (10000)


typedef enum {
	ECUM_USER_User_1,
	ECUM_USER_ENDMARK	// Must be the last in list!
} EcuM_UserList;


extern EcuM_ConfigType EcuMConfig;

#endif /*ECUM_CFG_H_*/

