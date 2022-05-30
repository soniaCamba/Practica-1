#include <Arduino.h>

// definimos el pin donde conectaremos el led
#define ledrojo 16
#define ledamarillo 18
#define ledverde 21

// funcion de amarillo intermitente
void intermitente();
int var = 0;

void setup() {
    Serial.begin(115200);
    pinMode(ledrojo,OUTPUT);
    pinMode(ledamarillo,OUTPUT);
    pinMode(ledverde,OUTPUT);
}

void loop() {
    // led verde
    digitalWrite(ledverde,HIGH);
    delay(2000);
    digitalWrite(ledverde,LOW);

    //amarillo intermitente
    intermitente();

    digitalWrite(ledrojo,HIGH);
    delay(2000);
    digitalWrite(ledrojo,LOW);

    intermitente();
}

void intermitente(){
  var=0;
  while (var < 4){
    digitalWrite(ledamarillo,HIGH);
    delay(200);
    digitalWrite(ledamarillo,LOW);
    var++; 
  }
}