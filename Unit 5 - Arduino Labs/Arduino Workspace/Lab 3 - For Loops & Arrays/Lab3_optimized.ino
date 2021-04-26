/* 
Author: Gurpreet Singh
Date: 06/06/2020
Description: This program picks a random number and turns on the LED at that index when the push button is pressed 
*/
//VARIABLES
int pinRandom = random(6,12); //Variable to choose a random pin.
int pushButton = 12; //Variable for the pusbutton pin
int buttonState = 0; //Variable for reading the pushbuton status (Higgh or low)
void turnOnLEDs () //Variable to turn on LED's for 5 seconds.
{
  digitalWrite (pushButton,HIGH);
  delay (5000);
  digitalWrite(pushButton,LOW);
}
void turnOffLEDs()
{
  digitalWrite(buttonState,LOW);
  for (int x=6; x<12; x++){ //for loop to turn all led off
    digitalWrite(x,LOW);
  }
}

void setup()
{
 Serial.begin (9600);
 pinMode (pushButton,INPUT);
 pinMode (pinRandom,OUTPUT);
  for (int x=6; x<12; x++){ //For loop to initialize all LED pins to OUTPUT
    pinMode(x,OUTPUT);
  }
}

void loop()
{
  pinRandom = random(6,12);
  Serial.println(pinRandom); //prints out the random pin
  buttonState = digitalRead(pushButton); //read the state of the pushbutton value
  if(buttonState==HIGH){
    if (pinRandom==6){ //If statement for LED 1.
      digitalWrite(6,HIGH);
      turnOnLEDs();
      turnOffLEDs();
    }
    if (pinRandom==7){//If statement for the LED number 2
      for (int x=6; x<8; x++){ //For loop to turn on LED 1 and 2 (6 and 7 pin)
        digitalWrite(x,HIGH);
      }
    	turnOnLEDs();
     	turnOffLEDs();  
    }
    if (pinRandom==8){//If statement for the LED number 3
      digitalWrite(8,HIGH);
      turnOnLEDs();
      turnOffLEDs();
    }
    if (pinRandom==9){//If statement for the LED number 4
      digitalWrite(9,HIGH);
      turnOnLEDs();
      turnOffLEDs();
    }
  	if (pinRandom==10){ //If statement for the LED number 5
      for (int x=6; x<11; x++){//For loop to turn off LED 1,2,3,4 and 5 (6,7,8,9,and 10 pin)
        digitalWrite(x,HIGH);
      }
   		turnOnLEDs();
 	    turnOffLEDs();
  	}
     if (pinRandom==11){//If statement for the LED number 6
      digitalWrite(11,HIGH);
      turnOnLEDs();
      turnOffLEDs();
    }
  
  }
}