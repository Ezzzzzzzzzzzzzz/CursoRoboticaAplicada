# Control de color de un LED RGB y la función ``map()``

En esta práctica implementaras lo visto anteriormente para controlar un **led RGB** y la función ``map()``. 

Esto puede ser usado con tiras de leds o leds RGB de alta potencia, **uniendo este tema con control de cargas**.

![](https://www.ebotics.com/wp-content/uploads/2018/06/proyecto2-255753.gif)

## Material
> - Arduino
> - LED RGB 5mm Cátodo común
> - Potenciómetros de 10 kOhms
> - Resistencias de 220 Ohm's
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)


## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/RGBPots.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/RGBPots.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/capture1597710640475.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/capture1597710640475.png)

## C ++
```c
#define pinRojo 11
#define pinAzul 10
#define pinVerde 9
#define potRojo A2
#define potAzul A1
#define potVerde A0

int potValR;
int potValA;
int potValV;

// Describe esta función
void color(char rojo, char verde, char azul) {
  analogWrite(pinRojo, rojo);
  analogWrite(pinVerde, verde);
  analogWrite(pinAzul, azul);
}

void setup() {
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {
  potValR = map(analogRead(potRojo), 0, 1023, 0, 255);
  potValA = map(analogRead(potAzul), 0, 1023, 0, 255);
  potValV = map(analogRead(potVerde), 0, 1023, 0, 255);
  color(potValR, potValV, potValA);
  delay(10);

}
```

Juega con los valores de PWM  de los tres potenciómetros para obtener tus colores preferidos, junto con la siguiente tabla.

![](https://i.pinimg.com/originals/b9/51/8f/b9518febac2756828254365fbae0c007.png)
<!--stackedit_data:
eyJoaXN0b3J5IjpbMjAyNDUwMjAyNSwtMTY4MzYxNDQ2Ml19
-->