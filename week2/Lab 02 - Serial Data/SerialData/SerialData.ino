int val = 0;
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  val = analogRead(0);
  analogWrite(7,val);
}