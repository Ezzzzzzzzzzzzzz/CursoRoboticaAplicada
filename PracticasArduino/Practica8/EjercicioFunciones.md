# Ejercicio de funciones

Pretendemos escribir dos funciones **enciendo()** y **apago()** que describan por el monitor serial si el led conectado al Arduino esta encendido o apagado. 

```c
void setup() {
	Serial.begin(9600);
	pinMode(13, OUTPUT);
}
void loop() {
	digitalWrite(13, HIGH);
	enciendo();
	delay(1000);
	digitalWrite(13, LOW);
	apago();
	delay(1000);
}

void enciendo() {
	Serial.println("Enciendo...");
}

void apago(){
	Serial.println("Apago...");
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTM2MjMxMzU0NSwtMTE3Njk0ODAyNSwtMT
k3ODM3MDgzXX0=
-->