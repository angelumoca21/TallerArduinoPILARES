int uno = 0; 
int dos = 0;
int cuatro = 0;
int ocho = 0;

void setup()
{
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  
  pinMode(4,OUTPUT);//A
  pinMode(5,OUTPUT);//B
  pinMode(6,OUTPUT);//C
  pinMode(7,OUTPUT);//D
  pinMode(8,OUTPUT);//E
  pinMode(9,OUTPUT);//F
  pinMode(10,OUTPUT);//G
}

void loop()
{
  uno = digitalRead(0);  
  dos = digitalRead(1);
  cuatro = digitalRead(2);
  ocho = digitalRead(3);
  
  if(uno == LOW && dos == LOW && cuatro == LOW && ocho == LOW)
  {
    digitalWrite(4,LOW);//A
  	digitalWrite(5,LOW);//B
  	digitalWrite(6,LOW);//C
  	digitalWrite(7,LOW);//D
  	digitalWrite(8,LOW);//E
  	digitalWrite(9,LOW);//F
  	digitalWrite(10,HIGH);//G  
  }
  else if(uno == HIGH && dos == LOW && cuatro == LOW && ocho == LOW)
  {
    digitalWrite(4,HIGH);//A
  	digitalWrite(5,LOW);//B
  	digitalWrite(6,LOW);//C
  	digitalWrite(7,HIGH);//D
  	digitalWrite(8,HIGH);//E
  	digitalWrite(9,HIGH);//F
  	digitalWrite(10,HIGH);//G  
  }
  else
  {
    digitalWrite(4,LOW);//A
  	digitalWrite(5,HIGH);//B
  	digitalWrite(6,HIGH);//C
  	digitalWrite(7,LOW);//D
  	digitalWrite(8,LOW);//E
  	digitalWrite(9,LOW);//F
  	digitalWrite(10,LOW);//G  
  }
}