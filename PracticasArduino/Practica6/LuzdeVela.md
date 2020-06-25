# Simulación de la luz de una vela

Se trata de simular el movimiento de la llama de una vela. Hacemos uso de la instrucción para generar un numero aleatorio que lo asignamos a una salida analógica **PWM** y otro numero que lo asociamos a la variable de **temporización (tiempo que esperamos para cambiar el valor de la salida)**.

## Materiales 
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/PWMVela.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/PWMVela.JPG)

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
  for(Brillo = 0; Brillo < 256; Brillo++)
  {
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
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTI3MjE3NDM1MSw3NTYwNDc1M119
-->