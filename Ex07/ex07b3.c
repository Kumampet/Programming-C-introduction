/*7人分の成績の評点(０～１００)を入力し、評点と評価(A, B, C, D, F)を一覧表の形式で表示するプログラムを作成しなさい。 評点と評価の対応関係は以下のとおり、
A : 80以上
B : 65以上80未満
C : 50以上65未満
D : 35以上50未満
F : 35未満

動作の要件（仕様）：
・評点（整数）はまとめて配列に入力する
・7人分の評点と評価を表示する
・評点は0から100までとし、エラーチェック(入力された点数が０未満又は１００より大きい場合など)は省略して良い
・表示形式は以下の実行例の通りとする

実行例
% ./a.out
7人分の評点を入力して下さい。

50
80
70
100
60
0
35
1:  50  C
2:  80  A
3:  70  B
4:  100 A
5:  60  C
6:  0   F
7:  35  D
%
*/

#include <stdio.h>

int main(){

  int point[8],i,n;
  printf("７人分の評点を入力してください。\n");

  for(i = 1 ; i < 8 ; i++){
    scanf("%d",&point[i]);
  }
  for(i = 1 ; i < 8 ; i++){
    if(point[i] >= 80){
      printf("%d: %3d A\n",i,point[i]);
    }else if(point[i] < 80 && point[i] >= 65){
      printf("%d: %3d B\n",i,point[i]);
    }else if(65 > point[i] && point[i] >= 50){
      printf("%d: %3d C\n",i,point[i]);
    }else if(50 > point[i] && point[i] >= 35){
      printf("%d: %3d D\n",i,point[i]);
    }else{
      printf("%d: %3d F\n",i,point[i]);
    }
  }

  return 0;
}
