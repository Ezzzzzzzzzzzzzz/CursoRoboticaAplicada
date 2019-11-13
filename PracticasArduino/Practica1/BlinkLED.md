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

```c
#define LED 2 //Damos el alias a nuestro pin 2.
void setup(){
	pinMode(LED,OUTPUT); //Definimos el pin LED como salida.
}
void loop(){ 				//Definimos nuestra secuencia.
	digitalWrite(LED,HIGH); //Mandamos un ALTO al LED.
	delay(1000); 	//Tiempo en que permanece el LED prendido “un segundo”.
	digitalWrite(LED,LOW); //Mandamos un BAJO al LED.
	delay(1000); //Tiempo en que permanece el LED apagado “un segundo”.
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE5MzcxMTczMjMsLTE1OTc0NjcxNDYsLT
U2OTk5NTU2MV19
-->