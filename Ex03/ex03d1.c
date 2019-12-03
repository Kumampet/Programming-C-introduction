/*入力された整数 m と整数 n について， m を n でわった余りを求めて表示するプログラムを，演算子%を使わずに作成しなさい。*/

#include <stdio.h>

int main(){
  int m,n,amari;
  double M,N;

  printf("整数 m, n を入力してください :\n");
  scanf("%d%d",&m,&n);

  amari = m - m / n * n;

  printf("%d を %d でわった余りは %d です。\n",m,n,amari);

  return 0;
}
