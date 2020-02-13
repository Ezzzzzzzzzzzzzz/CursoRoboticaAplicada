## PWM con transistor
En esta práctica se verá el control del **PWM** con el uso del **transistor** y el **foco de 12V**, abajo se muestra el código, material y explicación de la práctica.

## Material
> - Arduino
> - Foco 12v de CC
> - TIP120
> - Resistencia de 4.7 K
> - Fuente de 12 V
> - Protoboard
> - Jumpers

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica20/PWMTransistor.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica20/PWMTransistor.JPG)

## Código
```c
#define Foco 3
#define Pot A0

void setup()
{
  Serial.begin(9600);
  pinMode(Pot, INPUT);
  pinMode(Foco, OUTPUT);
}

void loop()
{
  int val = analogRead(Pot);
  int mapeo = map(val, 0, 1023, 0, 255);
  
  Serial.print("Valor Pot: ");
  Serial.print(val);
  Serial.print(" | Valor PWM: ");
  Serial.println(mapeo);
  
  analogWrite(Foco, mapeo);
  delay(100);
}
```
## Explicación
El código es exactamente igual al de control de **PWM** con un led y la explicación es la misma, en este caso lo que cambia es la electrónica, como ven *usamos nuevamente el transistor para controlar voltajes y corrientes altos, en este caso 12 volts*.

Enviamos los pulsos del **PWM** por el **pin 3**, esto llega a la **base** del transistor y dependiendo del pulso del **PWM** excitará más o menos la base del transistor y eso hará que brille más o menos el **foco de 12 voltios**, *esto es muy interesante porque “cambiamos” la referencia de voltajes, en este caso recordemos que el PWM es de 8 bits así que como máximo tendremos un valor de 255 que en la primera práctica eran 5 volts, pero en esta nueva práctica la referencia cambia, esto implica que 255 son 12 voltios gracias a nuestro transistor, y no solo podemos controlar leds, podemos controlar también sirenas, buzzer, etc*.

Bien, ya hemos aprendido como usar los transistores para poder controlar actuadores que requieren un mayor **voltaje** y **amperaje**, recuerden que esto es la base del aprendizaje, se le deja al estudiante que experimente con otros componentes.

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTU2MTM0MTE4LC0xMzUxNzk5MTI0XX0=
-->