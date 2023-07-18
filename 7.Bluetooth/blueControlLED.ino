#include<SoftwareSerial.h>

SoftwareSerial mySerial(7,8); //RT,TX 

void setup() 
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  mySerial.begin(38400);
}

void loop() 
{
  if (mySerial.available())
  {
    char dato = mySerial.read();
    if (dato == 'a')
    {
      digitalWrite(13,1);
    }
    else if (dato == 'b')
    {
      digitalWrite(13,0);
    }
  }
}