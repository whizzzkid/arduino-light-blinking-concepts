/**
 * Pattern Blinking LED
 * Will produce a heartbeat pattern.
 * @author me@nishantarora.in whizzzkid
 */
const int ledStrip = 13;
int i = 0;
int maxPower = 255;
// heart rate in bpm
int rate = 20;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop(){
  for(i = 0; i < maxPower; i++) {
    analogWrite(LED,i);
    delay(((60000/rate)*.1)/maxPower);
  }
  for(i = maxPower; i > 0; i--){
    analogWrite(LED,i);
    delay(((60000/rate)*.2)/maxPower);
  }
  for(i = 0; i < maxPower; i++) {
    analogWrite(LED,i);
    delay(((60000/rate)*.1)/maxPower);
  }
  for(i = maxPower; i > 0; i--){
    analogWrite(LED,i);
    delay(((60000/rate)*.6)/maxPower);
  }
}