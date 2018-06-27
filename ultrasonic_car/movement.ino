void carMove(char _direction){
  /*
   * _direction: F(forward),B(backward),L(left),R(right)
   */
   Serial.println(_direction);
  if(_direction=='F'){
    motor(DirL,PwmL,true,191);
    motor(DirR,PwmR,true,191);
  }else if(_direction=='B'){
    motor(DirL,PwmL,false,191);
    motor(DirR,PwmR,false,191);
  }else if(_direction=='L'){
    motor(DirL,PwmL,true,191);
    motor(DirR,PwmR,false,191);
  }else if(_direction=='R'){
    motor(DirL,PwmL,false,191);
    motor(DirR,PwmR,true,191);
  }
}


