# Control de un LED RGB

En esta práctica se implementa lo visto anteriormente para controlar un **led RGB**, _esto puede ser usado con tiras de leds o leds RGB de alta potencia, claro queda uniendo este tema con control de cargas_, este es un ejemplo para la base de lo ya comentado. Abajo se muestra el código, material y explicación de la de la práctica.

## Material 
> - Arduino
> - LED RGB 5mm Cátodo común
> - Resistencias de 220 Ohm's
> - Protoboard
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/LedRGB.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/LedRGB.JPG)

## Código
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
  color(255, 0, 0);	//Rojo
  delay(pausa);
  color(0, 255, 0);	//Verde
  delay(pausa);
  color(0, 0, 255);	//Azul
  delay(pausa);
  // Colores mezclados
  color(255, 255, 255);	//Blanco
  delay(pausa);
  color(255, 0, 255);  //Magenta
  delay(pausa);
  color(0, 255, 255);  //Cian
  delay(pausa);
  color(204, 0, 51);  //#CC0033
  delay(pausa);
  color(0, 0, 0);  //Apagado
  delay(pausa);
}

// Función para generar colores
void color(int red, int green, int blue){
  analogWrite(pinRed, red);
  analogWrite(pinGreen, green);
  analogWrite(pinBlue, blue);
}
```

## Explicación
El código es bastante simple, pero hemos agregado unas cuantas cosas extras, como por ejemplo **usar una función**.

Primero definimos los pines a usar, con ``#define``, esto se explicó en los temas anteriores, se creó una  variable del tipo global llamada pausa para usar un delay universal, si se cambia el valor de esta variable
cambiará la velocidad de cambio en todo el programa.
En el setup se configuran los pines como salida, no pasamos a la explicación del loop ya que para eso
primero debemos explicar la función color.
Se creó una función del tipo void ya que no regresará ningún valor y es llamada color, esta función recibirá
tres parámetros del tipo entero que serán valores enteros o variables con un valor entre 0 y 255, estos parámetros pasan a la función analogWrite, en simples palabras, la función color se encarga de manipular los colores del led RGB.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMjEzNjk2NTIwOSw5NzcwNDg0NTNdfQ==
-->