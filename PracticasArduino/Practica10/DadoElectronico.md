# Dado electrónico

Esta practica tiene como objetivo realizar una salida visual en un display de 7 segmentos con la programación de un dado electrónico. 

El display de 7 segmentos es un componente que se utiliza para la representación de números, es muy común encontrarlos en dispositivos electrónicos debido a su simplicidad. 

A cada uno de los segmentos que forman el display se les denomina **a**, **b**, **c**, **d**, **e**, **f** y **g**, están ensamblados de forma que se permita activar cada segmento por separado consiguiendo formar cualquier dígito numérico. Muchas veces aparece un octavo segmento denominado **p.d. (punto decimal)**.

## Material
> - Arduino
> - Resistencias de 220 Ohm's
> - Display de 7 segmentos cátodo común
> - Mini push button 4 terminales
> - Resistencia de 10 kOhms
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica10/Dadoelec.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica10/Dadoelec.JPG)

## Código
```c
#define push 8

// Array multidimensional para mostrar los numeros
byte numero[10][8] =
{
  {1, 1, 1, 1, 1, 1, 0, 0}, //0
  {0, 1, 1, 0, 0, 0, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1, 0}, //2
  {1, 1, 1, 1, 0, 0, 1, 0}, //3
  {0, 1, 1, 0, 0, 1, 1, 0}, //4
  {1, 0, 1, 1, 0, 1, 1, 0}, //5
  {1, 0, 1, 1, 1, 1, 1, 0}, //6
  {1, 1, 1, 0, 0, 0, 0, 0}, //7
  {1, 1, 1, 1, 1, 1, 1, 0}, //8
  {1, 1, 1, 0, 0, 1, 1, 0}  //9     
};

void setup()
{
  // Ponemos los pines de los segmentos en modo OUTPUT (salida)
  for(int i = 0; i < 7; i++){
    pinMode(i, OUTPUT);
  }
  // Ponemos el pin del pulsador en modo INPUT (entrada)
  pinMode(push, INPUT);
  
  // Inicializamos la función randomSeed()
  randomSeed(analogRead(0));
}
void loop()
{
  // Leemos el valor del pulsador
  int val = digitalRead(push);
  
  // Si esta pulsado
  if(val == HIGH){
    // Genera un numero aleatorio entre 1 y 6
    int randomNumber = random(1, 7);
    // Ponemos los pines en estado correcto para mostrar el numero randomNumber
    for(int j = 0; j < 7; j++){   
      digitalWrite(j, numero[randomNumber][j]);
    }
   delay(500); 
  }
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTc2OTE3MTU3MywtMTU3NDYwNDU0Myw4MD
k5ODgxMzhdfQ==
-->