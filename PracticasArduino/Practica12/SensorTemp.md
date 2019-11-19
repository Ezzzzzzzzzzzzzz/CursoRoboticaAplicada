# Sensor de temperatura LM35

Muy bien, ahora veremos cómo censar un **LM35** y cuando llegue a una temperatura hacer que prenda un led, esto servirá para controlar la temperatura de algún objeto y cuando llegue a un temperatura alta accione un ventilador o algún otro actuador, es muy importante que lean la hoja de datos del **LM35** ya que allí viene descrito su funcionamiento, abajo se muestra el código, material y explicación de la práctica.

![](http://www.internetdelascosas.cl/wp-content/uploads/2012/05/arduino-LM35-sensor-pines.png)

## Material
> - Arduino
> - Potenciómetro 10 kOhm's
> - Resistencia de 220 Ohm's
> - Jumpers
> - Protoboard

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica12/SensorTEMP.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica12/SensorTEMP.JPG)

## Código
```c
#define LM35 A0
#define LED 2

float temp = 0; // Variables globales tipo float (punto decimal)
float sensVal = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LM35, INPUT);
  pinMode(LED, OUTPUT);
}
void loop()
{
/*
 *************************************************************
 * EL CALCULO DE LA TEMPERATURA SOLO APLICA A ESTA PRACTICA, * 
 * ES NECESARIO REVISAR EL DATASHEET DE CADA SENSOR EN UN    *
 * CIRCUITO REAL.                                            *
 *************************************************************
 */
  sensVal = (analogRead(LM35) - 20) * 0.48876;
  temp = sensVal - 40;

  if(temp > 35){
    digitalWrite(LED, HIGH);
  }
  else{
   digitalWrite(LED, LOW); 
  }
  Serial.println(temp);
  delay(50);
}
```
## Explicación
Primero definimos los pines que usaremos y las variables para almacenar los valores, esto ya se ha hecho muchas veces anteriormente, se definen dos variables, una donde almacenaremos los valores del **ADC** y otra para almacenar la temperatura. 

Como bien se mencionó anteriormente, **se recomienda leer la hoja de datos del sensor, ya que aquí viene una información muy importante la cual nos dice que nos dará 10mV por cada grado centígrado, esto es fundamental para el funcionamiento**, veamos un ejemplo.

Así es como obtenemos la temperatura usando el sensor **LM35**, solo aplicamos estos cálculos en la programación, usamos ``analogRead()`` para leer el valor que envía el sensor al Arduino y lo almacenamos en la variable ``sensVal``, después aplicando la fórmula anterior obtendremos la temperatura y esta la almacenamos en la variable ``temp``, una vez hecho eso **creamos una condicional** que si la temperatura llega a ser más de 35 grados se prenderá el led o lo que ustedes quieran accionar, en caso contrario el led permanece apagado, después imprimimos la temperatura por medio del **Serial()** y la visualizamos en nuestro **monitor serial**.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTk5NzM1MDM4OCw0ODQwOTM2MjUsMTk4Mj
k1NDYxNSwtMTU2MDkwODYzNywtMTA2NzA0NDQ3MV19
-->