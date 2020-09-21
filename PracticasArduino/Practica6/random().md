# Función Random()

## randomSeed()

**randomSeed()** inicializa el generador de números pseudo-aleatorios, **haciendo que se inicie en un punto arbitrario de su secuencia aleatoria**. Esta secuencia, aunque muy larga y aleatoria, es siempre la misma.

Si es importante que una secuencia de valores generada por **random()** difiera, en ejecuciones posteriores de un scketch, use **randomSeed()** para inicializar el generador de números aleatorios con una entrada bastante aleatoria, como **analogRead()** en un pin no conectado.
###  Ejemplo
```c
long randNumber;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  randNumber = random(300);
  Serial.println(randNumber);
  delay(50);
}
```

## random()
La función aleatoria genera números pseudo-aleatorios

### Sintaxis

`random(max)`  
`random(min, max)`

**min**: límite inferior del valor aleatorio, inclusive (opcional).
**max**: límite superior del valor aleatorio, exclusivo.

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica6/capture1600727782106.png)

### Ejemplo
```c
long randNumber;

void setup() {
  Serial.begin(9600);

  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(0));
}

void loop() {
  // print a random number from 0 to 299
  randNumber = random(300);
  Serial.println(randNumber);

  // print a random number from 10 to 19
  randNumber = random(10, 20);
  Serial.println(randNumber);

  delay(50);
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE0ODc1ODQ0OTldfQ==
-->