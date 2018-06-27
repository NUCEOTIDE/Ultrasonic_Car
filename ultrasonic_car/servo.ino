void Servo_initial(Servo writerServo,Servo scannerServo){
  writerServo.attach(2);
  scannerServo.attach(3);
  writerServo.write(90);
  scannerServo.write(0);
  delay(500);
  writerServo.write(0);
  scannerServo.write(180);
  delay(500);
  writerServo.write(20);
  scannerServo.write(90);
}

