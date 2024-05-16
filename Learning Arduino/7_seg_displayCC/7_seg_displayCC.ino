// C++ code
//
void setup()
{
  DDRD = 0b11111111;
}

void loop()
{
  PORTD = 0b00111111;
  delay(1000);
  
  PORTD = 0b00000110;
  delay(1000);
  
  PORTD = 0b01011011;
  delay(1000);
  
  PORTD = 0b01001111;
  delay(1000);
  
  PORTD = 0b01100110;
  delay(1000);
  
  PORTD = 0b01101101;
  delay(1000);
  
  PORTD = 0b01111101;
  delay(1000);
  
  PORTD = 0b00000111;
  delay(1000);
  
  PORTD = 0b01111111;
  delay(1000);
  
  PORTD = 0b01101111;
  delay(1000);
}