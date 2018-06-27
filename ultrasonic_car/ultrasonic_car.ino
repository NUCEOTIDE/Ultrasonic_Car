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
float temp_distance;

/*output directions*/
//motors
#define PwmL 9  //_leftMotorPin_speed
#define PwmR 10 //_rightMotorPin_speed
#define DirL 7  //_rightMotorPin_direction
#define DirR 8  //_leftMotorPin_direction

//test IO pin 12
#define testPin_digital 12
#define testPin_analog A5
//servos
Servo writerServo;
Servo scannerServo;
//main function for ultrasonic little car
//Motor rightMotor(_rightMotorPin);
//Motor leftMotor(_leftMotorPin);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //sensors initialize
  pinMode(testPin_digital,INPUT);
  pinMode(testPin_analog,INPUT);
  infrared_initial();
  hall_initial();
  ultrasonic_initial();
  
  //output initialize
  Servo_initial(writerServo,scannerServo);
  motor_initial();
  //carMove('F');
  digitalWrite(DirL,HIGH);
  analogWrite(12,123);

}

void loop() {
  // put your main code here, to run repeatedly:
  //ultrasonic_diastimeter();
  
  //Serial.println(digitalRead(DirL));
  //analogWrite(PwmL,255);
  Serial.println(digitalRead(12));
  delay(10);
  //int hall_data=hall_recive();
}
