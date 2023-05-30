#include<LiquidCrystal.h>

LiquidCrystal pantallita(12, 11, 5, 4, 3, 2);


void setup()
{
  pantallita.begin(16, 2);
  pantallita.setCursor(3,0);
  pantallita.print("Bienvenidos");
  pantallita.setCursor(3,1);
  pantallita.print("PILARES :D");
  delay(5000);
}

void loop()
{
  pantallita.clear();
  pantallita.setCursor(0,0);
  pantallita.print("Tu mensaje");
  delay(100);
}