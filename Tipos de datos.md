
# Tipos de datos

Veamos el siguiente programa que lleva a cabo una operación aritmética la cual realiza una suma de dos valores:

	variable1 = 80;
	variable2 = 10;
	resultado = variable1 + variable2;

Para que el compilador reconozca esta operación es necesario especificar previamente el **tipo de variable** para cada uno de los operandos que intervienen en la misma, así como el tipo de variable del resultado.

Para ello escribiremos una línea como la siguiente:
```c
int variable1, variable2, resultado;
variable1 = 80;
dato2 = 10;
variable2 = variable1 + variable2;
```
La declaración anterior le dice al compilador que ==variable1==, ==variable2== y ==resultado== son del tipo entero (**int**).

Los tipos de datos se clasifican como: **tipos primitivos** y **tipos derivados**.

Se les llama primitivos porque están definidos por el compilador. Hay siete tipos primitivos de datos que se clasifican en: **variables tipo enteros** y **variables tipo reales**.

- Variables tipo enteros: **char**, **short**, **int**, **long** y **enum**.
- Variables tipos reales: **float** y **double**.

Cada tipo primitivo abarca un rango diferente de los valores positivos y negativos.

El tipo de datos que se seleccione para declarar las variables de un determinado programa dependerá del rango y del tipo de valores que vayan a almacenar cada una de ellas, así como si son enteros o fracciones.


<!--stackedit_data:
eyJoaXN0b3J5IjpbODc3MjM1NzQ3XX0=
-->