#include "USBdevice_class.h"



USBdevice_class::USBdevice_class()
{

}


void USBdevice_class::picoToHostTest()
{
    stdio_init_all();
    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}


void USBdevice_class::startTusb()
{
  stdio_init_all();
  //board_init();

  tusb_init();

  TU_LOG1("Headset running\r\n");

  while (1)
  {
    tud_task(); // TinyUSB device task
    //audio_task();
    //led_blinking_task();
  }
}
