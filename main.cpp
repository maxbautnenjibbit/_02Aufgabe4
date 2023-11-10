/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     300ms


int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut red(PC_0);
    DigitalOut green(PC_1);
    DigitalOut yellow(PC_2);

    red = false;
    green = false;
    yellow = false;

    while (true) {
        red = true;
        ThisThread::sleep_for(BLINKING_RATE);

        red = false;
        green = true;

        ThisThread::sleep_for(BLINKING_RATE);

        yellow = true;
        green = false;

        ThisThread::sleep_for(BLINKING_RATE);

        yellow = false;

        ThisThread::sleep_for(BLINKING_RATE);

        red = true;

        ThisThread::sleep_for(BLINKING_RATE);

        red = false;
        green = true;

        ThisThread::sleep_for(BLINKING_RATE);

        green = false;
    }
}
