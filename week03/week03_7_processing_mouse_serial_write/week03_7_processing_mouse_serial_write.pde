//week03-7_processing_mouse_serial_write
import proccessing.serial.*;//使用Serial外掛
Serial myPort;
void setup(){
  size(400,400);
  myPort=new Serial(this,"COM6",9600);
}//COM3 COM4 COM5還是COM6要查你的電腦
void mousePressed(){
  myPort.write('b');//用USB傳字母'b'
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
