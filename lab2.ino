/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int ledPinA =  2;
const int ledPinB =  3;
const int ledPinC =  4;
const int ledPinD =  5;
const int ledPinE =  6;
const int ledPinF =  7;
const int ledPinG =  8;
const int ledPinH =  9;
long randNum;
int flag = 0;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinC, OUTPUT);
  pinMode(ledPinD, OUTPUT);
  pinMode(ledPinE, OUTPUT);
  pinMode(ledPinF, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinH, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  randomSeed(analogRead(0));
}
void RandNumLED(int randNum){
//顯示數字   dp  a   b   c   d   e   f   g
//       0   0   1   1   1   1   1   1   0
//       1   0   0   1   1   0   0   0   0
//       2   0   1   1   0   1   1   0   1
//       3   0   1   1   1   1   0   0   1
//       4   0   0   1   1   0   0   1   1
//       5   0   1   0   1   1   0   1   1
//       6   0   1   0   1   1   1   1   1
//       7   0   1   1   1   0   0   0   0
//       8   0   1   1   1   1   1   1   1
//       9   0   1   1   1   1   0   1   1 
  if(randNum==0){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, HIGH);//9
        digitalWrite(ledPinE, HIGH);//8
        digitalWrite(ledPinF, HIGH);//7
        digitalWrite(ledPinG, LOW);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==1){
        digitalWrite(ledPinA, LOW);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, LOW);//9
        digitalWrite(ledPinE, LOW);//8
        digitalWrite(ledPinF, LOW);//7
        digitalWrite(ledPinG, LOW);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==2){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, LOW);//10
        digitalWrite(ledPinD, HIGH);//9
        digitalWrite(ledPinE, HIGH);//8
        digitalWrite(ledPinF, LOW);//7
        digitalWrite(ledPinG, HIGH);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==3){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, HIGH);//9
        digitalWrite(ledPinE, LOW);//8
        digitalWrite(ledPinF, LOW);//7
        digitalWrite(ledPinG, HIGH);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==4){
        digitalWrite(ledPinA, LOW);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, LOW);//9
        digitalWrite(ledPinE, LOW);//8
        digitalWrite(ledPinF, HIGH);//7
        digitalWrite(ledPinG, HIGH);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==5){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, LOW);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, HIGH);//9
        digitalWrite(ledPinE, LOW);//8
        digitalWrite(ledPinF, HIGH);//7
        digitalWrite(ledPinG, HIGH);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==6){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, LOW);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, HIGH);//9
        digitalWrite(ledPinE, HIGH);//8
        digitalWrite(ledPinF, HIGH);//7
        digitalWrite(ledPinG, HIGH);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==7){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, LOW);//9
        digitalWrite(ledPinE, LOW);//8
        digitalWrite(ledPinF, LOW);//7
        digitalWrite(ledPinG, LOW);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==8){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, HIGH);//9
        digitalWrite(ledPinE, HIGH);//8
        digitalWrite(ledPinF, HIGH);//7
        digitalWrite(ledPinG, HIGH);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==9){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, HIGH);//9
        digitalWrite(ledPinE, LOW);//8
        digitalWrite(ledPinF, HIGH);//7
        digitalWrite(ledPinG, HIGH);//6
        digitalWrite(ledPinH, LOW);
        }
        else if(randNum==10){
        digitalWrite(ledPinA, HIGH);//12
        digitalWrite(ledPinB, HIGH);//11
        digitalWrite(ledPinC, HIGH);//10
        digitalWrite(ledPinD, HIGH);//9
        digitalWrite(ledPinE, HIGH);//8
        digitalWrite(ledPinF, HIGH);//7
        digitalWrite(ledPinG, LOW);//6
        digitalWrite(ledPinH, HIGH);//6
        }
  
  
  }
void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    
      for(int i=0;i<11;i++){
      Serial.println(i);  
      RandNumLED(i);
      delay(300);
      }
}