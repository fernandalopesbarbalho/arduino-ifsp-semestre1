int led = 13;
int led2 = 11;
int sensor = A0;
int valor_ldr = 0;
int buzzer = A1;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
valor_ldr = analogRead(sensor);

  if(valor_ldr > 511) {
   digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);
    tone(buzzer, 400, 500);

  } else {
      noTone(buzzer);
      digitalWrite(led, LOW);
      digitalWrite(led2, HIGH);
  }
}
