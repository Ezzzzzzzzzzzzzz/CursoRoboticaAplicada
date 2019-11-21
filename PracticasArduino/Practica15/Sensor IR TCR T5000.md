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
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/TCR.JPG](https://foto.askix.com/upload/7/17/717ad701e793e3ae8e0b64fb8dac51ca.jpg)

## Referencia del Sensor

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/RefTCR.JPG](https://http2.mlstatic.com/paquete-de-5-piezas-sensor-infrarrojo-tcrt-5000-para-arduino-D_NQ_NP_241321-MLM20751155871_062016-F.jpg)

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
eyJoaXN0b3J5IjpbMTU3MjE4NzY2MywxNTM0MTE5MzcyLDc3Mj
I3OTk3MywtOTE2MTIwMTMsMTMxMjg0MDM1MywtMTg5NjAwNTY2
NCwtMTUzNjYzMjY1OV19
-->