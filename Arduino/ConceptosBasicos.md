# Conceptos básicos

Es importante seguir estas recomendaciones, ya que si no lo hace podría dañar su tarjeta de desarrollo:

1. **No sobrepase los niveles de corriente**, tanto de entrada como de salida, recuerde que las tarjetas Arduino **entregan un máximo de 40mA por pin**. Así mismo también **soporta una corriente máxima de 40mA** de lectura, esto quiere decir que **puede encender un led con una resistencia de 220 Ω**.  El **voltaje de salida de los pines** de la tarjeta Arduino **es de 5V** y **la corriente que requiere un led para encenderlo es de 20mA** así que, veamos qué resistencia necesitamos para encenderlo correctamente:

>V = R*I       (despejando) -->     R= V/I	  

>R=5 [V]/0.02 [A]
>R = 250 Ω ≈ 220Ω∼270 Ω

Ahora veremos un ejemplo de la **corriente de entrada** en nuestra tarjeta, supongamos que queremos usar un pulsador, veremos qué resistencia debemos colocarle la cual será la mínima,como ya sabemos la corriente máxima de entrada es de **40mA**:

>V = R*I       (despejando) -->     R= V/I	

>R=5 [V]/0.04 [A]
>R = 125 Ω ≈ 120Ω∼150 Ω

Como hemos mencionado es el mismo valor que debe colocarse para estar al límite de la capacidad soportada por el la Arduino, pero esto no es aconsejable por lo que, en la mayoría de los casos se usa una resistencia de **1KΩ** a **10KΩ**, así nuestra tarjeta trabaja perfecta y tranquilamente con **5mA**.

2. En **proyectos externos** se recomienda usar una fuente de voltaje de **12V** y **ser alimentado por el Jack de nuestra tarjeta** y **no** por el puerto **USB**, como ya se ha mencionado antes.

3. **Tratar de que mientras nuestra tarjeta esté en funcionamiento que no caiga ningún líquido en ella o alguna pieza de metal que haga contacto** entre si, ya que **podría sufrir algún corto circuito** y estropear la misma.

4. Si es posible adquirir una carcasa de acrílico para mantenerla completamente aislada y así no sufra daño alguno.

5. **Si usa sensores, relevadores, servomotores, etc.,** emplear **usar una fuente externa para alimentar** los mismos, se recuerda que cada pin de nuestra tarjeta entrega un máximo de **40mA**, ___si usted sobrecarga la corriente quemará su tarjeta___.


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE1OTk5OTg3MDksLTM3OTkxNDY2NV19
-->