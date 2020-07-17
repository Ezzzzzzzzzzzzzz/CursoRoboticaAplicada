# Array´s (arreglos o matrices) 2-D y Multidimensionales

Las matrices con dos dimensiones (es decir, subíndices) a menudo representan tablas de valores que consisten en información organizada en **filas** y **columnas**. 

Las siguientes son las características clave de las matrices multidimensionales: 

> - Para identificar un elemento de tabla en particular, debemos especificar dos subíndices. 
>- Por convención, **el primero identifica la fila del elemento y el segundo identifica la columna** del elemento. 
>- Las matrices que requieren dos subíndices para identificar un elemento en particular se denominan matrices bidimensionales o Array 2-D . 
>- Las matrices con dos o más dimensiones se conocen como matrices multidimensionales y pueden tener más de dos dimensiones.

La siguiente figura ilustra una matriz bidimensional, **"a"**. La matriz contiene **tres filas y cuatro columnas, por lo que es una matriz de 3 por 4**. En general, **una matriz con m filas y n columnas** se denomina matriz **m** x **n**.

![](https://www.tutorialspoint.com/arduino/images/multidimensional_array.jpg)

Cada elemento en la matriz a se identifica por un nombre de elemento de la forma a **[i]** **[j]**. 

Aquí, a es el nombre de la matriz, e **i** y **j** son los subíndices que identifican de forma única cada elemento en **a**. 

**Observe que los nombres de los elementos en la fila 0 tienen un primer subíndice de 0; Los nombres de los elementos en la columna 3 tienen un segundo subíndice de 3.**

Una matriz multidimensional se puede inicializar en su declaración de forma muy similar a una matriz unidimensional. 

Por ejemplo, una matriz bidimensional **b con valores 1 y 2 en sus elementos de la fila 0 y valores 3 y 4 en sus elementos de la fila 1** podría declararse e inicializarse de la siguiente manera:

```c
int b[ 2 ][ 2 ] = { { 1, 2 }, { 3, 4 } };`
```

>- Los valores se agrupan por fila entre llaves. Por lo tanto, 1 y 2 inicializan **b [0] [0] yb [0] [1], respectivamente, y 3 y 4 inicializan b [1] [0] yb [1] [1], respectivamente.**

```c
int b[ 2 ][ 2 ] = { { 1 }, { 3, 4 } };
```

>- Si no hay suficientes inicializadores para una fila dada, los elementos restantes de esa fila se inicializan a 0. Por lo tanto, la siguiente declaración inicializa **b [0] [0] a 1, b [0] [1] a 0, b [ 1] [0] a 3 yb [1] [1] a 4**.


## Ejemplos 

```c
int miArregloMulti2[ 2 ][ 3 ] = { { 1, 5, 6 }, { 88, 3, 7} };
```

![](https://static.lolahome.es/media/catalog/product/cache/1/image/600x/9df78eab33525d08d6e5fb8d27136e95/c/a/cajonera-6-cajones-blanco-122823.jpg)


```c
int miArregloMulti1[ 3 ][ 4 ] = { { 1, 5, 6, 8 }, { 88, 3, 7, 9 }, { 58, 74, 66, 848} };
```
![](https://manualidadesybellasartes.es/175094-home_default/cajonera-madera-artemio-415x11x325-mm.jpg)


```c
int miArregloMulti3[ 5 ][ 3 ] = { { 1, 5, 6}, { 88, 3, 7}, { 58, 74, 66}, { 75, 2, 85}, { 2, 7, 9} };
```

![](https://habitkasa.es/wp-content/uploads/2019/11/MB-150626_9-600x400.jpg)

## Accediendo a un Array

Los **arrays** están indexadas a cero, **es decir, en referencia a la inicialización de la matriz anterior, el primer elemento de la matriz está en el índice 0, por lo tanto** 

También significa que en una matriz con diez elementos, el índice nueve es el último elemento. 

`int b[ 2 ][ 2 ] = { { 1, 2 }, { 3, 4 } };`

Para asignar un valor a una matriz:
`b[0][1] = 10;	//[0] = Primera fila | [1] = Segundo cajon de la primera fila`

Para recuperar un valor de una matriz:
`x = b[0][1];  // x --> Almacena el valor de la primera fila cajon 2`


## Ejercicio 
```c
int miArray[2][3] = {{1, 2, 3} , {4, 5, 6}};
int i = 0;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	i = miArray[0][2]; 	// Para recuperar el valor en una matriz 
  	Serial.print("El valor es: ");
    Serial.println(i);
  
 	miArray[0][2] = 7;	// Asigno el valor de 7 en [0, 3]
  	
  	i = miArray[0][2];	// Para recuperar el valor en una matriz
 	Serial.print("El valor sustituido es: ");
    Serial.println(i);
  
  	delay(10000);
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbODMwODU2MTEyLDE5MzA2MzU2LC03ODQyOD
kyNTgsLTE3NzU0MjM0OTYsLTEwNDEwMzgwOTUsODI0MTc2OTM5
LDEzMTc4Mjc0XX0=
-->