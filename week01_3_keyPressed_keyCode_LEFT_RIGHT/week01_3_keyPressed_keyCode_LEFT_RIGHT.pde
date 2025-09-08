void setup(){//設定畫布大小
  size(500,500);
}
int x=200,y=250;//座標
void draw(){//開始畫圖
  background(#FFFFAA);//淡黃色
  rect(x, y, 100, 50);//座標 畫方塊
  if(keyPressed && keyCode==LEFT) x-=3;//移動速度
  if(keyPressed && keyCode==RIGHT) x+=3;//移動速度
}//使用方向鍵，來移動方塊
