/*
keyestudio Maker learning kit
Project 27
Choosing Your Favorite Color
http//www.keyestudio.com
*/
  
int redpin = 11; //select the pin for the red LED
int greenpin =10;// select the pin for the green LED
int bluepin =9; // select the pin for the blue LED
int value1;
int value2;
int value3;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
value1=map( analogRead(0),0,1023,0,255);
value2=map( analogRead(1),0,1023,0,255);
value3=map( analogRead(2),0,1023,0,255);
analogWrite(11, value1);
Serial.print("value1= ");
Serial.println(value1);
delay(100); 
analogWrite(10, value2);
Serial.print("value2= ");
Serial.println(value2);
delay(100); 
analogWrite(9, value3);
Serial.print("value3= ");
Serial.println(value3);
delay(100); 
}
