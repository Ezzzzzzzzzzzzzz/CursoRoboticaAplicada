# Sensores analógicos

Ya vimos el uso de los sensores digitales y aprendimos como recibir señales digitales de 0 o 5V, ahora veamos cómo leer señales analógicas con nuestro Arduino.
- Digital:
  + Solo tiene dos valores 0 o 5 volts.
  + Ejemplo: 0 - 1, HIGH – LOW.
- Analógico:
  + **Valores continuos en un rango.**
  + Ejemplo: Todos los valores entre 0 y 5 volts.

En la siguiente imagen tenemos una representación gráfica de valores digitales contra valores analógicos.

![](http://www.sound-pixel.com/files/content/Ejemplos%20de%20sonido.png)

Como bien ya explicamos Arduino es un dispositivo digital, pero ahora leeremos valores analógico que se encuentran en rangos continuos y es necesario convertir el valor analógico a digital, pero esto Arduino lo hará por nosotros.
- Arduino UNO tiene 6 puertos analógicos:
  + A0 al A5.
  + Son puertos de entrada analógica y/o entrada y salida digital.
o El microcontrolador tiene un transductor que convierte la señal analógica a digital.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTI0MzcxMTM0NiwyNzQ3NDk4MzRdfQ==
-->