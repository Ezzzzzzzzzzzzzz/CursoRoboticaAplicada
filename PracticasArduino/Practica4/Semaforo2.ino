#define Rojo1 7
#define Amarillo1 6
#define Verde1 5
#define Rojo2 4
#define Amarillo2 3
#define Verde2 2

int tiempo = 3000;
int parpadeo = 600;

void setup()
{
  pinMode(Rojo1, OUTPUT);
  pinMode(Amarillo1, OUTPUT);
  pinMode(Verde1, OUTPUT);
  pinMode(Rojo2, OUTPUT);
  pinMode(Amarillo2, OUTPUT);
  pinMode(Verde2, OUTPUT);
}

void loop()
{
  digitalWrite(Verde1, HIGH);
  digitalWrite(Rojo2, HIGH);
  delay(tiempo);
  digitalWrite(Verde1, LOW);
 
  digitalWrite(Amarillo1, HIGH);
  delay(tiempo);
  digitalWrite(Amarillo1, LOW);
  delay(parpadeo);
  digitalWrite(Amarillo1, HIGH);
  delay(parpadeo);
  digitalWrite(Amarillo1, LOW);
  delay(parpadeo);
  digitalWrite(Amarillo1, HIGH);
  delay(parpadeo);
  digitalWrite(Amarillo1, LOW);
  delay(parpadeo);
  digitalWrite(Amarillo1, HIGH);
  delay(parpadeo);
  digitalWrite(Amarillo1, LOW);
  delay(parpadeo);
  digitalWrite(Rojo2, LOW);
  
  digitalWrite(Rojo1, HIGH);
  digitalWrite(Verde2, HIGH);
  delay(tiempo);
  digitalWrite(Verde2, LOW);
  
  digitalWrite(Amarillo2, HIGH);
  delay(tiempo);
  digitalWrite(Amarillo2, LOW);
  delay(parpadeo);
  digitalWrite(Amarillo2, HIGH);
  delay(parpadeo);
  digitalWrite(Amarillo2, LOW);
  delay(parpadeo);
  digitalWrite(Amarillo2, HIGH);
  delay(parpadeo);
  digitalWrite(Amarillo2, LOW);
  delay(parpadeo);
   digitalWrite(Amarillo2, HIGH);
  delay(parpadeo);
  digitalWrite(Amarillo2, LOW);
  delay(parpadeo);
  digitalWrite(Rojo1, LOW);
}
