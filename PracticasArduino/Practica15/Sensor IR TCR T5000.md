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
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/TCR.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/TCR.JPG)

## Referencia del Sensor

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/RefTCR.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/RefTCR.JPG)

## Código
```c
#define TRCT A0

int valor;

void setup(){
 Serial.begin(9600);
 pinMode(TCR);
} 

```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTIwMTkyODcxOTUsLTE4OTYwMDU2NjQsLT
E1MzY2MzI2NTldfQ==
-->