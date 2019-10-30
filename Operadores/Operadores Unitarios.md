# Operadores Unitarios

Los **operadores unarios** se aplican a un solo operando y son siguientes: **!**, **-** , **~**, **++** y **--**. 

El operador **!** ya lo hemos visto y los operadores **++** y **\-\-** los veremos más adelante.

Operador    |    Operación
:------:   | :--------:
**~**     |   **Complemento a 1 (cambia los ceros por unos y unos por ceros)**. El carácter ~ es el ASCII 126. El operando debe de ser de un tipo primitivo entero.
**-**     |    **Cambia el signo al operando (esto es, se calcula el complemento a dos que es el complemento 1 más 1)**. El operando puede ser de un tipo primitivo entero o real.

El siguiente ejemplo muestra cómo utilizar estos operadores:
```c
int a = 2, b = 0, c = 0;
c = -a; // resultado c = -2
c = ~b; // resultado c = -1
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTU0NjQ1MDcyNV19
-->