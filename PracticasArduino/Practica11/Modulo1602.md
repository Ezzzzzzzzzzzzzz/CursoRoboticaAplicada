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


# Caracteres Personalizados

Cada carácter se define como un grupo de 8 bytes que se envían a la memoria CGRAM. Por ejemplo, podemos crear un icono con una carita feliz de la siguiente forma:![](https://www.geekfactory.mx/wp-content/uploads/2014/08/lcd_16x2_caracteres_CGRAM.jpg)

Traducido a código en C quedaría de la siguiente forma:

byte smile[8] = {
	0b00000000,
	0b00001010,
	0b00001010,
	0b00001010,
	0b00000000,
	0b00010001,
	0b00001110,
	0b00000000,
};

```c
/**
   GeekFactory - "INNOVATING TOGETHER"
   Distribucion de materiales para el desarrollo e innovacion tecnologica
   www.geekfactory.mx

   EN ESTE EJEMPLO MOSTRAMOS COMO DEFINIR CARACTERES PERSONALIZADOS EN UNA
   PANTALLA LCD 16X2 CON ARDUINO. EL CODIGO MUESTRA COMO DEFINIR LOS MAPAS
   DE BITS Y COMO INDICARLE AL CONTROLADOR DE PANTALLA QUE MUESTRE LOS CARACTERES
   PERSONALIZADOS EN POSICIONES ESPECIFICAS DE LA PANTALLA.
*/

#include  <LiquidCrystal.h>

// CONSTRUCTOR PARA LA PANTALLA LCD 16X2
// AQUI SE CONFIGURAN LOS PINES PARA LA COMUNICACION CON LA PANTALLA
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// DEFINICION DE CARACTERES PERSONALIZADOS
byte smile[8] = {
  0b00000000,
  0b00001010,
  0b00001010,
  0b00001010,
  0b00000000,
  0b00010001,
  0b00001110,
  0b00000000,
};

byte sad[8] = {
  0b00000000,
  0b00001010,
  0b00001010,
  0b00001010,
  0b00000000,
  0b00001110,
  0b00010001,
  0b00000000,
};

byte body[8] = {
  0b00001110,
  0b00001110,
  0b00000100,
  0b00011111,
  0b00000100,
  0b00001010,
  0b00010001,
  0b00000000,
};

byte arrowr[8] = {
  0b00001000,
  0b00000100,
  0b00000010,
  0b00011111,
  0b00000010,
  0b00000100,
  0b00001000,
  0b00000000,
};

byte arrowu[8] = {
  0b00000100,
  0b00001110,
  0b00010101,
  0b00000100,
  0b00000100,
  0b00000100,
  0b00000100,
  0b00000000,
};

byte arrowd[8] = {
  0b00000100,
  0b00000100,
  0b00000100,
  0b00000100,
  0b00010101,
  0b00001110,
  0b00000100,
  0b00000000,
};

byte arrowl[8] = {
  0b00000010,
  0b00000100,
  0b00001000,
  0b00011111,
  0b00001000,
  0b00000100,
  0b00000010,
  0b00000000,
};


void setup()
{
  // INDICAMOS QUE TENEMOS CONECTADA UNA PANTALLA DE 16X2
  lcd.begin(16, 2);
  
  // ENVIAR LOS MAPAS DE BITS AL CONTROLADOR DE PANTALLA
  lcd.createChar (0, smile);
  lcd.createChar (1, sad);
  lcd.createChar (2, body);
  lcd.createChar (3, arrowr);
  lcd.createChar (4, arrowu);
  lcd.createChar (5, arrowd);
  lcd.createChar (6, arrowl);
  
  // LIMPIAR LA PANTALLA Y MOVER EL CURSOR A LA PRIMERA POSICION
  lcd.clear();
  // IMPRIMIR TITULO EN LA PRIMERA LINEA
  lcd.print(" GEEKFACTORY.MX ");
  // MOVER EL CURSOR A LA SEGUNDA LINEA
  lcd.setCursor(0, 1);

  // AHORA ESCRIBIMOS (MOSTRAMOS) LOS CARACTERES A LA PANTALLA
  lcd.write((byte)0);
  lcd.write((byte)1);
  lcd.write((byte)2);
  lcd.write((byte)3);
  lcd.write((byte)4);
  lcd.write((byte)5);
  lcd.write((byte)6);
}

void loop()
{
  // NO HACEMOS NADA EN EL LOOP
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTczMzMzNzI2OSwtMTAyMzA3NjUyNV19
-->