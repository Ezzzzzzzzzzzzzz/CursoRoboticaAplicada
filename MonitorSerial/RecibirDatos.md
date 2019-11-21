# Recibir datos por puerto serie
En esta práctica se ensaña como usar el puerto serie pasa recibir datos, como siempre se menciona esta es la base del aprendizaje, los datos se recibirán a través del monitor serial, abajo se muestra el código, material y explicación de la práctica.

## Material 
> - Arduino

## Código
```c 
void setup() {
 Serial.begin(9600);
}
void loop() {
 if(Serial.available() > 0){
  char dato = Serial.read();
  Serial.print("Recibi un: ");
  Serial.println(dato);
 }
}
```
## Explicación
Como pueden ver no hay ningún circuito pues no es necesario, ya que solo usaremos el monitor serial, en el código se inicializa el serial a **9600 baudios** como ya se había hecho anteriormente. Ahora lo interesante está en el ``loop()``, usamos una sentencia de control ``if()`` dentro del ``if()``, ponemos la condición ``Serial.available() > 0``, esto nos quiere decir que si se envían datos o hay datos en el serial entra en la condición del ``if()`` y se ejecuta la sentencia que está dentro, de lo contrario no hace nada, después creamos una variable del tipo ``char`` llamada **dato, recordemos que el serial solo recibe ``char``** y hace el casteo interno, en esta variable llamada dato se almacenarán los valores correspondiente al buffer usando ``Serial.read()``, después se imprimen con la sintaxis ``Serial.print()``, empleando el monitor serial podemos introducir los datos y verlos cuando se imprimen. Como pudieron percatarse, es sumamente fácil leer los datos recibidos por el serial y si esto se une a la sentencia de control, podemos hacer proyectos muy interesantes.
<!--stackedit_data:
eyJoaXN0b3J5IjpbNzQ2NzMzODMwXX0=
-->