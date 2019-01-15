void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(38400);
  pinMode(9,OUTPUT);      // this pin will pull the HC-05 pin 34 (key pin) HIGH to switch module to AT mode
  digitalWrite(9,HIGH);
  }

void loop() {
  if(Serial.available()>0);{
  
    char x=Serial.read();

    if(x=='1'){
       digitalWrite(13,HIGH);
    }
    if(x=='0'){
      digitalWrite(13,LOW);
    }
  }
}
