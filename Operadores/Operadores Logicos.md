# Operadores lógicos
El **resultado de una operación lógica** (**AND**, **OR**, **XOR** y **NOT**) es un valor **booleano verdadero o falso ( 1 o 0)**. Las expresiones que dan como resultado valores booleanos (véanse los operadores de relación) pueden combinarse para formar expresiones booleanas utilizando los operadores lógicos indicados a continuación. 

_Los operandos deben ser expresiones que den un resultado verdadero o falso._

Operador     |     Operación
:-------:    | :--------:
**&&**    |  **AND** Da como resultado **verdadero** si al evaluar cada uno de los operandos el **resultado es verdadero**. **Si uno de ellos es falso**, el resultado es **falso**. **Si el primer operando es falso, el segundo operando no es evaluado**.
**\|\|**    | **OR** El resultado **es falso** si al evaluar cada uno de los operandos el resultado es falso. **Si uno de ellos es verdadero**, el resultado **es verdadero**. **Si el primer operando es verdadero, el segundo operando no es evaluado.**
**!**    |  **NOT** El resultado de aplicar este operador es falso si al evaluar su operando el resultado es verdadero, y verdadero en caso contrario.
**^**   | **XOR** Da como resultado verdadero si al evaluar cada uno de los operandos el resultado de uno es verdadero y el del otro falso; en otro caso el resultado es falso. 

El resultado de una operación lógica es de tipo **int** o **booleana**. 

Por ejemplo:
```c
int o = 10, p = 0, q = 0;
q = (o != 0) && (p != 0); // q = 0 (falso)
```
Los operandos del operador **&&** son: **o != 0** y **p != 0**. El resultado de la expresión **o != 0 es verdadero** porque **o** vale **10** y **p != 0 es falso** porque **p** es **0**. Por lo tanto, **el resultado de verdadero && falso es falso**.

# Tablas de verdad

## AND
La función de la puerta lógica **AND** es la multiplicación, y viene representada de la siguiente manera:

![](https://aristoteles2pc.files.wordpress.com/2011/03/and-ok.jpg?w=147&zoom=2)

Para comprender mejor el funcionamiento de esta puerta lógica, nos podemos servir de la tabla de verdad:

![](https://aristoteles2pc.files.wordpress.com/2011/03/tabla-de-verdad.png?w=225&h=296&zoom=2)

## OR 
La función de la puerta lógica **OR** es la suma, y viene representada de la siguiente manera:

![](https://aristoteles2pc.files.wordpress.com/2011/03/orok.jpg?w=140&zoom=2)

Y la tabla de verdad de la puerta OR es la siguiente:

![](https://aristoteles2pc.files.wordpress.com/2011/03/or1.png)

## NOT

La función de la puerta lógica **NOT** es la inversa, es decir, lo que aparece en la salida es lo contrario de lo que aparece en la entrada.  
Se representa de la siguiente manera:

![](https://aristoteles2pc.files.wordpress.com/2011/03/notok1.jpg?w=138&zoom=2)

Viendo esta tabla de verdad comprenderemos mucho mejor e funcionamiento de la puerta lógica NOT:

![](https://aristoteles2pc.files.wordpress.com/2011/03/not1.png)
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTU2ODUwMDUzMSwxNTk3MTQ5NDY1LC0xNj
E5NTY0MzgwXX0=
-->