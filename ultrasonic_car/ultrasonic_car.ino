#include <arduino.h>
#include <Servo.h>
/*snesors and detectors*/
//infrared
#define _emitPin 4
#define _recivePin A0
int infrared_data;

//hallEffectors
#define _hallEffectorPin A1

//ultrasonicDiastimeter
#define _trigPin 5
#define _echoPin 6
float temp_distance=0;

/*output directions*/
//motors
#define PwmL 9  //_leftMotorPin_speed
#define PwmR 10 //_rightMotorPin_speed
#define DirL 7  //_leftMotorPin_direction
#define DirR 8  //_rightMotorPin_direction

//test IO pins
#define testPin_digital 13
#define testPin_analog A5
//servos
Servo writerServo;
Servo scannerServo;
//main function for ultrasonic little car
//Motor rightMotor(_rightMotorPin);
//Motor leftMotor(_leftMotorPin);
char carDirection='F';


void setup() {
  // put your setup code here, to run once:
  //channel initialize
  
  Serial.begin(9600);
  
  //testPins/sensors initialize
  
  //pinMode(testPin_digital,INPUT);
  pinMode(testPin_analog,INPUT);
  
  infrared_initial();
  hall_initial();
  ultrasonic_initial();
  
  //output initialize
  //Servo_initial(writerServo,scannerServo);
  motor_initial();
}


void loop() {
  // put your main code here, to run repeatedly:
  //ultrasonic_diastimeter();

  //car movement test
  
  //carMove(carDirection);
  while(true){
    Serial.println(analogRead(A5));
  }
  //int hall_data=hall_recive();
}
