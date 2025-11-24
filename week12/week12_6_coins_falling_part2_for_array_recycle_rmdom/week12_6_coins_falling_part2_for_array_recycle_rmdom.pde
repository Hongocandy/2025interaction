//week12-6-coins-falling-part2-for-array-recycle-rmdom
//修改自week-12-5-coins-falling-part1-Pimage-image-y
//接金幣(1)有金幣(2)掉下來
PImage imgCoin;//把圖檔 拉進程式裡
void setup(){
  size(300,500);
  imgCoin=loadImage("coin.png");
  for(int i=0;i<10;i++){
    x[i]=random(300-100);
    y[i]=-100-random(1000);
  }
}
float []x=new float[10];
float []y=new float[10];
void draw(){
  background(255);
  for(int i=0;i<10;i++){
    image(imgCoin,x[i],y[i],100,100);
    y[i]+=3;//往下掉
    if(y[i]>500){
      x[i]=random(300-100);
      y[i]=-100-random(200);
    }
  }
  //image(imgCoin,mouseX,mouseY,100,100);
}
