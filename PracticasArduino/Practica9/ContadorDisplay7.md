# Display de 7 segmentos (contador de 0 a 10) con botón

Esta practica tiene como objetivo realizar una salida visual en un display de 7 segmentos. 

El display de 7 segmentos es un componente que se utiliza para la representación de números, es muy común encontrarlos en dispositivos electrónicos debido a su simplicidad. Está compuesto internamente por una serie de LED'S estratégicamente ubicados de tal forma que forme un número 8.

![](https://thumbs.gfycat.com/FaroffGratefulAsianlion-size_restricted.gif)

A cada uno de los segmentos que forman el display se les denomina **a**, **b**, **c**, **d**, **e**, **f** y **g**, están ensamblados de forma que se permita activar cada segmento por separado consiguiendo formar cualquier dígito numérico. Muchas veces aparece un octavo segmento denominado **p.d. (punto decimal)**.

## Material
> - Arduino
> - Resistencias de 220 Ohm's
> - Resistencias de 10 kOhm's
> - Pushbutton
> - Display de 7 segmentos cátodo común
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica9/Cont7seg.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica9/Cont7seg.JPG)

## Código
```c
#define BOTON 8 		// BOTON en pin 8 

const int pins[8] = {0, 1, 2, 3, 4, 5, 6, 7}; // Array de 8 elementos conectados de pin 0 a pin 7

const byte numbers[11] =		// Array de numeros de 0 a 10 escritos en binario
{
 0b00111111, //0 
 0b00000110, //1
 0b01011011, //2
 0b01001111, //3 
 0b01100110, //4
 0b01101101, //5
 0b01111101, //6
 0b00000111, //7
 0b01111111, //8
 0b01101111, //9
 0b10000110 //10 
};

boolean estadoAntBoton = false;	// Estado anterior del Boton  
boolean actualEstBoton = false;	// Estado actual del Boton 

int ledNumber = 0;	// Ciclo entre los estados del Boton

void setup()
{
  pinMode(BOTON, INPUT);	// Boton conectado como entrada
  
  for(int i = 0; i < 9; i++){	// Configurar de pin 0 a pin 7 como SALIDA con un ciclo FOR
    pinMode(pins[i], OUTPUT);
  }
  
  lightSegments(ledNumber);		// Función para encender el display 
}

void loop()
{
  actualEstBoton = retorno(estadoAntBoton);	// Leer el estado de retorno 
  
  if(estadoAntBoton == LOW && actualEstBoton == HIGH)	// Si el BOTON es presionado
  {
    ledNumber++;	// Incrementa el valor 
  } 
  estadoAntBoton = actualEstBoton;		// Resetea el valor del boton 
  
  // Si ya has pasado atravez de las diferentes opciones 
  // resetea el contador a 0
  if(ledNumber == 11)
    ledNumber = 0;

   lightSegments(ledNumber);	// Selecciona el estado del LED
}

boolean retorno(boolean previo)
{
  boolean actual = digitalRead(BOTON);		// Leer el estado del boton 
  if(previo != actual)		// Si es diferente
  {
    delay(5);				// Espera 5ms
    actual = digitalRead(BOTON);	// Lee de nuevo
  }
  return actual;		//retorna el valor actual
}

void lightSegments(int number){
 
  byte numberBit = numbers[number];
  
  for(int i = 0; i < 8; i++){
    int bit = bitRead(numberBit, i);
    digitalWrite(pins[i], bit);
  }
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTEyNDk4ODIyNjgsLTY4MDU5NDYxNl19
-->