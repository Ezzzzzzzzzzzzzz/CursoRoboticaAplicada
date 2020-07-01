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
 return;
}

void apago(){
 Serial.println("Apago...");
 return;
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbNTgyMjM0ODI5LC0xMTc2OTQ4MDI1LC0xOT
c4MzcwODNdfQ==
-->