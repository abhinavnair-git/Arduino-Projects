int Led1=2;
int Led2=3;
int Led3=4;
int Buzzer=6;

void setup() {
  pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT);
pinMode(Buzzer,OUTPUT);
}

void loop() {
  digitalWrite(Led1,HIGH);
  delay(1000);
  digitalWrite(Led1,LOW);
  delay(1000);
  digitalWrite(Led2,HIGH);
   delay(1000);
  digitalWrite(Led2,LOW);
  delay(1000);
digitalWrite(Led3,HIGH);
 delay(1000);
digitalWrite(Led3,LOW);
delay(1000);
digitalWrite(Buzzer,HIGH);
delay(1000);
digitalWrite(Buzzer,LOW);
}
