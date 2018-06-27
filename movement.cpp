//movement distribution for 2-motor-turning condition
#include "motor.h"
#include <Servo.h>
class Movement{
  public:
    void turn(int);
  private:
    int moveAngle;
    int moveLength;
    int rightMotor_direction;
    int rightMotor_speed;
    int leftMotor_direction;
    int leftMotor_speed;
};
void Movement::turn(int turningAngle){
  if(true){
    moveAngle=turningAngle;
  }

};

