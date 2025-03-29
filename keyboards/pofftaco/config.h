// Copyright 2023 ZiTe (@ZiTe)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MASTER_RIGHT
#define SPLIT_USB_DETECT
#define MATRIX_ROWS 8
#define MATRIX_COLS 6
//#define ROWS_PER_HAND 4 


////////////////////////////////////// POINTING DEVICE //////////////////////////////////////
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP16
#define PMW33XX_CS_PIN GP17 // SPI CS pin.

#define PMW33XX_LIFTOFF_DISTANCE 0xff // Maximum liftoff distance..
#define ROTATIONAL_TRANSFORM_ANGLE -90 // Angle of the sensor in degrees. Defaults to 0.
// #define POINTING_DEVICE_INVERT_Y // Inverts the Y axis. Defaults to normal.

/* Optional. */
#define PMW33XX_CPI 2000      // The CPI range is 100-12000, in increments of 100. Defaults to 1600 CPI.
#define PMW33XX_CLOCK_SPEED 2000000 // Sets the clock speed that the sensor runs at. Defaults to 2000000
// Use -32767 to 32767, instead of just -127 to 127.
// #define POINTING_DEVICE_TASK_THROTTLE_MS 10

////////////////////////////////////// DOUBLE KEYBOARD //////////////////////////////////////

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0    // USART TX pin
#define SERIAL_USART_RX_PIN GP1    // USART RX pin

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

 //////////////////////////////////// DISPLAY ///////////////////////////////////////////////
 #define OLED_DISPLAY_128X32
 #define I2C_DRIVER I2CD1
 #define I2C1_SCL_PIN GP14
 #define I2C1_SDA_PIN GP15


/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.