void setup()
{
  DDRB = 0b00100000; //setting last bit as output of port B register
}

void loop()
{
	PORTB = 0b00100000;
  	delay(100);
  
  	PORTB &= ~(1<<PB5);
  	delay(100);
}