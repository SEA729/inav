/*
 * This file is part of INAV Project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */
#include <stdint.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"
#include "drivers/sensor.h"

 BUSDEV_REGISTER_SPI(busdev_icm20689,    DEVHW_ICM20689,     ICM20689_SPI_BUS,   ICM20689_CS_PIN,    NONE,  DEVFLAGS_NONE,  IMU_ICM20689_ALIGN);
 BUSDEV_REGISTER_SPI(busdev_mpu6000,     DEVHW_MPU6000,      MPU6000_SPI_BUS,    MPU6000_CS_PIN,     NONE,  DEVFLAGS_NONE,  IMU_MPU6000_ALIGN);
timerHardware_t timerHardware[] = {
    DEF_TIM(TIM4,   CH1, PB6,  TIM_USE_OUTPUT_AUTO, 1, 0), // S1
    DEF_TIM(TIM4,   CH2, PB7,  TIM_USE_OUTPUT_AUTO, 1, 0), // S2

    DEF_TIM(TIM3,   CH3, PB0,  TIM_USE_OUTPUT_AUTO, 1, 0), // S3
    DEF_TIM(TIM3,   CH4, PB1,  TIM_USE_OUTPUT_AUTO, 1, 0), // S4
    
    DEF_TIM(TIM8,   CH3, PC8,  TIM_USE_OUTPUT_AUTO, 1, 0), // S5
    DEF_TIM(TIM8,   CH4, PC9,  TIM_USE_OUTPUT_AUTO, 1, 0), // S6
    
    DEF_TIM(TIM2,   CH3, PB10, TIM_USE_OUTPUT_AUTO, 1, 0), // S7
    DEF_TIM(TIM2,   CH1, PA15, TIM_USE_OUTPUT_AUTO, 1, 0), // S8

    DEF_TIM(TIM1,   CH1, PA8,  TIM_USE_LED,   0, 0), //2812LED  D(1,5,3)
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
