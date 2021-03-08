# Uso y manejo de motores de DC

## Motores DC con Arduino

El uso de motores de DC requieren una forma de controlarlos, lo cual puede ser un transistor como vimos en control de cargas, el transistor puede manejar altos voltajes y corrientes, también si quiere un control un poco más preciso es necesario el uso de un **puente H**, existen dos puentes H muy usados; el *L293D* y el *L298N*, **el puente H a usar dependerá del voltaje y consumo de corriente de sus motores**, en este caso usaremos un motor reductor de **6 [v]** y **200 [mA]** pico, que es el común amarillo muy usado, a continuación se verá el puente H ya que el uso del transistor ya se vio en temas anteriores.


## Puente H L293D

Se recomienda leer como siempre la hoja de datos de este componente (*Datasheet*), pues allí contiene la información más importante, el voltaje y amperaje que soporta además de cómo usarlo, aquí se hará una pequeña descripción. 

El **puente H L293D** soporta **400mA por canal**, o sea **800mA en total y 1000mA pico, la lógica del puente H es de 5 voltios, este voltaje se conecta en el pin 1, 16 y 9**. 

La alimentación de los motores o sea el positivo se conecta en el **pin 9, los pines 4, 5, 12 y 13 van conectados a GND**, recuerde que GND es común así que se conectan tanto el GND del Arduino como el de la alimentación exterior, **en los pines 3 y 6 se conecta un motor, en los pines 11 y 14 se conecta un segundo motor y finalmente en los pines 2, 7 y también los pines 10 y 15 se conectan al microcontrolador**, esto es para mover el motor, más adelante en la práctica se verá más a fondo.



**Es muy importante que usted escriba el código para que pueda aprender correctamente y se vaya acostumbrando a la programación:**

## Materiales
> - 1 Arduino
> - LED 5 mm
> - Resistencia 220 Ohm's
> - Protoboard 
> - Jumpers (cables) 
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)





## Circuito

![BlinkLED](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica1/BlinkLED.JPG)


## Blockly@rduino



## C ++
```c

```

## Explicación 

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTY3MDQwODk0OSw3MTg5NTQ4MDFdfQ==
-->