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

int brillo;
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
  Serial.println(brillo); 
  analogWrite(LED, brillo);
}
```

## Explicación
La explicación es bastante simple, se definieron los pines a usar, en este caso el **5** y **A1**, se creó una variable para almacenar los datos del potenciómetro ``POT``, en el ``setup()`` inicializamos los pines y cargamos el ``Serial.begin()`` para visualizar los datos.

En el ``loop()`` leemos los datos del potenciómetro y se almacenan en la variable ``potVal``, después con el uso del ``Serial.print()`` imprimimos esos valores. 

Y si se preguntarán, ¿por qué se divide entre 4?, es muy simple. Recuerden que la resolución del Arduino para el **ADC** es de **10 bits** así que nos entregará un máximo de **1024 - 1**, pero la resolución del **PWM** es de **8 bits y acepta un valor máximo de 255**, así que **1023/4 = 255**, **por eso se divide entre 4 para obtener el valor máximo de la resolución del PWM** y es almacenado en la variable ``brillo``. 

En la función ``analogWrite()``, es donde enviaremos esos valores al **LED** para que aumente y disminuya su brillo cada por medio del potenciómetro.

**Ahora pueden mover el potenciómetro y podrán apreciar cómo cambia el brillo del led, además de visualizar los datos en el monitor serial.**

Con esto vemos cómo podemos manipular el **PWM** con sensores, en este caso un potenciómetro y como siempre esto es la base para proyectos más avanzados.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTkxOTcyMTA0NywxNzQ2Nzk3ODg4LDE3Nj
Q0ODgwNTQsOTc1NjMwNjE0LDc4NDA4MzI1NF19
-->