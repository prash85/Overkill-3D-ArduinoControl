#include <Arduino.h>

String incoming = "";

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
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
    }
  }
}