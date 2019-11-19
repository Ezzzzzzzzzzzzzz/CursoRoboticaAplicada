# Sensor Ultrasonico

Ya vimos los sensores más simples que solo envían una señal por acción ya sea un 1 o un 0 digital, ahora veremos otros sensores digitales que funcionan similarmente. Este ejemplo se hará con el sensor **ultrasónico HC-SR04**, aquí se verán una cuantas funciones nuevas que se explicarán más adelante cuando se explique el funcionamiento del código, abajo se muestra el código, material y explicación de la práctica.

Explicación del ultrasónico:

El funcionamiento interno del sensor ultrasónico es bastante complejo, pero explicaremos lo más simple.

**El sensor envía un pulso durante un tiempo (especificado en la hoja de datos), ese pulso sale por medio de un piezo que genera una onda ultrasónica, ésta choca con algún objeto y rebota, esta misma onda viaja a través del aire y es recibida por el otro “piezo” del sensor llamado eco y usando formulas bastantes simples con algún microcontrolador, en esta caso Arduino, podremos saber la distancia a la cual se encuentra el objeto en que la onda rebotó, se puede apreciar un ejemplo gráfico en la imagen de abajo**.

![](http://proyectosconarduino.com/wp-content/uploads/sensor-hc-sr04-funcionamiento.jpg)

## Material
> - Arduino
> - Modulo HC- SR04
> - Jumpers
> - Protoboard

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica13/SensorUltra.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica13/SensorUltra.JPG)

## Código 
```c
#define trig 10 // Trigger pin 10
#define eco 9 // Echo pin 9
#define led 3 // Led pin 3

int tiempo; // Variable global tiempo.
int distancia; // Variable global distancia.

void setup()
{
  pinMode(trig, OUTPUT); // Configuramos trigger como salida.
  pinMode(eco, INPUT); // Configuramos eco como entrada.
  pinMode(led, OUTPUT);
  
  Serial.begin(9600); // Inicializamos el monitor serial.
}
void loop()
{
  digitalWrite(trig, HIGH); // Generación del pulso a enviar al pin conectado a trigger del sensor
  delay(10);
  digitalWrite(trig, LOW);
  
  tiempo = pulseIn(eco, HIGH); // Con pulseIn se espera un pulso alto en Eco
  
  distancia = tiempo/58.2;
  Serial.print(distancia); // Envio del valor de la distancia por monitor serial.
  Serial.println(" cm");
  delay(200);
  
  if(distancia <= 20 && distancia >= 0){ // Si la distancia esta entre 0 y 20 cm 
   digitalWrite(led, HIGH); // Enciende el led
   delay(distancia * 10); // Demora proporcionalmente a la distancia.
   digitalWrite(led, LOW);
  }
}

```
##  Explicación
Ahora explicaremos cómo funciona el código junto al sensor para poder medir la distancia. Primero definimos los dos pines del sensor ``trig`` y ``echo``, después definimos dos variables, en una se almacenará el tiempo ``tiempo``de regreso de la onda ultrasónica que viaja por el aire y en la otra almacenará la distancia ``distancia``. En el ``setup()`` ponemos los pines tanto de entrada y salida respectivamente, además escribimos ``Serial.begin(9600)``, esto nos servirá para iniciar la comunicación serial para poder ver la distancia, más adelante se explicará la comunicación Serial con profundidad.

Como dice la hoja de datos del sensor, necesitamos enviar un pulso por 10 microsegundos por el TRIG, ahora lo que hacemos es usar digitalWrite y enviar un pulso alto por el pin del TRIG por 10us, esto se hace mediante el delayMicroseconds, después apagamos ese pulso con un LOW. Después, como se dijo en la explicación del ultrasónico esa onda regresará y será leída por el ECHO, para esto usaremos la función pulseIn, esta función lo que hace es contar el tiempo en que hay un pulso, ya sea alto o bajo, este tiempo se divide entre 2 ya que lo dice la hoja de datos de nuestro sensor, esto es el tiempo que tarda el sonido en ir y volver. Ahora calcularemos la distancia, sabiendo que el espacio es igual a la velocidad por el tiempo y que la velocidad del sonido es de 343m/s donde el tiempo lo tenemos en millonésimas de segundo, hacemos la operación matemática de multiplicar el tiempo por la velocidad del sonido y esto nuevamente viene en la hoja de datos del sensor, después simplemente ese valor se almacena en la variable Distancia. 
Después con la función Serial.println, imprimimos el valor de la distancia, ahora solo queda abrir el monitor serial en Herramientas > Monitor Serie. Bien, con esto terminamos el tema de sensores digitales, ya sabes leer señales digitales se 0 o 5v, a continuación veremos el uso de sensores analógicos.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTAwOTQ2OTM5LC05NzkzMjQ1MjYsMTY4Mj
IwNDU2MSwxMjgyNTkwMzA3XX0=
-->