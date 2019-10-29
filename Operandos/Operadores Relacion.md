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

Los operandos tienen que ser de un tipo primitivo. Por ejemplo:

```c
int r = 10, t = 0, y = 0;
y = r == t; // y = 0 (falso) porque r no es igual a t
y = r > t; // y = 1 (verdadero) porque r es mayor que t
y = r != t; // y = 1 (verdadero) porque r no es igual a t
```
Un operador de relación equivale a una pregunta relativa sobre como son dos operandos entre sí. Por ejemplo, la expresión **r == t** equivale a la pregunta **¿x es exactamente igual a y?** Una **respuesta si** equivale a un valor **verdadero (1)** y una **respuesta no** equivale a un valor **falso (0)**.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE1NTMyMDc4MjldfQ==
-->