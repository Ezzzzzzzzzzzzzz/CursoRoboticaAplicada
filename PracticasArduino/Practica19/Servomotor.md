# Servomotor
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
  pausa = angulo * 2000.0/180.0 + 500;
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
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica19/Servo.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica19/Servo.JPG)
## Código
```c
#include<Servo.h> // Importa la libreria Servo

Servo miServo; // Creando un objeto de control miServo

int pos = 0; // Variable para almacenar la posición del servo

void setup(){
  miServo.attach(3); // Relaciona el objeto miServo con el pin 3
}
void loop(){
  for(pos = 0; pos < 180; pos += 1){ // Va de 0 a 180 grados
    miServo.write(pos); // Le dice al servo que vaya a la posición "pos"
    delay(15);
  }
  for(pos = 180; pos >= 1; pos -= 1){
    miServo.write(pos);
    delay(15);
  }
}
```


<!--stackedit_data:
eyJoaXN0b3J5IjpbMjY0MDIxOTE1LC0xNDU1OTk5NzI5LC0xNz
Y0NTk1OTYzLC05NjA2OTk1OTEsLTk5NzY0ODA2OCwtMTU5Mjk5
ODEyNSwtODgzMzQ5Mzk2XX0=
-->