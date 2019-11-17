# (PWM) Fade de un LED con un potenciometro

Ya se vio como aumentar o disminuir el brillo de un led con **PWM** y con el uso de una sentencia ``for()``, ahora lo haremos usando un **potenciómetro**, la explicación del circuito será muy simple y vaga ya que la mayoría de lo que se usa se vio en temas anteriores.

## Materiales
> - Arduino
> - LED 5mm 
> - Resistencia de 220 Ohm´s
> - Potenciometro de 10 kOhm's
> - Protoboard
> - Jumpers

## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica7/PWMPot.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica7/PWMPot.JPG)

## Código
```c 
#define LED 5
#define POT A1

int Brillo;
int potVal;

void setup()
{
  Serial.begin(9600);  // Monitor serial
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}
void loop()
{
  potVal = analogRead(POT);
  Brillo = potVal/4;
  Serial.print("Valor POT: ");
  Serial.print(potVal);
  Serial.print(" | Valor PWM: ");
  Serial.println(Brillo); 
  analogWrite(LED, Brillo);
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTExNTUwODk0NDMsMTc2NDQ4ODA1NCw5Nz
U2MzA2MTQsNzg0MDgzMjU0XX0=
-->