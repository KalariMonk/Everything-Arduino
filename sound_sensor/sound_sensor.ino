/*
 * This is a simple script to check your sound sensor by blinking the buit-in LED.
 * LED glows when the sensor senses sound(variation in air pressure) !!!
 * 
 * 
 * Author: KalariMonk
*/

//The out of the sound sensor is connected to the A1 analog pin of Arduino
const int n = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int s;
  s = analogRead(n);
  digitalWrite(LED_BUILTIN, LOW);
  if(s){
      digitalWrite(LED_BUILTIN, HIGH);
  }
}
