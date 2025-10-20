//week07-2_arduino_blink_blink
//修改week07-1，只要再多插一隻LED
//小心有一隻要換地GND另一隻要換13
//小心有一隻要換地GND另一隻要插12(多這一行)



void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);//把第十三隻腳，能送出資料OUTPUT

}

void loop() {
  digitalWrite(12,LOW);//暗掉
  digitalWrite(13,HIGH);//發亮
  delay(500);
  digitalWrite(13,LOW);//暗掉
  digitalWrite(12,HIGH);//發亮
  delay(500);
}
