# Operadores de asignación 
El resultado de una **operación de asignación** es el valor almacenado en el operando izquierdo, lógicamente después de que la asignación se ha realizado. **El valor que se asigna es convertido implícitamente o explícitamente al tipo del operando de la izquierda.**

Operador      |     Operación
:--------:		|    :-----------:
**++**    |     Incremento.
**--**    	|    Decremento.
**=**   |   Asignación simple.
**\*=**   |    Multiplicación más asignación.
**/=**   |   División más asignación.
**%=**    |    Modulo más asignación.
**+=**   |    Suma más asignación.
**-=**    |    Resta más asignación.
**<<=**   |  Desplazamiento a izquierda más asignación.
**>>=**  |  Desplazamiento a derecha más asignación.
**&=**   | Operación **AND** sobre bits más asignación.
**\|=**    | Operación **OR** sobre bits más asignación.
**^=**   |  Operación **XOR** sobre bits más asignación. 

A continuación se muestran algunos ejemplos con estos operandos.

```c
int x = 10, y = 1;
x++; // Incrementa el valor de n en 1
x--; // Decrementa el valor de n en 1
y +=2 // Realiza la operación i = i + 2
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTEyMDYyMDMyMTBdfQ==
-->