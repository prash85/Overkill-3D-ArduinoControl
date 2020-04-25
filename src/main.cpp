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
#include "npnMOSFET.h"

String incoming = "";

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(19200);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {
    incoming = Serial.readString();
    
    if(incoming == "1"){
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      Serial.print(incoming);
    }
    else{
      digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
     digitalWrite(LED_BUILTIN, LOW);
    }
  }
}