/*******************************************************************************
* File Name: OP_I_A_VPos.h  
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

#if !defined(CY_PINS_OP_I_A_VPos_H) /* Pins OP_I_A_VPos_H */
#define CY_PINS_OP_I_A_VPos_H

#include "cytypes.h"
#include "cyfitter.h"
#include "OP_I_A_VPos_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    OP_I_A_VPos_Write(uint8 value) ;
void    OP_I_A_VPos_SetDriveMode(uint8 mode) ;
uint8   OP_I_A_VPos_ReadDataReg(void) ;
uint8   OP_I_A_VPos_Read(void) ;
uint8   OP_I_A_VPos_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define OP_I_A_VPos_DRIVE_MODE_BITS        (3)
#define OP_I_A_VPos_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - OP_I_A_VPos_DRIVE_MODE_BITS))

#define OP_I_A_VPos_DM_ALG_HIZ         (0x00u)
#define OP_I_A_VPos_DM_DIG_HIZ         (0x01u)
#define OP_I_A_VPos_DM_RES_UP          (0x02u)
#define OP_I_A_VPos_DM_RES_DWN         (0x03u)
#define OP_I_A_VPos_DM_OD_LO           (0x04u)
#define OP_I_A_VPos_DM_OD_HI           (0x05u)
#define OP_I_A_VPos_DM_STRONG          (0x06u)
#define OP_I_A_VPos_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define OP_I_A_VPos_MASK               OP_I_A_VPos__MASK
#define OP_I_A_VPos_SHIFT              OP_I_A_VPos__SHIFT
#define OP_I_A_VPos_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define OP_I_A_VPos_PS                     (* (reg32 *) OP_I_A_VPos__PS)
/* Port Configuration */
#define OP_I_A_VPos_PC                     (* (reg32 *) OP_I_A_VPos__PC)
/* Data Register */
#define OP_I_A_VPos_DR                     (* (reg32 *) OP_I_A_VPos__DR)
/* Input Buffer Disable Override */
#define OP_I_A_VPos_INP_DIS                (* (reg32 *) OP_I_A_VPos__PC2)


#if defined(OP_I_A_VPos__INTSTAT)  /* Interrupt Registers */

    #define OP_I_A_VPos_INTSTAT                (* (reg32 *) OP_I_A_VPos__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define OP_I_A_VPos_DRIVE_MODE_SHIFT       (0x00u)
#define OP_I_A_VPos_DRIVE_MODE_MASK        (0x07u << OP_I_A_VPos_DRIVE_MODE_SHIFT)


#endif /* End Pins OP_I_A_VPos_H */


/* [] END OF FILE */
