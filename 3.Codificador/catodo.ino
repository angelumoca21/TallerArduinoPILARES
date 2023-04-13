int uno=0; //guarda el estado del interruptor 1
int dos=0; //guarda el estado del interruptor 2
int cuatro=0; //guarda el estado del interruptor 3
int ocho=0; //guarda el estado del interruptor 4

void setup() //entradas y salidas
{
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  
  pinMode(0,OUTPUT);//a
  pinMode(1,OUTPUT);//b
  pinMode(2,OUTPUT);//c
  pinMode(3,OUTPUT);//d
  pinMode(4,OUTPUT);//e
  pinMode(5,OUTPUT);//f
  pinMode(6,OUTPUT);//g
}

void loop()
{
  uno=digitalRead(7);
  dos=digitalRead(8);
  cuatro=digitalRead(9);
  ocho=digitalRead(10);
  
  if(uno==LOW && dos==LOW && cuatro==LOW && ocho==LOW)
  {
    digitalWrite(0,HIGH);//a
  	digitalWrite(1,HIGH);//b
  	digitalWrite(2,HIGH);//c
  	digitalWrite(3,HIGH);//d
  	digitalWrite(4,HIGH);//e
  	digitalWrite(5,HIGH);//f
  	digitalWrite(6,LOW);//g
  }
  
  
  
  else if(uno==HIGH && dos==LOW && cuatro==LOW && ocho==LOW)
  {
    digitalWrite(0,LOW);//a
  	digitalWrite(1,HIGH);//b
  	digitalWrite(2,HIGH);//c
  	digitalWrite(3,LOW);//d
  	digitalWrite(4,LOW);//e
  	digitalWrite(5,LOW);//f
  	digitalWrite(6,LOW);//g
  }
  else
  {
    digitalWrite(0,HIGH);//a
  	digitalWrite(1,LOW);//b
  	digitalWrite(2,LOW);//c
  	digitalWrite(3,HIGH);//d
  	digitalWrite(4,HIGH);//e
  	digitalWrite(5,HIGH);//f
  	digitalWrite(6,HIGH);//g
  }
}