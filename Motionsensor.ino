int B_trigPin = 4; // TRIG pin
int B_echoPin = 2; // ECHO pin
int Buzzer =3 ;
int Red=5;
int Green=6;
int Yellow=7;


float B_duration_us, B_distance_cm;


void setup()
{
  Serial.begin(9600);

  pinMode(B_trigPin, OUTPUT);
  pinMode(B_echoPin, INPUT);
pinMode(Buzzer,OUTPUT);
 pinMode(Red,OUTPUT);
  pinMode(Green,OUTPUT);
   pinMode(Yellow,OUTPUT);


}

void loop()
{
  digitalWrite(B_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(B_trigPin, LOW);
  B_duration_us = pulseIn(B_echoPin, HIGH);
  B_distance_cm = 0.017 * B_duration_us;
  Serial.println(B_distance_cm);
if(B_distance_cm<=15)
{ digitalWrite(Buzzer,HIGH);
delay(1000);
digitalWrite(Buzzer,LOW);
}
if(B_distance_cm<=15)
{
  digitalWrite(Red,HIGH);
delay(1000);
digitalWrite(Red,LOW);
}
if((B_distance_cm>15) && (B_distance_cm<50))
{
  digitalWrite(Green,HIGH);
delay(1000);
digitalWrite(Green,LOW);
}
if(B_distance_cm>50)
{
  digitalWrite(Yellow,HIGH);
delay(1000);
digitalWrite(Yellow,LOW);
}
}
