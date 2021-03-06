## Relevador con Arduino
En esta nueva práctica se enseñará a usar un **relevador** con Arduino y controlar los aparatos eléctricos o voltajes mayores, esto puede ser usado en la **domótica** para poder prender la luz, televisor, etc.

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica21/Relay01.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica21/Relay01.JPG)


![](https://josehervas.es/sensorizados/wp-content/uploads/2013/11/bannerpng.png)

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica21/Relay02.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica21/Relay02.JPG)

## Material
> - Arduino
> - Foco con extensión de AC
> - Modulo de Relay de 5 V
> - Fuente de 5 V
> - Resistor de 980 Ohm´s
> - LED 5 mm
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

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
Como pueden observar el código es bastante simple y no se entrará en explicación ya que se vio en temas anteriores, lo interesante es la parte electrónica, solo es un **relevador** podemos usar la alimentación del Arduino pero se recomienda usar alimentación externa de 5 volts.

*Como pueden ver en el código se envía un pulso por el **pin 4**, esto llega a la base del **transistor del tipo NPN** excitándola, lo que hace que fluya mayor corriente y se magnetice la bobina del relevador, eso atrae el contacto interno y hace que pase el voltaje del común al normalmente abierto, lo cual hace que se pueda prender nuestro foco u otros aparatos electrónicos, usted puede hacer pruebas con radios, televisores, etc.*

En este caso no funciona el **PWM** ya que es necesario excitar la bobina por completo, **pero si usted quiere controlar el PWM para iluminación pude investigar acerca de los MOC y TRIAC**.


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTM0MzIyOTY4OSwxMjkwNDQzMTk1LC0yMD
Y1OTAwMTM2LDM4NTY0NzI3OSwtMTgxODIzNjI2NywxOTgxMjc0
MTU4XX0=
-->