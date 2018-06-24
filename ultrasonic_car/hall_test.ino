void hall_initial(){
  pinMode(_hallEffectorPin,INPUT);
}
int hall_recive(){
  Serial.println(analogRead(_hallEffectorPin));
  delay(100);
  return analogRead(_hallEffectorPin); 
}

