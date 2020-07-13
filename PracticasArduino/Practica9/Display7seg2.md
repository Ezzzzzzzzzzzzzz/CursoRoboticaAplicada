# Display de 7 segmentos (contador de 0 a 9)

Esta practica tiene como objetivo realizar una salida visual en un display de 7 segmentos. 

El display de 7 segmentos es un componente que se utiliza para la representación de números, es muy común encontrarlos en dispositivos electrónicos debido a su simplicidad. Está compuesto internamente por una serie de LED'S estratégicamente ubicados de tal forma que forme un número 8.

![](https://thumbs.gfycat.com/FaroffGratefulAsianlion-size_restricted.gif)

A cada uno de los segmentos que forman el display se les denomina **a**, **b**, **c**, **d**, **e**, **f** y **g**, están ensamblados de forma que se permita activar cada segmento por separado consiguiendo formar cualquier dígito numérico. Muchas veces aparece un octavo segmento denominado **p.d. (punto decimal)**.

**Existen dos tipos de display de 7 segmentos:**

- Ánodo común
-  Cátodo común

![](https://http2.mlstatic.com/display-7-segmentos-5611ah-catodo-comun-arduino-pic-arm-avr-D_NQ_NP_835181-MLV25645714860_062017-F.jpg)
 
![](https://http2.mlstatic.com/display-7-segmentos-1-digito-catodo-comun-rojo-arduino-D_NQ_NP_942204-MLA27477084127_062018-F.jpg)

Como puede ver es muy simple entender los diagramas, en **cátodo común** para que prenda cada uno de los segmentos tiene que enviarse un alto (**HIGH**) y en ánodo común se envía un bajo (**LOW**).

La tabla indica que, si queremos que se muestre en nuestro **display ánodo común**, entonces **el número 1** se tiene que enviar a los segmentos **1001110**, como ya se vio anteriormente el **1** representa un **HIGH** y el **0** un **LOW**.

Para mostrar números largos de más de un dígito se usan Display de 2, 3, 4, etc. dígitos, pero se usa el **multiplexado** que en simples palabras engaña a la vista prendiendo y apagando el display muy rápidamente para que se vea que se forma un número compuesto, aunque en verdad primero saca un numero en todos los display pero se apaga en los que no debe aparecer ese número y así sucesivamente con los demás.

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
eyJoaXN0b3J5IjpbLTYzNTU4NzExNywxNTA0MzMwNjM2LDY5OT
A3NzE2MiwtMTAyNDA4NjYyNl19
-->