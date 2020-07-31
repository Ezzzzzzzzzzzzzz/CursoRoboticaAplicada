# Parpadeo de dos LED's #2

Ahora, con lo aprendido anteriormente lo que realizaremos en esta segunda práctica es hacer parpadear dos led´s simulando la sirena de una **patrulla de policía**. 

![](https://thumbs.gfycat.com/TornPracticalEmu-size_restricted.gif)

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
  /*
	 ****************************
	 * Escribe tu codigo AQUI!! *
	 ****************************
	 */
}
```
## Mblock

![](https://media1.giphy.com/media/cMVgEhDeKzPwI/giphy.gif?w=1400)




Written by  [Ezzz](https://ezzzzzzzzzzzzzz.github.io/).
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTQ3MjUzMzQ1NCwtMTU4MzkwMzMyNywtMT
g0ODc4MTU1OCwtNTY2ODgwNTcwLC0xOTMyMzYxOTkwLC0xODEy
Mzg5MTI2LC02OTMxOTkzMV19
-->