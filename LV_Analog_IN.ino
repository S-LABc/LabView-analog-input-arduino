#define IN_A A0

void setup() {
  pinMode(IN_A, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print(analogRead(IN_A));
  Serial.println();
  delay(50);
}
