# Operadores aritméticos


Los **operadores aritméticos** los utilizamos para realizar **operaciones matemáticas** y son los siguientes:

Operador	|	Operación 
:------------: 	|	:-----------:
***+***        |    ***Suma.***  Los operandos pueden ser enteros o reales. 	
***-***         |    ***Resta.*** Los operandos pueden ser enteros o reales.
___*___                   |      ***Multiplicación.***   Los operandos pueden ser enteros o reales.
**/**            |  ***División.*** Los operandos pueden ser enteros o reales. Si ambos operandos son enteros el resultado es entero, en el resto de los casos el resultado es real.
***%***       | ***Modulo.*** Los operandos tienen que ser enteros.

## Blokly@rduino
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/capture1604425275195.png)

El siguiente ejemplo muestra cómo utilizar estos operadores.
```c
int t =10, b = 3, n;
float x = 2.0F, y;
y = x + t; // El resultado es 12.0 de tipo float
n = t / b; // El resultado es 3 del tipo int
n = t % b; // El resultado es 1 del tipo int
y = t / b; // El resultado es 3 de tipo int. Se convierte a float
para ser asignado a y
n = x / y; // El resultado es 0.666667 de tipo float. Se convierte a int para asignarlo a n (n = 0)
```
Cuando en una operación aritmética los operandos son de diferentes tipos, ambos son convertidos al tipo del operando de precisión más alta.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTA2MTQxODg4NV19
-->