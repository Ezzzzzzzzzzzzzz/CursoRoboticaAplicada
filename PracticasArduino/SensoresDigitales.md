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


<!--stackedit_data:
eyJoaXN0b3J5IjpbMTE4NjU1OTk0NV19
-->