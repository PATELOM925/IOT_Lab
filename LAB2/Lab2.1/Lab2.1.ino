// C++ code
//

int ledPin = 7;
int b = 2; //buzzer


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(b,OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  digitalWrite(b, HIGH);
  delay(2000); // Wait for 2second(s)
  digitalWrite(ledPin, LOW);
  digitalWrite(b, LOW);
  delay(1000); // Wait for 1second(s)
}