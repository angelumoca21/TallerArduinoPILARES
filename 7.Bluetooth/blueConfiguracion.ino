#include<SoftwareSerial.h>
SoftwareSerial mySerial(7,8); //RT,TX 

void setup() 
{
  Serial.begin(9600);
  mySerial.begin(38400);
}

void loop() 
{
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
}
