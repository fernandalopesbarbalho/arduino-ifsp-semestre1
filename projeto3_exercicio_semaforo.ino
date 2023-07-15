int pinoLedVerde = 11;
int pinoLedAmarelo = 12;
int pinoLedVermelho = 13;

int tempo10 = 10000;
int tempo2 = 2000;

void setup() {
  pinMode(pinoLedVerde, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);

}

void loop() {
  digitalWrite(pinoLedVerde, HIGH);
  delay(tempo10);
  digitalWrite(pinoLedVerde, LOW);
  digitalWrite(pinoLedAmarelo, HIGH);
  delay(tempo2);
  digitalWrite(pinoLedAmarelo, LOW);
  digitalWrite(pinoLedVermelho, HIGH);
  delay(tempo10);
  digitalWrite(pinoLedVermelho, LOW);

}
