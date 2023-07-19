int ledPin = 13;
int brilho = 0;

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
    for(brilho = 0; brilho < 255; brilho++){
        analogWrite(ledPin, brilho);
        delay(2);
    }
    for(brilho = 255; brilho > 0; brilho--){
        analogWrite(ledPin, brilho);
        delay(2);
    }
}
