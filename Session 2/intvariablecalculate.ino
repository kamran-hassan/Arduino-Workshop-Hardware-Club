
void setup()
{
  Serial.begin(9600);
  int x = 15; //created an integer variable named as x and storing 15 in it
  int y = 25; //created an integer variable named as 7 and storing 25 in it
  int z; //created a variable named as z
  z = x + y;  //storing the value of x+y in z 
  z *= 10;
  Serial.print("the value of z = ");        // printing on serial monitor of computer 
  Serial.println(z);                        // printing on serial monitor of computer 
  
}

void loop()
{

}
