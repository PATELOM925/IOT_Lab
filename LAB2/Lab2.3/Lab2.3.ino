// C++ code
//
int ledRed = 8 ;
int ledGreen = 10;
int potPin = A1;

void setup()
{
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop()
{
  // As we are reading value of resistance from potentiometer,
  // We will store that value
  float value = analogRead(potPin);
  Serial.println(value);
  
  if (value<50){
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
  }
  else {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);

  }
  
}