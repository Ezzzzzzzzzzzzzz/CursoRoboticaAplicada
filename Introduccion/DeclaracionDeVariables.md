# Declaración de Variables

Una variable representa un espacio de memoria para almacenar un valor de un  determinado tipo. __El valor de una variable, a diferencia de una constante, puede cambiar su valor durante la ejecución de un programa__. Para utilizar una variable en un programa, primero hay que declararla. La declaración de una variable consiste en enunciar el nombre de la misma y asociarle un tipo:

`tipo nombre, nombre,...`

En el siguiente ejemplo se declaran e inician cuatro variables: una del tipo **char**, **int**, **float** y **double**:

```c 
char c = ‘t’;
main(){
	int i = 0;
	float f = 0.0F;
	double d = 0.0;
	//...
}
```
El tipo, primitivo o derivado, determina los valores que puede tomar la variable así como las operaciones que pueden realizarse con ella. Los operadores serán expuestos más adelante. 

_En el ejemplo anterior se puede observar que hay dos lugares en donde es posible realizar la declaración de una variable:_ 

>Fuera de todo bloque, entendido por bloque un conjunto de sentencias encerradas entre el carácter **‘{‘** y el carácter **‘}’**.

>Dentro de un bloque de sentencias. 

En nuestro ejemplo, se ha declarado la variable **c** antes de la función **main** (_fuera de todo bloque_) y las variables **i**, **f** y **d** dentro de la función (_dentro de un bloque_). 

Una _variable declarada fuera de todo bloque_ se dice que es **global** porque es accesible en cualquier parte del código desde su declaración hasta el final del fichero fuente. Por el contrario, _una variable declarada dentro de un bloque_, se dice que es **local** porque solo es accesible dentro de este.

__Según lo expuesto, la variable c es global y las variables y, f y d son locales.__

### Blockly@rduino
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Introduccion/capture1603128792768.png)

## Iniciación de una variable

Las **variables globales son iniciadas por omisión por el compilador**: las variables numéricas con **0** y los caracteres con **‘/0’**. También pueden ser iniciadas explícitamente, como hemos hecho en el ejemplo anterior con la variable **c**. En cambio, las **variables locales no son inicializadas por el compilador, por lo tanto, depende de nosotros iniciarlas o no**.

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Introduccion/capture1603129029398.png)

## Expresiones Numéricas

Una expresión es un conjunto de operandos unidos mediante operadores para especificar una operación determinada. Cuando todas las expresiones se evalúan retornan un valor. 

Por ejemplo:

```c
t + 1
sum + c
cantidad * precio
x = 7 * sqrt(t) – x / 2
```

### Blockly@rduino

<!--stackedit_data:
eyJoaXN0b3J5IjpbOTcyMzY1NDI2LDEwMDE1NDE1ODAsMTM2OD
c3Mjk4NiwxNjUyNjU1ODU3LDE4NDIwMzQ1MDUsLTE4MDY4NDY3
NzUsMTA1Njc5MTEwNV19
-->