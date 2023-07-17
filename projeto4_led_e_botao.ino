int pinoLed = 12;
int pinoBotao = 13;

void setup() {
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoBotao, INPUT_PULLUP); //input especial que faz a entrada ser sempre 1 e não 0, até o botão seja apertado
}

void loop() {
  if(digitalRead(pinoBotao) == LOW){
    digitalWrite(pinoLed, HIGH);

  }else{
    digitalWrite(pinoLed, LOW);
  }

}
