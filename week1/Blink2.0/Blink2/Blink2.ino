void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(11, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(10, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(9, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(8, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(7, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(12, LOW);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(11, LOW);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(10, LOW);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(9, LOW);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(8, LOW);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(7, LOW);
  delay(200); // Wait for 200 millisecond(s)
}
