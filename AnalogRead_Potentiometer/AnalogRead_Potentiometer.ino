int potPin = A0;
int ledPin = 13;
int sensorValue = 0;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(potPin);
  Serial.print("Sensor Analog Value:  ");
  Serial.println(sensorValue);

  digitalWrite(ledPin, HIGH);
  // delay() range = [0,1023]
  delay(sensorValue);

  digitalWrite(ledPin, LOW);
  // delay() range = [0,1023]
  delay(sensorValue);  
  
}
