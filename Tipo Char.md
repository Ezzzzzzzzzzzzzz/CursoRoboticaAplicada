# Char

El tipo **char** declara datos enteros entre **-128 y +127**. Un tipo char se define como un conjunto de 8 bits, de los cuales uno es para especificar el signo y el resto para el valor; dicho conjunto de bits recibe el nombre de **[byte]([https://es.wikipedia.org/wiki/Byte](https://es.wikipedia.org/wiki/Byte))**. El siguiente ejemplo declara la variable **b** tipo **char** y le asigna el **valor inicial de 0**. _Es recomendable iniciar todas las variables que se declaren_.
```c
char t = 0;
```
Los valores de **0** a **127** corresponden con los **128** primeros caracteres de los códigos internacionales [**ASCII**]([https://es.wikipedia.org/wiki/ASCII](https://es.wikipedia.org/wiki/ASCII)), **[ANSI]([https://es.wikipedia.org/wiki/Instituto_Nacional_Estadounidense_de_Est%C3%A1ndares](https://es.wikipedia.org/wiki/Instituto_Nacional_Estadounidense_de_Est%C3%A1ndares))** o **[UNICODE]([https://es.wikipedia.org/wiki/Unicode](https://es.wikipedia.org/wiki/Unicode))** empleados para la representación de caracteres.

El siguiente ejemplo declara la variable **car** del tipo **char** a la que se le asigna el carácter **‘a’** como valor inicial. Las cuatro declaraciones siguientes son idénticas:
```c
char caracter = ‘t’;
char caracter = 116; // la ‘t’ es el decimal 116 en ASCII
char caracter = 0x74; // la ‘t’ es en hexadecimal 0074
char caracter = 0164; // la ‘t’ en octal es 0164
``
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTM1MzIyNTk5OF19
-->