#ifndef USBDEVICE_CLASS_H
#define USBDEVICE_CLASS_H

#include <stdio.h>
#include "pico/stdlib.h"

#include <stdio.h>
#include <string.h>

#include "bsp/board.h"
#include "tusb.h"
//#include "usb_descriptors.h"

class USBdevice_class
{
public:
    USBdevice_class();
    void startTusb();
    void picoToHostTest();
};

#endif // USBDEVICE_CLASS_H
