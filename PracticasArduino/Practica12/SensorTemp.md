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
  Serial.println(LM35);
  delay(50);
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbNDg0MDkzNjI1LDE5ODI5NTQ2MTUsLTE1Nj
A5MDg2MzcsLTEwNjcwNDQ0NzFdfQ==
-->