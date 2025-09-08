void setup(){
  size(500,500);
}
void draw(){//用鍵盤來互動
  if(keyPressed){
  background(#FF0000);//紅色背景
  textSize(80);//很大的字形
  text(""+key,100,100);
}
}
