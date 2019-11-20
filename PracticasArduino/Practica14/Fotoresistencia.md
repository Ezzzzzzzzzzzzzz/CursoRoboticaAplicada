# Fotoresistencia LDR

Para entender como funciona este circuito y el programa que corre en la tarjeta Arduino debemos conocer:

-   **[Fotoresistencia LDR](https://es.wikipedia.org/wiki/Fotorresistor):**  **Componente cuya resistencia varía sensiblemente con la cantidad de luz percibida**. La relación entre la intensidad lumínica y el valor de la resistencia no es lineal. Se utiliza ampliamente para medir la iluminación en dispositivos electrónicos que requieren un precio accesible. 

	Su comportamiento es el siguiente:
    - **Mas luz** = menor resistencia eléctrica
    - **Menos luz** = mayor resistencia eléctrica
    - 
- **[Conversión Analógico-Digital (ADC):](https://es.wikipedia.org/wiki/Conversi%C3%B3n_anal%C3%B3gica-digital)** **Es el proceso mediante el cual se convierte una magnitud física como un voltaje, corriente, temperatura, etc. en un número binario (o señal digital)** con el propósito de facilitar su manejo por circuitos digitales como un CPU. El Arduino realiza este proceso para conocer la cantidad de luz percibida por el LDR y poder procesarla numéricamente.

## Materiales 

> - Arduino UNO R3
> - Fotoresistor (LDR)
> - Resistencia de 10 Kohm 1/4 W
> - Resistencias de 220 Ohm's
> - Protoboard
> - Jumpers

## Conexión


<!--stackedit_data:
eyJoaXN0b3J5IjpbMTAxMTc3ODQ4NV19
-->