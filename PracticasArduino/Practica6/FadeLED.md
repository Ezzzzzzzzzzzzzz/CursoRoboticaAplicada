# (PWM) Fade de un LED 

En esta práctica **enviaremos valores analógicos para poder controlar la luminiscencia de un led**, abajo se muestra el código, material y explicación de la práctica.

## Materiales 
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/FadeLED.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/FadeLED.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/capture1597676967363.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/capture1597676967363.png)


## C ++
```c
#define Led 5

int Brillo;
int Tiempo = 15;

void setup()
{
  pinMode(Led, OUTPUT);
}
void loop()
{
  for(Brillo = 0; Brillo < 256; Brillo++)
  {
    	analogWrite(Led, Brillo);
    	delay(Tiempo);
  }
}
```

## Explicación 

El funcionamiento es muy simple primero se define el pin para el LED, después en el ``setup()`` se pone el LED como salida, en el ``loop()`` se crea un ``for()`` que ira desde **0** a **255**, recordemos que **la resolución del PWM es de 8 bits**.

Dentro del ``for()`` usamos ``analogWrite()``, donde recibe como parámetro el LED y los valores del ``for()`` que ira incrementando de uno en uno y esto se almacena en el la variable ***i***, se le da un ``delay()`` de **15**, ósea que cada **15 milisegundos** se ira incrementando la variable ***i***.

Gracias al  ``for()`` vemos como incrementa el brillo del led, si usamos un multímetro, veremos cómo aumenta y  el voltaje entre los rangos de 0 a 5 volts. 

Y es así como manejamos el **PWM**, **lo que hace es que envía pulsos muy rápidos y eso hace que se emule un valor analógico** y eso se hace como ya vimos con ``analogWrite()``.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE4MjkwMzM5MTcsMTkxMDg1NTU5MywtMz
IxNTU2NzEsLTk2NzI2MzA0NSwtODI5OTAzNjExLC0xMDQ0MDc1
NjIwLC0xNjc3MDE4MTAyLC0yMTgwNTUxMzFdfQ==
-->