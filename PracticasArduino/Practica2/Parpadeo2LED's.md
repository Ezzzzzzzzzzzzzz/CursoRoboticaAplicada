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
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}

```

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTk1Njk4NjIxOCwtMTQyNDM2NTkyNiwtNz
MwNzk3ODY0XX0=
-->