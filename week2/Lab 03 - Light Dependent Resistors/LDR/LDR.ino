const int ledPin = 11;

const int ldrPin = A0;

int val = 0;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);
val = ldrStatus-400;
if(val<1){
  val = 1;  
  };
analogWrite(ledPin,val);
//if (ldrStatus <= 600) {
//
//digitalWrite(ledPin, HIGH);
//
//Serial.print("Its DARK, Turn on the LED : ");
//
Serial.println(ldrStatus);
//
//} else {
//
//digitalWrite(ledPin, LOW);
//
//Serial.print("Its BRIGHT, Turn off the LED : ");
//
//Serial.println(ldrStatus);

//}

}
