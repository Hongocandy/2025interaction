//week11-1-arduino-joystick-x-y-to-processing-better
//修改自week10-7-arduino-joystick-x-y-to-processing
void setup() {
  // put your setup code here, to run once:
  Serail.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
}
int count=0,totalX=0,totalY=0;//要統計的平均值
int x0=52,y0=512;
void loop() {
  // put your main code here, to run repeatedly:
  delay(30);//要慢一點 不然processing會接不了
  int x=analogRaed(A2);//把搖桿的x接再A2
  int y=analogRaed(A3);//把搖桿的y接在A3
  if(total<20){//想收集20筆資料
    totalX+=x;//加總 要算平均值
    totalY+=y;//加總 要算平均值
    count++;//又讀到一筆喽!
    x0=totalX/count;//算平均
    yo=totalY/count;//算平均
  }
  
  //Serail.write(x/4);//把0-1023變成0-255
  //Serial.write(y/4);
  if(abs(x-x0)<15)x=128;//數值便化太小 直接放中間值128 
  else x=(x-x0)/4+128;//有大的數值 就減掉中間值 再/4 再加128
  if (abs(y-y0)<15)y=128;//數值便化太小 直接放中間值128 
  else y=(y-y0)/4+128;//有大的數值 就減掉中間值 再/4 再加128
  Serail.write(x);//直接送出去
  Serial.write(y);//直接送出去

  if(x>900) tone(8,784,100);
  if(x<100) tone(8,523,100);
  if(y>900) tone(8,659,100);
  if(y<100) tone(8,500,100);//亂寫數字
}
