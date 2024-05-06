int mydelay = 100;
int ledpin = 13;

void setup(){
    pinMode(ledpin,OUTPUT);

}

void loop(){
    digitalWrite(ledpin,HIGH);
    // delay(mydelay);

    digitalWrite(ledpin,LOW);
    delay(mydelay);

}