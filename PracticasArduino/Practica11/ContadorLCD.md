# Contador con módulo LCD 1602 

Las pantallas de cristal líquido nos servirán para mostrar datos acerca de nuestros programas, ya sean mensajes o mediciones que nos mandan nuestros sensores u otra información que nosotros requerimos, la configuración que se verá con la **LCD** es la clásica, se le deja al lector la investigación de la **LCD con I2C**, enseguida se muestran la funciones necesarias para la LCD y sus pines de conexión, recordemos que para usar la LCD **es necesario importar la librería de la LCD que será ``#include <LiquidCrystal.h>``**.

![](https://media.giphy.com/media/jYmGmDK3rKdkk/giphy.gif)

## Material
> - Arduino
> - LCD 16x2
> - Potenciómetro 10 kOhm's
> - Resistencias de 10 kOhms
> - Resistencia de 220 Ohm's
> - PushButton
> - Jumpers
> - Protoboard
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Conexión
 ![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica11/LCDContador.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica11/LCDContador.JPG)

## Código
```c
#include<LiquidCrystal.h> //Importa la libreria

#define BOTON 8
#define BOT_RESET 9

bool estadoAntBoton = false;
bool estadoActBoton = false;
bool estadoAntReset = false;
bool estadoActReset = false;

int contador = 0;

LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // Pines donde esta conectado el modulo LCD

void setup()
{
  pinMode(BOTON, INPUT);
  lcd.begin(16, 2); // Inicializa el display de 16 columnas y 2 lineas
  
}

void loop()
{
  lcd.setCursor(0, 0); // Ubica el cursor en la collumna 0, linea 0
  lcd.print("--- Contador ---");
  lcd.setCursor(2, 1); // Ubica el cursor en la collumna 0, linea 0
  lcd.print(contador);
  lcd.print(" >> cajas");
  
  estadoActBoton = retorno(estadoAntBoton);
  estadoActReset = reset(estadoAntReset);
  
  if(estadoAntBoton == 0 && estadoActBoton == 1)
  {
    contador++;
  }
  
  estadoAntBoton = estadoActBoton;
  
  if(estadoAntReset == 0 && estadoActReset == 1)
  {
    lcd.clear();
    contador = 0;
  }
}

bool retorno(bool previo)
{
  bool actual = digitalRead(BOTON);
  
  if(previo != actual)
  {
    delay(5);
    actual = digitalRead(BOTON);
  }
  return actual;
}

bool reset(bool rPrevio)
{
  bool rActual = digitalRead(BOT_RESET); 
  
  if(rPrevio != rActual)
  {
    delay(5);
    rActual = digitalRead(BOT_RESET);
  }
  return rActual;
}

```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTkzMjEzMDg0NCwtMTgxOTQ2NTA1OF19
-->