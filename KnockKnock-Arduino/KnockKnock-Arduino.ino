
// CoderDojoOlney
//
// Things you could do to build on this code
//  Make it work in different languages - selected by the user.
//  Make it tell more than one joke from a list
//  Make it chose which joke to tell at random
//

#define USER_TIMEOUT      (60000)   // One minute in mS
#define CARRIAGE_RETURN   '\r'

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  Serial.println("Arduino: Knock, Knock...");
  input();
  Serial.println("Arduino: Ash!");
  input();
  Serial.println("Arduino: Bless you! Didn't mean to make you sneeze!");
  
  delay(5000);  // Wait 5 seconds for someone else to tell a joke to
}

String input()
{
  // Provide a prompt to the user
  Serial.print("You: ");

  Serial.setTimeout(USER_TIMEOUT); // Amount of time to wait for input in mS
  
  return(Serial.readStringUntil(CARRIAGE_RETURN));
}

