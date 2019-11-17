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

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTA2MTYyMzUxMSw5NzcwNDg0NTNdfQ==
-->