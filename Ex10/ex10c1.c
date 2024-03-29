/*
以下の仕様を満たすプログラムを作成しなさい。
仕様：
最初に，以下のようにしてテーブル（配列）を作成する。
１０x３の配列を用意し、各行の
１列目の要素に１から１０の値を入れ、
２列目の要素に同じ行の最初の要素の２乗値を入れ、
３列目の要素に同じ行の最初の要素の３乗値を入れておく。
このテーブル（配列）の要素値は以下のようになる。 １列目の値は，３列目の３乗根になっていて， ２列目の値はその２乗になっている。
1    1     1
2    4     8
3    9    27
4    16   64
：

つぎに，キーボードから整数を入力し、
その値をテーブル（配列）の３乗値の列から探し、
該当値があれば、その３乗根とその根の２乗の値を、テーブル（配列）の該当値が含まれる行から読み取って表示する
該当値がなければ、「該当値がありません」と表示する
実行例
%./a.out
３乗値を入力してください！27
27の３乗根 ＝ 3
3の２乗 ＝ 9
 %./a.out
３乗値を入力してください！512
512の３乗根 ＝ 8
8の２乗 ＝ 64
%./a.out
３乗値を入力してください！12
該当値がありません
*/

#include <stdio.h>

int main(){
  int mat[10][3],i,j,n;

  for(i=0; i<10; i++){//要素の決定
    mat[i][0] = i+1;
    mat[i][1] = mat[i][0]*mat[i][0];
    mat[i][2] = mat[i][0]*mat[i][0]*mat[i][0];
  }
  for(i=0; i<10; i++){//行列の表示
    for(j=0; j<3; j++){
      printf("%5d",mat[i][j]);
    }
    printf("\n");
  }

  printf("調べたい３乗値を入力してください。:");//３乗値の照合
  scanf("%d",&n);

  for(i=0; i<10; i++){
    if(n==mat[i][2]){
      printf("%dの３乗根＝%d\n",n,i+1);
      printf("%dの２乗＝%d\n",i+1,(i+1)*(i+1));
      break;
    }
    if(i==9 && n!=mat[i][2]){
      printf("該当値がありません\n");
      break;
    }
  }
  return 0;
}
