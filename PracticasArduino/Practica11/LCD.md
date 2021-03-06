
# Módulo LCD 1602

Las pantallas de cristal líquido nos servirán para mostrar datos acerca de nuestros programas, ya sean mensajes o mediciones que nos mandan nuestros sensores u otra información que nosotros requerimos, la configuración que se verá con la **LCD** es la clásica, se le deja al lector la investigación de la **LCD con I2C**, enseguida se muestran la funciones necesarias para la LCD y sus pines de conexión, recordemos que para usar la LCD **es necesario importar la librería de la LCD que será ``#include <LiquidCrystal.h>``**.

## Material
> - Arduino
> - LCD 16x2
> - Potenciómetro 10 kOhm's
> - Resistencia de 220 Ohm's
> - Jumpers
> - Protoboard
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Conexión
 ![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica11/LCD.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica11/LCD.JPG)
## C ++
### Código #1
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
### Blockly@rduino


## Código #2
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
  lcd.print("Alarma ACTIVA!!!! "); // Escribe texto 
  lcd.display(); // Muestra el texto
  delay(500); // Demora de medio segundo
  lcd.noDisplay(); // Oculta el texto
  delay(500); // Demora de medio segundo
}
```

## Codigo #3
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
  lcd.print("Ingrese clave:"); // Escribe texto 
  lcd.display(); // Muestra el texto
  delay(500); // Demora de medio segundo
  lcd.noDisplay(); // Oculta el texto
  delay(500); // Demora de medio segundo
}
```

## Código #4
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
  lcd.print("Prueba scroll"); // Escribe texto 
  lcd.scrollDisplayLeft(); // funcion que desplaza los caracteres hacia la izquierda
  delay(500); // Demora medio segundo  
}
```

## Código #5
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
  lcd.print("Prueba scroll"); // Escribe texto 
  lcd.scrollDisplayRight(); // funcion que desplaza los caracteres hacia la derecha
  delay(500); // Demora medio segundo  
}

```



<!--stackedit_data:
eyJoaXN0b3J5IjpbMTU3OTgwMjkwOCwxMzcxODgzODUyLC02OD
YwODE0MjQsLTQxOTQxNDA4NCw1OTc1NDAzMjAsLTExMDEyNjg1
MDMsMjgzMzIxNzQ0LC04OTA5NzU3MDAsMTM2Nzc4MDUyNF19
-->