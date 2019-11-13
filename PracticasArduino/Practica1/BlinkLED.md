# Blink LED

Comenzaremos haciendo el programa clásico del **blink** que en otro lenguaje de programación sería como el **“Hola Mundo”** ya que es el primer programa que se enseña, el código será el siguiente. 

Es muy importante que usted escriba el código para que pueda aprender correctamente y se vaya acostumbrando a la programación:

## Materiales
> - 1 Arduino
> - LED 5 mm
> - Resistencia 220 Ohm's
> - Protoboard 
> - Jumpers (cables) 

## Circuito

![BlinkLED](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica1/BlinkLED.JPG)

## Código  
```c
#define LED 2 //Damos el alias a nuestro pin 2.
void setup(){
	pinMode(LED,OUTPUT); //Definimos el pin LED como salida.
}
void loop(){ //Definimos nuestra secuencia.
	digitalWrite(LED,HIGH); //Mandamos un ALTO al LED.
	delay(1000); //Tiempo en que permanece el LED prendido “un segundo”.
	digitalWrite(LED,LOW); //Mandamos un BAJO al LED.
	delay(1000); //Tiempo en que permanece el LED apagado “un segundo”.
}
```
## Explicación 

Recordando lo que se vio en capítulos pasados usamos la palabra reservada #define para darle un alias a nuestro pin 2, el cual es LED, esto para tener un código mucho más limpio e identificar lo que conectamos en cada pin de nuestro Arduino, por eso #define LED 2. Todo esto se hace arriba del void setup(), también en esta parte se definen las variables para almacenar datos, o sea variables globales.


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTc2Njc0NjI3NiwtMTU5NzQ2NzE0NiwtNT
Y5OTk1NTYxXX0=
-->