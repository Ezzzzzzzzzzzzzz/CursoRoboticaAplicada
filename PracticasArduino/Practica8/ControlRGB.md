# Control de un LED RGB

En esta práctica se implementa lo visto anteriormente para controlar un **led RGB**, _esto puede ser usado con tiras de leds o leds RGB de alta potencia, claro queda uniendo este tema con control de cargas_, este es un ejemplo para la base de lo ya comentado. Abajo se muestra el código, material y explicación de la de la práctica.

![](https://dynamoelectronics.com/wp-content/uploads/2017/08/RGB-animation-funcion.gif)

## Material 
> - Arduino
> - LED RGB 5mm Cátodo común
> - Resistencias de 220 Ohm's
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)


## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/LedRGB.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/LedRGB.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/capture1597709591707.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/capture1597709591707.png)

## C ++
```c
#define pinRed 11
#define pinGreen 9
#define pinBlue 10

int pausa = 1000;

void setup()
{
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
}
void loop()
{
  // Colores basicos
  //Rojo
  analogWrite(pinRed, 255);
  analogWrite(pinGreen, 0);
  analogWrite(pinBlue, 0);
  delay(pausa);
  
  //Verde
  analogWrite(pinRed, 0);
  analogWrite(pinGreen, 255);
  analogWrite(pinBlue, 0);
  delay(pausa);
  
  //Azul
   analogWrite(pinRed, 0);
  analogWrite(pinGreen, 0);
  analogWrite(pinBlue, 255);
  delay(pausa);
  
  // Colores mezclados
  //Blanco
  analogWrite(pinRed, 255);
  analogWrite(pinGreen, 255);
  analogWrite(pinBlue, 255);
  delay(pausa);

  //Magenta
  analogWrite(pinRed, 255);
  analogWrite(pinGreen, 0);
  analogWrite(pinBlue, 255);
  delay(pausa);
}


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTgyNzY4MDgyMF19
-->