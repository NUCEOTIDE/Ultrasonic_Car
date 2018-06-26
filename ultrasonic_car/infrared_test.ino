void infrared_emit(){
  digitalWrite(_emitPin,HIGH);
  //Serial.println(digitalRead(_emitPin));
  delay(1000);
  digitalWrite(_emitPin,LOW);
  //Serial.println(digitalRead(_emitPin));
}
int infrared_recive(){
  infrared_data=analogRead(_recivePin);
  delay(5);
  return infrared_data;
}
void infrared_initial(){
  pinMode(_emitPin,OUTPUT);
  pinMode(_recivePin,INPUT);
}

