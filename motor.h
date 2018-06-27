//function that control all motors
//#include <motor.h>
#include <arduino.h>
class Motor{
  public:
    Motor(int);
    void initial(int);
  private:
    int motorPos;
    int motorPin;
};
