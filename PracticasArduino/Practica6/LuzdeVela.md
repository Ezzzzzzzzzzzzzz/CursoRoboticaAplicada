# Simulación de la luz de una vela

Se trata de simular el movimiento de la llama de una vela. Hacemos uso de la instrucción para generar un numero aleatorio que lo asignamos a una salida analógica **PWM** y otro numero que lo asociamos a la variable de **temporización (tiempo que esperamos para cambiar el valor de la salida)**.

## Materiales 
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/PWMVela.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/PWMVela.JPG)

## Blockly@arduino


## C ++
```c
#define Led 5  // Selecciona un pin que contenga PWM

int val = 0; //Define y pone en cero la variable "brillo"
int delayval= 0; //Define el intervalo de cambio del valor de salida

void setup()
{
  randomSeed(0); // Inicializa el generador de numeros aleatorios 
  pinMode(Led, OUTPUT); // Declara el pin de salida el pin5
}

void loop()
{
  val = random(100, 255); //Genera un numero aleatorio entre 100 y 255 que le asigna a la variable val
  analogWrite(Led, val); // Envia ese valor a la salida del pin5
  
  delayval = random(50, 150); // Genera un valor aleatorio entre 50 y 150
  delay(delayval);  
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTEzNjQ4OTM4MTMsMTIxNzYxNjEzOCw3NT
YwNDc1M119
-->