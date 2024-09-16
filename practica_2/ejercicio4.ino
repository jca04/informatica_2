// C++ code
//

const int potPin = A0;
const int ledPin = 4;


void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int potValue = analogRead(potPin);     
  int ledValue = map(potValue, 0, 1023, 0, 255); // Mapea el valor a un rango de 0 a 255
  analogWrite(ledPin, ledValue);    
  
  delay(10);
}