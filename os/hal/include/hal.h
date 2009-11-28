/*
    ChibiOS/RT - Copyright (C) 2006-2007 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file hal.h
 * @brief HAL subsystem header.
 * @addtogroup HAL
 * @{
 */

#ifndef _HAL_H_
#define _HAL_H_

#include "halconf.h"
#include "board.h"

#include "pal.h"
#include "adc.h"
#include "can.h"
#include "mac.h"
#include "serial.h"
#include "spi.h"
#include "mmc_spi.h"

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

extern const STM32GPIOConfig pal_default_config;

#ifdef __cplusplus
extern "C" {
#endif
  void halInit(void);
#ifdef __cplusplus
}
#endif

#endif /* _HAL_H_ */

/** @} */
