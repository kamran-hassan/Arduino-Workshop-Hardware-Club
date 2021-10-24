
int outputvalue = 0;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(A5, INPUT);
}

void loop()
{
  outputvalue = analogRead(A5);
  outputvalue = map(outputvalue,0,1023,0,255);  // maping as input resulution is 0 to 1023 and output resulution is 0 to 255
  analogWrite(3,outputvalue);
}
