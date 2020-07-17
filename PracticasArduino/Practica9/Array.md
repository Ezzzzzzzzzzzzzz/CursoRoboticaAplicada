# Array
## Descripción
Una **array (matriz) es una colección de variables a las que se accede con un número de índice**. Los **array** en el lenguaje de programación C++ de los bocetos de Arduino pueden ser complicados, pero el uso de matrices simples es relativamente sencillo.

## Crear (declarar) un Array (matriz)
Todos los métodos a continuación son formas válidas de crear (declarar) una matriz.

```c 
  int myInts[6];
  int myPins[] = {2, 4, 8, 3, 6};
  int mySensVals[6] = {2, 4, -8, 3, 2};
  char message[6] = "hello";
```
> - Puede declarar una **array** sin inicializarla como en **myInts**.
> - En **myPins** declaramos una matriz sin elegir explícitamente un tamaño. El compilador cuenta los elementos y crea una matriz del tamaño apropiado.
> - Finalmente, puede inicializar y dimensionar su matriz, como en **mySensVals**. 
> - Tenga en cuenta que al declarar una matriz de tipo **char**, se requiere un elemento más que su inicialización para contener el carácter nulo requerido.


![](https://i0.wp.com/www.tutorialspoint.com/images/java_array.jpg?zoom=2)

```c
int miArray[3] = {1, 150, 632};
```
![](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcSh20y0eOURpuQ1RacZaIfxfV-s6hBdmJ7VHQ&usqp=CAU)

![](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcSyZyTn3eFO6yd7nyKQXOAh9GkY6sR2DLJt6w&usqp=CAU)

![](https://cdn1.coppel.com/images/catalog/pm/3481713-1.jpg)
## Accediendo a un Array

Los **arrays** están indexadas a cero, **es decir, en referencia a la inicialización de la matriz anterior, el primer elemento de la matriz está en el índice 0, por lo tanto**

`mySensVals[0] == 2, mySensVals[1] == 4, ... , mySensVals[4] == 2 `  

También significa que en una matriz con diez elementos, el índice nueve es el último elemento. 

Por lo tanto:

```c
int myArray[10]={9, 3, 2, 4, 3, 2, 7, 8, 9, 11};
// myArray[9]    contiene a 11
// myArray[10]   es invalido y contiene cualquier tipo de información (otra dirección de memoria).
```
**Por esta razón, debe tener cuidado al acceder a las matrices**. 

**Acceder más allá del final de una matriz (usando un número de índice mayor que el tamaño de matriz declarado - 1) es leer de la memoria que está en uso para otros fines**. 

Leer desde estas ubicaciones probablemente no servirá de mucho, excepto generar datos no válidos. **Escribir en ubicaciones de memoria aleatorias es definitivamente una mala idea y a menudo puede conducir a resultados infelices, como bloqueos o mal funcionamiento del programa. Esto también puede ser un error difícil de rastrear.**

A diferencia de BASIC o JAVA, el compilador de C ++ no verifica si el acceso a la matriz está dentro de los límites legales del tamaño de la matriz que usted ha declarado.

Para asignar un valor a una matriz:
`mySensVals [0] = 10;`

Para recuperar un valor de una matriz:
`x = mySensVals [4];`

## Matrices y bucles FOR
Los **array** a menudo se manipulan en el interior para bucles, donde el contador de bucles se usa como índice para cada elemento de la matriz. 

Por ejemplo, para imprimir los elementos de una matriz a través del puerto serie, puede hacer algo como esto:

```c
for (byte i = 0; i < 5; i = i + 1) {
  Serial.println(myPins[i]);
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE1MTc3Njg3MjMsLTM0ODc2MDI0NCwtMT
I1MDMxODc1NywyODU4Nzc0NjIsNDk0NDA2NzMyLDEzNjI2NTcz
MDIsMzEyNzg0NjEzXX0=
-->