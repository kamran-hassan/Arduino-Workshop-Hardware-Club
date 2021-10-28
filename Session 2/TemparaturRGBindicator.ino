int red = 2;
int green = 3;
int blue = 4;
int sensor = A5;

void setup()
{
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(sensor,INPUT);
}
int givetemp(){
  int sensorvalue = analogRead(sensor);
  sensorvalue = map(sensorvalue,20,358,-40,125);
  return sensorvalue;
}

void loop()
{
  if(givetemp() >= 20 && givetemp()<= 30){
   digitalWrite(green,1);
   digitalWrite(blue,0);
   digitalWrite(red,0); 
  }
  else if(givetemp() <20){
   digitalWrite(green,0);
   digitalWrite(blue,1);
   digitalWrite(red,0);
  }
  else if(givetemp() > 30){
   digitalWrite(green,0);
   digitalWrite(blue,0);
   digitalWrite(red,1); 
  }
}
