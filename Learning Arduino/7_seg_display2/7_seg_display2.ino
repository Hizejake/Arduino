void setup() {
  DDRD = 0b11111111;
}

unsigned char _7seg[10] = {
  0b11000000, // 0
  0b11111001, // 1
  0b10100100, // 2
  0b10110000, // 3
  0b10011001, // 4
  0b10010010, // 5
  0b10000010, // 6
  0b11111000, // 7
  0b10000000, // 8
  0b10010000  // 9
};

void loop() {
  for (int i = 0; i < 10; i++) {
    PORTD = _7seg[i];
    delay(1000);
  }
  // PORTD = 0B00000000;
  
}
