# Contador de Pulsos

Se trata de contar las veces que se pulsa un botón conectado en la **pin 7** de **Arduino** a la vez que cada vez que contamos **encendemos el LED conectado en la salida 13**. El valor de la variable que almacena el número de impulsos generados se envía al PC para que se visualice en la pantalla.

![](https://media.giphy.com/media/8z2mlSy0xxwkw/giphy.gif)

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT001.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT001.JPG)

## Material
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Pulsador de 4 pines o 2 pines
> - Resistencia de 10 kOhm's
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT002.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT002.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/capture1597635063937.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/capture1597635063937.png)


## C++
```c
#define LED 13 //Damos un alias a nuestro pin 2
#define Boton 7 //Damos un alias a nuestro pin 3

int valor = 0;
int contador = 0;
int estadoAnteriorBoton = 0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(LED, OUTPUT); // Definimos el pin LED como salida.
  pinMode(Boton, INPUT); // Definimos el pin Boton como entrada.
}

void loop()
{
  valor = digitalRead(Boton); // Lee el valor de la entrada digital en el pin7
  digitalWrite(LED, valor);
  
  if(valor != estadoAnteriorBoton)
  {
    if(valor == 1)
    {
      contador++;
      Serial.print("Contador = ");
      Serial.println(contador);
    }
  }
  estadoAnteriorBoton = valor;
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTQ0MTA1MzMsLTIwNTU2MjMxLDg5MDA5Mj
E2OCwxODk5ODIzOTkzLDE3MjkzMzI0OTFdfQ==
-->