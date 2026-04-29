//week10-1 好玩的程式設計 打地鼠2
void setup() {
  size(300, 300);
}
int[][]a={{0, 0, 0, }, {0, 0, 0}, {0, 0, 0}};//Java陣列
void mousePressed(){
  int i= mouseY/100, j= mouseX/100;
  if(a[i][j]>0){
    a[i][j]=-60; // 點到地鼠，讓它變成負值（代表被打到）
  }
}
void draw() {
  background(#FFFFF2);
  if (frameCount%60==0) {
    int i = int(random(3)), j=int(random(3));
    a[i][j]=60;//亂數決定i跟j的值，再把a[i][j]設為60
  }
  for (int i=0; i<3; i++) {//左手i
    for (int j=0; j<3; j++) {//右手j
      int x=50+j*100, y=50+i*100;
      if(a[i][j]<0){
        fill(#000000); // 打到地鼠變黑色
        a[i][j]++;
      }else if (a[i][j]>0) {
        fill(#C61616, a[i][j]*4); // 正常地鼠紅色，隨時間變透明
        a[i][j]--;//數值變小，慢慢透明不見
      } else fill(#FFFFF2);
      ellipse(x, y, 90, 90);//地鼠的洞
    }
  }
}
