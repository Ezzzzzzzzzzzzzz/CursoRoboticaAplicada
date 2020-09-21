# Actuadores Digitales

Primero explicaremos qué es una señal digital y como podremos trabajar con una en nuestra tarjeta Arduino.

## ¿Qué es algo digital?

- Digital.
- Solo dos valores.

Ejemplos:

- **[0-1].**
- **Verdadero o Falso.**
- **0v o 5v.**

![SeñalDigital](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Arduino/Se%C3%B1alDigital.JPG)

## ¿Qué quiere decir esto? 

**Que solo tendremos pulsos de 0v y 5v por un determinado tiempo 1s, 1/2s, etc.**

Pines digitales de la tarjeta Arduino UNO.

El **Arduino UNO tiene 14 pines digitales**, cada uno de estos para:
- **Entrada y salida digital.**
- **Voltajes de trabajo de 0v o 5v.**
- **Corriente máxima por pin de 40mA.**

Se debe de tener en consideración que **Arduino tomará como un pulso alto o 1 a partir de 3v** y como un **pulso bajo o 0 a partir de 2v (valores aproximados)**.

![opvoltaje](https://cdn.sparkfun.com/assets/7/9/3/a/c/5V-logic-levels_fixed.png)

## Configuración de los pines digitales

Esta parte es muy importante ya que veremos las **“palabras reservadas”** del lenguaje de programación de Arduino, estas **nos servirán para poder poner un pin ya sea como entrada o salida**, en este caso se ven los actuadores digitales así que los pines serán usados solo como salida, y esto es esencial ya que uniendo esto con los siguientes temas veremos que, podemos hacer muchas cosas interesantes.

Los pines pueden usarse como entrada o salida.
>Para definir su funcionamiento, en entrada o salida emplearemos la función **pinMode()**

```c
pinMode([PIN/ALIAS],[INPUT/OUTPUT]);
```
>Donde **INPUT** – es de enterada y **OUTPUT** – es de salida.

Como bien ya se ha mencionada varias veces y no está de más decirlo de nuevo, **la salida será de 0v o 5v**, aquí tenemos un ejemplo un poco más concreto.

>Los pines los configuramos dentro del **setup(){}**
```c
setup(){
	pinMode(2,OUTPUT);
}
```
Para definir o escribir una salida usamos la función **digitalWrite**, **esta función enviará un pulso alto o bajo**:
```c
digitalWrite([PIN],[HIGH/LOW]);
```
>Donde **HIGH** será **5v** y **LOW** será **0v**

```c
loop(){
	digitalWrite(2, HIGH);
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTU3NDg5Nzk2MV19
-->