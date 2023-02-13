
//Two Infrared Sensors covered the entire room. Whenever someone enters the room. The lights glow up. 

void setup() 
{
  pinMode (2, INPUT); 
  pinMode (4, INPUT);
  
  pinMode (13, OUTPUT);
}

void loop()
{ 
  if ( digitalRead (2) ==0 || digitalRead (4)== 0)
  {
    digitalWrite(13, HIGH); 
  }
  
  else
  {
    digitalWrite(13, LOW);
  }

}
