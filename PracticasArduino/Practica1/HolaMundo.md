# HOLA MUNDO!! 

Comenzaremos haciendo el programa clásico del **Blink** que en otro lenguaje de programación sería como el **“Hola Mundo”** ya que es el primer programa que se enseña, el código será el siguiente. 

## Materiales
> - 1 Arduino
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Diagrama de bloques
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica1/DB001.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica1/DB001.JPG)

## Circuito

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica1/T005.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica1/T005.JPG)

## Código  
```c
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
```
## Bloques 
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica1/T004.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica1/T004.JPG)




Written by  [@Ezzz](https://ezzzzzzzzzzzzzz.github.io/).
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE5MzUyMjE3ODUsLTIwNTI2NTQzMjFdfQ
==
-->