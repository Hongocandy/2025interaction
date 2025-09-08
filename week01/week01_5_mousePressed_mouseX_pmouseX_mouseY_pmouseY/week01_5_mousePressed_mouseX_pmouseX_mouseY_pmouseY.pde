//week01-5
//結合mouse和keyboard

void setup(){
  size(500,500);
}
int x=200, y=250;
void draw(){
  if(mousePressed){//不管有沒有壓到rect四邊形，都移動它
    x+=mouseX - pmouseX;
    y+=mouseY - pmouseY;
  }
  rect(x,y,100,50);
}
