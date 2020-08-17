# Ejercicios de funciones

Pretendemos escribir dos funciones **enciendo()** y **apago()** que describan por el monitor serial si el led conectado al Arduino esta encendido o apagado. 

## C ++
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

## Blockly@arduino


## C ++ /Ej #2/ 

```c
void  setup(){  
 Serial.begin(9600);  
}  
  
void  loop()  {  
 int i =  2;  
 int j =  3;  
 int k;  
  
 k = myMultiplyFunction(i, j);  // k now contains  6  
 Serial.println(k);  
 delay(500);  
}  
  
int myMultiplyFunction(int x,  int y){  
 int result;  
 result = x * y;  
 return result;  
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTA2MjQyNTQyNCwtMTY1MTMzNTk0MCwtMT
Y1MTMzNTk0MCwyMjUyMTE3OTAsLTExNzY5NDgwMjUsLTE5Nzgz
NzA4M119
-->