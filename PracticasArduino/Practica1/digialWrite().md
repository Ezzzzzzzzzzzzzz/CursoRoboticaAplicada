
# digitalWrite()

## Descripción
Escriba un valor **ALTO** o **BAJO en un pin digital**.

Si el pin se ha configurado como una SALIDA con `pinMode()`, su voltaje se establecerá en el valor correspondiente: **5V (o 3.3V en placas de 3.3V) para HIGH, 0V (tierra) para LOW**.

Si el pin está configurado como **ENTRADA**, `digitalWrite()` habilitará (**HIGH**) o deshabilitará (**LOW**) el pullup interno en el pin de entrada. 

## Sintaxis
```c
digitalWrite (pin, valor)
```

## Parámetros
**pin:** el número de pin de Arduino.
**valor:** HIGH (ALTO) o LOW (BAJO).

.

 - [ ] . . . . .
       *Written for [@Ezzz](https://ezzzzzzzzzzzzzz.github.io/).*

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE4ODU2ODUwOTAsNjk0NjgxNzczXX0=
-->