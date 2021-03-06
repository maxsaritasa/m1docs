/*******************************************************************************
  ADCHS Peripheral Library Template Implementation

  File Name:
    adchs_UpdateReadyControl_Default.h

  Summary:
    ADCHS PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : UpdateReadyControl
    and its Variant : Default
    For following APIs :
        PLIB_ADCHS_ControlRegistersCanBeUpdatedInterruptEnable
        PLIB_ADCHS_ControlRegistersCanBeUpdatedInterruptDisable
        PLIB_ADCHS_ControlRegistersCanBeUpdated
        PLIB_ADCHS_ExistsUpdateReadyControl

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _ADCHS_UPDATEREADYCONTROL_DEFAULT_H
#define _ADCHS_UPDATEREADYCONTROL_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _ADCHS_UPDATE_READY_INTRRUPT_CONTROL_VREG(index)
    _ADCHS_UPDATE_READY_STATUS_VREG(index)

  MASKs: 
    _ADCHS_UPDATE_READY_INTRRUPT_CONTROL_MASK(index)
    _ADCHS_UPDATE_READY_STATUS_MASK(index)

  POSs: 
    _ADCHS_UPDATE_READY_INTRRUPT_CONTROL_POS(index)
    _ADCHS_UPDATE_READY_STATUS_POS(index)

  LENs: 
    _ADCHS_UPDATE_READY_INTRRUPT_CONTROL_LEN(index)
    _ADCHS_UPDATE_READY_STATUS_LEN(index)

*/


//******************************************************************************
/* Function :  ADCHS_ControlRegistersCanBeUpdatedInterruptEnable_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_ControlRegistersCanBeUpdatedInterruptEnable 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_ControlRegistersCanBeUpdatedInterruptEnable function.
*/

PLIB_TEMPLATE void ADCHS_ControlRegistersCanBeUpdatedInterruptEnable_Default( ADCHS_MODULE_ID index )
{
	_SFR_BIT_WRITE(_ADCHS_UPDATE_READY_INTRRUPT_CONTROL_VREG(index),
				 _ADCHS_UPDATE_READY_INTRRUPT_CONTROL_POS(index), 1 );
}


//******************************************************************************
/* Function :  ADCHS_ControlRegistersCanBeUpdatedInterruptDisable_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_ControlRegistersCanBeUpdatedInterruptDisable 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_ControlRegistersCanBeUpdatedInterruptDisable function.
*/

PLIB_TEMPLATE void ADCHS_ControlRegistersCanBeUpdatedInterruptDisable_Default( ADCHS_MODULE_ID index )
{
	_SFR_BIT_WRITE(_ADCHS_UPDATE_READY_INTRRUPT_CONTROL_VREG(index),
				 _ADCHS_UPDATE_READY_INTRRUPT_CONTROL_POS(index), 0 );
}


//******************************************************************************
/* Function :  ADCHS_ControlRegistersCanBeUpdated_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_ControlRegistersCanBeUpdated 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_ControlRegistersCanBeUpdated function.
*/

PLIB_TEMPLATE bool ADCHS_ControlRegistersCanBeUpdated_Default( ADCHS_MODULE_ID index )
{
	return _SFR_BIT_READ(_ADCHS_UPDATE_READY_STATUS_VREG(index),
						 _ADCHS_UPDATE_READY_STATUS_POS(index) );
}


//******************************************************************************
/* Function :  ADCHS_ExistsUpdateReadyControl_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_ExistsUpdateReadyControl

  Description:
    This template implements the Default variant of the PLIB_ADCHS_ExistsUpdateReadyControl function.
*/

#define PLIB_ADCHS_ExistsUpdateReadyControl PLIB_ADCHS_ExistsUpdateReadyControl
PLIB_TEMPLATE bool ADCHS_ExistsUpdateReadyControl_Default( ADCHS_MODULE_ID index )
{
    return true;
}


#endif /*_ADCHS_UPDATEREADYCONTROL_DEFAULT_H*/

/******************************************************************************
 End of File
*/

