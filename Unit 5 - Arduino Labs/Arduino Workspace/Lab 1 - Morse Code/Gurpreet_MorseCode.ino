void pause()
{
//code for pause between every digit (1/3 of a second)
	digitalWrite(13,LOW);
	delay(333);
}

void dash ()
{
  //code to represent the dash
  digitalWrite(13,HIGH);
  delay (1000); 
}

void dot ()
{
  //code to represent the dots
  digitalWrite(13,HIGH);
  delay(333);
}

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
//code to print out the last 3 ditit of my student number (163)
//code for 1
dot();
dash();
dash();
dash(); 
dash();
pause(); 
//code for 6
dash();
dot();
dot();
dot();
dot();
pause();
//code for 3
dot();
dot();
dot();
dash();
dash();
pause();
}
