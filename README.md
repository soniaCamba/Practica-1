# PRÀCTICA 1
## CODIGO DEL PROGRAMA:

```
#include <Arduino.h>

// definimos el pin donde conectaremos el led
#define LED 19

void setup() {
    // iniciamos el terminal serie
    Serial.begin(115200);
    pinMode(LED,OUTPUT);
}

void loop() {
    delay(500);
    
    // despues de los 500ms del delay anterior encendemos el led
    Serial.println("ON"); // con esta orden mostramos "ON" por pantalla
    digitalWrite(LED,HIGH);
    
    // lo dejamos encendido otros 500ms
    delay(500);
    
    // y lo volvemos a apagar
    Serial.println("OFF");
    digitalWrite(LED,LOW);
}

```

## DIGRAMA DE FLUJOS:
Para realizar el diagrama de flujo hemos tenido que descargar la extensión de "mermaid".

```mermaid
graph LR;
    Programa-->Build;
    Build-->Upload;
    Upload-->|LED|Monitor;
    Monitor-->ON
    Monitor-->OFF
    ON-->|500 MS|OFF;
    OFF-->|500 MS|ON;    
      
```

## PREGUNTA:

### En el programa que se ha realizado cual es el tiempo libre que tiene el procesador ?

El tiempo libre del procesador es el tiempo en el que el procesador no está ejecutando ninguna operación. En cambio nuestro programa esta ejecutando el bucle todo el rato, con esto podemos afirmar que durante todo el tiempo esta ocupado.
