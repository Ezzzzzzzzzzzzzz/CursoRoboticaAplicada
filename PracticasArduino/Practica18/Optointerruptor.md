# Optointerruptor

Ya vimos como leer sensores digitales, ahora haremos una práctica bastante simple que será la base para hacer muchos proyectos, el cual es saber manejar y leer los datos que nos manda un optointerruptor, **estos se usan en las cajas del supermercado en la banda trasportadora que al bloquear la señal se detiene pero si es una señal limpia avanza la banda o también para tener un conteo se personas u objetos**, abajo se muestra el código, material y explicación de la práctica.

## Material 
> - Arduino
> - LED 5mm 
> - Resistencias de 220 Ohm's
> - Diodo emisor de 5mm IR
> - Resistencia de 10 kOhm's
> - Fototransistor 
> - Protoboard
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica18/Fototransistor.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica18/Fototransistor.JPG)

## Código
```c
#define LED 2
#define Opto 3

int Opto_lee;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Opto, INPUT);
}
void loop() {
  Opto_lee = digitalRead(Opto);
   if (Opto_lee == 1) {
     digitalWrite(LED, HIGH);
  } 
  else {
   digitalWrite(LED, LOW);
  }
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTI5NDc1MzAzOCwtODgxNzA3Mjg3XX0=
-->