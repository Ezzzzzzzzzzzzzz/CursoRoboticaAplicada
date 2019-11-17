# (PWM) Fade de un LED no.2

En esta práctica  **COMPLETA** el código para poder controlar la luminiscencia de un led de **encendido** y de **apagado**.

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
#define Led 5

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
	
	/*
	 ****************************
	 * Escribe tu codigo AQUI!! *
	 ****************************
	 */
  }
}
```
**Si necesitas ayuda**, revisa las **[sentencias de control](https://classroom.google.com/w/NDY3MjU0MTQyMDla/tc/NDY4MDUwNDkzMjBa?hl=es)** y los [**operadores de relación**](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/Operadores%20Relacion.md) para poder completar la practica.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTI4NzcwMzUxOCwyMTIwNjkwNDQ1LC0xND
Y4NTAyMDI0XX0=
-->