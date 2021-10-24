

// Written By KAMRAN HASSAN
void setup()
{
  pinMode(3, OUTPUT);   
  pinMode(5, INPUT);
}

void loop()
{
  int x = digitalRead(5);     // Digital Input
  digitalWrite(3,x);          //Digital Output
}
