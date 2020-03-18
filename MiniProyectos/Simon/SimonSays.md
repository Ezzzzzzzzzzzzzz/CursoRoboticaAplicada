# Simón Dice
**Simon**  es un juego  [electrónico](https://es.wikipedia.org/wiki/Electr%C3%B3nica "Electrónica")  creado por  [Ralph Baer](https://es.wikipedia.org/wiki/Ralph_Baer "Ralph Baer")  y Howard J. Morrison en  [1978](https://es.wikipedia.org/wiki/1978 "1978"). Tuvo un gran éxito durante los  [80](https://es.wikipedia.org/wiki/A%C3%B1os_1980 "Años 1980"). Tiene forma de disco, en una de sus caras se puede ver cuatro cuadrantes, cada uno con un color: verde, rojo, azul y amarillo en su versión original. Su nombre se debe por el conocido juego tradicional del mismo nombre:  [Simón dice](https://es.wikipedia.org/wiki/Sim%C3%B3n_dice "Simón dice"), de donde se inspira.

![](https://media.giphy.com/media/HtuAZacO8buvu/giphy.gif)

El juego de forma aleatoria va iluminando los cuadrantes de colores, y a la vez que se ilumina cada cuadrante emite un sonido propio. Después de esperar, el usuario debe ir introduciendo la secuencia mostrada en el orden correcto, ayudándose de su memoria visual y sonora. Si lo consigue, éste responderá con una secuencia más larga, y así sucesivamente. Si falla, el usuario debe volver a empezar. Los distintos niveles de dificultad van aumentando la velocidad de la secuencia a repetir.

## Materiales
> - 1 Arduino
> - LED Azul 5 mm
> - LED Rojo 5 mm
> - LED Amarillo 5 mm
> - LED Verde 5 mm
> - 4 Resistencias de 220 Ohm's
> - 4 Resistencias de 10 kOhm's
> - Protoboard 
> - Jumpers (cables) 
> - Buzzer (Bocina)
## Circuito
![https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MiniProyectos/Simon/SimonS.JPG](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/MiniProyectos/Simon/SimonS.JPG)

## Código
```c
//#include "pitches.h"

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
 
//posiciones que ocuparan en los vectores
//los colores de los botones se corresponden con los de los leds.
#define LEDROJO 0
#define LEDAZUL 1
#define LEDVERDE 2
#define LEDAMARILLO 3
#define NUMLEDS 4 //Cantidad de leds y botones a usar, obviamente que tienen que coincidir.
#define TOTAL 32 //Nivel maximo que se puede alcanzar.

//pines de los botones y leds(rojo, azul, verde, amarillo) En ese orden!
int leds[NUMLEDS] =    {2, 4, 6, 8};
int botones[NUMLEDS] = {3, 5, 7, 9};
int buzz = 10;

//vector que contendrá la secuencia de la partida actual
int partida[TOTAL], nivelActual = 0, nivelIndice = 0;

// variable que contendra el boton pulsado en determinada jugada.
int jugada = 0;

//mientras estamos en una partida, nuevoJuego es 0, es verdadero cuando se pierde o es la primer partida.
int nuevoJuego=1;

//variables para una cancion sola
// notes in the melody:
int melody[] = {
NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
4, 8, 8, 4, 4, 4, 4, 4
};

void setup() 
{
  int i;
  //se definen los pines de salida y entrada, 
  for (i=0; i<NUMLEDS; i++)
  {
    pinMode(leds[i], OUTPUT);
    pinMode(botones[i], INPUT);
  }    
  
  // se define el pin de buzzer y abajo se genera una semilla para 
  //generar la partida, con valores aleatorios.
  pinMode(buzz, OUTPUT);
  randomSeed(analogRead(0));  
  Serial.begin(9600);
}

void loop() 
{        
    //Si es un nuevoJuego, o sea, se reinicia el programa, o se acaba de perder.       
    if (nuevoJuego)
    {
      llenarPartida();  
      nivelActual=0;
      nuevoJuego = 0;            
      ejecutarMelodia();
    }
    fxBarrido(30, 2);
    mostrarPartida(nivelActual, 300);

    //loop donde se leen los botones de una secuencia (jugada), y se compara con el valor
    //en la posicion correspondiente del vector. 
    //se sale si no coinciden o si se alcanzo el nivel maximo... esto ultimo, imposible XD!
    while (!nuevoJuego && nivelIndice<=nivelActual) 
    {
      Serial.println("leyendo botones");
      Serial.println(partida[nivelIndice]);
      jugada = leerBotones();
      Serial.println(jugada);
      encender(jugada);
      delay(250);  
      apagar(jugada);    
      
      //revisa si no perdiste, si no coincide la jugada con el valor en la partida, nuevoJuego=1
      if (partida[nivelIndice] != jugada)
      {       
        Serial.println("Game Over");
        Serial.print("nivel ");
        Serial.println(nivelActual);
        nuevoJuego = 1;  
        fxBaliza(300, 4);               
      }   
      else
      { 
        nivelIndice++; 
        delay(250);                     
      }
    }                  
    nivelIndice = 0;
    nivelActual++;
}

//enciende un solo led, al usar las constantes definidas arriba, podemos decir "encender(LEDVERDE)"  
int encender(int led)
{
    digitalWrite(leds[led], 1);
}

//lo mismo pero para apagar
int apagar(int led)
{
    digitalWrite(leds[led], 0);
}

//lo mismo, pero para encender todos los leds declarados al comienzo.
void encenderTodos(){
  int i;
  for (i=0; i<NUMLEDS; i++)
  {
    digitalWrite(leds[i], 1);
  }  
}

//se entiende no?
void apagarTodos()
{
  int i;
  for (i=0; i<NUMLEDS; i++)
  {
    digitalWrite(leds[i], 0);
  }
}

//Efecto de barrido con los leds, de izq a derecha y de vuelta.
//se le pasa la velocidad (demora), 
//y la cant de veces que se repetira la animacion.
void fxBarrido(int demora, int repeticiones)
{
  int i, j;
  apagarTodos();
  for (i=0; i<=repeticiones; i++)
  {
      for (j=0; j<NUMLEDS; j++)
      {
        encender(j);
        if (j != 0)
        {
            apagar (j-1);            
        }
        delay(demora);
      }  
      for (j=NUMLEDS-2; j>=0; j--)
      {    
        encender(j);
        apagar(j+1);
        delay(demora);    
      }
  }
  apagarTodos();
}

//efecto que se usa para el momento del Game Over.
void fxBaliza(int demora, int repeticiones)
{
    int i;
    for (i=0; i<=repeticiones; i++)
    {
        apagarTodos();
        delay(demora);
        encenderTodos();
        delay(demora);
    }
    apagarTodos();
    delay(demora);
}

//lleno el vector de la partida con valores aleatorios
void llenarPartida()
{  
    int i;
    for (i=0; i<TOTAL; i++)
    {
        partida[i] = random(NUMLEDS);  
    }
}

//Muestra el contenido del vector partida, mediante los leds correspondientes
//demora se podria usar para subir la dificultad del juego, al mostrar mas rapido la secuencia.
void mostrarPartida(int hasta, int demora)
{
  int i;
  for (i=0; i<=hasta; i++)
  {
    delay(demora);
    encender(partida[i]);
    delay(demora);
    apagar(partida[i]);
    delay(demora);
  }  
}

//Lee los botones, el primero que se presione, devuelve el valor de ese boton
int leerBotones()
{
  int flag = 0, btn;
  while (!flag)
  {    
    if(digitalRead(botones[LEDROJO]) && !flag)
    {
      flag = 1;
      btn = LEDROJO;
    }
    if(digitalRead(botones[LEDVERDE]) && !flag)
    {
      flag = 1;
      btn = LEDVERDE;
    }
    if(digitalRead(botones[LEDAZUL]) && !flag)
    {
      flag = 1;
      btn = LEDAZUL;
    }
    if(digitalRead(botones[LEDAMARILLO]) && !flag)
    {
      flag = 1;
      btn = LEDAMARILLO;
    }    
  }
 return btn;
}

void ejecutarMelodia()
{
 // iterate over the notes of the melody:
 for (int thisNote = 0; thisNote < 8; thisNote++) 
    {
     // to calculate the note duration, take one second
     // divided by the note type.
     //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
     int noteDuration = 1000 / noteDurations[thisNote];
     tone(buzz, melody[thisNote], noteDuration);
    
     // to distinguish the notes, set a minimum time between them.
     // the note's duration + 30% seems to work well:
     int pauseBetweenNotes = noteDuration * 1.30;
     delay(pauseBetweenNotes);
     // stop the tone playing:
     noTone(buzz);
    }
}
```



<!--stackedit_data:
eyJoaXN0b3J5IjpbMjIxNjY0Njg3LDkzMDE5MTQ0Nl19
-->