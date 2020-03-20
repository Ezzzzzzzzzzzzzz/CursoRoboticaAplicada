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
delay(parpadeo);  
digitalWrite(Amarillo, HIGH);
delay(tiempo);  
digitalWrite(Amarillo, LOW);
digitalWrite(Rojo, HIGH);
delay(tiempo);
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTg2Nzk4NDY3LC0xODU1ODUyMTA5LDk5Mj
U3MDY1OV19
-->