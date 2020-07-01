# Función map()

Vuelve a **mapear** un número de un rango a otro. Tenga en cuenta que los "límites inferiores" de cualquiera de los rangos pueden ser mayores o menores que los "límites superiores", por lo que la función **map()** se puede utilizar para invertir un rango de números, por ejemplo:
```c
y = map (x, 1, 50, 50, 1);
```

La función también maneja bien los números negativos, por lo que este ejemplo

```c
y = map(x, 1, 50, 50, -100);
```
También es válido y funciona bien.

La función **map()** usa  numero entera, por lo que no generará fracciones, cuando la matemática podría indicar que debería hacerlo. Los restos fraccionarios se truncan y no se redondean ni promedian.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTQxNDAzODAwMSwtMjA4ODc0NjYxMl19
-->