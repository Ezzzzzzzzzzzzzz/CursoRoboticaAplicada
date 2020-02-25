# Censando un pulsador
Vamos a leer un pulsador y por medio de una condición vamos a prender y apagar un led, **esta práctica será la base para poder leer cualquier otro sensor con solo dos estados que son ALTO o BAJO** y poder utilizarlo dependiendo de nuestras necesidades, abajo se muestra el código, material y explicación de la práctica.

![](http://4.bp.blogspot.com/-KAkM3oZ1rhI/U7zrMdebhtI/AAAAAAAAA28/w66cXzjAIgI/s1600/resistenciaspullupypulldown.jpg)

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/PullDown%26Pullup.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/PullDown%26Pullup.JPG)

## Material
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Pulsador de 4 pines o 2 pines
> - Resistencia de 10 kOhm's
> - Protoboard
> - Jumpers
## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/BotonLED.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/BotonLED.JPG)

## Codigo
```c
#define LED 2 //Damos un alias a nuestro pin 2
#define Boton 3 //Damos un alias a nuestro pin 3

void setup()
{
  pinMode(LED, OUTPUT); // Definimos el pin LED como salida.
  pinMode(Boton, INPUT); // Definimos el pin Boton como entrada. 
}
void loop()
{
// Definimos nuestra secuencia.
  if(digitalRead(Boton) == HIGH){ // Utilizamos la sentencia condicional "if".
    digitalWrite(LED, HIGH); // Si la condición SI se cumple el LED se enciende.
  }
  else{
   digitalWrite(LED, LOW); // Si la condición NO se cumple el LED permanecera apagado.
  }
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTMxMzYwOTM5NSwxNjk2NzEyNTk5LDIwMT
QxMjgwMzksLTUxNjIwMjk4N119
-->