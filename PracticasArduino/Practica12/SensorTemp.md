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

```c
#include <math.h>
int sensorPin = A5; // Declaration of the input pin

// These function translates the recorded analog measurement
// into the right temperature in °C and gives it out.
double Thermistor(int RawADC)
{
double Temp;
Temp = log(10000.0 * ((1024.0 / RawADC - 1)));
Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp )) * Temp );
Temp = Temp - 273.15;` `// convert from Kelvin to Celsius
return Temp;
}
// Serial output in 9600 Baud
void setup(){
Serial.begin(9600);
}

// The program measures the current voltage value on the NTC
// and translates it intp °C for the serial output
void loop(){
int readVal = analogRead(sensorPin);
double temp = Thermistor(readVal);

// Output on the serial interface
Serial.print(``"Current temperature is:"``);
Serial.print(temp);
Serial.print(``char``(186));` `//Output <°> Symbol
Serial.println(``"C"``);
Serial.println(``"---------------------------------------"``);
delay(500);

}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbODQzMzE4NjAzLDIwMjQ4NDkxMzgsMjg1OT
c1NDEyLDE5OTczNTAzODgsNDg0MDkzNjI1LDE5ODI5NTQ2MTUs
LTE1NjA5MDg2MzcsLTEwNjcwNDQ0NzFdfQ==
-->