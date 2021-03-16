# Uso y manejo de motores de DC

## Motores DC con Arduino

El uso de motores de DC requieren una forma de controlarlos, lo cual puede ser un transistor como vimos en control de cargas, el transistor puede manejar altos voltajes y corrientes, también si quiere un control un poco más preciso es necesario el uso de un **puente H**, existen dos puentes H muy usados; el *L293D* y el *L298N*, **el puente H a usar dependerá del voltaje y consumo de corriente de sus motores**, en este caso usaremos un motor reductor de **6 [v]** y **200 [mA]** pico, que es el común amarillo muy usado, a continuación se verá el puente H ya que el uso del transistor ya se vio en temas anteriores.

**En esta práctica se enseñará el uso y control de un motor DC con un puente H**, este puente H nos dará un poco de más control sobre el motor ya que podremos cambiarlo de dirección, lo cual se verá en la práctica además de modificar la velocidad del motor (PWM) pero esto se le deja al lector investigarlo. 

## Puente H L293D

Se recomienda leer como siempre la hoja de datos de este componente (*Datasheet*), pues allí contiene la información más importante, el voltaje y amperaje que soporta además de cómo usarlo, aquí se hará una pequeña descripción. 

El **puente H L293D** soporta **400mA por canal**, o sea **800mA en total y 1000mA pico, la lógica del puente H es de 5 voltios, este voltaje se conecta en el pin 1, 16 y 9**. 

La alimentación de los motores o sea el positivo se conecta en el **pin 9, los pines 4, 5, 12 y 13 van conectados a GND**, recuerde que GND es común así que se conectan tanto el GND del Arduino como el de la alimentación exterior, **en los pines 3 y 6 se conecta un motor, en los pines 11 y 14 se conecta un segundo motor y finalmente en los pines 2, 7 y también los pines 10 y 15 se conectan al microcontrolador**, esto es para mover el motor, más adelante en la práctica se verá más a fondo.

Es muy importante también considerar la tabla de verdad del puente H la cual se pone más abajo con un diagrama del L293D y su forma de conexión.

 ### Tabla de verdad
 
| 1A - 4A | 2A - 3A | Función |
| :--------: | :---------: | :------: |
| L | H | Gira hacia delante |
| H | L | Gira hacia atrás |

### Diagrama de conexión 
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica22/Captura.JPG)


## Materiales
> - 1 Arduino
> - Motorreductor Amarillo 6 v
> - Fuente de poder 6 v, pueden ser 4 pilas AA
> - L293D
> - Resistencia de 10 kOhms
> - 2 Pulsadores de 4 pines
> - Protoboard 
> - Jumpers (cables) 
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)


## Circuito

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica22/Motor_puenteH.JPG)


## Blockly@rduino


**Es muy importante que usted escriba el código para que pueda aprender correctamente y se vaya acostumbrando a la programación:**

## C ++
```c
//Definimos pines a usar
#define Motor 2
#define Pulsador 3

//Variables a usar
int Push;

void setup() {
//Configuramos los pines como entrada o salida
pinMode(Motor, OUTPUT);
pinMode(Pulsador, INPUT);
digitalWrite(Motor,LOW);
}

void loop() {
Push = digitalRead(Pulsador);
if (Push == HIGH) {
	digitalWrite(Motor, HIGH);
} 
else {
	digitalWrite(Motor, LOW);
}
}
```

## Explicación 

El código es bastante simple, debido a que ya se vio todo esto en temas anteriores no se entrará en detalles, lo único que tiene extra es la lectura de un pulsador con una sentencia de control if, para que prenda o no el motor. 

El cambio está en la parte electrónica, lo único diferente a lo ya explicado es que usamos un diodo 1N4004 entre la salida del colector del TIP120 que está unida a un pin del motor y el voltaje de alimentación que está unido al otro pin del motor, esto se hace porque el motor genera un campo electromagnético para que pueda girar. Cuando se deja de alimentar o se le quita el voltaje, este campo se convierte en voltaje y corriente que deben de fluir hacia algún lado, por eso el uso del diodo, gracias a este componente ese flujo no va a ningún lado y no estropeará nuestro Arduino. 
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTYzNTY1MDMxNCw0NzI3MDA3ODAsLTEzOT
gyNzA2ODBdfQ==
-->