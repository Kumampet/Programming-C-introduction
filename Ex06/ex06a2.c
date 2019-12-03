/*
以下のプログラムは、正の整数の2乗の和を算出するものである。高校で習ったように、正の整数の2乗の数列の和は、
File:Ex06A_P03_1.png
となる。この等式の両辺の値をそれぞれ計算し、両方の結果を表示するプログラムである。
このプログラムは実行例のように正しく動作するのだが、適度な空白やインデントがないためとても読みにくい。
また、int型変数が8つも宣言されているが、このプログラムではそれほどたくさんのint型変数を必要としない。
これらの点を改善するように以下のプログラムを書き直したプログラムを作成しなさい。また、 書き直したプログラムが正しく動作することを確認しなさい。すなわち、
空白や空行、インデントを入れ、見やすいプログラムに整形する。
アルゴリズムや計算処理を見直し、不要な変数を削減する。
という処理を行った上で、以下の実行例を参考に、正しく動作することを確かめなさい。
*/ 
#include <stdio.h>
int main(){
   int i,n,s=0,s2;

   printf("nを入力して下さい：");
   scanf("%d", &n);
   
   for(i = 1 ; i <= n ; i++){    
     s = s + i * i;
   }  
   
   s2=n*(n+1)*(2*n+1)/6;
   
   printf("1から%dまでの2乗の和は%dです\n",n,s);
   printf("公式による結果は%dです\n",s2);

   return 0;
}

/*
実行例
 % ./a.out
nを入力して下さい：3
1から3までの2乗の和は14です
公式による結果は14です
% ./a.out
nを入力して下さい：100
1から100までの2乗の和は338350です
公式による結果は338350です
% ./a.out
nを入力して下さい：10
1から10までの2乗の和は385です
公式による結果は385です
%
*/
