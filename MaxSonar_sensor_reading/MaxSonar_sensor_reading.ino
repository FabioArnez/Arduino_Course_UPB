int sensorValue = 0;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() 
{
  sensorValue = analogRead(A0);

  // Sensor Scaling Factor
  sensorValue = sensorValue / 2;
  
  float distanceInch = sensorValue;

  float distance_cm = distanceInch*2.54;

  Serial.print("Measured Distance:  ");
  Serial.print(distance_cm);
  Serial.println("[cm]");
  
  delay(50);

}
