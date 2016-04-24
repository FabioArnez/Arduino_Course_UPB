char c = 0;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello!");
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (Serial.available()>0)
  {
    c = Serial.read();
    switch(c)
    {
      case 'a':
        analogWrite(3,0);
        Serial.println("PWM Value is: 0");
        break;
      case 'b':
        analogWrite(3,63);
        Serial.println("PWM Value is: 63");
        break;
      case 'c':
        analogWrite(3,127);
        Serial.println("PWM Value is: 127");
        break;
      case 'd':
        analogWrite(3,191);
        Serial.println("PWM Value is: 191");
        break;
      case 'e':
        analogWrite(3,255);        
        Serial.println("PWM Value is: 255");
      default:
        break;        
    }
  }
}
