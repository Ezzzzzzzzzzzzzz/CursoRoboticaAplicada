# Sensor de Humedad

Un higrómetro de suelo FC-28 es  **un sensor que mide la humedad del suelo**. Son ampliamente empleados en sistemas automáticos de riego para detectar cuando es necesario activar el sistema de bombeo.

El FC-28 es un sensor sencillo que mide la humedad del suelo por la variación de su conductividad. No tiene la precisión suficiente para realizar una medición absoluta de la humedad del suelo, pero tampoco es necesario para controlar un sistema de riego.

El FC-28 se distribuye con una placa de medición estándar que permite obtener la medición  **como valor analógico o como una salida digital**, activada cuando la humedad supera un cierto umbral.

Los valores obtenidos  **van desde 0 sumergido en agua, a 1023 en el aire**  (o en un suelo muy seco). Un suelo ligeramente húmero daría valores típicos de 600-700. Un suelo seco tendrá valores de 800-1023.

La salida digital dispara cuando el valor de humedad supera un cierto umbral, que ajustamos mediante el potenciómetro. Por tanto,  **obtendremos una señal LOW cuando el suelo no está húmedo, y HIGH cuando la humedad supera el valor de consigna**.

El valor concreto dependerá del tipo de suelo y la presencia de elementos químicos, como fertilizantes. Además, no todas las plantas requieren la misma humedad, por lo que lo mejor es que hagáis una pequeña calibración en el terreno real.

![](https://www.luisllamas.es/wp-content/uploads/2015/12/sensor-humedad-suelo-FC-28.png)

## Conexión
![](http://www.madnesselectronics.com/wp-content/uploads/2016/08/circuito-sensor.png)

## Referencia del sensor
![](https://www.luisllamas.es/wp-content/uploads/2015/12/arduino-sensor-humedad-suelo-FC-28-esquema.png)

## Código #1
```c
const int sensorPin = A0;

void setup() {
   Serial.begin(9600);
}
void loop() 
{
   int humedad = analogRead(sensorPin);
   Serial.print(humedad);
  
   if(humedad < 500)
   {
      Serial.println("Encendido");  
      //hacer las acciones necesarias
   }
   delay(1000);
}
```
## Código #2
Si estamos empleando la señal digital, empleamos una entrada digital para leer el estado. En el ejemplo mostramos un mensaje por la pantalla, pero igualmente en un caso real ejecutaríamos las acciones oportunas.

```c
const int sensorPin = 10;

void setup()
{
   Serial.begin(9600);
   pinMode(sensorPin, INPUT);
}
void loop()
{
   int humedad = digitalRead(sensorPin);

   //mandar mensaje a puerto serie en función del valor leido
   if (humedad == HIGH)
   {
      Serial.println("Encendido");   
      //aquí se ejecutarían las acciones
   }
   delay(1000);
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTIxMjMyODM5MDAsOTAwODU5MDgsNDY4OT
UwNzY1LDE5NDU5MTIyOCwtNjIzNzQ4MzYxXX0=
-->