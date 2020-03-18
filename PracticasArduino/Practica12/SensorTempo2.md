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
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTczMjUwMDU3Nl19
-->