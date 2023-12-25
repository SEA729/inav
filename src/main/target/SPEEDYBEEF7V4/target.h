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

#pragma once

#define TARGET_BOARD_IDENTIFIER "SB"		
#define USBD_PRODUCT_STRING  "SpeedyBee"	

/*** Indicators ***/
#define LED0                    PC13  //Blue  

#define BEEPER                  PC3

#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PC15
#define PINIO1_FLAGS                PINIO_FLAGS_INVERTED

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9         //(2,7,4)
#define UART1_RX_PIN            PA10        //(2,2,4)

#define USE_UART2
#define UART2_TX_PIN            PA2      //(1,5,4)
#define UART2_RX_PIN            PA3      //(1,6,4)

#define USE_UART3
#define UART3_TX_PIN            PC10     //(1,3,4)
#define UART3_RX_PIN            PC11     //(1,1,4)

// Internally routed to Bluetooth
#define USE_UART4
#define UART4_TX_PIN            PA0      //(1,4,4)
#define UART4_RX_PIN            PA1      //(1,2,4)

#define USE_UART5
#define UART5_TX_PIN            PC12    // Not broken out  //(1,7,4)
#define UART5_RX_PIN            PD2     //ESC TLM            //(1,0,4)

#define USE_UART6
#define UART6_TX_PIN            PC6      //(2,7,5)
#define UART6_RX_PIN            PC7      //(2,2,5)

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN      PA2
#define SOFTSERIAL_1_RX_PIN      PA2

#define SERIAL_PORT_COUNT       8

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** Gyro & ACC **********************
#define USE_TARGET_IMU_HARDWARE_DESCRIPTORS

#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6     //SPI1_RX (2,0,3)
#define SPI1_MOSI_PIN           PA7     //SPI1_TX (2,3,3)


#define USE_IMU_ICM20689
#define IMU_ICM20689_ALIGN          CW0_DEG
#define ICM20689_CS_PIN             PA4
#define ICM20689_SPI_BUS            BUS_SPI1
// #define ICM20689_EXTI_PIN           PC4

// #define USE_IMU_ICM42605
// #define IMU_ICM42605_ALIGN      CW90_DEG
// #define ICM42605_CS_PIN         PA4
// #define ICM42605_SPI_BUS        BUS_SPI1

// #define USE_IMU_MPU6000
// #define IMU_MPU6000_ALIGN       CW270_DEG_FLIP
// #define MPU6000_SPI_BUS         BUS_SPI1
// #define MPU6000_CS_PIN          PB11
// #define MPU6000_EXTI_PIN        PB2

// *************** OSD *****************************
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13  
#define SPI2_MISO_PIN           PB14     //SPI2_RX (1,3,0)
#define SPI2_MOSI_PIN           PB15     //SPI2_TX (1,4,0)

#define USE_OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PB12

// *************** Internal FLASH **************************
#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB3     
#define SPI3_MISO_PIN           PB4     //SPI3_RX (1,2,0)
#define SPI3_MOSI_PIN           PB5     //SPI3_TX (1,5,0)

#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_SPI_BUS          BUS_SPI3
#define M25P16_CS_PIN           PC14
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// #define USE_SDCARD
// #define USE_SDCARD_SPI
// #define SDCARD_SPI_BUS          BUS_SPI3
// #define SDCARD_CS_PIN           PC14

// #define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT

// *************** I2C(Baro & I2C) **************************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8     //SDA_RX (1,5,1)
#define I2C1_SDA                PB9     //SDA_TX (1,6,1)

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_DPS310
#define USE_BARO_SPL06

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_ALL

#define USE_RANGEFINDER
#define TEMPERATURE_I2C_BUS     BUS_I2C1
#define PITOT_I2C_BUS           BUS_I2C1
#define RANGEFINDER_I2C_BUS     BUS_I2C1
// *************** ADC *****************************

#define USE_ADC
#define ADC_CHANNEL_1_PIN           PC0
#define ADC_CHANNEL_2_PIN           PC1
#define ADC_CHANNEL_3_PIN           PC2

#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3

// *************** LED *****************************
#define USE_LED_STRIP
#define WS2811_PIN PA8

#define DEFAULT_FEATURES                (FEATURE_TX_PROF_SEL  | FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT  | FEATURE_BLACKBOX | FEATURE_TELEMETRY)
#define CURRENT_METER_SCALE     400

#define USE_DSHOT
#define USE_SERIALSHOT
#define USE_ESC_SENSOR
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define MAX_PWM_OUTPUT_PORTS        8

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD (BIT(2))
