/*下記の仕様を満たすプログラムを作成しなさい。
仕様：
ユークリッドの互除法を使って最大公約数を求める関数gcdを定義する。
関数gcdは2つの整数を引数で受け取り、それらの最大公約数を戻り値とする。
無限ループを使ってキーボードから2つの整数を入力する。
正の整数が2つ入力されたら関数gcdを使って最大公約数を求め、その値を表示して次の入力待ちとなる。
負の整数が入力されたら再入力を求め、0が入力されたらプログラムを終了する。

ユークリッドの互除法：
2つの整数xとyについて、xがyで割り切れるまで以下の処理を繰り返す。
xをyで割り算し、その余りzが0なら終了。
zが0でなければyをxに代入してzをyに代入する。
繰り返しが終わった時のyが2つの整数の最大公約数である。
[実行例]
 % ./a.out
Input two numbers 
12 28
GCD of 12 and 28 is 4.
Input two numbers
12 -4
Input positive numbers again!
Input two numbers
12 0
%
*/

#include <stdio.h>

int gcd(int,int);

int main(){
  int a,b,ans;


  while(1){
    printf("AとBの最大公約数を求めます。\n");
    printf("AとBを入力してください。(A>B):");
    scanf("%d %d",&a,&b);
    if(a < 0 || b < 0){
      printf("Prease try again.\n");
    }else if(a == 0 || b == 0){
      printf("End Program.\n");
      break;
    }else if(a > 0 && b > 0){
      break;
    }
  }
  ans = gcd(a,b);

  printf("最大公約数は%dです。\n",ans);
  return 0;
}

int gcd(int x, int y){
  int ans,amari;
  while(1){
    ans = x/y;
    amari = x%y;
    if(amari == 0){
      break;
    }
    x = y;
    y = amari;
  }
  return y;
}


