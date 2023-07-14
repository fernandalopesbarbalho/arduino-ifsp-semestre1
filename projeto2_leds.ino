int pinoLed = 13;
int pinoLed2 = 12;

void setup() {
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoLed2, OUTPUT);

}

void loop() {
  digitalWrite(pinoLed, HIGH);
  digitalWrite(pinoLed2, LOW);
  delay(1000);
  digitalWrite(pinoLed, LOW);
  digitalWrite(pinoLed2, HIGH);
  delay(1000);
 
}
