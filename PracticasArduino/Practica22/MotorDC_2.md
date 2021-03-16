# Uso y manejo de motores de DC

## Motores DC con Arduino

El uso de motores de DC requieren una forma de controlarlos, lo cual puede ser un transistor como vimos en control de cargas, el transistor puede manejar altos voltajes y corrientes, también si quiere un control un poco más preciso es necesario el uso de un **puente H**, existen dos puentes H muy usados; el *L293D* y el *L298N*, **el puente H a usar dependerá del voltaje y consumo de corriente de sus motores**, en este caso usaremos un motor reductor de **6 [v]** y **200 [mA]** pico, que es el común amarillo muy usado, a continuación se verá el puente H ya que el uso del transistor ya se vio en temas anteriores.

**En esta práctica se enseñará el uso y control de un motor DC con un puente H**, este puente H nos dará un poco de más control sobre el motor ya que podremos cambiarlo de dirección, lo cual se verá en la práctica además de modificar la velocidad del motor (PWM) pero esto se le deja al lector investigarlo. 

## Puente H L293D

Se recomienda leer como siempre la hoja de datos de este componente (*Datasheet*), pues allí contiene la información más importante, el voltaje y amperaje que soporta además de cómo usarlo, aquí se hará una pequeña descripción. 

El **puente H L293D** soporta **400mA por canal**, o sea **800mA en total y 1000mA pico, la lógica del puente H es de 5 voltios, este voltaje se conecta en el pin 1, 16 y 9**. 

La alimentación de los motores o sea el positivo se conecta en el **pin 9, los pines 4, 5, 12 y 13 van conectados a GND**, recuerde que GND es común así que se conectan tanto el GND del Arduino como el de la alimentación exterior, **en los pines 3 y 6 se conecta un motor, en los pines 11 y 14 se conecta un segundo motor y finalmente en los pines 2, 7 y también los pines 10 y 15 se conectan al microcontrolador**, esto es para mover el motor, más adelante en la práctica se verá más a fondo.

Es muy importante también considerar la tabla de verdad del puente H la cual se pone más abajo con un diagrama del L293D y su forma de conexión.

 ### Tabla de verdad
 
| 1A - 4A | 2A - 3A | Función |
| :--------: | :---------: | :------: |
| L | H | Gira hacia delante |
| H | L | Gira hacia atrás |

### Diagrama de conexión 
![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica22/Captura.JPG)


## Materiales
> - 1 Arduino
> - Motorreductor Amarillo 6 v
> - Fuente de poder 6 v, pueden ser 4 pilas AA
> - L293D
> - Resistencia de 10 kOhms
> - 2 Pulsadores de 4 pines
> - Protoboard 
> - Jumpers (cables) 
> - [https://www.tinkercad.com/](https://www.tinkercad.com/)
> - [Blockly@rduino](https://technologiescollege.github.io/Blockly-at-rduino/index.html)


## Circuito

![](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/PracticasArduino/Practica22/Motor_puenteH.JPG)


**Es muy importante que usted escriba el código para que pueda aprender correctamente y se vaya acostumbrando a la programación:**

## C ++
```c
//Definimos pines a usar
#define Motor_1 2
#define Motor_2 3

#define Pulsador_1 4
#define Pulsador_2 5

//Variables a usar
int pulsador_UR;
int pulsador_DR;

void setup() {
//Configuramos los pines como entrada o salida
pinMode(Motor_1, OUTPUT);
pinMode(Motor_2, OUTPUT);
pinMode(Pulsador_1, INPUT);
pinMode(Pulsador_2, INPUT);

//Iniciamos el motor en apagado
digitalWrite(Motor_1,LOW);
digitalWrite(Motor_2,LOW);
}

void loop() {
  pulsador_UR = digitalRead(Pulsador_1);
  pulsador_DR = digitalRead(Pulsador_2);
  
  if(pulsador_UR == HIGH){
    digitalWrite(Motor_1, HIGH);
    digitalWrite(Motor_2, LOW);  
  }
  if(pulsador_DR == HIGH){
    digitalWrite(Motor_1, LOW);
    digitalWrite(Motor_2, HIGH);  
  }
  if(pulsador_UR == LOW && pulsador_DR == LOW){
    digitalWrite(Motor_1, LOW);
    digitalWrite(Motor_2, LOW);  
  }
}
```

## Explicación 

El código es bastante fácil de entender si ha prestado atención y aprendido los temas anteriores. Se definen los pines que se usarán, utilizaremos dos pulsadores; cada uno para cambiar el movimiento del motor. En el *setup* se inicializan los pines, además de enviar un pulso bajo a los pines 2 y 3 para que no haya ninguna interferencia de ruido externo. En el *loop* tenemos tres sentencias **if**; en la primera si presionamos el primer pulsador el motor se moverá a un lado, eso lo hacemos usando el **digitalWrite** además aplicando la tabla de verdad del L293D vista anteriormente, en el segundo **if** cambiamos la dirección del motor, simplemente cambiando el valor del pulso que se envía al motor por los pines 2 y 3 como usted lo puede notar, y eso se ejecutará cuando presionemos el segundo pulsador. 
Lo interesante está en el tercer **if** pues tenemos una operación **“Y”** con sintaxis en programación **“&&”**, **esto implica que deben ser verdaderas las condiciones antes y después del “&&” para que se ejecuten las sentencias que están dentro del if,** se recomienda al lector que investigue la tabla de verdad de la operación conjunción, bueno, esto quiere decir que ambos pulsadores no deben presionarse para que el motor esté apagado, o sea deben enviar un **LOW**, si una de estas condiciones no se cumple no entra al **if.**
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTM2OTE0NDY5OSwyMDAwODU3NTIyLDQ3Mj
cwMDc4MCwtMTM5ODI3MDY4MF19
-->