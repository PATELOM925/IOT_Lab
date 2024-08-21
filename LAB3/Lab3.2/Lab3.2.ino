// C++ code
//
//Arduino doesnt support servo motor
// so we use library

//Potentiometer maps all the value between -0 to 1023 , whatever voltage you takes
#include<Servo.h>

int spin = 7;
int spos = 0;
int potpin = A5;
Servo s;
int readVal;
   
void setup()
{
  Serial.begin(9600);
  pinMode(spin, OUTPUT);
  pinMode(potpin,INPUT);
  s.attach(spin); 
}

void loop()
{
  readVal = analogRead(potpin);
  spos = map(readVal, 0,1023,0,180) ;  //storing map value of potentiometer's range 0 to 1023 to our decided potentiometer's resistance range that is 0 to 180 ohms
  // as we change the resistance through potentiometer , the motor will run
  s.write(spos);
  Serial.println("Potentio metere's Reading Value: ");
  Serial.println(readVal);
  Serial.println("Servo motor's Position ");
  Serial.println(spos);
  delay(500);
}
