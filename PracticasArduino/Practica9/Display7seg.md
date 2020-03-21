# Display de 7 segmentos (contador de 0 a 3)

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
const int a = 0;
const int b = 1;
const int c = 2;
const int d = 3;
const int e = 4;
const int f = 5;
const int g = 6;

void setup()
{
	pinMode(a, OUTPUT);
	pinMode(b, OUTPUT);
	pinMode(c, OUTPUT);
	pinMode(d, OUTPUT);  
	pinMode(e, OUTPUT);
  	pinMode(f, OUTPUT);
  	pinMode(g, OUTPUT);
}

void loop()
{
	digitalWrite (a, HIGH);
	digitalWrite (b, HIGH);
	digitalWrite (c, HIGH);
	digitalWrite (d, HIGH);
	digitalWrite (e, HIGH);
	digitalWrite (f, HIGH);
	digitalWrite (g, LOW);
	delay(1000);
  
	digitalWrite (a, LOW);
	digitalWrite (b, HIGH);
	digitalWrite (c, HIGH);
	digitalWrite (d, LOW);
	digitalWrite (e, LOW);
	digitalWrite (f, LOW);
	digitalWrite (g, LOW);
	delay(1000);
  
  	digitalWrite (a, HIGH);
	digitalWrite (b, HIGH);
	digitalWrite (c, LOW);
	digitalWrite (d, HIGH);
	digitalWrite (e, HIGH);
	digitalWrite (f, LOW);
	digitalWrite (g, HIGH);
	delay(1000);  
}
``` 

<!--stackedit_data:
eyJoaXN0b3J5IjpbOTY5MDg2MzczLDE0NzE3MjI5MTMsLTI0Nj
g3Nzg2NywtMzE1OTUxMjM2LC0xNjQ2ODEyODQwLDM2MjYwMDA3
NywtOTc4MjM2ODk1LDE3NTg5MDM3MDVdfQ==
-->