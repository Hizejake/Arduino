// C++ code
//
void setup()
{
  DDRD = 0b11111111;
}

unsigned char _7seg[10] = {0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};

void loop()
{
  for(int i = 0;i<10;i++){
	PORTD = _7seg[i];
    delay(1000);
    
  }
}