//week07-3_arduino_blink_blink_blink
//修改week07-2-arduino_blink_blink只是再多這兩隻
//使用麵包板 每5洞是一板 所以用GND接之後
//小心有一隻要換地GND另一隻要換13
//小心有一隻要換地GND另一隻要換12
//小心有一隻要換地GND另一隻要換11(多這一行)
//小心有一隻要換地GND另一隻要換10(多這一行)
void setup() {
  // put your setup code here, to run once:
  pinMOde(10,OUTPUT);//多這一行
  pinMOde(11,OUTPUT);//多這一行
  pinMOde(12,OUTPUT);//把第12隻腳，能送出資料OUTPUT
  pinMOde(13,OUTPUT);//把第13隻腳 能送出資料OUTPUT
}

void loop() {
  for(int i=1;i<=13;i++){
    digitalWrite(13,LOW);//暗掉(多這一行)
    digitalWrite(i-1,LOW);//暗掉(多這一行)
    digitalWrite(i,HIGH);//發亮
    delay(500);
  }
}
