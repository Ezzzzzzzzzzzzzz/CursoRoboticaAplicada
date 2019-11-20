# Fotoresistencia LDR

Para entender como funciona este circuito y el programa que corre en la tarjeta Arduino debemos conocer:

-   **[Fotoresistencia LDR](https://es.wikipedia.org/wiki/Fotorresistor):**  **Componente cuya resistencia varía sensiblemente con la cantidad de luz percibida**. La relación entre la intensidad lumínica y el valor de la resistencia no es lineal. Se utiliza ampliamente para medir la iluminación en dispositivos electrónicos que requieren un precio accesible. 

	Su comportamiento es el siguiente:
    - **Mas luz** = menor resistencia eléctrica
    - **Menos luz** = mayor resistencia eléctrica
    
- **[Conversión Analógico-Digital (ADC):](https://es.wikipedia.org/wiki/Conversi%C3%B3n_anal%C3%B3gica-digital)** **Es el proceso mediante el cual se convierte una magnitud física como un voltaje, corriente, temperatura, etc. en un número binario (o señal digital)** con el propósito de facilitar su manejo por circuitos digitales como un CPU. El Arduino realiza este proceso para conocer la cantidad de luz percibida por el LDR y poder procesarla numéricamente.

## Materiales 

> - Arduino UNO R3
> - Fotoresistor (LDR)
> - Resistencia de 10 Kohm 1/4 W
> - Resistencias de 220 Ohm's
> - Protoboard
> - Jumpers

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica14/Fotoresistencia.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica14/Fotoresistencia.JPG)

## Código
```c
#define FotoRes A0 // Fotoresistencia conectada al pin A0
#define Led 9 // Led conectado al pin 9

int SensorValue = 0; // Variable global

void setup()
{
  Serial.begin(9600); // Inicializamos el monitor serial
  pinMode(FotoRes, INPUT); //Fotoresistencia configurada como entrada
  pinMode(Led, OUTPUT); // Led configurado como salida
}

void loop()
{
  
  SensorValue = map(analogRead(FotoRes), 0, 1023, 0, 255); // Mapeamos el valor en la entrada analogica FotoRes
  Serial.println(SensorValue); // Imprimimos el valor de SensorValue
  analogWrite(Led, SensorValue); // Le pasamos el valor de SensorValue a la variable Led
  delay(100); 
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbNzc0NDc1MzQzLDEwMTE3Nzg0ODVdfQ==
-->