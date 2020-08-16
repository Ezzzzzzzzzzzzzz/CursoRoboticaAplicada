# Semáforo no. 2

Esta práctica tiene como objetivo crear el control para dos semáforos en un cruce. **Utiliza los conocimientos adquiridos en los temas y practicas anteriores**. 

![](https://cebasf1.files.wordpress.com/2011/04/simple.jpg)

![](https://2.bp.blogspot.com/-F1ncZiJMhGk/WNBRMBcauMI/AAAAAAAAMJI/HNQwPoqqIbgzUe7cfJUKFvxVXrwhHOlcgCLcB/s1600/semaforo-1.gif)

## Material 
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)


## Circuito

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Semaforo2.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Semaforo2.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/capture1597617113290.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/capture1597617113290.png)

## C++

```c 
#define Rojo1 4
#define Amarillo1 3
#define Verde1 2
#define Rojo2 7
#define Amarillo2 6
#define Verde2 5

int tiempo = 2000;

void setup() {
  pinMode(Verde1, OUTPUT);
  pinMode(Rojo2, OUTPUT);
  pinMode(Amarillo1, OUTPUT);
  pinMode(Verde2, OUTPUT);
  pinMode(Rojo1, OUTPUT);
  pinMode(Amarillo2, OUTPUT);
}

void loop() {
  digitalWrite(Verde1,HIGH);
  digitalWrite(Rojo2,HIGH);
  delay(tiempo);
  digitalWrite(Verde1,LOW);
  digitalWrite(Amarillo1,HIGH);
  delay(tiempo);
  digitalWrite(Amarillo1,LOW);
  digitalWrite(Rojo2,LOW);
  digitalWrite(Verde2,HIGH);
  digitalWrite(Rojo1,HIGH);
  delay(tiempo);
  digitalWrite(Verde2,LOW);
  digitalWrite(Amarillo2,HIGH);
  delay(tiempo);
  digitalWrite(Amarillo2,LOW);
  digitalWrite(Rojo1,LOW);

}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbNzM2ODEyNjMwLDE0NTY5ODkyNzZdfQ==
-->