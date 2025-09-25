int in1=2;
int in2=7;
int en=4;
int ldrpin=A5;
int ldrval;
int close=600;
int open=500;

void setup()
{
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(en,OUTPUT);
  pinMode(ldrpin,INPUT);
  
}
  

void loop()
{
  ldrval=analogRead(ldrpin);
  Serial.println(ldrval);
  
  if(ldrval<=open){
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    analogWrite(en,255);
  }
  else if(ldrval>=close){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    analogWrite(en,255);
    
  }
  else{
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    analogWrite(en,0);
    
  }
  delay(500);
  
  
  
}