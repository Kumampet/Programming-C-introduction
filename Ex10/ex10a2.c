/*3 x 3行列の各要素に、ある整数値を掛けて表示するプログラムを作成しなさい。
ただし、行列は正方行列とし、行列のサイズはマクロで定義することとする。
実行例
 %./a.out
3 x 3行列を整数値で入力してください
1 2 3
4 5 6
7 8 9
行列を何倍にしますか？ 2
 2  4  6
 8 10 12
14 16 18
*/

#include <stdio.h>
#define ROW 3
#define COLUMN 3

int main(){
  int n,i,j,mat1[ROW][COLUMN],mat2[ROW][COLUMN];

  printf("%d x %d行列を整数値で入力してください。\n",ROW,COLUMN);
  for(i=0 ; i<ROW ; i++){
    for(j=0 ; j<COLUMN ; j++){
      scanf("%d",&n);
      mat1[i][j] = n;
    }
  }

  printf("行列を何倍にしますか？:");
  scanf("%d",&n);

  for(i=0 ; i<ROW ; i++){
    for(j=0 ; j<COLUMN ; j++){
      mat2[i][j] = n*mat1[i][j];
      printf("%2d ",mat2[i][j]);
    }
    printf("\n");
  }

  return 0;
}

