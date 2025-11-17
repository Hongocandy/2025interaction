//week11-4-pacman-part3-move-change-direction
//修改自week11-3-pacman-part2-move-x-y-void-keyPressed
//小精靈 張嘴(在動)
void setup(){
  size(500,500);
}
int x=250,y=250,dx=0,dy=0,dir=0;//direction
float m=0,dm=0.05;//嘴巴大小mouth,嘴巴改變量diff of m
void draw(){
  background(0);
  fill(255,255,0);//黃色的
  //ellipse(x,y,30,30);
  arc(x,y,30,30,+m,PI*2-m);//弧度
  x+=dx;//改變座標
  y+=dy;//改變座標
  if(m>=1 || m<0) dm=-dm;//正負倒過來
   m+=dm;
}
void keyPressed(){
  if(keyCode==LEFT){dx=-1;dy=0;dir=2;}//dir:2向左PI
  if(keyCode==RIGHT){dx=+1;dy=0;dir=0;}//dir:0向右0度
  if(keyCode==UP){dx=0;dy=-1;dir=3;}//dir:3向上PI*1.5
  if(keyCode==DOWN){dx=0;dy=+1;dir=1;}//dir:1向下PI/2
}
