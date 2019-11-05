# Sentencia "switch"

La sentencia **switch** _permite ejecutar varias acciones en función de una expresión_. Es una sentencia para decisiones múltiples dado un determinado valor el cual se le da a la expresión. 

Su sintaxis es:

```c 
switch(expresión){
	case [expresión-constante 1]:
		sentencia 1;
	break;
	case [expresión-constante 2]:
		sentencia 2;
	break;
	.
	.
	.
	default:
		sentencia n;

}
```
Donde **expresión** es la variable que almacenará o recibirá los datos de cada caso **(case)**. La sentencia **switch** evalúa la expresión entre paréntesis y compara su valor con las constantes de cada **case**. La ejecución de las sentencias del bloque de la sentencia **switch, comienza en el case cuya constante coincida con el valor de la expresión y continúa hasta el final del bloque, si no existe ninguna variable para case entra al default**, un **default** sería como un **else** poniendo como ejemplo la sentencia **if**.


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTgzNTEyMzE4OF19
-->