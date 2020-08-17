## Fade de un LED con un potenciómetro y la función ``map()``

Ya vimos cómo usar sensores analógicos y manipular actuadores analógicos por medio del **PWM** con la función **analogWrite()** y un potenciómetro, pero claro esto lo hicimos de la manera más simple, ahora lo haremos con la función ``map()``, esta función es muy importante y nos ayudará mucho en los proyectos que queramos desarrollar. 

En palabras simples, la función ``map()`` **hace una conversión de valores entre un rango dado por una variable a valores de otro rango**, por ejemplo:

```c
y = map(x, 0, 1023, 0, 255);
```
En este ejemplo se está empleando la función ``map()``, en la cual **como primer parámetro recibe la variable de los datos a convertir, después recibe el primer valor mínimo que se tendrá en la variable ``x``, a continuación recibe el valor máximo que se tendrá en la variable ``x ``, como cuarto parámetro recibe el valor a convertir del valor mínimo, en este caso queremos que cero permanezca como cero y como quinto parámetro recibe el valor a convertir en valor máximo de la variable ``x``, en este caso queremos que el 1023 sea 255, esos valores se almacenarán en la variable ``y``**. Se pueden convertir a cualquier tipo de valor en cualquier rango entero tanto positivo como negativo, más adelante se verán más ejemplos de esta función. 

Abajo se muestra el código, material y explicación de la práctica.

## Materiales
> - Arduino
> - LED 5mm 
> - Resistencia de 220 Ohm´s
> - Potenciometro de 10 kOhm's
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica7/PWMPot.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica7/PWMPot.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica7/capture1597693228222.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica7/capture1597693228222.png)

## C ++
```c
#define LED 5
#define POT A1

int potVal = 0;
int mapeo = 0;

void setup()
{
  Serial.begin(9600);  // Monitor serial
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}
void loop()
{
  potVal = analogRead(POT);
  mapeo = map(potVal, 0, 1023, 0, 255);
  
  Serial.print("Valor POT: ");
  Serial.print(potVal);
  Serial.print(" | Valor PWM: ");
  Serial.println(mapeo);
  
  analogWrite(LED, mapeo);
  delay(100);
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE2NjQ0NjUxMDEsLTEzOTUwNzkzNzEsMT
gwMjY0MTUwMiwtMTg4MTY3NzEyOSwtNzU1ODgwMTI1XX0=
-->