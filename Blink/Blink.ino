#define Delay_1s 1000

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(Delay_1s);
  digitalWrite(13, LOW);   
  delay(Delay_1s);
}
