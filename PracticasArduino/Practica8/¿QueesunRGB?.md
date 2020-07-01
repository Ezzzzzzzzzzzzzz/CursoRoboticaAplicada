# ¿Qué es un Led RGB?

El  **led RGB (Red, Green, Blue) es un led que combina estos tres colores**  para formar más de 16 millones de tonos de luz. De esta forma, dependiendo de la tonalidad pasada como parámetro, podemos emitir un color de luz u otro. 

![Led RGB en mBot](https://www.programoergosum.com/images/cursos/251-led-rgb-del-robot-mbot/led-rgb.png)


Antes de nada veamos las diferencias entre RGB y CMYK. El codigo RGB es un modelo de colores que tiene su base en los tres colores primarios rojo (Red), verde (Green), y azul (Blue). El acrónimo CMYK indica el modelo de colores cian (Cyan), magenta (Magenta), amarillo (Yellow) y negro (black).

![RGB vs CMYK](https://www.programoergosum.com/images/cursos/251-led-rgb-del-robot-mbot/colores-rgb-cmyk.png)

# RGB vs CMYK

Los colores del Led RGB vienen representados con números comprendidos entre el valor 0 y el valor 255. De esta forma, para componer el color rojo pondríamos el valor máximo del rojo y el valor mínimo de los otros colores, es decir, el rojo equivale a "R=255; G=0; B=0". Y así sucesivamente con el resto de colores.

![Combinación RGB](https://www.programoergosum.com/images/cursos/251-led-rgb-del-robot-mbot/colores-rgb.png)

Ahora bien, para poder «seleccionar» un color, lo que debemos es darle más intensidad a un color que otro para el ojo humano haga el resto del trabajo y esto se logra utilizando  [PWM](https://saber.patagoniatec.com/2019/07/como-funciona-el-pwm/)  con unos 555 o con un microcontrolador como Arduino.

![LED RGB 16M de colores 2](https://i2.wp.com/saber.patagoniatec.com/wp-content/uploads/2019/07/AntiqueHeartfeltDoctorfish-size_restricted.gif?w=1080&ssl=1 "LED RGB 16M de colores 4")
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE0Mzc2MTIyODYsLTE1ODI2NjI4ODMsLT
E1NTc3MjQwNl19
-->