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

## Material
> - Arduino
> - LCD 16x2
> - Potenciómetro 10 kOhm's
> - Resistencia de 220 Ohm's
> - Jumpers
> - Protoboard

## Conexión
 ![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica11/LCD.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica11/LCD.JPG)

## Código #1
```c
#include<LiquidCrystal.h> //Importa la libreria

LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // Pines donde esta conectado el modulo LCD

void setup()
{
  lcd.begin(16, 2); // Inocializa el display de 16 columnas y 2 lineas
}
void loop()
{
  lcd.setCursor(0, 0); // Ubica el cursor en la columna 0, linea 0.
  lcd.print("Hola, han pasado"); // Escribe texto en la pantalla
  lcd.setCursor(0, 1); // Ubica el cursor en la columna 0, linea 1.
  lcd.print(millis()/1000); // Imprime el valor en segundos que envia la función millis().
  lcd.print(" seg."); // Imprime a continuación la abreviatura de segundos.
}
```

## Código #2
```c

```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMjgzMzIxNzQ0LC04OTA5NzU3MDAsMTM2Nz
c4MDUyNF19
-->