int p_buzzer = 13;

void setup() {
  pinMode(p_buzzer, OUTPUT);
}

void loop() {

  // 3 pontos (rápido)
  tone(p_buzzer, 4000,  50); //frequencia e tempo
  delay(200);
  noTone(p_buzzer); //parar
  delay(200);

  tone(p_buzzer, 4000, 50);
  delay(200);
  noTone(p_buzzer);
  delay(200);

  tone(p_buzzer, 4000, 50);
  delay(200);
  noTone(p_buzzer);
  delay(200);

  // 3 barras (longo)
  tone(p_buzzer, 4000, 1000);
  delay(200);
  noTone(p_buzzer);
  delay(200);

  tone(p_buzzer, 4000, 1000);
  delay(200);
  noTone(p_buzzer);
  delay(200);

  tone(p_buzzer, 4000, 1000);
  delay(200);
  noTone(p_buzzer);
  delay(200);

  // 3 pontos (rápido)
  tone(p_buzzer, 4000, 50);
  delay(200);
  noTone(p_buzzer);
  delay(200);

  tone(p_buzzer, 4000, 50);
  delay(200);
  noTone(p_buzzer);
  delay(200);

  tone(p_buzzer, 4000, 50);
  delay(200);
  noTone(p_buzzer);
  delay(200);

  delay(1500);
}
