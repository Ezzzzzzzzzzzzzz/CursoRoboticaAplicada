# Mostrando datos en una LCD

Como lo dice el título, en esta práctica mostraremos lecturas en nuestra LCD de dos de nuestros sensores, en este ejemplo usaremos el sensor digital HC-SR04 que ya se vio en el tema de sensores digitales, así que no se entrará en detalles para la explicación sobre este sensor. Nuestra LCD nos sirve perfectamente para mostrar distintos datos, temperatura, tiempo, humedad, etc., dependiendo de qué queremos que se muestre, como bien ya se ha mencionado bastante, esta práctica solo es la base del aprendizaje, el uso se lo da el lector, abajo se muestra el código, material y explicación de la práctica.


## Materiales
> - 1 Arduino
> - LCD 16x2
> - Potenciómetro 10kOhms
> - Resistencia de 220 Ohms
> - 1 HC-SR04
> - Protoboard 
> - Jumpers (cables) 
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)


## Circuito

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica23/DatosenLCD.JPG)


## Blockly@rduino

**Es muy importante que usted escriba el código para que pueda aprender correctamente y se vaya acostumbrando a la programación:**

## C ++
```c
#include<LiquidCrystal.h> //Importa la libreria

#define TRIG 9
#define ECHO 8

LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // Pines donde esta conectado el modulo LCD

long Tiempo;
float Distancia;

void setup()
{
  lcd.begin(16, 2); // Inocializa el display de 16 columnas y 2 lineas
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  Tiempo = (pulseIn(ECHO, HIGH)/2);
  Distancia = float(Tiempo * 0.0343);
  
  lcd.setCursor(0,0);
  lcd.print("Distancia: ");
  lcd.print(Distancia);
  delay(10);
}
```

## Explicación 

El código es bastante simple, primero que nada, incluimos la Liberia de la LCD y se define esta misma, después se definen los pines a utilizar para el sensor ultrasónico y las variables necesarias. En el ***setup*** se inicializa la LCD con `lcd.begin` y también los pines, ya en nuestro ***loop*** se hacen los cálculos para medir la distancia. El uso de la LCD está un poco más abajo, usando `setCursor` queremos que nuestro mensaje aparezca en la primera fila y primera columna, después usamos `lcd.print` e imprimimos **“Distancia”**, volvemos a utilizar `lcd.print` pero ahora pasamos como parámetro la variable `Distancia` a donde se almacena la distancia que nos arroja el sensor ultrasónico, como ven, ahora para imprimir la distancia no usamos *`**setCursor***`, si no se usa la impresión será seguida cuando se definió el primer `setCursor`, después simplemente se usa un **delay** de **10** para tener un tiempo en que cambien las medidas de la distancia.
<!--stackedit_data:
eyJoaXN0b3J5IjpbNjA5MTYzNjI4LDE0MDAxNzQ0ODBdfQ==
-->