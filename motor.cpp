#include "motor.h"
Motor::Motor(int new_motorPin){
  initial(motorPin);
}
void Motor::initial(int motorPin){
  pinMode(motorPin,OUTPUT);
  }

