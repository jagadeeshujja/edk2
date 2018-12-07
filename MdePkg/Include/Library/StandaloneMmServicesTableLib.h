/** @file
  Provides a service to retrieve a pointer to the Standalone MM Services Table.
  Provides a InMm implementation for RUNTIME DXE drivers

Copyright (c) 2009 - 2018, Intel Corporation. All rights reserved.<BR>
Copyright (c) 2016 - 2018, ARM Limited. All rights reserved.<BR>

This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef __MM_SERVICES_TABLE_LIB_H__
#define __MM_SERVICES_TABLE_LIB_H__

#include <PiMm.h>
#include <PiDxe.h>

extern EFI_MM_SYSTEM_TABLE         *gMmst;

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
  );

#endif
