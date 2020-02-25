# Sensor IR TCRT 5000

La práctica de sensores analógicos será censar con el sensor TCRT5000 el cual es un sensor infrarrojo, estos sensores **son usados en los seguidores de líneas para distinguir del color blanco y negro**.

Los valores de estos sensores nunca serán iguales aunque sean hechos por la misma empresa, un sensor puede dar el valor de **800 y otro de 900** cuando detecten el color blanco, aclaro que esto es un ejemplo, abajo se muestra el código, material y explicación de la práctica.

## Material
> - Arduino
> - Resistencia de 10 kOhm's
> - Resistencia de 220 Ohm's
> - TCR T5000
> - Jumpers
> - Protoboard

## Conexión
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/TCR.JPG](https://foto.askix.com/upload/7/17/717ad701e793e3ae8e0b64fb8dac51ca.jpg)

## Referencia del Sensor

![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/RefTCR.JPG](http://dyor.roboticafacil.es/wp-content/uploads/2017/02/tcrt5000-schema.jpg)

## Código
```c
#define TCRT A0

int valor;

void setup(){
 Serial.begin(9600);
 pinMode(TCRT, INPUT);
} 
void loop(){
 valor = analogRead(TCRT);
 Serial.print("Valor: ");
 Serial.print(valor);
 Serial.print("  | Color: ");
if(valor < 800){
 Serial.println("Blanco");
}
else{
Serial.println("Negro");
}
delay(500);
}
```

## Modulo IR TCRT 5000

## Conexión 
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/TCRT5000_01.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica15/TCRT5000_01.JPG)

## Código
```c
#define Led 13
#define ButtonPin 3

int val;

void setup(){
   pinMode(Led, OUTPUT);
   pinMode(ButtonPin, INPUT);
}

void loop(){
  val = digitalRead(ButtonPin);
    if(val == HIGH){
	  digitalWrite(Led, HIGH);
	}
	else{
	  digitalWrite(Led, LOW);
	}
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE0MDE5MzgwNzIsMzM3NDYxMTYxLDc5Mj
EwMjI4OSwxNTcyMTg3NjYzLDE1MzQxMTkzNzIsNzcyMjc5OTcz
LC05MTYxMjAxMywxMzEyODQwMzUzLC0xODk2MDA1NjY0LC0xNT
M2NjMyNjU5XX0=
-->