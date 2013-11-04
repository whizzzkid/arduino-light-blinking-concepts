/**
 * Pattern Blinking LED
 * Will produce a pattern like the Apple Breathing lights 
 * @author me@nishantarora.in whizzzkid
 */
const int ledStrip = 13;
int i = 0;
int maxPower = 255;

void setup(){
  // initialize the LED as an output:
  pinMode(ledStrip, OUTPUT);
}

void loop(){
  for (i = 0; i < maxPower; i++) {
    analogWrite(ledStrip, i); 
    delay(15); 
  } 
  for (i = maxPower; i > 0; i--){
    analogWrite(ledStrip, i);
    delay(15);
  }
}
