# ¿Que es algo analógico?

Ya vimos como censar valores analógicos, pero ahora veremos como “escribir” valores analógicos, o sea
enviar valores analógicos.
¿Qué es algo analógico?
- Analógico:
  + **Valores continuos en un rango**.
  + Ejemplo: 
    * Todos los valores entre 0 y 5 volts, esto en resolución de 10 bits serán valores entre 0 a 1024.
    * **La señal eléctrica de los toma corrientes de tu casa.**
![](https://arsumrep.com/wp-content/uploads/2016/01/AG1228.png ){:height="24px" width="48px"}

![](https://cursos.mcielectronics.cl/wp-content/uploads/2014/09/022.png)

Arduino no tiene salidas propiamente analógicas ya que los microcontroladores son dispositivos digitales.
- Se utiliza PWM, Modulación por Ancho de Pulso que es:
  + Una señal cuadrada entre 0 y 5 volts.
  + Esta señal cambia rápidamente entre esos dos valores.
  + Simula voltajes analógicos entre 0 y 5 volts.
  + Tiene una resolución de 8 bits.

En la siguiente imagen se muestra una gráfica de los ciclos de PWM:

![](https://i.pinimg.com/originals/ec/79/c9/ec79c97752fb5d8b9250dcafd4f514b0.png)
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTIwMTI4NTIyMTgsLTkzMzU5NDQ1MSwtMT
c2OTA2MTU3OSw1MTgzNjU0NF19
-->