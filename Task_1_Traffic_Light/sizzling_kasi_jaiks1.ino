// C++ code
//
#define led_red 8
#define led_yellow 7
#define led_green 6
void setup()
{
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  
}

void loop()
{
  //Red led on
  digitalWrite(led_red, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  
  //Red and Yellow led on
  digitalWrite(led_yellow, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  
  //Only Yellow led on
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow,LOW);
  digitalWrite(led_green, HIGH);
  delay(10000);  // Wait for 10000 millisecond(s)
  digitalWrite(led_green,LOW); 
}