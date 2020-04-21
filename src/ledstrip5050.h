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

#ifdef LEDSTRIP5050_H_
#define LEDSTRIP5050_H_

const double PI = 3.14159;

class ledstrip5050 {          
  // led strip class encompasses the entire strip of RGB LEDs, MOSFETS with power on/off attribute, PWM Pins from arduino with attributes duty cycle and frequency
  private:
    void setfrequency(int8_t pwmfrequency); //frequency is configured in softare once.
    void setdutycycle(int8_t dutycycle);
    int8_t pwmfrequency;
  public:
    uint8_t red_led_arduino_pin = 0;    //user define the pin number in call function
    uint8_t green_led_arduino_pin = 0;  //user define the pin number in call function
    uint8_t blue_led_arduino_pin = 0;   //user define the pin number in call function
    uint8_t channel = 0;
    void ledcontrol(uint8_t channel, uint8_t brightness, uint16_t colorhex[uint16_t Red1; uint16_t Red0; uint16_t Green1; uint16_t Green0; uint16_t Blue1; uint16_t Blue0]);
};





#endif /*LEDSTRIP_H_*/