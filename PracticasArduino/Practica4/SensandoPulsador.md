# Sensando un pulsador
Vamos a leer un pulsador y por medio de una condición vamos a prender y apagar un led, **esta práctica será la base para poder leer cualquier otro sensor con solo dos estados que son ALTO o BAJO** y poder utilizarlo dependiendo de nuestras necesidades, abajo se muestra el código, material y explicación de la práctica.

## Material
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Pulsador de 4 pines o 2 pines
> - Resistencia de 10 kOhm's
> - Protoboard
> - Jumpers
## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Boton%26LED.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica4/Boton%26LED.JPG)

## Codigo
```c
#define LED 2 //Damos un alias a nuestro pin 2
#define Boton 3

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Boton, INPUT);
}
void loop()
{
  if(digitalRead(Boton) == HIGH){
    digitalWrite(LED, HIGH);
  }
  else{
   digitalWrite(LED, LOW); 
  }
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE3NzI5NTUzODcsMTQyOTkxOTkwOSwtNj
AzMTQ3NjY5XX0=
-->