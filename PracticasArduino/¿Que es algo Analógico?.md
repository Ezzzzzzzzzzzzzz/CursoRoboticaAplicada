# ¿Que es algo analógico?

Ya vimos como censar valores analógicos, pero ahora veremos como “escribir” valores analógicos, o sea
enviar valores analógicos.
¿Qué es algo analógico?
- Analógico:
  + **Valores continuos en un rango**.
  + Ejemplo: 
    * Todos los valores entre 0 y 5 volts, esto en resolución de 10 bits serán valores entre 0 a 1024.
    * **La señal eléctrica de los toma corrientes de tu casa.**
    
![](http://dux.com.ve/Tomacorriente_Tomadecorriente_Triple_Dux-01.png) 

![](https://cursos.mcielectronics.cl/wp-content/uploads/2014/09/022.png)

Arduino no tiene salidas propiamente analógicas ya que los microcontroladores son dispositivos digitales.
- Se utiliza PWM, Modulación por Ancho de Pulso que es:
  + Una señal cuadrada entre 0 y 5 volts.
  + Esta señal cambia rápidamente entre esos dos valores.
  + Simula voltajes analógicos entre 0 y 5 volts.
  + Tiene una resolución de 8 bits.

En la siguiente imagen se muestra una gráfica de los ciclos de PWM:

![](https://i.pinimg.com/originals/ec/79/c9/ec79c97752fb5d8b9250dcafd4f514b0.png)

El **Arduino UNO tiene 6 salidas PWM**, las cuales son los pines **3**, **5**, 6, 9, 10, 11 y están marcados con PWM
o con ~. 

Para escribir con estos pines usamos la función ``analogWrite([pin/alias],[valor/variable]);``, en valor o variable como bien comentamos solo recibe valores que estén entre **0** y **255**.

A continuación haremos unas prácticas que serán como siempre se ha mencionado, la base para poder hacer proyectos más avanzados como por ejemplo control de luces RGB o intensidad de luminiscencia.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTQ3MDI5Mjk3NSwxMTgyMzEwMTU4LDE0ND
EzODY1NTMsLTkzMzU5NDQ1MSwtMTc2OTA2MTU3OSw1MTgzNjU0
NF19
-->