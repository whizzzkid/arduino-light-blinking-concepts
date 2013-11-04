/**
 * Pattern Blinking LED
 * Will produce a strobe pattern.
 * @author me@nishantarora.in whizzzkid
 */
const int ledStrip = 13;
int i,c = 0;
int maxPower = 255;

void setup(){
  // initialize the LED as an output:
  pinMode(ledStrip, OUTPUT);
}

void loop(){
  analogWrite(ledStrip, maxPower); 
  delay(250);
  analogWrite(ledStrip, 0);
  delay(250);
}
