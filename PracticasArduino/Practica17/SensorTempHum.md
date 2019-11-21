# Sensor de temperatura y humedad DHT11 y DHT22

Los sensores DHT11 y DHT22 son sensores digitales de Temperatura y Humedad, fáciles de implementar con cualquier microcontrolador. Utiliza un sensor capacitivo de humedad y un termistor para medir el aire circundante y solo un pin para la lectura de los datos. Tal vez la desventaja de estos es la velocidad de las lecturas y el tiempo que hay que esperar para tomar nuevas lecturas (nueva lectura después de 2 segundos), pero esto no es tan importante puesto que la Temperatura y Humedad son variables que no cambian muy rápido en el tiempo.

## DHT11
Este sensor trabaja con un rango de medición de temperatura de 0 a 50 °C con precisión de ±2.0 °C y un rango de humedad de 20% a 90% RH con precisión de 4% RH. Los ciclos de lectura debe ser como mínimo 1 o 2 segundos.
![](https://components101.com/sites/default/files/component_pin/DHT11%E2%80%93Temperature-Sensor-Pinout.jpg)

## DHT22
El rango de medición de temperatura es de -40°C a 80 °C con precisión de ±0.5 °C y rango de humedad de 0 a 100% RH con precisión de 2% RH, el tiempo entre lecturas debe ser de 2 segundos.
![](data:image/jpeg;base64,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)


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

void **setup**() {
  **Serial**.begin(9600);
  **Serial**.println("Iniciando...");
  dht.begin();
}
void **loop**() {
  delay(2000);
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
}
``` 

## Código #2
### **Incorporando el DHT11/DHT22 en procesos rápidos.**

Un problema muy común es que al hora de incluir el ejemplo anterior a nuestro proyecto debido a la pausa de los 2 segundos, todo nuestro proyecto también se vuelve lento, incluso podría afectar algunas funcionalidad de nuestro proyecto. Esto porque cada bucle demoraría 2 segundos, tiempo demasiado grande para algunos procesos.

La solución es usar la función millis() de Arduino, el cual nos da el tiempo en milisegundos desde que empieza a ejecutarse el código.

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
  if(millis()-tiempoUltimaLectura>2000)
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
      tiempoUltimaLectura=millis(); //actualizamos el tiempo de la última lectura
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
eyJoaXN0b3J5IjpbMzUxMzA3NTkxXX0=
-->