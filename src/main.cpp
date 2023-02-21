#include <Arduino.h>

int pin_led = 1;

//Paso 2
void setup() {
   // pinMode(pin_led, OUTPUT);
  Serial.begin(115200);
}

//Paso 3
void loop() {
    //digitalWrite(pin_led, HIGH);
    Serial.println("LED engegat");
    delay(500);
    //digitalWrite(pin_led, LOW);
    Serial.println("LED apagat");

    delay(500);
}