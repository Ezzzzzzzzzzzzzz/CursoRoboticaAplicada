# Contador de Pulsos de 0 a 10

Se trata de realizar una variación sobre el ejemplo anterior de tal manera que **cuando el valor del contador llegue a 10 se ponga a cero y comience de nuevo**.

![](https://media.giphy.com/media/3o7aCXOWeyrF3Kt3LW/giphy.gif)

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT003.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT003.JPG)

## Material
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Pulsador de 4 pines o 2 pines
> - Resistencia de 10 kOhm's
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
>  - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT004.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/CONT004.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/capture1597635741711.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/capture1597635741711.png)

## C++
```c
#define LED 13 //Damos un alias a nuestro pin 13
#define LED2 12 //Damos un alias a nuestro pin 12
#define Boton 7 //Damos un alias a nuestro pin 7

int valor = 0;
int contador = 0;
int estadoAnteriorBoton = 0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(LED, OUTPUT); // Definimos el pin LED como salida.
  pinMode(LED2, OUTPUT); // Definimos el pin LED como salida.
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
      
      if(contador == 10)
      {
        digitalWrite(LED, LOW);
        digitalWrite(LED2, HIGH);
        contador = 0;
        delay(2000);
        digitalWrite(LED2, LOW);
      }
    }
  }
  estadoAnteriorBoton = valor;
}
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE3NjQxMzc0MywtMTg5MDk0MTcxLC0xMD
Y3NjQxNTk1LC0xMzc5NDg2MjkzLDE1NjIyNzAzMTVdfQ==
-->