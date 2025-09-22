//week03-8
import processing.serail.*;//使用Serail外掛
Serial myPort;
void setup(){
  size(400,400);
  myPort=new Serial(this,"COM6",9600);
}//COM3 COM4 COM5 COM6要查你的電腦
void mousePressed(){
  if(mouseButton==LEFT) myPort.write('b');
  if(mouseButton==RIGHT) myPort.write(' ');
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
