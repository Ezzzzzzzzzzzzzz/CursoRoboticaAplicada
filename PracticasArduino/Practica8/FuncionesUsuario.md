# Funciones definidas por el usuario

Una función es un bloque de código que tiene un nombre y un conjunto de instrucciones que son ejecutadas cuando se llama a la función. 

Son funciones **setup()** y **loop()** de las que ya se ha hablado.

***Las funciones de usuario pueden ser escritas para realizar tareas repetitivas y para reducir el tamaño de un programa.*** Segmentar el código en funciones permite crear piezas de código que hacen una determinada tarea y volver al área del código desde la que han sido llamadas.

![](https://aprendiendoarduino.files.wordpress.com/2015/03/3c62c-dibujo-bmp.jpg?w=320)

Las funciones se declaran asociadas a un tipo de valor. 

Este valor será el que devolverá la función, por ejemplo **‘int’** se utilizará cuando la función devuelva un dato numérico de tipo entero. **Si la función no devuelve ningún valor entonces se colocará delante la palabra “void”, que significa “función vacía”**

Sintaxis:
```c
tipo nombreFunción(parámetros)
{
	instrucciones;
}
```

![](https://www.arduino.cc/en/uploads/Reference/FuncAnatomy.png)

**Para llamar a una función**, simplemente:
```c
_nombreFunción(parámetros);
```

En una función que devuelve un valor siempre debe tener la instrucción **Return**, este termina una función y devuelve un valor a quien ha llamado a la función: [http://arduino.cc/en/Reference/Return](http://arduino.cc/en/Reference/Return)

Ventajas del uso de funciones:

-   Ayuda a tener organizado el código.
-   Una función codifica una tarea en un lugar de nuestro sketch, así que la función solo debe ser pensada una sola vez.
-   Reduce la probabilidad de errores al modificar el código.
-   Hacen que el tamaño del sketch sea menor porque el código de la función es reutilizado.
-   Facilita la lectura del código.
-   Hace más sencillo reutilizar código en otros sketches.

Más información: [http://arduino.cc/en/Reference/FunctionDeclaration](http://arduino.cc/en/Reference/FunctionDeclaration)

# Nombres de funciones

Generalmente los nombres de las funciones deben ser en minúscula, con las palabras separadas por un guión bajo, aplicándose éstos tanto como sea necesario para mejorar la legibilidad.

“mixedCase” (primera palabra en minúscula) es aceptado únicamente en contextos en donde éste es el estilo predominante con el objetivo de mantener la compatibilidad con versiones anteriores.

En el caso de las clases, los nombres deben utilizar la convención “CapWords” (palabras que comienzan con mayúsculas).

Las funciones en Arduino pueden estar dentro del mismo fichero .ino o en otro fichero con extensión .ino dentro del directorio del sketch.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTUwOTkxNDYwMywtMTYwODEzNTQ4M119
-->