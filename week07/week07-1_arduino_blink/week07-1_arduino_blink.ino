//week07-1_arduino_blink
//安裝好後，Selsct Bord要選剛剛裝置管理員的USB-Serial
//的COM3 or COM4 COM5 選好後，Boards打字Arduino Uno選它

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//把第十三隻腳，能送出資料OUTPUT

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);//發亮
  delay(500);
  digitalWrite(13,LOW);//暗掉
  delay(500);
}
