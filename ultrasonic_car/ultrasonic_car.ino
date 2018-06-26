#include <arduino.h>
#include "motor.h"

/*snesors and detectors*/
//infrared
#define _emitPin 8
#define _recivePin A0
int infrared_data;

//hallEffectors
#define _hallEffectorPin A1

//ultrasonicDiastimeter
#define _trigPin 4
#define _echoPin 5
float temp_distance;

/*output directions*/
//motors
#define _rightMotorPin 2
#define _leftMotorPin 3

//servos

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
  ultrasonic_initial();
}

void loop() {
  // put your main code here, to run repeatedly:
    /*infrared_emit();
    while(true){
      int infrared_data=infrared_recive();
      Serial.println(infrared_data);  //
      delay(100);
  }*/
  ultrasonic_diastimeter();
  delay(100);
  //int hall_data=hall_recive();
}
