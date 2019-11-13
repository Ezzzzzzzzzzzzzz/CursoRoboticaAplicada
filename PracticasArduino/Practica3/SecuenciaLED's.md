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

## Explicación 

Como habrán notado tenemos unas cuantas modificaciones muy interesantes, **primero creamos una variable global del tipo entero llamada pausa con un valor de 100**, esta variable nos servirá para cambiar el tiempo en que cambian de estado los led's, **si disminuimos el valor aumenta la velocidad cuando prenden y se apagan, o sea se “mueven” más rápido, si aumentan el valor es más lento**.

Lo siguiente es configurar los pines como salida y aquí vemos lo interesante, **no usamos la palabra reservada ``#define`` para darle un alias a cada pin de Arduino**, donde conectamos los led's, **los usaremos como números y los configuraremos de “golpe” como salidas**, esto lo hacemos con un ``for()`` que ya se vio su funcionamiento en un tema anterior, **este inicia en el pin 0 y en la condición 1 ponemos que nuestra variable sea menor que 7 ya que será de 0 a 6 los pines a utilizar, y en la condición 2 hacemos el incremento en 1, dentro del for usamos el pinMode() y le pasamos la variable del for, la ponemos como OUTPUT y es así como configuramos los pines como salida de “golpe” .

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTYxMjQ2MDMxOCwxMDA0NzU5NDMyLDQxNT
g1ODU2MCwtMjc5NTk2NjM1XX0=
-->