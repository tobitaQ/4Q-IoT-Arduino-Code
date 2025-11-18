// LED test2

const int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  Serial.println("HIGH");
  delay(2000);
  digitalWrite(LED, LOW);
  Serial.println("LOW");
  delay(2000);
}
