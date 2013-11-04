/**
 * Pattern Blinking LED
 * Will produce a random blink pattern. min:1;max:10;
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
  for(i = 0; i<random(1,10);i++){
      analogWrite(ledStrip, maxPower); 
      delay(250);
      analogWrite(ledStrip, 0);
      delay(250);
  }
  delay(1000);
}
