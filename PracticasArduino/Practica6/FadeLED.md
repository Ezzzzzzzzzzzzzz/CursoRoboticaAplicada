# Fade de un LED

En esta práctica **enviaremos valores analógicos para poder controlar la luminiscencia de un led**, abajo se muestra el código, material y explicación de la práctica.

## Materiales 
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Protoboard
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/FadeLED.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/FadeLED.JPG)

## Código
```c
#define Led 5;
int Brillo;
int Tiempo = 15;

void setup()
{
  pinMode(Led, OUTPUT);
}
void loop()
{
  for(Brillo = 0; Brillo < 256; Brillo++){
    	analogWrite(Led, Brillo);
    	delay(Tiempo);
  }
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTI0ODk3NDc5MSwtMjE4MDU1MTMxXX0=
-->