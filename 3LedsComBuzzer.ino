int led1 = 2;
int led2 = 4;
int led3 = 6;
int buzzer = 8;
int tempo = 100000;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void tocar(){
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
}

void loop()
{
  // LED 1
  digitalWrite(led1, HIGH);
  tocar();
  delay(tempo);
  digitalWrite(led1, LOW);

  // LED 2
  digitalWrite(led2, HIGH);
  tocar();
  delay(tempo);
  digitalWrite(led2, LOW);

  // LED 3
  digitalWrite(led3, HIGH);
  tocar();
  delay(tempo);
  digitalWrite(led3, LOW);

  // TODOS
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  tocar();
  delay(tempo);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}