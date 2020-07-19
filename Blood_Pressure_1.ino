int PressurePin = A0;
int Force=0;
int LEDpin = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
}



void loop()
{
  Force = analogRead(PressurePin);
  Serial.println(Force);
  if (Force > 10)
  {
    digitalWrite(LEDpin, HIGH);
  }
  else
  {
    digitalWrite(LEDpin, LOW);
  }
  delay(100);
}
