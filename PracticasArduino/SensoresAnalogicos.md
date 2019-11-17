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
- **Arduino UNO tiene 6 puertos analógicos:**
  + **A0 al A5.**
  + Son puertos de entrada analógica y/o entrada y salida digital.
  + El microcontrolador tiene un transductor que convierte la señal analógica a digital (**ADC**).

La entrada del valor analógico tiene que estar entre 0 y 5 volts, gracias al transductor los valores continuos entre 0 y 5 voltios son convertidos a un número entero, gracias al bootloader Arduino está pre configurado a un resolución de 10 bits, eso quiere decir que, si tienes 0 volts tendremos un valor de 0, y si tenemos 5 volts tendremos un valor de 1023, esto nos quiere decir que el valor de 2.5 volts es 512.

Podemos cambiar el valor del voltaje de referencia por un valor menor a 5V conectando ese valor al pin AREF y con la función analogReference(), y esto nos sirve por ejemplo si tienen un sensor analógico que funciona a 3.3 volts.

Para poder sensar los valores analógicos ya comentamos debemos de conectar el sensor a cualquier pin desde A0 al A5 y ya en el código para leer esos valores tendremos que usar lo siguiente:
- Para leer un pin analógico usamos:
  + ``analogRead([numpin/alias]);``
  + Nos regresa un valor entre 0 y 1023.
  + Usamos la comunicación serial para ver su valor.

Como se mencionó nos regresará un valor entre 0 y 1023, esto gracias a la conversión de 10 bits. En el tema anterior vimos el uso del Serial para ver los datos y lo volveremos a hacer con los sensores analógicos.

A continuación se verán algunas prácticas que como ya se mencionó serán la base para realizar muchos proyectos uniendo lo ya visto.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE2MDA2MTM4NjUsMjc0NzQ5ODM0XX0=
-->