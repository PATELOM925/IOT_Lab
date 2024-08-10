// Lab2.2
// https://www.tinkercad.com/things/iWH0lnP1NGL-lab22iotlab21bcp094

// C++ code
//

//In our ultrasonic sensor we have transmitter and receiver both
//so trigpin acts as transmitter.
//and echopin acts as a receiver.

int ledPin = 12;
int buzz = 7;
int trigpin = 3;
int echopin = 2;
int duration;

void setup()
{
  Serial.begin(9600); //baud rate- default-9600
  pinMode(ledPin, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}


void loop()
  
{
  //generating ultra sonic sound (0 - no sound(LOW), 1-produces sound(HIGH)
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  // Turn on echo pin
  duration = pulseIn(echopin,HIGH); //receives echopin/signal when it's in high mode
  //When received it calculates the duration itself.
  //Serial.println(duration);
  
  // Convert this duration into distance
  // speed of sound = 343m/s (converted to meter/microseconds)
  float distance  = (duration/2.)*0.000343 ; //in meter
  Serial.println(distance);

  // turn on led and buzer if distance>1meter
  
  
  if(distance<1.00){
  	digitalWrite(ledPin, HIGH);
  	digitalWrite(buzz, HIGH);
  }
  else{
  	digitalWrite(ledPin, LOW);
  	digitalWrite(buzz, LOW);
  }
  //delay(1000); // Wait for 1000 millisecond(s)
}