# Función map()

Vuelve a **mapear** un número de un rango a otro. Tenga en cuenta que los "límites inferiores" de cualquiera de los rangos pueden ser mayores o menores que los "límites superiores", por lo que la función **map()** se puede utilizar para invertir un rango de números, por ejemplo:
```arduino
y = map (x, 1, 50, 50, 1);
```

La función también maneja bien los números negativos, por lo que este ejemplo

```arduino
y = map(x, 1, 50, 50, -100);
```
También es válido y funciona bien.

La función **map()** usa  numeros enteros, por lo que no generará fracciones, cuando la matemática podría indicar que debería hacerlo. *Los restos fraccionarios se truncan y no se redondean ni promedian.*

## Sintaxis


`map(value, fromLow, fromHigh, toLow, toHigh)`

## C ++
### Ejemplo

```c
/* Map an analog value to 8 bits (0 to 255) */
void setup() {}

void loop() {
  int val = analogRead(0);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(9, val);
}
```

## Blockly@rduino
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/capture1597708115337.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/capture1597708115337.png)
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTI1MTg4NzgxNywtOTg3NjgzOTc5LDQ3Nj
Q0NTc4MCwtMTgzNzA1MTU5MSwtMjAyMjU4MTU0NywtMjA4ODc0
NjYxMl19
-->