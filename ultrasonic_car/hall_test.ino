void hall_initial(){
  pinMode(_hallEffectorPin,INPUT);
}
int hall_recive(){
  Serial.println(analogRead(_hallEffectorPin));
  delay(10);
  return analogRead(_hallEffectorPin); 
}

