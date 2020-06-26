# Leer una entrada Analógica

En esta práctica leeremos un potenciómetro e imprimiremos los datos, esto ya se vio en la parte se sensores analógicos así que será muy fácil de entender, abajo se muestra el código, material y explicación de la práctica.

## Material 
> - Arduino
> - Potenciometro 10kOhm's
> - Protoboard
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/POT.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MonitorSerial/POT.JPG)

## Código
```c
#define POT A0
int valor;

void setup() {
Serial.begin(9600);
 pinMode(POT,INPUT);
}
void loop() {
 valor = analogRead(POT);
 Serial.print("El valor es: ");
 Serial.println(valor);
 delay(50);
}
```
## Explicación

El código ya se vio en los temas anteriores, aquí solo se explicarán las partes importantes. En la parte del ``setup()`` donde se inicializa todo lo necesario, se usa ``Serial.begin(9600)``, como  bien esto ya se mencionó para inicializar y cargar la comunicación serial a la velocidad de **9600 baudios**. Ya en el ``loop()`` usamos ``Serial.print()``, esta función la utilizamos para imprimir un mensaje o enviar los datos por medio del serial, en este caso al monitor serie, después usamos ``Serial.println()`` para imprimir los valores del potenciómetro, la única diferencia con **print** y **println** es que **println también envía un enter**. 

Ahora abriremos el monitor serial, verán que abajo dice 9600 baudio, recordemos que al principio del tema se mencionó que ambos extremos deben de tener la misma velocidad, al poner ``Serial.begin()`` en el ``setup()`` se configura el Arduino y su microcontrolador a la velocidad de 9600, ahora el otro extremo será la computadora en este caso se escoge nuevamente 9600 baudios en el monitor serial. 
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTEzNzQxMjQ5OTJdfQ==
-->