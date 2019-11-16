# Fade de un LED

En esta práctica **enviaremos valores analógicos para poder controlar la luminiscencia de un led**, abajo se muestra el código, material y explicación de la práctica.

## Materiales 
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Protoboard
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/FadeLED.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/FadeLED.JPG)

## Código
```c
#define Led 5

int Brillo;
int Tiempo = 15;

void setup()
{
  pinMode(Led, OUTPUT);
}
void loop()
{
  for(Brillo = 0; Brillo < 256; Brillo++){
    	analogWrite(Led, Brillo);
    	delay(Tiempo);
  }
}
```

## Explicación 

El funcionamiento es muy simple primero se define el pin para el LED, después en el setup se pone el LED como salida, en el loop se crea un for que ira desde 0 a 255, recordemos que la resolución del PWM es de 8 bits.

Dentro del for usamos analogWrite, donde recibe como parámetro el LED y los valores del for que ira incrementando de uno en uno y esto se almacena en el la variable i, se le da un delay de 10, ósea que cada 10 milisegundo se ira incrementando la variable i.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTExNjA3MzYxMDIsLTE2NzcwMTgxMDIsLT
IxODA1NTEzMV19
-->