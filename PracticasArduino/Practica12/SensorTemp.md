# Sensor de temperatura TMP36

Muy bien, ahora veremos cómo censar un **[TMP36](http://ctms.engin.umich.edu/CTMS/Content/Activities/TMP35_36_37.pdf)** y cuando llegue a una temperatura hacer que prenda un led, esto servirá para controlar la temperatura de algún objeto y cuando llegue a un temperatura alta accione un ventilador o algún otro actuador, es muy importante que lean la hoja de datos del **[TMP36](http://ctms.engin.umich.edu/CTMS/Content/Activities/TMP35_36_37.pdf)** ya que allí viene descrito su funcionamiento, abajo se muestra el código, material y explicación de la práctica.

![](http://www.learningaboutelectronics.com/images/TMP36-pinout.png)

## Material
> - Arduino
> - Sensor de temperatura TMP36
> - Potenciómetro 10 kOhm's
> - Resistencia de 220 Ohm's
> - Jumpers
> - Protoboard
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica12/SensorTEMP.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica12/SensorTEMP.JPG)

## Código
```c
#define TMP36 A0
#define LED 2

float temp = 0; // Variables globales tipo float (punto decimal)
float sensVal = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(TMP36, INPUT);
  pinMode(LED, OUTPUT);
}
void loop()
{
/*
 *************************************************************
 * EL CALCULO DE LA TEMPERATURA SOLO APLICA A UN SENSOR      *
 * TMP36, ES NECESARIO REVISAR EL DATASHEET DE CADA SENSOR   * 
 * EN UN CIRCUITO.											 *
 *************************************************************
 */
  sensVal = (analogRead(TMP36) - 20) * 0.48876;
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

Como bien se mencionó anteriormente, **se recomienda leer la hoja de datos del sensor, ya que aquí viene una información muy importante la cual nos dice que nos dará 10mV/°, esto es fundamental para el funcionamiento**, veamos un ejemplo.

Así es como obtenemos la temperatura usando el sensor **[TMP36](http://ctms.engin.umich.edu/CTMS/Content/Activities/TMP35_36_37.pdf)**, solo aplicamos estos cálculos en la programación, usamos ``analogRead()`` para leer el valor que envía el sensor al Arduino y lo almacenamos en la variable ``sensVal``, después aplicando la fórmula anterior obtendremos la temperatura y esta la almacenamos en la variable ``temp``, una vez hecho eso **creamos una condicional** que si la temperatura llega a ser más de 35 grados se prenderá el led o lo que ustedes quieran accionar, en caso contrario el led permanece apagado, después imprimimos la temperatura por medio del ``Serial()`` y la visualizamos en nuestro **monitor serial**.

## Modulo KY-013

Rango de medición de temperatura: **-55 ° C / + 125 ° C.**

Este módulo proporciona un **termistor NTC**: tendrá una resistencia inferior a temperaturas más altas.

![](http://sensorkit.en.joy-it.net/images/4/49/NTC-Kurve_eng.png)

## Conexión #2
![](https://arduinomodules.info/wp-content/uploads/Arduino_KY-013_Keyes_Analog_temperature_sensor_module_connection_diagram.png)

## Código #2
```c
#include <math.h>

int sensorPin = A5; // Declaración de la entrada 

void setup(){
  Serial.begin(9600); // Monitor Serial a 9600 Baud
}
// Este programa le el valor de corriente y voltaje en el NTC
// y lo traduce en una variable int para los °C en el monitor serial
void loop(){
  int readVal = analogRead(sensorPin);
  double temp = Thermistor(readVal);

  // Output on the serial interface
  Serial.print("La temperatura actual es:");
  Serial.print(temp);
  Serial.print(char(186)); //Output <°> Simbolo
  Serial.println("C");
  Serial.println("---------------------------------------");
  delay(500);
}
// Esta función traduce lo recopilado por la medición analogica
// para obtener el valor correcto de temperatura en °C 
double Thermistor(int RawADC){
  double Temp;
  Temp = log(10000.0 * ((1024.0 / RawADC - 1)));
  Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp )) * Temp );
  Temp = Temp - 273.15; // convertir de Kelvin a Celsius
  return Temp;
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTExODYwMzk2NTcsLTEzOTE3MTg2ODUsLT
E4NjcyNjMyMzMsMjAyNDg0OTEzOCwyODU5NzU0MTIsMTk5NzM1
MDM4OCw0ODQwOTM2MjUsMTk4Mjk1NDYxNSwtMTU2MDkwODYzNy
wtMTA2NzA0NDQ3MV19
-->