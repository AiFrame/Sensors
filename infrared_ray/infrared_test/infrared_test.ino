/*
  This is a test code for Sharp GP2Y0A21YK0F.
 */

int range;
int analog_value;

// the setup routine runs once when you press reset:
void setup() {                
  Serial.begin(115200);
}

// the loop routine runs over and over again forever:
void loop() {
  analog_value = analogRead(A0);
  int range = 2547.8/((float)analog_value*0.49-10.41)-0.42;
  Serial.println(range, DEC);
}

