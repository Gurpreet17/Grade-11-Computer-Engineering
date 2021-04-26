/* 
Author: Gurpreet Singh
Date: 17/06/2020
Description: This program control the servo motor based on the brightness of the photoresistor
*/
#include <Servo.h>

int photoresistor = 0; //Variable that stores photoresistors position
Servo myservo; //Object for servo motor

void setup()
{
  Serial.begin(9600);
  myservo.attach(9); //Declaring that servo motor is attached to pin 9
}

void loop()
{
  int photoresistor = analogRead(A0); //Declaring that photoresistor is wired to analog pin 0
  Serial.println(photoresistor); //Dsiplaying the position of the photoresistor
 
  int lightValue = map(photoresistor, 0, 1023, 0, 994); //Map function for the ligh value
 
  myservo.write(lightValue); 
  delay(100);
}
