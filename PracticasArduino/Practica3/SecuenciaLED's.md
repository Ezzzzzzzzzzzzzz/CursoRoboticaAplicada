# Secuencia de LED's

En esta práctica se harán las famosas luces del auto fantástico, este nombre lo obtienen de la serie Knight Rider, ya que el “ayudante” del protagonista era un automóvil con inteligencia artificial que podía hablar y su boca era una serie de luces que se movían de izquierda a derecha, y es justo lo que haremos, por eso el nombre que se le da a la práctica, abajo se muestra el código, material y explicación de la misma.
![KITT](http://31.media.tumblr.com/tumblr_mb84bj2Cqy1rpmo4ho1_r1_500.gif)

## Materiales 
> - Arduino
> - LED's 5 mm 
> - Resistencias 220 Ohm's
> - Protoboard
> - Jumpers

## Circuito

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica3/Practica3.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica3/Practica3.JPG)

## Código
 ```c
 int pausa = 100;

void setup()
{
// Inicializamos los pines de 0 al 6 como OUTPUT con un ciclo "for"
  for(int pinLED = 0; pinLED < 5; pinLED++){
    pinMode(pinLED, OUTPUT);
  }
}

void loop()
{
  // Encendemos y apagamos en un loop desde el pin 0 hasta el pin 6
  for(int pinLED = 0; pinLED < 5; pinLED++){
    // Pone el pinLED en HIGH encendiendo el LED 
    digitalWrite(pinLED, HIGH);
    delay(pausa);
    // Pone el pinLED en LOW apagando el LED
    digitalWrite(pinLED, LOW);
  }
  delay(pausa);
  // Encendemos y apagamos en otro loop desde el pin 6 hasta el pin 2
  for(int pinLED = 4; pinLED >= 0; pinLED--){
    // Pone el pinLED en HIGH encendiendo el LED 
    digitalWrite(pinLED, HIGH);
    delay(pausa);
    // Pone el pinLED en LOW apagando el LED 
    digitalWrite(pinLED, LOW);
  }
  delay(pausa);
}
```


<!--stackedit_data:
eyJoaXN0b3J5IjpbMTMwODU2MDYxMywxMDA0NzU5NDMyLDQxNT
g1ODU2MCwtMjc5NTk2NjM1XX0=
-->