int _moisture, sensor_analog;
const int sensor_pin = A2;  /* Soil moisture sensor O/P pin */
const int buttonPin = 7;    /* Button pin */
int Led1 = 3;
int Led2 = 4;

void setup(void) {
  Serial.begin(115200);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT); 
  pinMode(buttonPin, INPUT_PULLUP);  /* Set the button pin as input with internal pull-up resistor */
}

void loop(void) {
  if (digitalRead(buttonPin) == LOW) {  /* Check if the button is pressed */
    sensor_analog = analogRead(sensor_pin);
    _moisture = 100 - (sensor_analog / 1023.0) * 100;
    Serial.print("Moisture = ");
    Serial.print(_moisture);  /* Print moisture on the serial window */
    Serial.println("%");
    if (_moisture < 65) {
      digitalWrite(Led1, HIGH);
      digitalWrite(Led2, LOW);
    } else {
      digitalWrite(Led2, HIGH);
      digitalWrite(Led1, LOW);
    }
  } else {  /* If the button is not pressed, turn off the LEDs */
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
  }

  delay(1000);  /* Wait for 1000ms */
}