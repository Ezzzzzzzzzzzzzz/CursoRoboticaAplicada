# Sensor de temperatura y humedad DHT11 y DHT22

Los sensores DHT11 y DHT22 son sensores digitales de Temperatura y Humedad, fáciles de implementar con cualquier microcontrolador. Utiliza un sensor capacitivo de humedad y un termistor para medir el aire circundante y solo un pin para la lectura de los datos. Tal vez la desventaja de estos es la velocidad de las lecturas y el tiempo que hay que esperar para tomar nuevas lecturas (nueva lectura después de 2 segundos), pero esto no es tan importante puesto que la Temperatura y Humedad son variables que no cambian muy rápido en el tiempo.

## DHT11
Este sensor trabaja con un rango de medición de temperatura de 0 a 50 °C con precisión de ±2.0 °C y un rango de humedad de 20% a 90% RH con precisión de 4% RH. Los ciclos de lectura debe ser como mínimo 1 o 2 segundos.
![](https://components101.com/sites/default/files/component_pin/DHT11%E2%80%93Temperature-Sensor-Pinout.jpg)

## DHT22
El rango de medición de temperatura es de -40°C a 80 °C con precisión de ±0.5 °C y rango de humedad de 0 a 100% RH con precisión de 2% RH, el tiempo entre lecturas debe ser de 2 segundos.
![](https://www.espruino.com/refimages/DHT22_pins.jpg)


## Conexión DHT11
![](http://www.naylampmechatronics.com/img/cms/Blog/Tutorial%20DHT11%20y%20DHT22/conexion%20arduino%20y%20dht11.jpg)

## Conexión DHT22
![](http://www.naylampmechatronics.com/img/cms/Blog/Tutorial%20DHT11%20y%20DHT22/conexion%20arduino%20y%20dht22.jpg)

## Código
Usaremos la librería de adafruit, la cual lo pueden descargar desde el siguiente link:

[Libreria DHT](https://github.com/adafruit/DHT-sensor-library)

Con esta librería podemos realizar fácilmente la lectura de ambos sensores y no preocuparnos por el protocolo de comunicación entre Arduino y los sensores.
Realizar la lectura del sensor es simple, el siguiente ejemplo muestra como leer la humedad, temperatura en Celsius y en Fahrenheit 

```c
#include "DHT.h"

#define DHTPIN 2     // Pin donde está conectado el sensor

//#define DHTTYPE DHT11   // Descomentar si se usa el DHT 11
#define DHTTYPE DHT22   // Sensor DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando...");
  dht.begin();
}
void loop() {
  delay(2000);
  float h = dht.readHumidity(); //Leemos la Humedad
  float t = dht.readTemperature(); //Leemos la temperatura en grados Celsius
  float f = dht.readTemperature(true); //Leemos la temperatura en grados Fahrenheit
  //--------Enviamos las lecturas por el puerto serial-------------
  Serial.print("Humedad ");
  Serial.print(h);
  Serial.print(" %t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial**.print(" *C ");
  **Serial**.print(f);
  **Serial**.println(" *F");
}
``` 

## Código #2
### **Incorporando el DHT11/DHT22 en procesos rápidos.**

Un problema muy común es que al hora de incluir el ejemplo anterior a nuestro proyecto debido a la pausa de los 2 segundos, todo nuestro proyecto también se vuelve lento, incluso podría afectar algunas funcionalidad de nuestro proyecto. Esto porque cada bucle demoraría 2 segundos, tiempo demasiado grande para algunos procesos.

La solución es usar la función `millis()` de Arduino, el cual nos da el tiempo en milisegundos desde que empieza a ejecutarse el código.

A continuación se muestra como incorporar el sensor a nuestro proyecto sin necesidad de hacer la pausa de 2 segundos.

```c
#include "DHT.h"

#define DHTPIN 2     // Pin donde está conectado el sensor

//#define DHTTYPE DHT11   // Descomentar si se usa el DHT 11
#define DHTTYPE DHT22   // Sensor DHT22

DHT dht(DHTPIN, DHTTYPE);

void **setup**() {
  **Serial**.begin(9600);
  **Serial**.println("Iniciando...");
  dht.begin();
  pinMode(13, OUTPUT);
}
long tiempoUltimaLectura=0;; //Para guardar el tiempo de la última lectura
void **loop**() {
  //---------Lectura del Sensor--------------------------
  if(millis()- - tiempoUltimaLectura> > 2000)
  {    
      float h = dht.readHumidity(); //Leemos la Humedad
      float t = dht.readTemperature(); //Leemos la temperatura en grados Celsius
      float f = dht.readTemperature(true); //Leemos la temperatura en grados Fahrenheit
      //--------Enviamos las lecturas por el puerto serial-------------
      **Serial**.print("Humedad ");
      **Serial**.print(h);
      **Serial**.print(" %t");
      **Serial**.print("Temperatura: ");
      **Serial**.print(t);
      **Serial**.print(" *C ");
      **Serial**.print(f);
      **Serial**.println(" *F");
      tiempoUltimaLectura= = millis(); //actualizamos el tiempo de la última lectura
  }
  //----Fin de la lectura---------------------------
  
  //---------Resto del código  del proyecto--------
  //...
  //...
  //...
  digitalWrite(13, HIGH); 
  delay(100);              
  digitalWrite(13, LOW);    
  delay(100);   
  //-------------------------------

}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTU5MzcwMjE2OCwyMDkxMTcxNzg4LDM1MT
MwNzU5MV19
-->