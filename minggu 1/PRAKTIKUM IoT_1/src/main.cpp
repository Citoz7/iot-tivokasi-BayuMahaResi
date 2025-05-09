<<<<<<< HEAD
#include <Arduino.h>

int lampu1 =26;
int lampu2 =25;
int lampu3 =27;

void setup() {
  // put your setup code here, to run once:
  pinMode(lampu1, OUTPUT);
  pinMode(lampu2, OUTPUT);
  pinMode(lampu3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(lampu1, HIGH);
  digitalWrite(lampu1, LOW);
  delay(2000); 

  digitalWrite(lampu2, HIGH);
  digitalWrite(lampu2, LOW);
  delay(2000); 
 
  digitalWrite(lampu3, HIGH);
  digitalWrite(lampu3, LOW);
  delay(2000); 
  

=======
#include <Arduino.h>

int lampu1 =26;
int lampu2 =25;
int lampu3 =27;

void setup() {
  // put your setup code here, to run once:
  pinMode(lampu1, OUTPUT);
  pinMode(lampu2, OUTPUT);
  pinMode(lampu3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(lampu1, HIGH);
  digitalWrite(lampu1, LOW);
  delay(2000); 

  digitalWrite(lampu2, HIGH);
  digitalWrite(lampu2, LOW);
  delay(2000); 
 
  digitalWrite(lampu3, HIGH);
  digitalWrite(lampu3, LOW);
  delay(2000); 
  

>>>>>>> master
}