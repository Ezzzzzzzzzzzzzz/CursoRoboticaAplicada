# Sensores digitales

Bien, ya vimos actuadores digitales, aprendimos como escribir/enviar señales digitales de 0 o 5v. **Ahora veamos como leer señales de 0 o 5v con nuestro Arduino.**
- Los sensores digitales pueden estar abiertos o cerrados, o sea pueden tener el valor de **0** o **5v**.
- La entrada de lectura será de 5 o 0 volts.
  * **Esto sería: 1 o 0 lógicos**.
- Para saber su estado utilizaremos la función:
    * ``digitalRead([numpin/alias])``;
	* Nos devolverá un valor **lógico/booleano**.
	  + **HIGH/1** – Si está cerrado = 5 volts o mayor a 3 volts.
      + **LOW/0** – Si está abierto = 0 volts o menor a 2 volts.

La lectura que se hace con ``digitalRead()`` y **ésta se tiene que almacenar en una variable del tipo natural, o ósea ``byte`` o ``int``, para poder usar ese valor, usando las sentencias ``if()``, ``switch()``, etc**. 

Tenemos algunas cuestiones antes de comenzar para que no haya algún error cuando se hace la lectura de cualquier sensor digital:
- Si el sensor no está bien conectado:
  * **Tendremos un pin “flotante” con valores de lectura aleatorios entre 0 y 1.**
 - Es necesario conectarlo bien:
   * **A tierra, con una resistencia pull-down.**
   * **A 5 volts, con una resistencia pull-up.**
   * **Leer la hoja de datos del sensor para ver las especificaciones.**
  
  - El **pin 13** no es recomendable usarlo en la tarjeta para lectura:
    * **Tiene una resistencia propia física**.

## Resistencia de Pull up & Pull down

Las resistencias **pull-up** o **pull-down** se usan para establecer el estado lógico de la lectura que haremos de nuestro sensor y ésta sea correcta, como es el caso si usamos pulsadores, dip switch, sensores IR, etc.

Como bien lo dice su nombre, **dependiendo de la configuración que hagamos tendremos un estado alto por default o un estado bajo también por default**, **cuando nuestro sensor esté en reposo y cuando activemos el sensor cambiará el estado** de éste y se usan resistencias de **1k** a **10k**, y esto se explicó anteriormente.

En la configuración de **resistencia pull-up** **en el estado de reposo tendremos un estado de 5V (HIGH)**, en cambio **cuando activamos** nuestro sensor **se deriva toda la corriente a tierra y la caída de tención es de 0v (LOW)**.

En la configuración de **resistencia pull-down** en el estado de reposo **tendremos un estado de 0V (LOW)**, en cambio **cuando activamos nuestro sensor dejará pasar la corriente y tendremos una diferencia de potencial de 5v (LOW)**.

Aquí mostramos la conexión de cada una:

![](http://4.bp.blogspot.com/-KAkM3oZ1rhI/U7zrMdebhtI/AAAAAAAAA28/w66cXzjAIgI/s1600/resistenciaspullupypulldown.jpg)
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/PullDown%26Pullup.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/PullDown%26Pullup.JPG)
Esta configuración sirve solo para sensores donde solo tenemos dos estados **ALTO** o **BAJO**.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTkyMzQyNzg1LDQxMjY1NzA5OSwxMTg2NT
U5OTQ1XX0=
-->