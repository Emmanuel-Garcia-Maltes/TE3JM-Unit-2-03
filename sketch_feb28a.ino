/* C++ code

Creating a blinking LED and resetting its value

Created by:  Emmanuel Garcia Maltes
Created on: 2022/03/1

*/


int pin8 = 8; // Defining a new variable as the pin #
int delayTime[] = {1000, 1000}; // making a new variable and setting an array that contains seperate values 


// Pre configured code to setup the arduino
void setup()
{
  pinMode(pin8, OUTPUT);
}

void loop() // This function loops what is within the function
{
  digitalWrite(pin8, HIGH);
  delay(delayTime[0]); // Taking the first variable in the array and assining it the value
  digitalWrite(pin8, LOW);
  delay(delayTime[1]); // Taking the second variable in the array and assining it the value

  // Extra: Resetting the value in an array after a certain point
  delayTime[0] += 1000;
  if(delayTime[0] >= 5000){
    delayTime[0] = 1000;
  }
}
