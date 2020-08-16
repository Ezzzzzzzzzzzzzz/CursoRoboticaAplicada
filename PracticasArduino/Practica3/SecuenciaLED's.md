# Secuencia de LED's

En esta práctica se harán las famosas luces del auto fantástico, este nombre lo obtienen de la serie Knight Rider, ya que el “ayudante” del protagonista era un automóvil con inteligencia artificial que podía hablar y su boca era una serie de luces que se movían de izquierda a derecha, y es justo lo que haremos, por eso el nombre que se le da a la práctica, abajo se muestra el código, material y explicación de la misma.

![KITT](http://31.media.tumblr.com/tumblr_mb84bj2Cqy1rpmo4ho1_r1_500.gif)

## Materiales 
> - Arduino
> - LED's 5 mm 
> - Resistencias 220 Ohm's
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)

## Circuito

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica3/Practica3.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica3/Practica3.JPG)

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica3/capture1597614255175.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica3/capture1597614255175.png)

## C ++
 ```c
 int pausa = 100; // Variable Global

void setup()
{
// Inicializamos los pines de 0 al 4 como OUTPUT con un ciclo "for"
  for(int pinLED = 0; pinLED < 5; pinLED++)
  {
    pinMode(pinLED, OUTPUT);
  }
}
void loop()
{
  // Encendemos y apagamos en un loop desde el pin 0 hasta el pin 4
  for(int pinLED = 0; pinLED < 5; pinLED++)
  {
    // Pone el pinLED en HIGH encendiendo el LED 
    digitalWrite(pinLED, HIGH);
    delay(pausa);
    // Pone el pinLED en LOW apagando el LED
    digitalWrite(pinLED, LOW);
  }
  delay(pausa);
  // Encendemos y apagamos en otro loop desde el pin 4 hasta el pin 0
  for(int pinLED = 4; pinLED >= 0; pinLED--)
  {
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

Lo siguiente es configurar los pines como salida y aquí vemos lo interesante, **no usamos la palabra reservada ``#define`` para darle un alias a cada pin de Arduino**, donde conectamos los led's, **los usaremos como números y los configuraremos de “golpe” como salidas**, esto lo hacemos con un [``for()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20for.md) que ya se vio su funcionamiento en un tema anterior, **en este inicia en el pin 0 y en la _condición 1_ ponemos que nuestra variable sea menor que 5 ya que será de 0 a 4 los pines a utilizar, y en la _condición 2_ hacemos el incremento en 1**, dentro del [``for()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20for.md) usamos el ``pinMode()`` y le pasamos la variable del [``for()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20for.md), la ponemos como ``OUTPUT`` y es así como configuramos los pines como salida de “golpe” .

Ahora en el **``loop`` ponemos nuestro programa de ejecución**, de nuevo usamos un [``for()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20for.md) como el del ``setup()``, y adentro del [``for()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20for.md) ponemos la sentencia que hace que prenda el led con ``digitalWrite()``, a esta función le pasamos como primer parámetro la variable del [``for()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20for.md) y enviamos un alto, el **led prenderá durante el tiempo de la variable pausa y después de ese tiempo se apagará** ese mismo pin, así sucesivamente, después se le da un tiempo con un ``delay()``, de nuevo le pasamos como parámetro la variable pausa y esto servirá para darle un tiempo para hacer el cambio al segundo [``for()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20for.md). En este segundo [``for()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20for.md) hacemos lo mismo pero ahora al revés, **empezamos en el led conectado en el pin 4 y así seguimos hasta el led 0, para que esto funcione en la _condición 1_ usamos un [``>=``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/Operadores%20Relacion.md) y en la _condición 2_ se hace un decremento [``--``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Operadores/Operadores%20Asignaci%C3%B3n.md)**, esto ya se vio en un ejemplo de un tema anterior.

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTIwNDA4OTI1NTUsLTE1OTg3MTkyMjUsMT
YxNTg5ODI0NywxODg2OTUxNTA3LC01NTUwMjQ3MzIsMTk1NjQ3
NDQxNiwxODkxMDgxMzA0LDM2MDc0NjgxNl19
-->