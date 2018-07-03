void motor_initial(){
  pinMode(DirL,OUTPUT);
  pinMode(DirR,OUTPUT);
  pinMode(PwmL,OUTPUT);
  pinMode(PwmR,OUTPUT);
  //Serial.println("yes");
}
void motor(int directionPin,int pwmPin,boolean _direction,int pwm){
  digitalWrite(directionPin,_direction);
  //Serial.println("direction_initialized");
  analogWrite(pwmPin,pwm);
  //Serial.println("pwm_initialized");
}

//test dual H bridge
void dualH(int motorSide,boolean _direction,int pwm){
  if(motorSide==1){//1,right
    digitalWrite(DirR,_direction);
    analogWrite(PwmR,pwm);
  }else{//0,left
    digitalWrite(DirL,_direction);
    analogWrite(PwmL,pwm);
  }
  
}

