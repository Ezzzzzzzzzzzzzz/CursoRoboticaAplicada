# Display 7 segmentos 

**Existen dos tipos de display de 7 segmentos:**

- Ánodo común
-  Cátodo común
 
## Cátodo común 

![](https://hetpro-store.com/TUTORIALES/wp-content/uploads/2018/01/Display-7-segmentos-catodo-comun-1.jpg)

## Ánodo común

![](https://hetpro-store.com/TUTORIALES/wp-content/uploads/2018/01/Display-7-segmentos-anodo-comun.jpg)

![](https://http2.mlstatic.com/display-7-segmentos-5611ah-catodo-comun-arduino-pic-arm-avr-D_NQ_NP_835181-MLV25645714860_062017-F.jpg)


![](https://http2.mlstatic.com/display-7-segmentos-1-digito-catodo-comun-rojo-arduino-D_NQ_NP_942204-MLA27477084127_062018-F.jpg)

Como puede ver es muy simple entender los diagramas, en **cátodo común** para que prenda cada uno de los segmentos tiene que enviarse un alto (**HIGH**) y en ánodo común se envía un bajo (**LOW**).

La tabla indica que, si queremos que se muestre en nuestro **display ánodo común**, entonces **el número 1** se tiene que enviar a los segmentos **1001110**, como ya se vio anteriormente el **1** representa un **HIGH** y el **0** un **LOW**.

Para mostrar números largos de más de un dígito se usan Display de 2, 3, 4, etc. dígitos, pero se usa el **multiplexado** que en simples palabras engaña a la vista prendiendo y apagando el display muy rápidamente para que se vea que se forma un número compuesto, aunque en verdad primero saca un numero en todos los display pero se apaga en los que no debe aparecer ese número y así sucesivamente con los demás.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMjEzOTcwODUzNiwtMTc1OTc0ODQzNV19
-->