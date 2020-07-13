# Luz de noche RGB controlable

Ya hemos aprendido cómo controlar las salidas digitales, cómo leer los botones sin rebote y cómo usar PWM para cambiar el brillo del LED. 

Con esas habilidades, ahora puede conectar un LED RGB y un botón sin rebote para alternar entre algunos colores para obtener una luz nocturna LED RGB controlable. Es posible mezclar colores con un LED RGB cambiando el brillo de cada color. 

## Material 
> - Arduino
> - LED RGB 5mm **Cátodo común**
> - Resistencias de 220 Ohm's
> - Resistencias de 10 KOhm's
> - Pushbutton 
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/LamparaRGB.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/LamparaRGB.JPG)

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
  color(0, 255, 0); //Verde
  delay(pausa);
  color(0, 0, 255);	//Azul
  delay(pausa);
  // Colores mezclados
  color(255, 255, 255); //Blanco
  delay(pausa);
  color(255, 0, 255); //Magenta
  delay(pausa);
  color(0, 255, 255); //Cian
  delay(pausa);
  color(204, 0, 51); //#CC0033
  delay(pausa);
  color(0, 0, 0); //Apagado
  delay(pausa);
}

// Función para generar colores
void color(int red, int green, int blue)
{
  analogWrite(pinRed, red);
  analogWrite(pinGreen, green);
  analogWrite(pinBlue, blue);
}
```

## Explicación
<!--stackedit_data:
eyJoaXN0b3J5IjpbNTQ4MDM0NDE3XX0=
-->