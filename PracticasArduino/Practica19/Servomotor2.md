# Servomotor con potenciómetro

En este tema se enseña el uso y manejo de motores, se recuerda que se enseñará la base del uso de estos, el uso que se le dará se deja al lector, se mostrará cómo usar un servomotor.

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS7sVfi8mBSa5pGMxjgoF0jNtTX8cPWpp8nlcfMCEKY01AN7fP7iQ&s)

Servomotor con Arduino
- Se pueden controlar hasta **19 servos** usando los pines analógicos.
- Se usará la librería incluida en Arduino llamada ``Servo.h``.
  + Para usarla debemos escribir arriba del sketch: ``#include <Servo.h>``
  + Declararemos nuestro servomotor con: ``Servo [nombre del servo];``
  + En ``setup()`` declararemos el pin del servo: ``[Nombre del servo].attach([pin]);``
  + Para escribir en nuestro servo usamos: ``[Nombre del servo].write([angulo]);``

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSh-bozdY4IIYBPh6SGEK-tc-A1e_9gdSBh71aVkVnvKyLemlZN&s)

Podemos mover un servo sin librería con esta función:
```c
void moverServo(int pin, int angulo) {
  float pausa;
  pausa = angulo * 2000.0/180.0+500;
  digitalWrite(pin,HIGH);
  delayMicroseconds(pausa);
  digitalWrite(pin,LOW);
  delayMicroseconds(25000-pausa);
}
```
Para el ejemplo que veremos usaremos un servomotor **SG90**, ya que puede ser alimentado con los **5 voltios** del Arduino sin ningún problema, _si se usan más de uno o un servomotor que requiere más amperaje que el SG90_, **es necesario que se use una fuente externa que entregue el amperaje necesario para los servomotores**.

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSYNwqtMKx3JNWYgDcQOznvh-Rmd6x-5QNyMZy2n4GvDavozVEL&s)

## Material 
> - Arduino
> - Motor Servo SG90
> - Potenciometro de 10 kOhom´s
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica19/PotServo.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica19/PotServo.JPG)

## Código 
```c 
#include<Servo.h> // Importa la libreria Servo
#define potPin  A0

Servo miServo; // Creando un objeto de control miServo
int val;

void setup()
{
  Serial.begin(9600);
  miServo.attach(3);  // Relaciona el objeto miServo con el pin 3
}
void loop()
{
  val = analogRead(potPin); // Lee el valor del potenciometro (entre 0 a 1023)
  val = map(val, 0, 1023, 0, 179); // Map() escala el valor entre 0 y 180 grados
  miServo.write(val);
  delay(15);
  Serial.print("Valor POT: ");
  Serial.print(potPin);
  Serial.print(" | Angulo Servo: ");
  Serial.println(val);
}
```

## Explicación
Como pueden observar el código se inicia llamando la librería del servo usando ``#include <Servo.h>``, después se definen los pines a usar; en este caso el potenciómetro y el servo al que se le asigna el nombre de `miServo`. En el `setup()` se configuran los pines con la función de la librería `attach()` enviándola al nombre del servo, se declara en qué pin está conectado el servo; en este caso en el **pin 3** como se ve en el diagrama.

En la parte del ``loop()`` puede observar que se leen los datos del potenciómetro y se almacenan en una variable, después usando la función map vista anteriormente se transforman los valores del potenciómetro a valores aceptados por el servomotor, en este caso el servomotor es de **0 a 180°**, es por eso que, gracias a la función ``map()`` trasformamos a los valores de 0 a 180.
A continuación, usando la función ``write()`` **de la librería Servo** y enviándola al nombre del servomotor, le entregamos como parámetro la variable `val`, ya que en esa variable se almacenarán los números de 0 a 180, se asigna un `delay` para que el servomotor no se mueva muy rápido, cuando intente mover el potenciómetro usted notará que el servomotor también se mueve desde 0 a 180°.

Usando el monitor serial podemos ver los valores del potenciómetro y a qué grado se convierte cada valor, como puede ver hemos unido lo visto en sensores analógicos para mover un servomotor, también puede unir lo visto en sensores digitales para mover el servomotor, esto queda como investigación al lector.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMjE0NDY2OTU5MSwtODA5ODkyMDYxLC04MD
k4OTIwNjEsNjQwMzYxNTI0LDg4MTk5MjIzOSwxNjA3OTk3ODMx
LDU4MzA3ODU3OV19
-->