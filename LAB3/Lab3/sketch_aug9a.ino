// C++ code
//
//Arduino doesnt support servo motor
// so we use library

#include<Servo.h>

int spin = 7;
int spos = 0;
//intial servo motor position set on 0 degree

//we can use servo class present in this servo module
// by creating servo class's object 

Servo s; //Servo class's object s

void setup()
{
  Serial.begin(9600);
  pinMode(spin, OUTPUT);
  // Attaching servo motor with arduino using methods in Servo Class
  s.attach(spin); //Here servo motor got attached with arduino's 7th pin.  
}

void loop()
{
  //here arduino digitalwrite funch wont work, will have to use servo's functions
  //s.write(spos); //moving motor to 90 degrees
  //Serial.println(spos);
  
  while(Serial.available() == 0){}
  spos = Serial.parseInt();
  s.write(spos);
  Serial.println(spos);
}