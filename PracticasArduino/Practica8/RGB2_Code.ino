#define pinRed 11
#define pinGreen 9
#define pinBlue 10
#define potRed A2
#define potBlue A1
#define potGreen A0


int potValR = 0;
int potValG = 0;
int potValB = 0;

void setup()
{
  pinMode(potRed, INPUT);
  pinMode(potGreen, INPUT);
  pinMode(potBlue, INPUT);
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
}

void loop()
{
  potValR = map(analogRead(potRed), 0, 1023, 0, 255);
  potValG = map(analogRead(potGreen), 0, 1023, 0, 255);
  potValB = map(analogRead(potBlue), 0, 1023, 0, 255);
  
  color(potValR, potValG, potValB);
  delay(10);
}


// Función para generar colores
void color(int red, int green, int blue){
  analogWrite(pinRed, red);
  analogWrite(pinGreen, green);
  analogWrite(pinBlue, blue);
}
