# Semáforo

Esta práctica tiene como objetivo conocer salidas digitales para la creación de secuencias de salida con led´s.

## Material 
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Semaforo1.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Semaforo1.JPG)

## Código

```c 
#define Rojo 4
#define Amarillo 3
#define Verde 2

int tiempo = 1000;
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
  digitalWrite(Amarillo, LOW);
  digitalWrite(Rojo, LOW);
  delay(tiempo);
  digitalWrite(Verde, LOW);
  digitalWrite(Amarillo, HIGH);
  digitalWrite(Rojo, LOW);
  delay(parpadeo);
  digitalWrite(Verde, LOW);
  digitalWrite(Amarillo, LOW);
  digitalWrite(Rojo, LOW);
  delay(parpadeo);
  digitalWrite(Verde, LOW);
  digitalWrite(Amarillo, HIGH);
  digitalWrite(Rojo, LOW);
  delay(parpadeo);
  digitalWrite(Verde, LOW);
  digitalWrite(Amarillo, LOW);
  digitalWrite(Rojo, HIGH);
  delay(tiempo);
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE0MzY2MzY4MDEsLTE4NTU4NTIxMDksOT
kyNTcwNjU5XX0=
-->