# Display de 7 segmentos (contador de 0 a 3)

Esta practica tiene como objetivo realizar una salida visual en un display de 7 segmentos. 

El display de 7 segmentos es un componente que se utiliza para la representación de números, es muy común encontrarlos en dispositivos electrónicos debido a su simplicidad. Está compuesto internamente por una serie de LED'S estratégicamente ubicados de tal forma que forme un número 8.

A cada uno de los segmentos que forman el display se les denomina **a**, **b**, **c**, **d**, **e**, **f** y **g**, están ensamblados de forma que se permita activar cada segmento por separado consiguiendo formar cualquier dígito numérico. Muchas veces aparece un octavo segmento denominado **p.d. (punto decimal)**.

**Existen dos tipos de display de 7 segmentos:**

- Ánodo común
-  Cátodo común

![](https://http2.mlstatic.com/display-7-segmentos-5611ah-catodo-comun-arduino-pic-arm-avr-D_NQ_NP_835181-MLV25645714860_062017-F.jpg)
 
![](https://http2.mlstatic.com/display-7-segmentos-1-digito-catodo-comun-rojo-arduino-D_NQ_NP_942204-MLA27477084127_062018-F.jpg)

Como puede ver es muy simple entender los diagramas, en **cátodo común** para que prenda cada uno de los segmentos tiene que enviarse un alto (**HIGH**) y en ánodo común se envía un bajo (**LOW**).

La tabla indica que, si queremos que se muestre en nuestro **display ánodo común**, entonces **el número 1** se tiene que enviar a los segmentos **1001110**, como ya se vio anteriormente el **1** representa un **HIGH** y el **0** un **LOW**.

Para mostrar números largos de más de un digito se usan Display de 2, 3, 4, etc. dígitos, pero se usa el
multiplexado que en simples palabras engaña a la vista prendiendo y apagando el Display muy
rápidamente para que se vea que se forma un número compuesto, aunque en verdad primero saca un
numero en todos los Display pero se apaga en los que no debe aparecer ese número y así sucesivamente
con los demás. 
Para las prácticas que se mostrarán es necesario el uso de un módulo Display de 7 segmentos y 4 dígitos, para que pueda apreciar el uso correctamente, este módulo usted puede hacerlo de manera casera siguiendo el siguiente tutorial:


<!--stackedit_data:
eyJoaXN0b3J5IjpbMzk2MzkwODc0LDE3NTg5MDM3MDVdfQ==
-->