//week10-5-arduino-joystick-to-processing
//修改自week10-4-arduino-serial-monitor-joystick-Serail-println
//但是不使用Serial.println()要改用Serial.write() 0-1023 vs. 0-255 差了四倍
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);

}

void loop() {
   delay(30);//改成慢一點 才不會太粗糙 1000Hz/Processing每秒60次
   int now=analogRead(A3)/4;//小心 才能順利利用由Serial.write()送出
   Serial.write(now);//把0-255的數值送出去
   if(now>200) tone(8,784,100);
   if(now<50) tone(8,523,100);

}
