#include <Arduino.h>

int pin_led = 23;

//Paso 2
void setup() {
  pinMode(pin_led, OUTPUT);
  //Serial.begin(115200);
}

//Paso 3
void loop() {
    digitalWrite(pin_led, HIGH);
    printf("LED engegat");
    delay(500);
    digitalWrite(pin_led, LOW);
    printf("LED apagat");

    delay(500);
}