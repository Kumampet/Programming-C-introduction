/*
XY平面上にある、複数の点の座標を入力し、X座標とY座標がそれぞれ最大となる点を求めるプログラムを作成しなさい。

プログラムの条件：
点の座標はキーボードから入力して、2次元の整数配列に格納する
点の数を表す配列の行数はマクロで定義し「5」とする
配列の列数は定数値で与え「2」とする
最大点が2点以上ある場合は後から入力した方を優先する

実行例
 % ./a.out
点1の座標を整数値で入力してください 0 1
点2の座標を整数値で入力してください 10 -2
点3の座標を整数値で入力してください 5 11
点4の座標を整数値で入力してください -1 3
点5の座標を整数値で入力してください 4 11
X座標が最大となる点は点2(10,-2)です
Y座標が最大となる点は点5(4,11)です
*/

#include <stdio.h>

int main(){
  int point[5][2],i,x,y,Xmax=0,Ymax=0,Imax=0;

  for(i=0; i<5; i++){
    printf("点%dの座標を整数値で入力してください。(X,Y):",i+1);
    scanf("%d%d",&x,&y);
    point[i][0] = x; 
    point[i][1] = y;//(x,y)=(point[i][0],point[i][1])
  }
  //Xの最大値の判定
  for(i=0; i<5; i++){
    if(Xmax <= point[i][0]){
      Xmax = point[i][0];
      Imax = i;
    }
  }
  printf("x座標が最大となる点は点%d(%d,%d)です。\n",Imax+1,point[Imax][0],point[Imax][1]);
  //Yの最大値の判定
  for(i=0; i<5; i++){
    if(Ymax <= point[i][1]){
      Ymax = point[i][1];
      Imax = i;
    }
  }
  printf("y座標が最大となる点は点%d(%d,%d)です。\n",Imax+1,point[Imax][0],point[Imax][1]);
  return 0;
}