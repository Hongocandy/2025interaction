//week10-4-arduino-serial-monitor-joystick-Serail-println
//修改自week10-3-arduinoan analogRead-A3
//把joystick的Y的線 經由麵包板幫忙 接到MakerUNO pin3
//不能接其他的 因為要接有~小蟲符號的 代表analog訊號
void setup() {
  Serial.begin(9600);//開啟USB傳輸
  pinMode(2,INPUT_PULLUP);
  //pinMode(3,INPUT);//有小蟲符號 代表analog訊號
  pinMode(8,OUTPUT);//發出聲音
}

void loop() {//一秒鐘 會跑1000 Hz 太快了 要慢一點點才行
  delay(100);//慢一點 避免Processing來不及處理 眼睛會看不到
  int now=analogRead(A3);
  Serial.println(now);
  //想利用Serial Monitor 來看看會送出甚麼訊號

  if(now>800){//比較高的聲音
    tone(8,523,100);//發出523的Do
    delay(100);
    tone(8,784,100);//發出784的so
    delay(200);
  }else if(now<200){//比較低的聲音
    tone(8,784,100);//發出523的Do
    delay(100);
    tone(8,523,100);//發出784的so
    delay(200);
  }
}
