# Sensando un pulsador no. 2
Vamos a leer un pulsador y por medio de una condición vamos a prender y apagar un led, **esta práctica será la base para poder leer cualquier otro sensor con solo dos estados que son ALTO o BAJO** y poder utilizarlo dependiendo de nuestras necesidades, abajo se muestra el código, material y explicación de la práctica.

## Material
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Pulsador de 4 pines o 2 pines
> - Resistencia de 10 kOhm's
> - Protoboard
> - Jumpers
## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Boton%26LED.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Boton%26LED.JPG)

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
  
  if((push_lee == 1) && (estadoAnterior == 0)){ 
    estadoLed = 1 - estadoLed;
    delay(5);
  }
  estadoAnterior = push_lee;
  
  if(estadoLed == 1){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW); 
  }
}
```
## Explicación
Creamos tres variables del tipo int, una para almacenarla lectura del pulsador que es push_lee, estadoLed
para almacenar el estado que entrará en el if para que prenda o apague el led, incluso cualquier otro
actuador que veremos más adelante.
La variable estadoAnterior almacenará el estado anterior del pulsador, estas tres variables se igualan a cero para tener un valor por defecto, ya en el setup() se configuran los pines como entrada y salida respectivamente, ahora viene lo más interesante que es nuestro programa de ejecución que sirve para usar un pulsador como un switch.

<!--stackedit_data:
eyJoaXN0b3J5IjpbNzA3NjQyMjMxLC05NTgwNjE5NjZdfQ==
-->