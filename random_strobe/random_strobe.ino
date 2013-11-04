/**
 * Pattern Blinking LED
 * Will produce a random strobe pattern.
 * @author me@nishantarora.in whizzzkid
 */
const int ledStrip = 13;
int i,c = 0;
int maxPower = 255;
int delayMax = 500;

void setup(){
  // initialize the LED as an output:
  pinMode(ledStrip, OUTPUT);
}

void loop(){
  analogWrite(ledStrip, maxPower); 
  delay(random((delayMax*0.1),delayMax));
  analogWrite(ledStrip, 0);
  delay(random((delayMax*0.1),delayMax));
}
