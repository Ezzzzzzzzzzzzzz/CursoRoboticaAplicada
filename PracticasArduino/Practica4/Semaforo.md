# Semáforo

Esta práctica tiene como objetivo conocer salidas digitales para la creación de secuencias de salida con led´s.

## Material 
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)


## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Semaforo1.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Semaforo1.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/capture1597615747834.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/capture1597615747834.png)

## C ++

```c 
#define Rojo 4
#define Amarillo 3
#define Verde 2

int tiempo = 2000;
int parpadeo = 500;

void setup()
{
  pinMode(Rojo, OUTPUT);
  pinMode(Amarillo, OUTPUT);
  pinMode(Verde, OUTPUT);
}

void loop()
{
  digitalWrite(Verde, HIGH);
  digitalWrite(Rojo, LOW);
  delay(tiempo);
  
  digitalWrite(Verde, LOW);
  delay(parpadeo);
  digitalWrite(Verde, HIGH);
  delay(parpadeo);
  digitalWrite(Verde, LOW);
  delay(parpadeo);
  digitalWrite(Verde, HIGH);
  delay(parpadeo);

  digitalWrite(Verde, LOW);  
  digitalWrite(Amarillo, HIGH);
  delay(tiempo);  
  
  digitalWrite(Amarillo, LOW);
  digitalWrite(Rojo, HIGH);
  delay(tiempo);
}
```


<!--stackedit_data:
eyJoaXN0b3J5IjpbNjg4MDgwNjc0LDQ5MDI3OTc3MCwtMTg1OT
U5OTY0NCwtMTc1Nzc0MDI3Miw0ODg5NTkzMTMsMjA3OTYxOTYz
MiwxODY3OTg0NjcsLTE4NTU4NTIxMDksOTkyNTcwNjU5XX0=
-->