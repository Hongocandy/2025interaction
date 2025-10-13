//week06-4-arduino-slow-jogging
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);//8 Buzzer
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8,780,100);//自己決定聲音的Hz pin8,780 Hz,60 ms
  delay(333);//等1/3(0.333)秒，換下個音
  tone(8,320,100);//自己決定聲音的Hz pin8,320 Hz, 60 ms
  delay(333);//等0.333秒換下個音
}//每秒會叫3聲，60秒會叫180聲，180 BPM(Beat Per Minute)


