## Relevador con Arduino
En esta nueva práctica se enseñará a usar un **relevador** con Arduino y controlar los aparatos eléctricos o voltajes mayores, esto puede ser usado en la **domótica** para poder prender la luz, televisor, etc.

![](https://josehervas.es/sensorizados/wp-content/uploads/2013/11/bannerpng.png)

## Material
> - Arduino
> - Foco con extensión de AC
> - Modulo de Relay de 5 V
> - Fuente de 5 V
> - Resistor de 980 Ohm´s
> - LED 5 mm
> - Protoboard
> - Jumpers

## Conexión 
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica21/RelayArduino.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica21/RelayArduino.JPG)
## Código
```c
#define Foco 4

void setup()
{
  pinMode(Foco, OUTPUT);
}

void loop()
{
  Blink(1000);
}

void Blink(int i){
  digitalWrite(Foco, HIGH);
  delay(i);
  digitalWrite(Foco, LOW);
  delay(i);
}
```
## Explicación

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE4MTgyMzYyNjcsMTk4MTI3NDE1OF19
-->