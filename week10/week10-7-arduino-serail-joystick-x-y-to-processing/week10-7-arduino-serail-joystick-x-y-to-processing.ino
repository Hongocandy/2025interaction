//week10-7-arduino-serail-joystick-x-y-to-processing
//修改自week10-5-arduino-joystick-to-processing
void setup(){
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
}
void loop(){
  delay(30);//要慢一點 不然Procssing會接不了
  int x=analogRead(A2);//把搖桿的x接再A2
  int y=analogRead(A3);//把搖桿的y接再A3
  Serial.write(x/4);//把0-1023變成0-255
  Serial.write(y/4);
  if(x>800) tone(8,784,100);
  if(x<100) tone(8,523,100);
  if(y>900) tone(8,629,100);
  if(y<100) tone(8,500,100);//亂寫數字
}