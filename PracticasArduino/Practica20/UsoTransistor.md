# Uso del transistor
Esta parte se apegará más al manejo de componentes para que **controlen actuadores que requieren más voltaje o amperaje**, se emplea lo aprendido en los temas anteriores. 
En la siguiente práctica se muestra el uso del transistor, abajo se muestra el código, material y explicación de la misma.

## Material
> - Arduino
> - Foco 12v de CC
> - TIP120
> - Resistencia de 4.7 K
> - Fuente de 12 V
> - Protoboard
> - Jumpers

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica20/UsoTransistor.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica20/UsoTransistor.JPG)

## Código
```c
#define Trans 2  // Definimos el pin de salida a la base del transistor

void setup()
{
  pinMode(Trans, OUTPUT);  // Ponemos como salida el pin
}

void loop()
{
  // Usamos el metodo Blink con un parametro de 500 ms
  Blink(500);
}

/**
 * Función Blink 
 * @param i -Recibe un entero en ms
 */
void Blink(int i){
  digitalWrite(Trans, HIGH);
  delay(i);
  digitalWrite(Trans, LOW);
  delay(i);
}
```
## Explicación

El código es muy fácil de entender, se definieron los pines y las variables a utilizar, lo que se hizo fue crear una función de **Blink** para que se prenda y pague el foco mediante el **pin 2**, pero esta función recibe un parámetro del tiempo que será el valor que tendrá el **delay**, ya en **loop** se llama esta función, y verán como prende y apaga el foco, *si editamos el parámetro de la función **Blink** verán que aumenta el tiempo en que prende y paga (mayor o menor velocidad).*

Ahora veremos lo interesante, como pueden observar **estamos manejando voltajes mayores a 5 voltios, en este caso 12 voltios, además de una gran cantidad de amperaje, entre 500mA y 1000mA**, esto es gracias al transistor **TIP120** del tipo **NPN**, nosotros enviamos el pulso por el **pin 2** del Arduino a la **base** del transistor, que a su vez está conectada a una resistencia de 4.7k, la función de esta resistencia es limitar la corriente que consume el transistor ya que para la excitación de la base no necesita mucha, al hacer esto la base se excita y abre la llave (como se explicó anteriormente), entonces fluye la corriente del **colector** al **emisor** con un voltaje de 12 volts. Como también se pudo observar, *cuando usamos una fuente de poder externa, en todos los casos se unen los negativos tanto del Arduino y el de la fuente externa, también llamado **GND** o **tierra**.*

Con esto podemos observar cómo controlar voltajes mayores y también un amperaje mayor, con esta base ya podemos controlar tiras de leds, motores en una dirección, etc. 


<!--stackedit_data:
eyJoaXN0b3J5IjpbNjY0MjY2MTAyLC0xMTMxMDU5OThdfQ==
-->