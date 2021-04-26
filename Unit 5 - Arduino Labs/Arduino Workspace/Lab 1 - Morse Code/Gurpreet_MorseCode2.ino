//variables
int piezoPin = 12;

void dash()
{
//Code for the function tone to output dash.
tone(piezoPin,1000);//set dash frequency
}
void dot()
{\
//Code for the function tone to output dot.
tone(piezoPin,333); //set dot frequency 
}
void pause()
{
delay(333);//set delay
}
void setup()
{
 Serial.begin(9600);
 pinMode(piezoPin, OUTPUT); //state output
}

void loop()
{
//code to output the last 3 ditit of my student number (163) in notes.
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