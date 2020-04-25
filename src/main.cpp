/**
 * 5050 LED Strip Control code for Arduino Nano
 * Copyright (c) 2020 5050_LED_Controller [https://github.com/prash85/overkill_arduino_board.git]
 *
 * Copyright (c) 2020 Prashant Karade
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <Arduino.h>
#include <string.h>
#include <DHT.h>

    const byte pin_ch1_red = 10; // Channel 1 , Red Pin set in output mode
    const char pin_ch1_green = PB2; // Channel 1 , green Pin set in output mode
    const byte pin_ch1_blue = PB3; // Channel 1 , blue Pin set in output mode
    
    cont byte pin_ch2_red = PD3; // Channel 2 , Red Pin set in output mode
    cont byte pin_ch2_green = PD5; // Channel 2 , green Pin set in output mode
    cont byte pin_ch2_blue = PD7; // Channel 2 , blue Pin set in output mode

    cont byte pin_ch3_fan = 3; // Channel 2 , blue Pin set in output mode

void setup() {
 
 

  // Setup Serial Port
  Serial.begin(19200);
  Serial.println("Hello World");
}

void loop() {
 
}