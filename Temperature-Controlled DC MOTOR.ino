int in1 = 2;
int in2 = 7;
int en  = 4;
int tempin=A5;
int tempval;
int dt=500;

void setup() {
  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(tempin,INPUT);
  
 
 
}

void loop() {
  float voltage = analogRead(tempin) * (5.0 / 1023.0);
  tempval = (voltage - 0.5) * 100;
  Serial.println(tempval);
  
  if(tempval<25){
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    analogWrite(en,0);
    
  }
  else if(tempval>=25 && tempval<35){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    analogWrite(en,150);
    
  }
  else {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    analogWrite(en,255);
  }
  delay(dt);

  
}
