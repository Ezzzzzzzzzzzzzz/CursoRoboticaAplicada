# Módulo LCD 1602

Las pantallas de cristal líquido nos servirán para mostrar datos acerca de nuestros programas, ya sean mensajes o mediciones que nos mandan nuestros sensores u otra información que nosotros requerimos, la configuración que se verá con la **LCD** es la clásica, se le deja al lector la investigación de la **LCD con I2C**, enseguida se muestran la funciones necesarias para la LCD y sus pines de conexión, recordemos que para usar la LCD **es necesario importar la librería de la LCD que será ``#include <LiquidCrystal.h>``**.

## Pinout LCD 1602

Función   |    Descripción
:------:   |   :--------:
``LyquidCrystal [nombre](rs, en, d4, d5, d6, d7);`` | Se inicializa el display y se la asigna un nombre, ademas recibe como parámetro los pines donde se a conectado respectivamente.
``[nombre].begin([columnas], [filas]);``  | Función donde declaramos de que tamaño es nuestro display.
``[nombre].print([mensaje/dato]);`` | Función para imprimir un mensaje o dato.
``[nombre].clear();``  |  Función para limpiar la pantalla del display. 
``[nombre].write([dato]);`` | Función para imprimir un dato en el display.
``[nombre].setCursor([columna], [fila]);``  |  Función para posicionar el mensaje o dato que desea mostrar.

![](https://http2.mlstatic.com/pantalla-lcd-16x2-1602-alfanumerica-ssdielect-D_NQ_NP_893478-MCO31110760412_062019-F.jpg)
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTEwMjMwNzY1MjVdfQ==
-->