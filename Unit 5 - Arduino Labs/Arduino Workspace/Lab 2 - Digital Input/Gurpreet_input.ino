/* 
Author: Gurpreet Singh
Date: 07/06/2020
Description: This program generates a number between 1 and 6 when the push button is pressed and displays it.
*/
//VARIABLES
int pushButton = 9; //Variable for push button
long (randomNumber); //Variable for random number from (1-6).
int buttonState = 0; //Reads the status of the button.
//Variables for the 7 segments 
int A = 3;
int B = 4;
int C = 7;
int D = 6;
int E = 5;
int F = 2;
int G = 10;

void clear()
{
  delay(2000);
  digitalWrite (A,LOW);
  digitalWrite (B,LOW);
  digitalWrite (C,LOW);
  digitalWrite (D,LOW);
  digitalWrite (E,LOW);
  digitalWrite (F,LOW);
  digitalWrite (G,LOW);  
}


void one () //Variable for 1
{
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
   
}
void two () //Variable for 2
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
}
void three ()//Variable for 3
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(G,HIGH);
}
void four () //Variable for 4
{
  digitalWrite(C,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(F,HIGH);
}
void five() //Variable for 5
{
  digitalWrite(A,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}
void six () //Variable for 6
{
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(C,HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode (pushButton,INPUT);
  pinMode (randomNumber,OUTPUT);
  pinMode (A,OUTPUT);
  pinMode (B,OUTPUT);
  pinMode (C,OUTPUT);
  pinMode (D,OUTPUT);
  pinMode (E,OUTPUT);
  pinMode (F,OUTPUT);
  pinMode (G,OUTPUT);
}

void loop()
{
  buttonState = digitalRead (pushButton); 
  randomNumber = random(1,7); //Picks a random number
  if (buttonState==HIGH && randomNumber==1) {
    one();
    clear();
  }
  if (buttonState==HIGH && randomNumber==2) {
    two();
    clear();
  }
  if (buttonState==HIGH && randomNumber==3) {
    three();
    clear();
  }
  if (buttonState==HIGH && randomNumber==4) {
    four();
    clear();
  }
  if (buttonState==HIGH && randomNumber==5) {
    five();
    clear();
  }
  if (buttonState==HIGH && randomNumber==6) {
    six();
    clear();
  }
  
  delay(100);
}
