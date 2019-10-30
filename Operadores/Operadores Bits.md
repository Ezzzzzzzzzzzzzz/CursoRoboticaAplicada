# Operadores a nivel de bits
Estos operadores permiten realizar con sus operandos las operaciones **AND**, **OR**, **XOR** y **desplazamientos bit por bit**. Los operandos tienen que ser enteros.

Operador    |  Operación 
:------:    |  :-------:
**&**    |  Operación **AND** a nivel de bits.
**\|**    | Operación **OR** a nivel de bits.
**^**      | Operación **XOR** a nivel de bits.
**<<**    | **Desplazamiento a la izquierda** rellenando con ceros a la derecha.
**>>**    |  **Desplazamiento a la derecha** rellenando con el bit de signo por la izquierda.

Los operandos tienen que ser de un tipo primitivo entero.

```c
int a = 255, r = 0, m = 32;
r = a & 017; //r = 15. Pone a cero todos los bits de a excepto los 4 bits de menor peso.
r = r | m; //r = 47. Pone a 1 todos los bits de r que estén a 1 en m.
r = a & ~07; // r = 248. Pone a 0 los 3 bits de menor peso de a.
r = a >> 7; // r = 1. Desplazamiento de 7 bits a la derecha.
r = m << 1; // r = 64. Equivale a r = m * 2
r = a >> 7; // r = 16. Equivale a r = m / 2
```



<!--stackedit_data:
eyJoaXN0b3J5IjpbLTIxMjEwODU5MjZdfQ==
-->