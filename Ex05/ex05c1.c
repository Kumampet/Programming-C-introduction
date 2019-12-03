/*
ある試験の得点を入力して、試験を受けた学生の人数と得点の平均点、合格者と不合格者の人数を求めたい。プログラムの仕様は以下の通りとする。実行例を参考にしてプログラムを作成せよ。入力値に対するエラー処理は含めても含めなくてもどちらでもよい。

    得点は整数とし、満点は100点とする
    50点以上を合格、50点未満を不合格とする
    平均点は浮動小数点型の実数とする
    得点を順番に入力する
    得点の代わりに負の数を入力することで入力を終了し、受験者数・平均点・合/不合格者数を出力する 

[実行例]

% ./a.out    
得点を入力して下さい: 80
得点を入力して下さい: 23
得点を入力して下さい: 50
得点を入力して下さい: 60
得点を入力して下さい: -1
受験者数 4 名，平均点 53.250000 点
合格者数 3 名，不合格者数 1 名

*/

#include <stdio.h>

int main(){
  int point=0,point2=0,sum=0,people=0,clear=0,noclear=0;
  double ave=0.0;

  while(1){
    printf("得点を入力して下さい：");
    scanf("%d",&point);
    if(point < 0)
      break;
    point2 = point + point2;
    people++;
    if(point >= 50){
      clear++;
    }
  }

  sum = point2;
  ave = (double)sum/people;

  printf("受験者数 %d 名、平均点 %f 点\n",people,ave);

  noclear = people - clear;
  printf("合格者数 %d 名、不合格者数 %d 名\n",clear,noclear);

  return 0;
}

