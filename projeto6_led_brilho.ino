int ledPin = 9;
int brilho = 0;

void setup() {
  pinMode (ledPin, OUTPUT);

}

void loop() {
  while (brilho < 255){
    brilho++;
    analogWrite(ledPin, brilho);
    delay(20);
  }

  while (brilho > 0){
    brilho--;
    analogWrite(ledPin, brilho);
    delay(2);
  }
  
}