/*
 * Configuration of module Fee (Fee_Cfg.h)
 *
 * Created by: 
 * Configured for (MCU): MPC551x
 *
 * Module vendor: ArcCore
 * Module version: 2.0.2
 *
 * 
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Mon Nov 22 09:35:51 CET 2010
 */


#warning "This default file may only be used as an example!"


#ifndef FEE_CFG_H_
#define FEE_CFG_H_

#include "MemIf_Types.h"
#include "Fee_ConfigTypes.h"

#define FEE_DEV_ERROR_DETECT			STD_ON
#define FEE_VERSION_INFO_API    		STD_ON
#define FEE_POLLING_MODE				STD_OFF

#define FEE_INDEX						0
#define FEE_VIRTUAL_PAGE_SIZE		    16

#define FEE_NUM_OF_BLOCKS				5
#define FEE_MAX_NUM_SETS					1
#define FEE_BANK1_OFFSET					0
#define FEE_BANK1_LENGTH			   0x4000
#define FEE_BANK2_OFFSET			   0x4000
#define FEE_BANK2_LENGTH			   0x4000


#endif /*FEE_CFG_H_*/
