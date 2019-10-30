# Sentencia "else if"
Esta estructura **else if** es una estructura consecuente de la sentencia **if**, en la cual se evalúan diferentes casos, su forma general es:

```c 
if(condición 1)
	sentencia 1;
else if(condición 2)
	sentencia 2;
else if(condición 3)
	sentencia 3;
.
.
.
else
	sentencia n;
```
La estructura **else if** se evalúa así: 

Si se cumple el primer caso **(condición 1)**, se ejecuta lo que se encuentra en la **sentencia 1** y **si no se cumple se examina secuencialmente los siguientes casos (condiciones) hasta llegar al último else if**. Si ninguna condición es verdadera entonces se ejecutara la sentencia **n** que corresponde al último **else**. 

El siguiente ejemplo se muestra cómo funciona:
 ```c
 int a = 10, b = 5, c = 11;
 
if(a < b){
	printf(“a es menor que b”);
}else if(a == b){
	printf(“a es igual que b”);
}else if(a > c){
	printf(“a es mayor que c”);
}else{
	printf(“Ningún caso es verdadero”);
}
```
En este ejemplo podemos observar que las condiciones son falsas porque así lo hemos hecho, pero primero se evalúa la **condición 1** que es **a < b** y si no se cumple sigue con la **condición 2** que es **a == b** hasta llegar a una **condición verdadera** que es el último **else** ya que las anteriores han sido falsas.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE5NTQ4NTY2MDNdfQ==
-->