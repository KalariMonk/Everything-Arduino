/*
 * This is a simple script for obstacle detection using IR sensor!!!
 * Any IR sensor will have three pins/connections VCC, GND and Output
 * 
 * Connect the output with the digital 7 on the uno board.
 * Connect the GND and VCC to corresponding GND and VCC on the board.
 * Upload the code and open the serial monitor in the IDE to see the result.
 * 
 * Author:KalariMonk
*/

//The out of the IR sensor is connected to the digital pin 7 of the Arduino Uno.

const int obstaclepin = 7;
int s = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(obstaclepin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  s = digitalRead(obstaclepin);
  if(s == HIGH){
    Serial.print("Obstacle ahead\n");
  }
  else{
    Serial.print("Clear Path\n");
  }
  
}
