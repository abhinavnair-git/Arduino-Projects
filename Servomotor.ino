#include<Servo.h>
static int servo=3 ;
Servo Motor;

void setup() {
  Serial.begin(115200);
  Motor.attach(servo);

}

void loop() {
  Motor.write(0);
  delay(1000);
  Motor.write(180);
  delay(1000);


}
