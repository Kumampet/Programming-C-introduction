/*正の整数を引数とし、その数の階乗を戻り値とする関数kaijoを定義し、以下の級数展開を使って自然対数の底（e = 2.7182...）を求めるプログラムを作りなさい。 級数の第10項（n = 9）まで計算するとして、その項数はマクロで定義すること。またeの値の出力はmainの中で行うこと。
eの級数展開：
e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ... + 1/n!
[実行例]
 %./a.out
e = 2.718282
*/

#include <stdio.h>
#define N 9

int kaijo(int);

int main(){
  int a,i;
  double e;

  for(i=0; i<N; i++){
    a = kaijo(i);
    a += a;
  }
  for(i=0; i<N; i++){
    e =+ 1/(double)a;
  }

  printf("e= %g\n",e);

  return 0;
}

  int kaijo(int i){
    int j,sum[N],su,ans;  
  for(j=1; j<=i; j++){
      su *= i;
  }
  sum[j] = su;

  return sum[j];
}