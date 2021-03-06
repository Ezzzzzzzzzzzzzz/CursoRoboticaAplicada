# Sentencia "for"

La sentencia **for** _nos permite ejecutar una o varias líneas de código repetitivamente a un número determinado de veces_. 

Su sintaxis es:
```c
for(val1 = val2/const; condición 1 ; condición 2){
	sentencia;
}
```
La sentencia **for** se evalúa de la siguiente forma:
1. A **val1** se le asigna un valor constante o el valor de alguna otra variable.
2. Se evalúa la condición:
>a. Si la **condición 1 es verdadera respecto a val1**, se ejecuta la sentencia respecto a **condición 2** y así sucesivamente dependiendo de esta.

>b. **Si la condición 1 es falsa respecto a val1**, la sentencia for termina.

## Blockly@rduino
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/capture1604427641487.png)

Ahora veremos algunos ejemplos, _el primer ejemplo nos imprimirá los valores desde el 0 al 100_, existen dos modos de hacer esto y depende de la **condición 1**.
```c 
for(int i = 0; i <= 100 ; i++){
	printf(“%d”, i);
}
```
![](https://www.okpedia.it/data/okpedia/algoritmo-funzione-for-linguaggio-c.gif)

Como podemos ver en este ejemplo la variable **i** comienza en el valor constante **0**, **la primera condición declara que tiene que ser menor o igual a 100**, o sea que llegará al valor a 100, ahora en la **condición 2** que ya se ve vio anteriormente **hace un incremento en 1**. 

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/capture1604427812445.png)

Ahora en el siguiente ejemplo la **condición 1** cambia pero hace lo mismo que el primer ejemplo.
```c
for(int i = 0; i < 101 ; i++){
	printf(“%d”, i);
}
```
La explicación es igual a la anterior solo que en la **condición 1 se evalúa un < explicito**, o sea que imprimirá hasta el número 100, pero **cuando llegue a 101 se detiene la sentencia for**.

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/capture1604427906155.png)

```c 
for(int i = 100; i >= 1 ; i--){
	printf(“%d”, i);
}
```
Este ejemplo es similar a los anteriores pero al revés, **empieza en el número 100 y se hace un decremento en 1 cuando se evalúa la condición 1**, como en las explicaciones anteriores.

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/capture1604427941534.png)
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTc1NzMyNTg1MSwtNDcwNDM5MTMwLC0yMD
k4NDE3NzAyLC0xOTI1ODMxMTYwLDQ3OTI4NTc4NSwtMzY5MjMz
NzIyLC0xODUxNjk5Mjc2XX0=
-->