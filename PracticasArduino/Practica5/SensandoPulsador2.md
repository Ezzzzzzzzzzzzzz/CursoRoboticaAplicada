# Sensando un pulsador no. 2
Vamos a leer un pulsador y por medio de una condición vamos a prender y apagar un led, **esta práctica será la base para poder leer cualquier otro sensor con solo dos estados que son ALTO o BAJO** y poder utilizarlo dependiendo de nuestras necesidades, abajo se muestra el código, material y explicación de la práctica.

## Material
> - Arduino
> - LED 5mm 
> - Resistencias 220 Ohm's 
> - Pulsador de 4 pines o 2 pines
> - Resistencia de 10 kOhm's
> - Protoboard
> - Jumpers
## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/BotonLED.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica5/BotonLED.JPG)

## Codigo
```c
#define LED 2 //Damos un alias a nuestro pin 2
#define Boton 3 //Damos un alias a nuestro pin 3

byte push_lee = 0; // variable tipo "byte"

int estadoLed = 0;	// Variable global "estadoLed"
int estadoAnterior = 0; // Variable global "estadoAnterior"

void setup()
{
  pinMode(LED, OUTPUT); // Definimos el pin LED como salida.
  pinMode(Boton, INPUT); // Definimos el pin Boton como entrada.
}
void loop()
{
  // Definimos nuestra secuencia.
  push_lee = digitalRead(Boton); // Almacenamos en la variable la lectura del boton.
  
  if((push_lee == 1) && (estadoAnterior == 0)){ 
    estadoLed = 1 - estadoLed;
    delay(5);
  }
  estadoAnterior = push_lee;
  
  if(estadoLed == 1){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW); 
  }
}
```
## Explicación

Creamos tres variables del tipo ``int``, una **para almacenarla lectura del pulsador que es ``push_lee``, ``estadoLed`` para almacenar el estado que entrará en el [``if()``](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Sentencias/Sentencia%20if.md) para que prenda o apague el led, incluso cualquier otro actuador que veremos más adelante**. 

La variable ``estadoAnterior`` **almacenará el estado anterior del pulsador**, estas tres variables se igualan a cero para tener un valor por defecto, ya en el ``setup()`` se configuran los pines como entrada y salida respectivamente, ahora viene lo más interesante que es nuestro programa de ejecución que sirve para usar un pulsador como un switch.

Primero **almacenamos en ``push_lee`` la lectura que se le hace al pulsador**, ahora escribiremos un ``if()`` **en el cual tendremos dos condiciones unidas por un ``AND`` o sea un ``&&``**, la primera condición nos dice que al estado de ``push_lee`` debe ser uno y se hace la comparación además de que este estado debe ser verdadero y esto se cumple cuando presionamos el pulsador, la segunda condición dice que el ``estadoAnterior`` debe ser cero y esto es verdad ya que al principio nosotros le dimos un valor de cero, después tiene una operación muy interesante la cual es ``estadoLed = 1 – estadoLed``, esta se explicará más adelante.

Después dentro del ``if()`` viene un ``delay()``, **es un pequeño tiempo llamado antirrebote y es el tiempo en que tardamos presionando el pulsador**, al terminar este ``if()`` se le asigna a la variable ``estadoAnterior`` el valor de ``push_lee``.

Ahora bien, explicaremos la operación ``estadoLed = 1 – estadoLed``, **como el pulsador están en modo _pull-down_ al presionar nosotros el pulsador el valor de la variable ``push_lee`` cambia a uno**, después entra al ``if()`` donde las dos condiciones se evalúan y se encuentran verdaderas ya que se cumple la primera al presionar el pulsador y la segunda se cumple pues le dimos el valor de cero, por consiguiente entra al ``if()`` donde tenemos la operación ``estadoLed = 1 – estadoLed``.

Como la variable ``estadoLed`` tiene valor cero porque así lo hemos puesto al principio entonces tenemos que ``estadoLed = 1 – 0``, eso nos da el valor de **uno** en ``estadoLed``, y ahora en la variable ``estadoAnterior`` fuera del ``if()`` tiene un valor **cero** ya que el valor de uno lo toma únicamente cuando presionamos el pulsador y cuando se suelta toma el valor de cero nuevamente, después de esto entra el segundo ``if()``, como el ``estadoLed`` vale uno y no se ha cambiado este valor permanece en ese ``if() `` y prende el led hasta que se vuelva a presiona el pulsador cambiará de estado porque ahora se tendrá: ``estadoLed = 1 – 1``, que es **cero** y entra en el ``else`` ya que no se cumple la primera condición y se apaga el led, y así es como se hace para que un pulsador funcione como switch, como ya se mencionó esto no sirve solo para pulsadores, sino para muchas más aplicaciones que se verán más adelante.


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTk2Mzg5OTgyMSwtMTQwMjM1MDk2NSwxMD
QyNTcxMDk3LC0xOTkwNzkwODU1XX0=
-->