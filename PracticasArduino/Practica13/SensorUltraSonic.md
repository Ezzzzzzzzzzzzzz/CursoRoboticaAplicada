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
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTQyMjkzMjk5OCwxNjgyMjA0NTYxLDEyOD
I1OTAzMDddfQ==
-->