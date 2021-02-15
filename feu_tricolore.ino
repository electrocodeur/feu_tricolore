int ledv = 5;
int ledo = 6;
int ledr = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledv, OUTPUT);
  pinMode(ledo, OUTPUT);
  pinMode(ledr, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledv, HIGH);
  digitalWrite(ledo, LOW);
  digitalWrite(ledr, LOW);
  delay(5000);
  digitalWrite(ledv, LOW);
  digitalWrite(ledo, HIGH);
  digitalWrite(ledr, LOW);
  delay(5000);
  digitalWrite(ledv, LOW);
  digitalWrite(ledo, LOW);
  digitalWrite(ledr, HIGH);
  delay(5000);
}
