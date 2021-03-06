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

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/Captura.JPG)

__``Serial.begin([velocidad]);``__
- Se usa para inicializar la comunicación.
- Abre el puerto serie con la velocidad indicada.
- La velocidad está dada en baudios, baudrate.
- Ambos extremos deben usar los mismos baudios.
  + ``Serial.begin(9600) ;``

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/capture1600722748962.png)

__``Serial.available();``__
- Para poder saber si hay datos en el buffer:
  + Devuelve el número de bytes en el buffer.
  + Envía un cero si no hay datos.
- Podemos usarlo con un if:
 ```c
  if(Serial.available() > 0)
  {//ejecucion}
  ```

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/capture1600722811740.png)

__``Serial.read();``__
- Para leer los datos en el buffer:
  + Devuelve el primer byte disponible en el buffer.
  + Cero o -1 si no hay datos.
- Podemos usarlo en una asignación:
  + ``dato = Serial.read();``

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/capture1600722826459.png)

__``Serial.print(dato); o Serial.println(dato);``__
- Para enviar un dato:
  + Envía el dato por el serial.
  + El dato puede ser de cualquier tipo.
  + Lo envía como ASCII.

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/capture1600722858881.png)

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/capture1600722883975.png)

Como siempre se ha mencionado, esta es la base para el aprendizaje, si el lector quiere más información la podrá encontrar en la página oficial de Arduino, en las siguientes prácticas se mostrará cómo usar la comunicación serial, si usted une esto con lo ya aprendido podrá realizar muchos proyectos, por ejemplo control de domótica de los aparatos eléctricos de su casa, aplicando esto y control de cargas.



<!--stackedit_data:
eyJoaXN0b3J5IjpbMTYxMzc4NzUwNywtNjQ0MTI0ODc3LDE1Mz
gyMTY5OTMsLTE5NDI2ODE2NjQsOTgwNTA0NzcyLC0xMjU0NTU3
MTI2XX0=
-->