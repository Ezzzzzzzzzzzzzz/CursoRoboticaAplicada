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

Recordando lo que se vio en capítulos pasados usamos la palabra reservada ``#define`` **para darle un alias a nuestro pin 2**, el cual es LED, _esto para tener un código mucho más limpio e identificar lo que conectamos en cada pin de nuestro Arduino_, por eso ``#define LED 2``. Todo esto se hace arriba del ``void setup()``, también en esta parte se definen las variables para almacenar datos, o sea variables globales.

Ahora dentro de ``void setup()`` **configuramos nuestro pin como salida ya que enviaremos señales digitales de ALTO o BAJO**, esto se hace mediante la función ``pinMode()`` que en su traducción al español sería “pin en modo de” , **esta función recibe dos parámetros, uno que es el ALIAS o PIN y la otra parte** que sería la palabra reservada ``INPUT`` u ``OUTPUT``, en este caso usamos la segunda que es ``OUTPUT``, ya que enviaremos pulsos y por eso lo configuramos como salida.

Lo siguiente será configurar nuestro programa de ejecución, esto entra en ``void loop()``, lo  que escribamos dentro de él se ejecutara infinitamente hasta que nosotros cortemos el ciclo por algún otro medio. Como queremos hacer el clásico **blink**, _lo que quiere decir hacer prender y apagar un led por un determinado tiempo_, tenemos que enviar un pulso **ALTO**, para este caso usaremos la función ``digitalWrite()`` que traducida al español será “escribe en digital un”, como pueden observar también recibe dos parámetros, uno es el **ALIAS**o **PIN** y la otra parte lo que queremos escribir, un **ALTO** o un **BAJO** y esto se hace mediante **HIGH**o **LOW**, en nuestro caso como queremos que prenda el led enviará un alto por un determinado tiempo, así que usamos la función ``delay()``. Esta función recibe un parámetro ya sea una variable o un numero entero, este valor representa a los **milisegundos** que quiere decir esto que **un segundo serán mil milisegundos**, por eso ``delay(1000)``, **este será el tiempo en que el led permanezca prendido**. Ahora queremos que se apague, usamos de nuevo la función ``digitalWrite()``, pero ahora enviamos un pulso bajo que será **LOW** y de nuevo queremos que esto suceda solo por un segundo así que volvemos a usar ``delay(1000)``, esto hará que nuestro led permanezca apagado durante un segundo, una vez que se haya echo la programación y el circuito finalmente se cargara el programa a nuestra tarjeta arduino y veremos cómo se ejecuta nuestro blink infinitamente.




<!--stackedit_data:
eyJoaXN0b3J5IjpbMTgwMjAwODYzNiwxOTY5ODUxNjU5LDE2Nz
Y4NjM4NzUsLTE1OTc0NjcxNDYsLTU2OTk5NTU2MV19
-->