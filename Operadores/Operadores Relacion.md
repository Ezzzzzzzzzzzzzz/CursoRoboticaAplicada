# Operadores de relación

Los **operadores de relación** o de **comparación** permiten evaluar la **igualdad** y la **magnitud**. El resultado de una operación de relación es un valor **booleano verdadero o falso** (**1** o **0**). 

Los operadores de relación son los siguientes:

Operador   |    Operación
:-------:  |  :---------:
__<__         |  El primer operando **menor que** el segundo.
__>__          | El primer operando **mayor que** el segundo.
__<=__         | El primer operando **menor o igual que** el segundo.
__>=__        | El primer operando **mayor o igual que** el segundo.
__!=__         | El primer operando **distinto que** el segundo.
__==__         | El primer operando **igual que** el segundo.

## Blockly@rduino
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/capture1604427243330.png)
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/capture1604427246708.png)
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/capture1604427249579.png)
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/capture1604427252528.png)
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/capture1604427255567.png)
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/capture1604427259059.png)

Los operandos tienen que ser de un tipo primitivo. Por ejemplo:

```c
int r = 10, t = 0, y = 0;
y = r == t; // y = 0 (falso) porque r no es igual a t
y = r > t; // y = 1 (verdadero) porque r es mayor que t
y = r != t; // y = 1 (verdadero) porque r no es igual a t
```
Un operador de relación equivale a una pregunta relativa sobre como son dos operandos entre sí. Por ejemplo, la expresión **r == t** equivale a la pregunta **¿x es exactamente igual a y?** Una **respuesta si** equivale a un valor **verdadero (1)** y una **respuesta no** equivale a un valor **falso (0)**.

## Blockly@rduino
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/capture1604427191622.png)
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE4MjQ4NDM1NDYsLTE2MDEzOTkwMzIsLT
E1NTMyMDc4MjldfQ==
-->