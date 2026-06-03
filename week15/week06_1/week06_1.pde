//week06-1 好玩的程式設計，接續上周 week05-5
int[][]b=new int[10][16];//Java的 2D陣列
void setup() {
  size(800, 500);
}
void draw() {
  background(255);
  for (int i=0; i<10; i++) {//左手 i 的for(迴圈)對應y座標
    for (int j=0; j<16; j++) {//右手 j 的for(迴圈)對應x座標
      if(b[i][j]==1) fill(#00A600);
      else fill(255);
      rect(j*50, i*50, 50, 50);
    }
  }
}
void mousePressed(){
  int i=mouseY/50,j=mouseX/50;
  b[i][j]=1;
}
