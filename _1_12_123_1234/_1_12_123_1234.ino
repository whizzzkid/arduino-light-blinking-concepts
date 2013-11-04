/**
 * Pattern Blinking LED
 * Will produce a pattern like 1->12->123->1234->...->blinkTimes
 * @author me@nishantarora.in whizzzkid
 */
const int ledStrip = 9;
const int blinkTimes = 10;
int i,c = 0;

void setup(){
  // initialize the LED as an output:
  pinMode(ledStrip, OUTPUT);
}

void loop(){
  for(i = 1; i <=blinkTimes; i++){
    for(c = 0; c<i; c++){
      analogWrite(ledStrip, 255); 
      delay(250);
      analogWrite(ledStrip, 0);
      delay(250);
    }
    delay(1000);
  }
}
