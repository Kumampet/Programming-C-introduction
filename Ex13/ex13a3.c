/*
入力された整数値をヒストグラムのように表示するプログラムを作成しなさい。プログラムの仕様は以下とする。
入力可能な整数値の個数は最大で20とし、その値はマクロで定義する。
負の値が入力されたら入力を終了し、ヒストグラムの表示を行う。
ヒストグラムの表示を行うための関数「histgram」を作成すること。
histgram関数はint型の引数を一つ取り、その数とその数分の「*」を出力するようにする。
histgram関数の引数に70より大きい値が入った場合は、"illegal value"というメッセージを標準エラー出力で出力して強制終了する（シェル変数へは「8」を渡す）。
[実行例]
 % ./a.out
1 5 0 10 4 2 -1
[ 1]:*
[ 5]:*****
[ 0]:
[10]:**********
[ 4]:****
[ 2]:**
% ./a.out
3 6 80 39 -1
[ 3]:***
[ 6]:******
illegal value
%
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void histgram(int);

int main(){
  int n[20];
  int i,j;

  printf("整数値を入力してください。(n<71)\n");

  for(i=0; i<20; i++){
    scanf("%d",&n[i]);
    if(n[i]<0){
      break;
    }
  }

  for(j=0; j<i; j++){
    histgram(n[j]);
  }

  
  return 0;
}

void histgram(int n){
  int i;
  printf("[%2d]:",n);
    if(70<n){
      printf("Illigal value!!\n");
      exit(8);
    }else{
      for(i=0; i<n; i++){
	printf("*");
      }
    }
  printf("\n");
}
