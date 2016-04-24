boolean myBoolean;
int myInt;
float myFloat;
String myString;
char myChar;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  myBoolean = false;
  myChar = 'A';
  myInt = 78;
  myFloat = 5.6789 ;
  myString = "Hello Hooman!!";
}

void loop()
{
  Serial.println();
  Serial.println();
  // put your main code here, to run repeatedly:
  // checking the boolean
  if (myBoolean)
  {
    Serial.println("myBoolean is true");
  }
  else
  {
    Serial.println("myBoolean is false");
  }
  // playing with char & int
  Serial.print("myChar is currently ");
  Serial.write(myChar);
  Serial.println();
  Serial.print("myInt is currently ");
  Serial.print(myInt);
  Serial.println();

  Serial.println("myInt in Binary");
  Serial.println(myInt,BIN);
  Serial.println("myInt in Hexadecimal");
  Serial.println(myInt,HEX);
  
  Serial.print("Then, here is myChar + myInt : ");
  Serial.write(myChar + myInt);
  Serial.println();
  // playing with float & int
  Serial.print("myFloat is : ");
  Serial.print(myFloat);
  Serial.println();

  
  Serial.println("myFloat with 4 dec.");
  Serial.println(myFloat, 4);
  
  // putting the content of myFloat into myInt
  myInt = myFloat;
  Serial.print("I put myFloat into myInt, and here is myInt now : ");
  Serial.println(myInt);
  // playing with String
  Serial.print("myString is currently: ");
  Serial.println(myString);
  myString += myChar; // concatening myString with myChar --->  myString = myString + myChar
  Serial.print("myString has a length of ");
  Serial.print(myString.length());// printing the myString length
  Serial.print(" and equals now: ");
  Serial.println(myString);

// myString becomes too long, more than 15, removing the last 3 elements
  if (myString.length() >= 15)
  {
   Serial.println("myString too long ... come on, let's clean it up!");
   myInt = myString.lastIndexOf('!'); // finding the place of the '!'
   myString = myString.substring(0,myInt+1);  // removing characters
   Serial.print("myString is now cleaner: ");
   Serial.println(myString);
   // putting true into myBoolean
  }
  else
  {
   myBoolean = false;     // resetting myBoolean to false
  }
  
  delay(5000);     // let's make a pause

  // let's put 2 blank lines to have a clear read
  Serial.println();
  Serial.println();  

}
