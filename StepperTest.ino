
#include <Stepper.h>

const int stepsPerRevolution = 500;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {

//rate range: from 1 to 25
// volume range: according to belt size
forward(1, 20);
delay(1000);
backward(1,20);
delay(1000);

}

void forward(int rate, int volume){
    for(int i=1; i<=20; i++){
    myStepper.step(volume);
    delay(rate);
    }
  }

void backward(int rate, int volume){
    for(int i=1; i<=20; i++){
    myStepper.step(-volume);
    delay(rate);
    }
  }

  

