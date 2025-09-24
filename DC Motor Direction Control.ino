int in1 = 2;
int in2 = 7;
int en  = 4;
int button1 = 9;   
int button2 = 10;  

void setup() {
  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  digitalWrite(en, HIGH); 
}

void loop() {
  int b1 = digitalRead(button1); 
  int b2 = digitalRead(button2);

  if (b1 ==1 && b2 == 0) {
   
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
  else if (b2 ==1 && b1 == 0) {
    
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }
  else {
    
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
  }
}
