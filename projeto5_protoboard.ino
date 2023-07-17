int pino_led = 13;
int pino_led2 = 11;

void setup() {
  pinMode(pino_led, OUTPUT);
  pinMode(pino_led2, OUTPUT);

}

void loop() {
  digitalWrite(pino_led, HIGH);
  digitalWrite(pino_led2, LOW);
  delay(300);
  digitalWrite(pino_led, LOW);
  digitalWrite(pino_led2, HIGH);
  delay(300);

}
