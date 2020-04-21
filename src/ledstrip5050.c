/**
 * 5050 LED Strip Control code for Arduino Nano
 * Copyright (c) 2020 MarlinFirmware [https://github.com/prash85/5050_LED_Controller.git]
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
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */



// class is created with a very abstract level idea. THat abstract level idea can be a function / requirement to involves components of very semilar level


// the 5050LED control class i
class ledcontrolclass {
  // PWM pins on arduino connected to mosfets to control the leds. 
  // MOSFET attributes - frequency, duty cycle, 
  //functionalities = turn off (duty cycle 0), turn on (dutycycle > 0), 
  public:


  private:
  boolean relay_1_state = 0;
  boolean relay_2_state = 0;
  boolean relay_3_state = 0;
  boolean relay_4_state = 0;
  boolean relay_5_state = 0;
  boolean relay_6_state = 0;
  boolean relay_7_state = 0;
  boolean relay_8_state = 0;
};



class relayboard {
  
  public:


  private:
  boolean relay_1_state = 0;
  boolean relay_2_state = 0;
  boolean relay_3_state = 0;
  boolean relay_4_state = 0;
  boolean relay_5_state = 0;
  boolean relay_6_state = 0;
  boolean relay_7_state = 0;
  boolean relay_8_state = 0;
};