# Optointerruptor

Ya vimos como leer sensores digitales, ahora haremos una práctica bastante simple que será la base para hacer muchos proyectos, el cual es saber manejar y leer los datos que nos manda un optointerruptor, **estos se usan en las cajas del supermercado en la banda transportadora que al bloquear la señal se detiene pero si es una señal limpia avanza la banda o también para tener un conteo se personas u objetos**, abajo se muestra el código, material y explicación de la práctica.

## Material 
> - Arduino
> - LED 5mm 
> - Resistencias de 220 Ohm's
> - Diodo emisor de 5mm IR
> - Resistencia de 10 kOhm's
> - Fototransistor 
> - Protoboard
> - Jumpers
> [https://www.tinkercad.com/](https://www.tinkercad.com/)

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

## Explicación
Muy bien, el funcionamiento es muy simple, definimos dos pines, el **led** y el **optointerruptor** al led lo ponemos como ``OUTPUT`` y para el optointerruptor lo ponemos como ``INPUT``, también creamos una variable del tipo entero que almacenará el valor enviado por el fototransistor al **pin 3**, después en el ``loop()`` hacemos nuestro programa de ejecución, usando ``digitalRead()`` leemos el valor del pin 3 y lo almacenamos en la variable ``Opto_lee``, después con un ``if()`` hacemos una comparación lógica, si el valor digital es **1 enciende el led** usando ``digitalWrite()``, en caso de que sea un valor **distinto a 1** permanecerá apagado. Como vimos este es el funcionamiento de un optointerruptor que nos servirá para hacer muchos proyectos, desde una banda transportadora hasta un seguidor de líneas.

## Modulo KY-010

![](https://sc02.alicdn.com/kf/HTB11MnjXyzxK1RkSnaVq6xn9VXaY/231849537/HTB11MnjXyzxK1RkSnaVq6xn9VXaY.jpg)

## Circuito #2
![](https://steps2make.com/wp-content/uploads/2017/09/Arduino_KY-010_Photo_interrupter_module_connections.png)

## Código #2

```c
int Led = 13; // define LED pin
int SensorPin = 3; // define photo interrupter signal pin
int val; //define a numeric variable

void setup()
{
	pinMode(Led, OUTPUT); // LED pin as output
	pinMode(SensorPin, INPUT); //photo interrupter pin as input
}
void loop()
{
	val=digitalRead(SensorPin); //read the value of the sensor 
	if(val == HIGH) // turn on LED when sensor is blocked 
	{
		digitalWrite(Led,HIGH);
	}
	else
	{
		digitalWrite(Led,LOW);
	}
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE0MjA3Njc3MTcsLTg3MTcwNDgzOCwxMz
cyNzQ4OTM1LC04MjgwODU5NDQsLTE3NzU3NzM0NTUsMzQwNTIy
MDg4LDExMjI4ODMyODYsLTg4MTcwNzI4N119
-->