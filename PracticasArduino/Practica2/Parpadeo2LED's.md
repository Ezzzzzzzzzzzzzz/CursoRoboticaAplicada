# Parpadeo de dos LED's

Ahora lo que realizaremos en esta segunda práctica es hacer parpadear dos led´s simultáneamente, la explicación es similar a la anterior solo que ahora son dos led's, se recomienda que ustedes aparte de esto aumente más led´s, tres, cuatro, etc., y jueguen con los tiempos del ``delay()``.

![](https://media1.giphy.com/media/lQtw1JR5ULH0I/giphy.gif)

## Materiales
> - Arduino UNO
> - 2 LED´s de 5 mm
> - 2 Resistencias de 220 ohm´s 
> - Protoboard 
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/) 

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica2/Practica2.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica2/Practica2.JPG)

## Código
```c
#define LED1 4	// Damos un nombre a nuestro pin 4
#define LED2 5	// Damos un nombre a nuestro pin 5

void setup()
{
  pinMode(LED1, OUTPUT); // Definimos el pin LED1 como SALIDA
  pinMode(LED2, OUTPUT); // Definimos el pin LED2 como SALIDA
}
void loop() // Definimos nuestra secuencia.
{
  digitalWrite(LED1, HIGH); // Mandamos un ALTO a nuestro LED1
  digitalWrite(LED2, HIGH); // Mandamos un ALTO a nuestro LED2
  delay(100); // Tiempo en el que los LED´s permanecen encendidos "un segundo".
  digitalWrite(LED1, LOW); // Mandamos un BAJO a nuestro LED1
  digitalWrite(LED2, LOW); // Mandamos un BAJO a nuestro LED2
  delay(100); // Tiempo en el que los LED´s permanecen apagados "un segundo".
}
```
## Bloques
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica2/Prac2_bloq.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica2/Prac2_bloq.JPG)
<!--stackedit_data:
eyJoaXN0b3J5IjpbNzUwNzk5Mjc0LDc5NzUyNzYwMCw1Mzc1OD
k3OSwtMTIzMTY3NjE1MCwzNTY3NjA1NTQsLTIwODQ0NTM3MzEs
LTE0MjQzNjU5MjYsLTczMDc5Nzg2NF19
-->