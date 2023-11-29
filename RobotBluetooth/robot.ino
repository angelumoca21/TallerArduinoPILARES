#include<SoftwareSerial.h>
#define LED 13
#define RX 7
#define TX 8
#define EN 11
#define IN1 A1
#define IN2 A2
#define IN3 A3
#define IN4 A4

SoftwareSerial bluetooth(RX, TX);

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  bluetooth.begin(9600);
  analogWrite(EN, 70);
}

void loop()
{
  if (bluetooth.available())
  {
    char dato = bluetooth.read();
    Serial.println(dato);
    if (dato == 'W')
      digitalWrite(LED, 1);
    else if (dato == 'w')
      digitalWrite(LED, 0);
    else if (dato == 'F')
    {
      digitalWrite(IN1, 1);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 1);
      digitalWrite(IN4, 0);
    }
    else if (dato == 'B')
    {
      digitalWrite(IN1, 0);
      digitalWrite(IN2, 1);
      digitalWrite(IN3, 0);
      digitalWrite(IN4, 1);
    }
    else if (dato == 'R')
    {
      digitalWrite(IN1, 1);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 0);
      digitalWrite(IN4, 1);
    }
    else if (dato == 'L')
    {
      digitalWrite(IN1, 0);
      digitalWrite(IN2, 1);
      digitalWrite(IN3, 1);
      digitalWrite(IN4, 0);
    }
    else if (dato == 'S')
    {
      digitalWrite(IN1, 0);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 0);
      digitalWrite(IN4, 0);
    }
    else if (dato == '0' || dato == '1' || dato == '2' || dato == '3' || dato == '4' || dato == '5' || dato == '6' || dato == '7' || dato == '8' || dato == '9' || dato == 'q')
    {
      switch (dato)
      {
        case '0':
          analogWrite(EN, 0);
          break;
        case '1':
          analogWrite(EN, 70);
          break;
        case '2':
          analogWrite(EN, 90);
          break;
        case '3':
          analogWrite(EN, 110);
          break;
        case '4':
          analogWrite(EN, 130);
          break;
        case '5':
          analogWrite(EN, 150);
          break;
        case '6':
          analogWrite(EN, 180);
          break;
        case '7':
          analogWrite(EN, 200);
          break;
        case '8':
          analogWrite(EN, 220);
          break;
        case '9':
          analogWrite(EN, 240);
          break;
        case 'q':
          analogWrite(EN, 255);
          break;
      }
    }
    /*
       else if (dato == 'I') ARRIBA-DERECHA
       {
        digitalWrite(LED, 0);
       }
       else if (dato == 'G') ARRIBA-IZQUIERDA
       {
        digitalWrite(LED, 0);
       }
       else if (dato == 'J') ABAJO-DERECHA
       {
        digitalWrite(LED, 0);
       }
       else if (dato == 'H') ABAJO-IZQUIERDA
       {
        digitalWrite(LED, 0);
       }
    */
  }
}
