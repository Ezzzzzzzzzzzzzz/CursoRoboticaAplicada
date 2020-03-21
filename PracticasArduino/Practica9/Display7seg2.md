# Display de 7 segmentos (contador de 0 a 9)

Esta practica tiene como objetivo realizar una salida visual en un display de 7 segmentos. 

El display de 7 segmentos es un componente que se utiliza para la representación de números, es muy común encontrarlos en dispositivos electrónicos debido a su simplicidad. Está compuesto internamente por una serie de LED'S estratégicamente ubicados de tal forma que forme un número 8.

![](https://thumbs.gfycat.com/FaroffGratefulAsianlion-size_restricted.gif)

A cada uno de los segmentos que forman el display se les denomina **a**, **b**, **c**, **d**, **e**, **f** y **g**, están ensamblados de forma que se permita activar cada segmento por separado consiguiendo formar cualquier dígito numérico. Muchas veces aparece un octavo segmento denominado **p.d. (punto decimal)**.

## Material
> - Arduino
> - Resistencias de 220 Ohm's
> - Display de 7 segmentos cátodo común
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica9/Disp7seg.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica9/Disp7seg.JPG)

## Código
```c
const int pins[7] = {0, 1, 2, 3, 4, 5, 6 };

const byte numbers[10] =
{
 0b0111111, //0 
 0b0000110, //1
 0b1011011, //2
 0b1001111, //3 
 0b1100110, //4
 0b1101101, //5
 0b1111101, //6
 0b0000111, //7
 0b1111111, //8
 0b1101111, //9
};

void setup()
{
  for(int i = 0; i < 7; i++)
  {
    pinMode(pins[i], OUTPUT);
  }
  
  lightSegments(0);
}
void loop()
{
  for(int i = 0; i < 10; i++)
  {
    lightSegments(i);
    delay(1000);
  }
  
}

void lightSegments(int number)
{
  byte numberBit = numbers[number];
  
  for(int i = 0; i < 7; i++)
  {
    int bit = bitRead(numberBit, i);
    digitalWrite(pins[i], bit);
  }
}
```


<!--stackedit_data:
eyJoaXN0b3J5IjpbMTUwNDMzMDYzNiw2OTkwNzcxNjIsLTEwMj
QwODY2MjZdfQ==
-->