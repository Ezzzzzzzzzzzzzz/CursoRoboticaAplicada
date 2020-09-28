# ¿Qué es algo analógico?

¿Qué es algo analógico?
- Analógico:
  + **Valores continuos en un rango**.
  + Ejemplo: 
    * Todos los valores entre 0 y 5 volts, esto en resolución de 10 bits serán valores entre 0 a 1024.
    * **La señal eléctrica de los tomacorrientes de tu casa.**
    
![](http://dux.com.ve/Tomacorriente_Tomadecorriente_Triple_Dux-01.png) 

![](https://cursos.mcielectronics.cl/wp-content/uploads/2014/09/022.png)

# Modulación por ancho de pulso (PWM) 

**Arduino no tiene salidas propiamente analógicas ya que los microcontroladores son dispositivos digitales.**
- Se utiliza **PWM**, **Modulación por Ancho de Pulso** que es:
  + Una señal cuadrada entre 0 y 5 volts.
  + Esta señal cambia rápidamente entre esos dos valores.
  + **Simula voltajes analógicos entre 0 y 5 volts**.
  + Tiene una resolución de 8 bits.

En la siguiente imagen se muestra una gráfica de los ciclos de **PWM**:

![](https://i.pinimg.com/originals/ec/79/c9/ec79c97752fb5d8b9250dcafd4f514b0.png)

El comando `analogWrite()` establece el ciclo de trabajo de una onda cuadrada dependiendo del valor que le pase:
> - Escribir un valor de 0 con `analogWrite()` indica una onda cuadrada con un ciclo de trabajo del 0 por ciento (siempre bajo).
> -  Escribir un 255 indica una onda cuadrada con un ciclo de trabajo del 100 por ciento (siempre alto).
> -  Escribir un 127 indica una onda cuadrada con un ciclo de trabajo del 50 por ciento (mitad alta del tiempo, mitad baja del tiempo).


![](https://i0.wp.com/upload.wikimedia.org/wikipedia/commons/thumb/e/e7/Pulse_density_modulation.svg/300px-Pulse_density_modulation.svg.png)

El **Arduino UNO tiene 6 salidas PWM**, las cuales son los pines **3**, **5**, **6**, **9**, **10**, **11** y están marcados con PWM
o con **~**. 

![](https://www.electronicwings.com/public/images/user_images/images/Arduino/Arduino_basics/Arduino_PWM/arduino%20pwm%20pins.png)

Para escribir con estos pines usamos la función ``analogWrite([pin/alias],[valor/variable]);``, en valor o variable como bien comentamos solo recibe valores que estén entre **0** y **255**.


## Blockly@rduino

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/Blockly_PWM.JPG)

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/capture1601328691926.png)
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTk4NDkzMTY1NCwtMTkwOTM0NzQzMywtMT
Q1MDgwOTM1OCwtOTAwMDIzNTk0LDI3MDU0OTcyMiwtMTYyNjY0
NTQ3N119
-->