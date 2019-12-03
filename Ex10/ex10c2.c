/*３×３行列 A について，行列式 detA ≠ 0 のとき逆行列 A-1 が存在する。
Image:Ex11C_P06_1.png

Image:Ex11C_P06_2.png

ここに，行列式 detA は a11a22a33 ＋ a21a32a13 ＋ a31a12a23 － a11a32a23 － a31a22a13 － a21a12a33 である。
３×３行列の要素 a11，a12，a13，…(整数) をキーボードから入力すると，逆行列を返すプログラムを，2次元配列を利用して作成しなさい。
ただし，detA が 0 の時は「逆行列が存在しません」と表示すること。

実行例
 %./a.out
行列Aの要素を入力：
1 2 3
2 4 5
4 3 1 
行列式detは -5 です

逆行列は (1 / -5 )*
[-11   7  -2]
[ 18 -11   1]
[-10   5   0]

すなわち，
[2.20 -1.40 0.40 ]
[-3.60 2.20 -0.20 ]
[2.00 -1.00 -0.00 ] です
 %./a.out
行列Aの要素を入力：
1 1 1
2 2 2
3 3 3

逆行列が存在しません。
*/

#include <stdio.h>

int main(){
  int mat[3][3],i,j,n,dat;
  double invdat[3][3];

  printf("行列Aの要素を入力してください。\n");
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      scanf("%d",&n);
      mat[i][j]=n;
    }
  }
  dat = mat[0][0]*mat[1][1]*mat[2][2]+mat[1][0]*mat[2][1]*mat[0][2]+mat[2][0]*mat[0][1]*mat[1][2]-mat[2][0]*mat[1][1]*mat[0][2]-mat[0][0]*mat[2][1]*mat[1][2]-mat[1][0]*mat[0][1]*mat[2][2];
  printf("この行列のdetAは%dです。\n",dat);

  if(dat!=0){
    invdat[0][0] = (1/(double)dat)*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1]); 
    invdat[0][1] = (1/(double)dat)*(mat[0][2]*mat[2][1]-mat[0][1]*mat[2][2]); 
    invdat[0][2] = (1/(double)dat)*(mat[1][1]*mat[1][2]-mat[0][2]*mat[1][1]);
    invdat[1][0] = (1/(double)dat)*(mat[1][2]*mat[2][0]-mat[1][0]*mat[2][2]);
    invdat[1][1] = (1/(double)dat)*(mat[0][0]*mat[2][2]-mat[0][2]*mat[2][0]);
    invdat[1][2] = (1/(double)dat)*(mat[0][2]*mat[1][0]-mat[0][0]*mat[1][2]);
    invdat[2][0] = (1/(double)dat)*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);
    invdat[2][1] = (1/(double)dat)*(mat[0][1]*mat[2][0]-mat[0][0]*mat[2][1]);
    invdat[2][2] = (1/(double)dat)*(mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0]);
    
    printf("逆行列は(1 / %d)=\n",dat);
    printf("[ %3d %3d %3d ]\n",mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1],mat[0][2]*mat[2][1]-mat[0][1]*mat[2][2],mat[1][1]*mat[1][2]-mat[0][2]*mat[1][1]);
    printf("[ %3d %3d %3d ]\n",mat[1][2]*mat[2][0]-mat[1][0]*mat[2][2],mat[0][0]*mat[2][2]-mat[0][2]*mat[2][0],mat[0][2]*mat[1][0]-mat[0][0]*mat[1][2]);
    printf("[ %3d %3d %3d ]\n\n\n",mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0],mat[0][1]*mat[2][0]-mat[0][0]*mat[2][1],mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0]);
    
    printf("すなわち逆行列は\n");
    for(i=0; i<3; i++){
      printf("[ ");
      for(j=0; j<3; j++){
	printf("%g ",invdat[i][j]);
      }
      printf("]\n");
    }
    printf("\n");
  }else printf("よって、逆行列は存在しません。\n");

  return 0; 
}
