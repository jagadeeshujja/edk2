/** @file
  MM Core MM Services Table Library.

  Copyright (c) 2015, Intel Corporation. All rights reserved.<BR>
  Copyright (c) 2016 - 2018, ARM Limited. All rights reserved.<BR>

  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#include <PiMm.h>
#include <Library/DebugLib.h>

extern EFI_MM_SYSTEM_TABLE         *gMmst;

/**
  The constructor function caches the pointer of MM Services Table.

  @param  ImageHandle   The firmware allocated handle for the EFI image.
  @param  SystemTable   A pointer to the EFI System Table.

  @retval EFI_SUCCESS   The constructor always returns EFI_SUCCESS.

**/
EFI_STATUS
EFIAPI
StandaloneMmServicesTableLibConstructor (
  IN EFI_HANDLE             ImageHandle,
  IN EFI_MM_SYSTEM_TABLE  *MmSystemTable
  )
{
  gMmst = MmSystemTable;
  return EFI_SUCCESS;
}

/**
  This function allows the caller to determine if the driver is executing in
  Standalone Management Mode(SMM).

  This function returns TRUE if the driver is executing in SMM and FALSE if the
  driver is not executing in SMM.

  @retval  TRUE  The driver is executing in Standalone Management Mode (SMM).
  @retval  FALSE The driver is not executing in Standalone Management Mode (SMM).

**/
BOOLEAN
EFIAPI
InMm (
  VOID
  )
{
  //
  // We are already in Standalone MM
  //
  return TRUE;
}

