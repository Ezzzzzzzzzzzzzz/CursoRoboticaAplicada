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

El código es bastante fácil de entender si ha prestado atención y aprendido los temas anteriores. Se definen los pines que se usarán, utilizaremos dos pulsadores; cada uno para cambiar el movimiento del motor. En el *setup* se inicializan los pines, además de enviar un pulso bajo a los pines 2 y 3 para que no haya ninguna interferencia de ruido externo. En el *loop* tenemos tres sentencias **if**; en la primera si presionamos el primer pulsador el motor se moverá a un lado, eso lo hacemos usando el **digitalWrite** además aplicando la tabla de verdad del L293D vista anteriormente, en el segundo **if** cambiamos la dirección del motor, simplemente cambiando el valor del pulso que se envía al motor por los pines 2 y 3 como usted lo puede notar, y eso se ejecutará cuando presionemos el segundo pulsador. 
Lo interesante está en el tercer **if** pues tenemos una operación **“Y”** con sintaxis en programación **“&&”**, **esto implica que deben ser verdaderas las condiciones antes y después del “&&” para que se ejecuten las sentencias que están dentro del if,** se recomienda al lector que investigue la tabla de verdad de la operación conjunción, bueno, esto quiere decir que ambos pulsadores no deben presionarse para que el motor esté apagado, o sea deben enviar un **LOW**, si una de estas condiciones no se cumple no entra al **if.**
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTMwMDY4NDY1OCwxNDAwMTc0NDgwXX0=
-->