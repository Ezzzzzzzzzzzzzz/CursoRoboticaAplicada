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

Ahora veremos algunos ejemplos, _el primer ejemplo nos imprimirá los valores desde el 0 al 100_, existen dos modos de hacer esto y depende de la **condición 1**.
```c 
for(int i = 0; i <= 100 ; i++){
	printf(“%d”, i);
}
```
![](https://sites.google.com/site/ticiitarraga/_/rsrc/1478433338602/01---programacion/01-1--diagramas-de-flujo/Captura%20de%20pantalla%202016-11-06%20a%20las%2012.52.31.png)
Como podemos ver en este ejemplo la variable **i** comienza en el valor constante **0**, **la primera condición declara que tiene que ser menor o igual a 100**, o sea que llegará al valor a 100, ahora en la **condición 2** que ya se ve vio anteriormente **hace un incremento en 1**. 

Ahora en el siguiente ejemplo la **condición 1** cambia pero hace lo mismo que el primer ejemplo.
```c
for(int i = 0; i < 101 ; i++){
	printf(“%d”, i);
}
```
La explicación es igual a la anterior solo que en la **condición 1 se evalúa un < explicito**, o sea que imprimirá hasta el número 100, pero **cuando llegue a 101 se detiene la sentencia for**.
```c 
for(int i = 100; i >= 1 ; i--){
	printf(“%d”, i);
}
```
Este ejemplo es similar a los anteriores pero al revés, **empieza en el número 100 y se hace un decremento en 1 cuando se evalúa la condición 1**, como en las explicaciones anteriores.

<!--stackedit_data:
eyJoaXN0b3J5IjpbNDc5Mjg1Nzg1LC0zNjkyMzM3MjIsLTE4NT
E2OTkyNzZdfQ==
-->