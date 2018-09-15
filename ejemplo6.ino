int IN1=7;
int IN2=8;
int AN1=9;
void setup (){
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
}
void secuencia(){
 
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  delay(1000);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  delay (500);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  delay (1000);
}
void loop(){
  analogWrite (AN1,255);
  secuencia();
  delay(500);
  analogWrite(AN1,50);
  delay(500);
}

