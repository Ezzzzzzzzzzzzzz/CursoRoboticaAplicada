# Sensor IR TCR T5000

La práctica de sensores analógicos será censar con el sensor TCRT5000 el cual es un sensor infrarrojo, estos sensores **son usados en los seguidores de líneas para distinguir del color blanco y negro**.

Los valores de estos sensores nunca serán iguales aunque sean hechos por la misma empresa, un sensor puede dar el valor de **800 y otro de 900** cuando detecten el color blanco, aclaro que esto es un ejemplo, abajo se muestra el código, material y explicación de la práctica.

## Material
> - Arduino
> - Resistencia de 10 kOhm's
> - Resistencia de 220 Ohm's
> - TCR T5000
> - Jumpers
> - Protoboard

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/TCR.JPG](https://electronicastore.net/wp-content/uploads/2016/07/Sensor-Infrarrojo-TCRT5000-Y-Arduino-510x309.jpg)

## Referencia del Sensor

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/RefTCR.JPG](https://www.luisllamas.es/wp-content/uploads/2016/06/arduino-detector-lineas-TCRT5000L-funcionamiento.png)

## Código
```c
#define TCRT A0

int valor;

void setup(){
 Serial.begin(9600);
 pinMode(TCRT, INPUT);
} 
void loop(){
 valor = analogRead(TCRT);
 Serial.print("Valor: ");
 Serial.print(valor);
 Serial.print("  | Color: ");
if(valor < 800){
 Serial.println("Blanco");
}
else{
Serial.println("Negro");
}
delay(500);
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbNzcyMjc5OTczLC05MTYxMjAxMywxMzEyOD
QwMzUzLC0xODk2MDA1NjY0LC0xNTM2NjMyNjU5XX0=
-->