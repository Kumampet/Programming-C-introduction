/*
実行例のように3 x 4の行列を入力すると、その行列と行毎の平均（右）、列毎の平均（下）、全体の平均（右下）を表示するプログラムを作成しなさい。
なお、行列の行数と列数はマクロで定義すること。
実行例
 %./a.out
Input 3 x 4 data
1 2 3 4
2 3 4 5
3 4 5 6

Data and average:
     1     2     3     4  2.50
     2     3     4     5  3.50
     3     4     5     6  4.50
  2.00  3.00  4.00  5.00  3.50
 %./a.out
Input 3 x 4 data
-3 -2 -1 0
4 3 2 1
-5 -4 -3 -2

Data and average:
   -3    -2    -1     0 -1.50
    4     3     2     1  2.50
   -5    -4    -3    -2 -3.50
-1.33 -1.00 -0.67 -0.33 -0.83
*/

#include <stdio.h>
#define ROW 3
#define COLUMN 4

int main(){
  int mat[ROW][COLUMN],i,j,n;
  double ave=0;

  printf("Input %d x %d data;\n",ROW,COLUMN);
  //行列の入力
  for(i=0; i<ROW; i++){
    for(j=0; j<COLUMN; j++){
      scanf("%d",&n);
      mat[i][j]=n;
    }
  }
  //計算と表示
  printf("Data and Average:\n");
  for(i=0; i<ROW; i++){//行方向の増加
    for(j=0; j<COLUMN; j++){//列方向の増加
      printf("%10d",mat[i][j]);//要素の表示
      ave += mat[i][j];//aveに要素を足していく(行ごと)
    }
    ave = ave/COLUMN;//行ごとのaveを列数で割る
    printf("%10.6g\n",ave);
    ave = 0;
  }

  for(j=0; j<COLUMN; j++){//列数の増加
    for(i=0; i<ROW; i++){//行数の増加
      ave += mat[i][j];//aveに要素を足していく
    }
    ave = ave/ROW;
    printf("%10.6g",ave);
    ave = 0;
  }

  //全要素の平均を計算して出力
  for(i=0; i<ROW; i++){//行方向の増加
    for(j=0; j<COLUMN; j++){//列方向の増加
      ave += mat[i][j];
    }
  }
  ave = ave/(ROW*COLUMN);
  printf("%10.6g\n",ave);
  return 0;
}
