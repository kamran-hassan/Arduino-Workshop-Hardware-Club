// to show function
void setup()
{
  Serial.begin(9600);
  int answer = cube(3);   // calling the function cube with argument 3
  Serial.println(answer); // printing the value of answer on serial monitor
}

int cube(int x){
 return (x*x*x);  
}
void loop()
{
  
}
