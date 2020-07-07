
# digitalWrite()

## Descripción
Escriba un valor **ALTO** o **BAJO en un pin digital**.

Si el pin se ha configurado como una SALIDA con `pinMode()`, su voltaje se establecerá en el valor correspondiente: **5V (o 3.3V en placas de 3.3V) para HIGH, 0V (tierra) para LOW**.

Si el pin está configurado como **ENTRADA**, `digitalWrite()` habilitará (**HIGH**) o deshabilitará (**LOW**) el pullup interno en el pin de entrada. 

## Sintaxis
```arduino 
digitalWrite(pin, valor);
```

## Parámetros
**Pin:** el número de pin de Arduino.
**Valor:** **HIGH** (ALTO) o **LOW** (BAJO).


Written by  [Ezzz](https://ezzzzzzzzzzzzzz.github.io/).

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTIwNDY2ODY4OTMsNjk0NjgxNzczXX0=
-->