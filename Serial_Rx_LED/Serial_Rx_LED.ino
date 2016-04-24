char myDataRx;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

  Serial.println("Arduino Data Rx from PC!");

}

void loop()
{
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    myDataRx = Serial.read();  // read from Serial Rx Buffer

    Serial.print("I received: ");   // "I received  __(value)__/r/n"
    Serial.println(myDataRx);

    myCharCheck(myDataRx);

//    if ( myDataRx == 'a')
//    {
//      digitalWrite(13, HIGH);
//    }
//
//    if ( myDataRx == 'b')
//    {
//      digitalWrite(13, LOW);
//    }
  
  }

}

void myCharCheck(char myChar)
{
  switch(myChar)
  {
    case 'a':
      digitalWrite(13, HIGH);
      Serial.println("LED is ON !!!");
      break;
      
    case 'b':
      digitalWrite(13, LOW);
      Serial.println("LED is OFF !!!");
      break;
      
    default:
      break; 
  }
}

