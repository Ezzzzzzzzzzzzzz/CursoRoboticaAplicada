# Declaración de constantes simbólicas

Declarar una constante simbólica significa decirle al compilador el nombre de la constante y su valor. _Esto se hace generalmente antes de la función **main** utilizando la directriz **#define**_, cuya sintaxis es así:
```c
#define NOMBRE VALOR
```
El siguiente ejemplo declara la **constante real PI** con el valor de **3.14159**, la **constante de un solo carácter NL** con el valor **‘\n’** y la **constante de caracteres MENSAJE** con el valor **“Pulse una tecla para continuar\n”**:

```c
#define PI 3.14159
#define SALTO ‘\n’
#define MENSAJE “Pulse una tecla para continuar\n”
```
***Observe que no hay un punto y coma después de la declaración***. _Esto es así, porque una directriz no es una sentencia,sino una orden para el preprocesador_. El tipo de una constante es el tipo del valor asignado. 

_Suele ser habitual escribir el nombre de una constante en mayúsculas_.

# Constantes
Otra de las características incorporadas por los compiladores es la palabra reservada **const**. _Utilizándola disponemos de una forma adicional para declarar una constante; basta con anteponer el calificador const al nombre de la constante seguido del tipo de la misma_; si el tipo se omite, se supone int. 

Por ejemplo, la siguiente línea declara la constante real **Pi** con el valor **3.14**:
```c
const double E = 2.71;
```
**Una vez declarada e iniciada una constante, ya no se puede modificar su valor**. ***Por ello, al declararla debes ser iniciada.***

### Blockly@rduino

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Introduccion/capture1603127915590.png)
<!--stackedit_data:
eyJoaXN0b3J5IjpbODI3ODE1OTQ2LDQyMTM1MDgwMF19
-->