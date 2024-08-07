//Code for 1
int ledPin = 7; //any unique integer for your led, led is output mode. Thus in pinmode we will use this value '7' as output pin
void setup() {
  pinMode(ledPin,OUTPUT); // This pin will generate the output thrrough resistor and light up led
}

void loop() {
  // put your main code here, to run repeatedly indefinetly untill power is provided:
  //ON
  digitalWrite(ledPin,HIGH) //HIGH means setting voltage HIGH, so it lights up
  Serial.println('LED On');
  delay(500);

  //OFF
  digitalWrite(ledPin,LOW) //LOW means setting voltage LOW, so it stops
  Serial.println('LED Off');
  delay(500);

}

// -> function on top is used to push/upload code to arduino controller

// 0
// Without switch configuration
// Code: 
// int ledPin = 2;
// int btnPin  = 9;
// int btnStatus = 0;
// void setup() {
//   // put your setup code here, to run once:
//   pinMode(ledPin,OUTPUT);
//   pinMode(btnPin,INPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   btnStatus = digitalRead(btnPin);
//   if (btnStatus == HIGH){
//     digitalWrite(ledPin,HIGH);
//   }else{
//     digitalWrite(ledPin,LOW);
//   }
// }


// 1
//To connect our senial monitor with our circuit we have to use serial monitor's baud rate
// step 1: starts serial Monitor
// use Serial.begin(baudrate) to connect with our circuit
// we want to print led on/off in serial monitor accordingly to our code. 
// so we use : Serial.println('LED Off/On)
// code: with bhavya

//2
//Button(input Device)(Digital Device,(coz output is 0 or 1)) has 4 pins, 2 pair of pin inclined to each other respectively, Which are connected . Thus when we click the button the cricuit completes
// Configurating button's input: using buttonPin. pinMode(buttonPin, INPUT)
// reading button's status: using busttonStatus=0, buttonSatus = digitalRead(buttonPin);
// if (buttonStatus == HIGH){
//   digitalWrite(ledPin,HIGH)
// } else
// {digitalWrite(ledPin,LOW)}
// Code :  Screenshot in mobile


// Prepare a report
