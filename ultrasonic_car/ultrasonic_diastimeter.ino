int ultrasonic_diastimeter(){
  digitalWrite(_trigPin,LOW);
  delay(2);
  digitalWrite(_trigPin,HIGH);
  delay(10);
  digitalWrite(_trigPin,LOW);
  /*
   * pulseIn()：用于检测引脚输出的高低电平的脉冲宽度。

    pulseIn(pin, value)；

    pulseIn(pin, value, timeout)；//时间

    Pin---需要读取脉冲的引脚
    
    Value---需要读取的脉冲类型，HIGH或LOW
    
    Timeout---超时时间，单位微秒，数据类型为无符号长整型。
   */
   temp_distance=float(pulseIn(_echoPin,HIGH)*17/1000);
   Serial.println(temp_distance);
   //Serial.println("cm");
  return temp_distance;
}
void ultrasonic_initial(){
  pinMode(_trigPin,OUTPUT);
  pinMode(_echoPin,INPUT);
}

