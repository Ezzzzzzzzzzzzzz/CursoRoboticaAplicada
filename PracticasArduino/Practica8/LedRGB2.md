# Control de color de un LED RGB y la función ``map()``

En esta práctica implementaras lo visto anteriormente para controlar un **led RGB** y la función ``map()``. 

Esto puede ser usado con tiras de leds o leds RGB de alta potencia, **uniendo este tema con control de cargas**.

## Material
> - Arduino
> - LED RGB 5mm Cátodo común
> - Potenciómetros de 10 kOhms
> - Resistencias de 220 Ohm's
> - Protoboard
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/RGBPots.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/RGBPots.JPG)

## Código
```c
#define pinRed 11
#define pinGreen 9
#define pinBlue 10
#define potRed A2
#define potBlue A1
#define potGreen A0

int potValR = 0;
int potValG = 0;
int potValB = 0;

void setup()
{
 /*
  ***************************
  * Agrega la configuración *
  ***************************
  */
}

void loop()
{
  /*
   **************************
   * Escribe tu código aqui *
   **************************
   */
}

// Función para generar colores
void color(int red, int green, int blue){
  analogWrite(pinRed, red);
  analogWrite(pinGreen, green);
  analogWrite(pinBlue, blue);
}
```

Juega con los valores de PWM  de los tres potenciómetros para obtener tus colores preferidos, junto con la siguiente tabla.

![](http://www.winkhel.com/images/coloresRGB.gif)
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTcxNzIxMTI1NywxNjA5NTM4Nzk1LC0xOD
YwNjI2ODMxXX0=
-->