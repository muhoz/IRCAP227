
//variables that will be used
const int irPin = 7;  //define the pin that is connected to the IRCAP227, in this case the digital pin 7
boolean val;   //value to know if there is an interruption of the signal and then act


void setup()
{pinMode(irPin, INPUT); // set irPin as an INPUT}
 
 
 
void loop()
{
   val = digitalRead(irPin); //read the value from the infrared Pin
  if(val == HIGH) // interruption of the signal
  { 
    //insert the code that you want to use in the case of an interruption of the signal
  }
  else
  {
        //insert the code that you want to use, when there is nothing
  }
}
