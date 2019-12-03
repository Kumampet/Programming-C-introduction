/*はじめとおわりの2つの時刻の時間差を計算して表示するプログラムを作成しなさい。 2つの時刻は実行例のようにキーボードから入力するものとする。 時刻の時・分・秒を表す3つの整数を引数として受け取り、0時0分0秒から数えた秒数を戻り値とする関数sectimeを作成すること。 関数sectimeの中では0時0分0秒からの秒数の計算だけを行い、差の計算、結果の表示などは mainの中で行うこと。
[実行例]
 % ./a.out
はじめの時、分、秒を入力してください: 13 10 00
おわりの時、分、秒を入力してください: 14 40 00
それぞれ0時から数えて 47400 秒と 52800 秒なので、
時間差は 5400 秒（1.500 時間）です。
%
*/

#include <stdio.h>

int sectime(int,int);

int main(){
  int a,h,m,s,hs,ms,ss,he,me,se;
  double H;

  printf("はじめの時、分、秒を入力してください:");
  scanf("%d %d %d",&hs,&ms,&ss);
  printf("おわりの時、分、秒を入力してください:");
  scanf("%d %d %d",&he,&me,&se);

  //時間を秒に直す
  h = hs*3600;
  m = ms*60;
  ss = h+m+ss;
  printf("それぞれ0時から数えて %d 秒と",ss);
  h = he*3600;
  m = me*60;
  se = h+m+se;
  printf(" %d 秒なので、\n",se);

  a = sectime(ss,se);
  H = a/3600;

  printf("時間差は %d 秒（%g 時間）です。\n",a,H);
  return 0;
}

int sectime(int ss,int se){
  int time;
  time = se-ss;
  return time;
}
