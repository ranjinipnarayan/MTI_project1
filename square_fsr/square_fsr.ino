#include <Stepper.h>

int fsrAnalogPin = 0;
int solenoidPin = 13;
int fsrReading;     
const int stepPin = 3; 
const int dirPin = 4;

void setup(void) {
  Serial.begin(9600);
  //setting up the pins to be outputs 
  pinMode(solenoidPin, OUTPUT); 
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
 
void loop(void) {
  delay(1000);
  digitalWrite(dirPin, LOW);
  for(int x = 0; x < 200; x+=fsrReading) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(100); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(100);
  }
  //Reading from the FSR in the stress ball
  fsrReading = analogRead(fsrAnalogPin);
  Serial.print("Analog reading = ");
  Serial.println(fsrReading);
  if (fsrReading > 0){
    digitalWrite(solenoidPin, HIGH);
    delay(800); 
    digitalWrite(solenoidPin, LOW);
    delay(800); 
  }  
  digitalWrite(dirPin, HIGH);
  for(int x = 0; x < 200; x+=fsrReading) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(100); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(100);
  }
}
