# Estructura de un Arduino

Prácticamente veremos la tarjeta **Arduino UNO** pero en general las diferentes tarjetas de Arduino son muy similares, **cuentan con pines tanto de salida como de entrada** con los cuales podremos leer nuestros dispositivos ya sea una señal de algún sensor u otro parámetro. También **enviar señales o datos por los pines de salida** los cuales veremos cómo funcionan más adelante para usar los Actuadores analógicos y digitales. 

![](https://controlautomaticoeducacion.com/wp-content/uploads/ArduinoPines.jpg)

Aquí se presenta una imagen de la estructura, recordemos que usa un microcontrolador **ATMEGA328** para que funcionen todos nuestros dispositivos.

![EstructuraArduino](https://circuito.cdn.prismic.io/circuito/8e3a980f0f964cc539b4cbbba2654bb660db6f52_arduino-uno-pinout-diagram.png)

Nuestra tarjeta tiene **14 pines digitales del 0 al 13**, de los cuales podemos **leer y enviar señales digitales que van de 0 a 5 volts**, además entre esos pines se cuenta con **6 pines PWM** los cuales los veremos más adelante, aquí una imagen de **señal digital**:

![SeñalDigital](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Arduino/Se%C3%B1alDigital.JPG)

También cuenta con **6 pines analógicos**, como lo dice su nombre **podremos hacer lecturas analógicas igualmente de 0 a 5 volts**, estos pines **también se pueden usar como digitales por medio del convertidor analógico digital**, aquí una imagen de **señal analógica**:

![SeñalAnalogica](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Arduino/Se%C3%B1alAnalogica.JPG)

Recordemos que **cada pin trabaja con voltajes de 0 a 5 volts CC**, además que la **máxima corriente por pin es de 40mA**, _si utilizaremos un actuador que pide más corriente que la entregada por un pin es necesario usar un transistor de potencia_, pero eso se verá más adelante. 

La tarjeta consta de un **regulador de voltaje**, un **7805 conectado al Jack** y al pin **Vin** de la tarjeta con su respectivo diodo de protección, pero esto no evita el tener precaución y no invertir la polaridad en los pines de alimentación haciendo un cortocircuito.

PIN   |    NOMBRE     |     DESCRIPCIÓN   
:-----:  | :--------:  |   :------:
2   |  **PIN 0/RX**    |  Pin I/O, entrada de dato, comunicación serial.
3   |  **PIN 1/TX**     |  Pin I/O salida dato, comunicación serial
4   | **PIN 2/INT0**     |  Pin I/O, resistencia pull up, interrupción ext.
5   | **PIN 3/INT1/PWM**  | Pin I/O, resistencia pull up, interrupción ext.
6  | **PIN 4/T0**    |  Pin I/O, resistencia pull up, entrada de reloj TIMER0.
11 | **PIN 5/T1/PWM**  | Pin I/O, resistencia pull up, salida reloj TIMER 0, PWM salida o entrada.
12  | **PIN 6/AIN0/PWM**   |  Pin I/O, resistencia pull up, salida reloj TIMER0, comparador, PWM salida o entrada.
13   |  **PIN 7/AIN1**  | Pin I/O, resistencia pull up, comparador. 
14  |  **PIN 8/CLK0**  | Pin I/O, resistencia pull up, salida 1/4 frecuencia osc. 
15   |  **PIN 9/PC1A/PWM**  |  Pin I/O, resistencia pull up, salida reloj TIMER1, PWM salida o entrada.
16  |**PIN 10/OC1A/PWM**  | Pin I/O, resistencia pull up, salida reloj TIMER1, PWM salida o entrada. 
17  | **PIN 11/OC2A/PWM**  | Pin I/O, resistencia pull up, salida de reloj TIMER2, PWM salida o entrada.
18 | **PIN 12** | Pin I/O, resistencia pull up, MISO.
19  |  **PIN 13/LED**  |  Pin I/O, resistencia física, LED.
23   |  **A0/ADC0**  | Pin I/O, entrada comparador analógico. 
24  |  **A1/ADC1**   |  Pin I/O, entrada comparador analógico.
25  |  **A2/ADC2**   | Pin I/O, entrada comparador analógico.
26   | **A3/ADC3**   | Pin I/O, entrada comparador analógico.
27  | **A4/ADC4/SDA**  | Pin I/O, entrada comparador analógico, interfaz i^2^c.
28   | **A5/ADC5/SCL**  |  Pin I/O, entrada comparador analógico, interfaz i^2^c.




<!--stackedit_data:
eyJoaXN0b3J5IjpbLTIxMjA2ODg0ODcsNTgwNjI0OTE1LC00Nz
MxMjg2MCw0ODIzMTQwODNdfQ==
-->