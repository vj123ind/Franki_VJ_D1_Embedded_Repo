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
  
  digitalWrite(led_red, LOW);
  digitalWrite(led_green,LOW); 
  digitalWrite(led_yellow,LOW);
  
}

void loop()
{
  //Red led on
  digitalWrite(led_red, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  
  //Red and Yellow led on
  digitalWrite(led_yellow, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  
  //Led red and yellow off
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow,LOW);
  
  //Only Green led on
  digitalWrite(led_green, HIGH);
  delay(10000);  // Wait for 10000 millisecond(s)
  
  //green and Yellow led on
  digitalWrite(led_yellow, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  
  //Led green and yellow off
  digitalWrite(led_green,LOW); 
  digitalWrite(led_yellow,LOW);
}