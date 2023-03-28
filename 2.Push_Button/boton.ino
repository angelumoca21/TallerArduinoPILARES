int boton = 0;

void setup()
{
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  boton = digitalRead(7);
  if (boton == HIGH)
  {
    digitalWrite(8, 1);
  }
  else
  {
    digitalWrite(8, 0);
  }
}
