/*******************************************************************************
* File Name: STATUS_LED_G.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_STATUS_LED_G_H) /* Pins STATUS_LED_G_H */
#define CY_PINS_STATUS_LED_G_H

#include "cytypes.h"
#include "cyfitter.h"
#include "STATUS_LED_G_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    STATUS_LED_G_Write(uint8 value) ;
void    STATUS_LED_G_SetDriveMode(uint8 mode) ;
uint8   STATUS_LED_G_ReadDataReg(void) ;
uint8   STATUS_LED_G_Read(void) ;
uint8   STATUS_LED_G_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define STATUS_LED_G_DRIVE_MODE_BITS        (3)
#define STATUS_LED_G_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - STATUS_LED_G_DRIVE_MODE_BITS))

#define STATUS_LED_G_DM_ALG_HIZ         (0x00u)
#define STATUS_LED_G_DM_DIG_HIZ         (0x01u)
#define STATUS_LED_G_DM_RES_UP          (0x02u)
#define STATUS_LED_G_DM_RES_DWN         (0x03u)
#define STATUS_LED_G_DM_OD_LO           (0x04u)
#define STATUS_LED_G_DM_OD_HI           (0x05u)
#define STATUS_LED_G_DM_STRONG          (0x06u)
#define STATUS_LED_G_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define STATUS_LED_G_MASK               STATUS_LED_G__MASK
#define STATUS_LED_G_SHIFT              STATUS_LED_G__SHIFT
#define STATUS_LED_G_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define STATUS_LED_G_PS                     (* (reg32 *) STATUS_LED_G__PS)
/* Port Configuration */
#define STATUS_LED_G_PC                     (* (reg32 *) STATUS_LED_G__PC)
/* Data Register */
#define STATUS_LED_G_DR                     (* (reg32 *) STATUS_LED_G__DR)
/* Input Buffer Disable Override */
#define STATUS_LED_G_INP_DIS                (* (reg32 *) STATUS_LED_G__PC2)


#if defined(STATUS_LED_G__INTSTAT)  /* Interrupt Registers */

    #define STATUS_LED_G_INTSTAT                (* (reg32 *) STATUS_LED_G__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define STATUS_LED_G_DRIVE_MODE_SHIFT       (0x00u)
#define STATUS_LED_G_DRIVE_MODE_MASK        (0x07u << STATUS_LED_G_DRIVE_MODE_SHIFT)


#endif /* End Pins STATUS_LED_G_H */


/* [] END OF FILE */
