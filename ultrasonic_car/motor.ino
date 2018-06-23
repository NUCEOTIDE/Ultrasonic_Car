//function that control all motors
//#include <motor.h>
class Motor{
  public:
  Motor(int motorPin){
    initial(motorPin);
  }
  void initial(int motorPin){
  pinMode(motorPin,OUTPUT);
  }
  private:
  int motorPos;
  int a;
};


