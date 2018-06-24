#include <arduino.h>
#include "motor.h"

#define _emitPin 8
#define _recivePin A0
#define _rightMotorPin 2
#define _leftMotorPin 3
#define _hallEffectorPin A1

//main function for ultrasonic little car
Motor rightMotor(_rightMotorPin);
Motor leftMotor(_leftMotorPin);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //rightMotor.initial(_rightMotorPin);
  //leftMotor.initial(_leftMotorPin);
  infrared_initial();
  hall_initial();
}

void loop() {
  // put your main code here, to run repeatedly:
    /*infrared_emit();
    while(true){
      int infrared_data=infrared_recive();
      Serial.println(infrared_data);  //
      delay(100);
  }*/
  
  int hall_data=hall_recive();
}
