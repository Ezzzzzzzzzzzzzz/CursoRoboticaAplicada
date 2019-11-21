# Comunicación con y desde Arduino

Este tema será un poco corto pues se verá la **comunicación serial**, en prácticas anteriores se vio un poco el uso de esta comunicación para mostrar datos en el monitor serial, en una de las prácticas usaremos un módulo **bluetooth hc06**, también puede usar un **hc05**, aunque en dado caso solo lo usaremos en modo esclavo _-¿qué quiere decir esto?, que enviaremos datos desde nuestro teléfono móvil al Arduino_.

Comunicación con Arduino
- Todos los Arduinos tienen al menos un puerto serial, UART o USART.
- Usa los pines 0(RX) y 1(TX) y/0 el puerto USB por default.
- Nos permite comunicarnos con el Arduino.
- Lo podemos hacer por el conector USB.
- Tiene un buffer de 128 bytes.

Nuestro Arduino puede funcionar conectado a una computadora o independientemente, puede comunicarse con la computadora a la que está conectado, también a través del puerto serial con otros equipos o usando alguna **shield** de comunicación.

Para comunicarnos con Arduino usaremos el puerto serie como ya se mencionó, Arduino ya tiene una librería para esta comunicación que se llama ``Serial()``, incorpora varias funciones pero las esenciales y que se usarán se nombran a continuación:

- ``Serial.begin([baudios]);`` - para iniciar la comunicación, recibe un parámetro del tipo entero que será la velocidad de comunicación, todo dependerá de sus módulos, en general son 9600.
- ``Serial.available();`` - para saber si hay datos en el buffer que leer, si no hay datos envía un cero.
- ``Serial.read();`` - para leer los datos de entrada.
- ``Serial.print([dato]);`` - para imprimir los datos.

Se debe mencionar que solo recibe datos en ASCII, la librería hace una conversión interna al tipo de dato
usado, abajo se explican un poco más a fondo las funciones de la librería que se usarán.

__``Serial.begin([velocidad]);``__
- Se usa para inicializar la comunicación.
- Abre el puerto serie con la velocidad indicada.
- La velocidad está dada en baudios, baudrate.
- Ambos extremos deben usar los mismos baudios.
  + ``Serial.begin(9600) ;``

__``Serial.available();``__
- Para poder saber si hay datos en el buffer:
  + Devuelve el número de bytes en el buffer.
  + Envía un cero si no hay datos.
- Podemos usarlo con un if:
 ```c
  if(Serial.available() > 0)
  {//ejecucion}
  ```

__``Serial.read();``__
- Para leer los datos en el buffer:
  + Devuelve el primer byte disponible en el buffer.
  + Cero o -1 si no hay datos.
- Podemos usarlo en una asignación:
  + ``dato = Serial.read();``

__``Serial.print(dato); o Serial.println(dato);``__
- Para enviar un dato:
  + Envía el dato por el serial.
  + El dato puede ser de cualquier tipo.
  + Lo envía como ASCII.

Como siempre se ha mencionado, esta es la base para el aprendizaje, si el lector quiere más información la podrá encontrar en la página oficial de Arduino, en las siguientes prácticas se mostrará cómo usar la comunicación serial, si usted une esto con lo ya aprendido podrá realizar muchos proyectos, por ejemplo control de domótica de los aparatos eléctricos de su casa, aplicando esto y control de cargas.

# Imprimir datos por Monitor Serie

En esta práctica leeremos un potenciómetro e imprimiremos los datos, esto ya se vio en la parte se sensores analógicos así que será muy fácil de entender, abajo se muestra el código, material y explicación de la práctica.

## Material 
> - Arduino
> - Potenciometro 10kOhm's
> - Protoboard
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/POT.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/POT.JPG)


<!--stackedit_data:
eyJoaXN0b3J5IjpbMTAzOTA1NjM4OCwtMTI1NDU1NzEyNl19
-->