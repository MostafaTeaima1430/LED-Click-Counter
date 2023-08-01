const int red = 11;
const int yellow = 12;
const int green=13;
const int button=7;
int Reading=0;
int counter=0;
void setup( ) {
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
pinMode(button, INPUT);
}
void loop( )
{
Reading = digitalRead(button);
if(Reading==HIGH)
{ counter++;
switch (counter)
{
case 1 : digitalWrite(red, HIGH);
break;
case 2 : digitalWrite(yellow,HIGH);
break;
case 3 : digitalWrite(green,HIGH);
break;
default : digitalWrite(green,LOW);
digitalWrite(yellow,LOW);
digitalWrite(red,LOW);
counter=0;
break;
}
while(digitalRead(button)==HIGH);
}
}
