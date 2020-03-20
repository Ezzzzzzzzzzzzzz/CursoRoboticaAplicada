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
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica12/SensTemp.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica12/SensTemp.JPG)

## Código
```c
/*
  Este programa faz com que o Arduino monitore a
  Temperatura do Ambiente e caso ela fique acima
  de um limiar de 25 C, um Buzzer será acionado
*/

int temperatura = 0;

void setup()
{
  Serial.begin(9600);

  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  Serial.print("Temperatura do Ambiente: ");
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
  Serial.println(temperatura);
  if (-40 + 0.488155 * (analogRead(A0) - 20) > 28) {
    tone(9, 440 * pow(2.0, (constrain(int(temperatura), 35, 127) - 57) / 12.0), 1000);
  } else {
    noTone(9);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTY4MTA1MjYwMSwtMzQ4NzQxMTE1LC03Mz
I1MDA1NzZdfQ==
-->