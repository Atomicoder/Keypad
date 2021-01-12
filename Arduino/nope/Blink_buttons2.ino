

#include <OneButton.h>

#define BUTTON_PIN 16

#define LED 10
 OneButton btn = OneButton(
  BUTTON_PIN,  // Input pin for the button
  false,       // Button is active high
  false        // Disable internal pull-up resistor
);


// the setup function runs once when you press reset or power the board
void setup() {

Serial.begin(9600);
 
btn.attachClick(doclick);
btn.attachDoubleClick(doubleclick);
pinMode(LED, OUTPUT);    
}

// the loop function runs over and over again forever
void loop() {

  btn.tick();

  
}



void doubleclick()
{
  digitalWrite(LED, HIGH); // sets the digital pin 13 on
  delay(1000);            // waits for a second
  digitalWrite(LED, LOW);  // sets the digital pin 13 off
  delay(1000);            // waits for a second

}

void doclick()
{
  digitalWrite(LED, HIGH); // sets the digital pin 13 on
  delay(1000);            // waits for a second
  digitalWrite(LED, LOW);  // sets the digital pin 13 off
  delay(1000);            // waits for a 

  Serial.print("1 click Hello world.");
  delay(100);
}
