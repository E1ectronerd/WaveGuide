#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"
#include "hardware/pio.h"
#include "hardware/interp.h"
#include "hardware/timer.h"
#include "hardware/watchdog.h"
#include "hardware/clocks.h"
#include "pico/multicore.h"
#include <string.h>

//Project includes
#include "tusb_config.h"
#include "pinDefs.h"
#include "USBdevice_class.h"

//
// Core1 Processes
//
void core1_entry() {

}



int64_t alarm_callback(alarm_id_t id, void *user_data) {
    // Put your timeout handler code in here
    return 0;
}



int main()
{
    stdio_init_all();
    USBdevice_class USBdevice;
    //USBdevice.picoToHostTest();
    USBdevice.startTusb();

    // SPI initialisation. This example will use SPI at 1MHz.
    spi_init(OLED_SPI_PORT, 1000*1000);
    gpio_set_function(OLED_PIN_MISO, GPIO_FUNC_SPI);
    gpio_set_function(OLED_PIN_CS,   GPIO_FUNC_SIO);
    gpio_set_function(OLED_PIN_SCK,  GPIO_FUNC_SPI);
    gpio_set_function(OLED_PIN_MOSI, GPIO_FUNC_SPI);
    
    // Chip select is active-low, so we'll initialise it to a driven-high state
    gpio_set_dir(OLED_PIN_CS, GPIO_OUT);
    gpio_put(OLED_PIN_CS, 1);
    

    // I2C Initialisation. Using it at 400Khz.
    i2c_init(I2C_PORT, 400*1000);
    
    gpio_set_function(I2C_SDA, GPIO_FUNC_I2C);
    gpio_set_function(I2C_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(I2C_SDA);
    gpio_pull_up(I2C_SCL);


    // Interpolator example code
    interp_config cfg = interp_default_config();
    // Now use the various interpolator library functions for your use case
    // e.g. interp_config_clamp(&cfg, true);
    //      interp_config_shift(&cfg, 2);
    // Then set the config 
    interp_set_config(interp0, 0, &cfg);

    // Timer example code - This example fires off the callback after 2000ms
    add_alarm_in_ms(2000, alarm_callback, NULL, false);



    //puts("Hello, world!");

    return 0;
}
