# Luz de noche RGB controlable

Ya hemos aprendido cómo controlar las salidas digitales, cómo leer los botones sin rebote y cómo usar PWM para cambiar el brillo del LED. 

Con esas habilidades, ahora puede conectar un LED RGB y un botón sin rebote para alternar entre algunos colores para obtener una luz nocturna LED RGB controlable. Es posible mezclar colores con un LED RGB cambiando el brillo de cada color. 

## Material 
> - Arduino
> - LED RGB 5mm **Cátodo común**
> - Resistencias de 220 Ohm's
> - Resistencias de 10 KOhm's
> - Pushbutton 
> - Protoboard
> - Jumpers
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/LamparaRGB.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/LamparaRGB.JPG)

## Código
```c
const int RLED = 11;	// Pin 11 LED Rojo
const int VLED = 9;	// Pin 10 LED Verde
const int ALED = 10;		// Pin 9 LED Azul
const int BOTON = 2;	// Pin 2 BOTON 

boolean estadoAntBoton = LOW;	// Estado anterior del Boton  
boolean actualEstBoton = LOW;	// Estado actual del Boton 

int ledMode = 0;	// Ciclo entre los estados del Boton

void setup()
{
  pinMode(RLED, OUTPUT);	// RLED como salida
  pinMode(VLED, OUTPUT); 	// VLED como salida
  pinMode(ALED, OUTPUT); 	// ALED como salida
  pinMode(BOTON, INPUT); 	// BOTON como entrada
}

void loop()
{
  actualEstBoton = retorno(estadoAntBoton);	// Leer el estado de retorno 
  
  if(estadoAntBoton == LOW && actualEstBoton == HIGH)	// Si el BOTON es presionado
  {
    ledMode++;	// Incrementa el valor 
  }
  
  estadoAntBoton = actualEstBoton;		// Resetea el valor del boton 
  
  // Si ya has pasado atravez de las diferentes opciones 
  // resetea el contador a 0
  if(ledMode == 8)
    ledMode = 0;
  
  seleccionEstado(ledMode);	// Selecciona el estado del LED
} 

/*
 * Funcion de retorno
 * Se le da el estado previo del estado del boton,
 * y obtenemos de retorno el estado actual del boton 
 */
boolean retorno(boolean previo)
{
  boolean actual = digitalRead(BOTON);		// Leer el estado del boton 
  if(previo != actual)		// Si es diferente
  {
 	delay(5);				// Espera 5ms
    actual = digitalRead(BOTON);	// Lee de nuevo
  }
  return actual;		//retorna el valor actual
}

/*
 * Seleccion de Estado
 * Pasa un numero para que se ajuste el estado de el led deacuerdo a el
 */
void seleccionEstado(int modo)
{
  // ROJO
  if (modo == 1)
  {
    digitalWrite(RLED, HIGH);
    digitalWrite(VLED, LOW);
    digitalWrite(ALED, LOW);
  }
  // VERDE
  else if(modo == 2)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(VLED, HIGH);
    digitalWrite(ALED, LOW);
  }
  // AZUL
  else if(modo == 3)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(VLED, LOW);
    digitalWrite(ALED, HIGH);
  }
  // PURPURA (ROJO + AZUL)
  else if(modo == 4)
  {
    analogWrite(RLED, 127);
    analogWrite(VLED, 0);
    analogWrite(ALED, 127);
  }
  // VERDE AZULADO (AZUL + VERDE)
  else if(modo == 5)
  {
    analogWrite(RLED, 0);
    analogWrite(VLED, 127);
    analogWrite(ALED, 127);
  }
  // NARANJA (VERDE + ROJO)
  else if(modo == 6)
  {
    analogWrite(RLED, 255);
    analogWrite(VLED, 165);
    analogWrite(ALED, 0);
  }
  // BLANCO (VERDE + ROJO + AZUL)
  else if(modo == 7)
  {
    analogWrite(RLED, 255);
    analogWrite(VLED, 255);
    analogWrite(ALED, 255);
  }
  // APAGADO/OFF (modo == 0)
  else
  {
    analogWrite(RLED, 0);
    analogWrite(VLED, 0);
    analogWrite(ALED, 0);
  }
}
  
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTEzNzM1NTQ1MjAsNTQ4MDM0NDE3XX0=
-->