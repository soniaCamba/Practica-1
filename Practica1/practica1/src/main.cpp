#include <Arduino.h>

// definimos el pin donde conectaremos el led
#define LED 19

void setup() {
    Serial.begin(115200);
    pinMode(LED,OUTPUT);
}

void loop() {
    delay(500);
    // despues de los 500ms del delay anterior encendemos el led
    Serial.println("ON");
    digitalWrite(LED,HIGH);
    // lo dejamos encendido otros 500ms
    delay(500);
    // y lo volvemos a apagar
    Serial.println("OFF");
    digitalWrite(LED,LOW);
}