# Secuencia de LED's

En esta práctica se harán las famosas luces del auto fantástico, este nombre lo obtienen de la serie Knight Rider, ya que el “ayudante” del protagonista era un automóvil con inteligencia artificial que podía hablar y su boca era una serie de luces que se movían de izquierda a derecha, y es justo lo que haremos, por eso el nombre que se le da a la práctica, abajo se muestra el código, material y explicación de la misma.
![KITT](http://31.media.tumblr.com/tumblr_mb84bj2Cqy1rpmo4ho1_r1_500.gif)

## Materiales 
> - Arduino
> - LED's 5 mm 
> - Resistencias 220 Ohm's
> - Protoboard
> - Jumpers

## Circuito

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica3/SecBasic.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica3/SecBasic.JPG)

## Código
 ```c
#define LED1 6
#define LED2 5
#define LED3 0
#define LED4 1
#define LED5 2
#define LED6 3
#define LED7 4

int tiempo = 50;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  delay(tiempo); 
  digitalWrite(LED1, LOW);
  delay(tiempo); 
  
  digitalWrite(LED2, HIGH);
  delay(tiempo); 
  digitalWrite(LED2, LOW);
  delay(tiempo); 
  
  digitalWrite(LED3, HIGH);
  delay(tiempo); 
  digitalWrite(LED3, LOW);
  delay(tiempo); 
  
  digitalWrite(LED4, HIGH);
  delay(tiempo); 
  digitalWrite(LED4, LOW);
  delay(tiempo); 
  
  digitalWrite(LED5, HIGH);
  delay(tiempo); 
  digitalWrite(LED5, LOW);
  delay(tiempo); 
  
  digitalWrite(LED6, HIGH);
  delay(tiempo); 
  digitalWrite(LED6, LOW);
  delay(tiempo); 
  
  digitalWrite(LED7, HIGH);
  delay(tiempo); 
  digitalWrite(LED7, LOW);
  delay(tiempo); 
  
  digitalWrite(LED6, HIGH);
  delay(tiempo); 
  digitalWrite(LED6, LOW);
  delay(tiempo); 
  
  digitalWrite(LED5, HIGH);
  delay(tiempo); 
  digitalWrite(LED5, LOW);
  delay(tiempo); 
  
  digitalWrite(LED4, HIGH);
  delay(tiempo); 
  digitalWrite(LED4, LOW);
  delay(tiempo); 
  
  digitalWrite(LED3, HIGH);
  delay(tiempo); 
  digitalWrite(LED3, LOW);
  delay(tiempo); 
  
  digitalWrite(LED2, HIGH);
  delay(tiempo); 
  digitalWrite(LED2, LOW);
  delay(tiempo); 
  
  digitalWrite(LED1, HIGH);
  delay(tiempo); 
  digitalWrite(LED1, LOW);
  delay(tiempo); 
}
```


<!--stackedit_data:
eyJoaXN0b3J5IjpbNzMzNzA4Njk0XX0=
-->