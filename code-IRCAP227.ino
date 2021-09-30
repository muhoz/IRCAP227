//dans l'application du projet, il faut penser à renverser les deux codes pour respecter la bonne mise en pratique
// pin Out IR sur le 7, et buzzer sur le 4, le reste (VCC and GRD) de la même façon que d'habitude

const int trackingPin = 7;
const int buzzer = 4; //buzzer to arduino pin 9

const int ledPin = 13; //pin13 built-in led
void setup()
{
  pinMode(trackingPin, INPUT); // set trackingPin as INPUT
  pinMode(ledPin, OUTPUT); //set ledPin as OUTPUT
   pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}
void loop()
{
  boolean val = digitalRead(trackingPin); // read the value of tracking module
  if(val == HIGH) //if it is HiGH
  { 
    digitalWrite(ledPin, LOW); //turn off the led
    noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  }
  else
  {
    digitalWrite(ledPin, HIGH); //turn on the led
    tone(buzzer, 500); // Send 1KHz sound signal...
  delay(10000);        // ...for 1 sec
    
  }
}
