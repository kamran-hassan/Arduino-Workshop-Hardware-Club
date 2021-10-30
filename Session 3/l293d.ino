int ma1 = 3;   
int ma2 = 5;
void setup()
{
  pinMode(ma1,OUTPUT);
  pinMode(ma2,OUTPUT);
}

void loop()
{
  for(int i = 0;i<=255;i++){
   analogWrite(ma1,i);
   digitalWrite(ma2,0);
   delay(100);
  }
  
}
