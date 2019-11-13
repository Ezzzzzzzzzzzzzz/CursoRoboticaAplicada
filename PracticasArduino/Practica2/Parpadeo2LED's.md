# Parpadeo de dos LED's

Ahora lo que realizaremos en esta segunda práctica es hacer parpadear dos leds simultáneamente, la explicación es similar a la anterior solo que ahora son dos leds, se recomienda que ustedes aparte de esto aumente más leds, tres, cuatro, etc., y jueguen con los tiempos del ``delay()``.

## Materiales
> - Arduino UNO
> - 2 LED´s de 5 mm
> - 2 Resistencias de 220 ohm´s 
> - Protoboard 
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica2/Practica2.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica2/Practica2.JPG)

```c
#define LED1 4	// Damos un alias a nuestro pin 4
#define LED2 5	// Damos un alias a nuestro pin 5

void setup()
{
  pinMode(LED1, OUTPUT);	// Definimos el pin LED1 como salida
  pinMode(LED2, OUTPUT);	// Definimos el pin LED2 como salida
}
void loop()		// Definimos nuestra secuencia.
{
  digitalWrite(LED1, HIGH);	// Mandamos un ALTO a nuestro LED1
  digitalWrite(LED2, HIGH);	// Mandamos un ALTO a nuestro LED2
  delay(100); // Tiempo en el que los LED´s permanecen encendidos "un segundo".
  digitalWrite(LED1, LOW);	// Mandamos un ALTO a nuestro LED1
  digitalWrite(LED2, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}

```

<!--stackedit_data:
eyJoaXN0b3J5IjpbMjg1NzYwODMsLTE0MjQzNjU5MjYsLTczMD
c5Nzg2NF19
-->