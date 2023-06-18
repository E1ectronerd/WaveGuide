#ifndef PINDEFS_H
#define PINDEFS_H

// SPI Defines
// We are going to use SPI 0, and allocate it to the following GPIO pins
// Pins can be changed, see the GPIO function select table in the datasheet for information on GPIO assignments
//#define SPI_PORT spi0
//#define PIN_MISO 16
//#define PIN_CS   17
//#define PIN_SCK  18
//#define PIN_MOSI 19

// I2C defines
// This example will use I2C0 on GPIO8 (SDA) and GPIO9 (SCL) running at 400KHz.
// Pins can be changed, see the GPIO function select table in the datasheet for information on GPIO assignments
#define I2C_PORT i2c0
#define I2C_SDA 8
#define I2C_SCL 9


// Display SPI Defines
#define OLED_SPI_PORT spi0
#define OLED_PIN_MOSI 3   // SCA Main Out Subnode In
#define OLED_PIN_MISO 4   // Not used for display
#define OLED_PIN_CS   5   // Chip Select
#define OLED_PIN_SCK  2   // D0 Clock SCLK
#define OLED_PIN_DC   6   // Data/Command 1=data 0=command
#define OLED_PIN_RES  7   // Reset 0=reset 1=operate

// Audio I2S GPIO pins
#define I2S_BCK 16
#define I2S_LRCK 17
#define I2S_SDO 18


#endif // PINDEFS_H
