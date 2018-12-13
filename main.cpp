/* mbed Microcontroller Library
 * Copyright (c) 2018 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "SEN0161.h"

DigitalOut led1(LED1);
SEN0161 sensor(A0);
Serial pc(USBTX, USBRX);

// main() runs in its own thread in the OS
int main()
{

    while (true) {
        // Blink LED and wait 0.5 seconds
        led1 = !led1;
        wait(0.5f);
        pc.printf("\n\r PH is %f", sensor.get_pH());

    }
}
