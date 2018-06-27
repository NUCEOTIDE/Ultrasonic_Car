void motor_initial(){
  pinMode(DirL,OUTPUT);
  pinMode(DirR,OUTPUT);
  pinMode(PwmL,OUTPUT);
  pinMode(PwmR,OUTPUT);
  Serial.println("yes");
}
void motor(int directionPin,int pwmPin,boolean _direction,int pwm){
  digitalWrite(directionPin,uint8_t(_direction));
  analogWrite(pwmPin,pwm);
}

