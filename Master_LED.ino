#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2,3); // RX,TX

void setup() {
pinMode(13, OUTPUT);
Serial.begin(9600);
BTSerial.begin(38400);
}

void loop() {
  
  digitalWrite(13,HIGH);
  BTSerial.println("1");
  delay(5000);

  digitalWrite(13,LOW);
  BTSerial.println("0");
  delay(5000);
}
