# Ejercicios de funciones

Pretendemos escribir dos funciones **enciendo()** y **apago()** que describan por el monitor serial si el led conectado al Arduino esta encendido o apagado. 

## C ++
### Ejercicio 1

```c

#define Led 13

void setup() {
 Serial.begin(9600);
 pinMode(Led, OUTPUT);
}

void loop() {
 digitalWrite(Led, HIGH);
 enciendo();
 delay(1000);
 digitalWrite(Led, LOW);
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
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/capture1597695019953.png](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica8/capture1597695019953.png)


## C ++ 
### Ejercicio #2 

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
eyJoaXN0b3J5IjpbLTIyOTIwMzY2Miw2MTA3NTA1MCwtMTY1MT
MzNTk0MCwtMTY1MTMzNTk0MCwyMjUyMTE3OTAsLTExNzY5NDgw
MjUsLTE5NzgzNzA4M119
-->