# Contador de Pulsos

Se trata de contar las veces que se pulsa un botón conectado en la **pin 7** de **Arduino** a la vez que cada vez que contamos **encendemos el LED conectado en la salida 13**. El valor de la variable que almacena el número de impulsos generados se envía al PC para que se visualice en la pantalla.
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT001.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT001.JPG)

## Material
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Pulsador de 4 pines o 2 pines
> - Resistencia de 10 kOhm's
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/BotonLED.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/BotonLED.JPG)

## Codigo
```c
#define LED 2 //Damos un alias a nuestro pin 2
#define Boton 3 //Damos un alias a nuestro pin 3

byte push_lee = 0; // variable tipo "byte"

int estadoLed = 0;	// Variable global "estadoLed"
int estadoAnterior = 0; // Variable global "estadoAnterior"

void setup()
{
  pinMode(LED, OUTPUT); // Definimos el pin LED como salida.
  pinMode(Boton, INPUT); // Definimos el pin Boton como entrada.
}
void loop()
{
  // Definimos nuestra secuencia.
  push_lee = digitalRead(Boton); // Almacenamos en la variable la lectura del boton.
  
  if((push_lee == 1) && (estadoAnterior == 0))
  { 
    estadoLed = 1 - estadoLed;
    delay(5);
  }
  estadoAnterior = push_lee;
  
  if(estadoLed == 1)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW); 
  }
}
```
## Explicación

Creamos tres variables
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTg5OTgyMzk5MywxNzI5MzMyNDkxXX0=
-->