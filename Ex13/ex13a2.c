/*
直角三角形の斜辺以外の２辺の長さから斜辺の長さを求めるプログラムを作成しなさい。その際、直角三角形の斜辺以外の２辺の長さから斜辺の長さを返す関数 hypotenuseを作成し、利用しなさい。
ただし、引数と戻り値は共にdouble型とし、数値入力と結果出力はmainで行うこと。
なお、math.hをインクルードして、pow()、sqrt()を使っても構いません。使い方はハンドアウトLec12-24や、オンラインマニュアル等を参照してください。
[実行例]
% ./a.out 
直角三角形の斜辺以外の２辺の長さをそれぞれ空白で区切って入力してください。
3.0  4.0 
斜辺の長さ = 5.000000
*/

#include <stdio.h>
#include <math.h>

double hypot(double,double);

int main(){
  double a,b,ans;

  printf("直角三角形の斜辺以外の二辺を空白で区切って入力してください。:");
  scanf("%lf %lf",&a,&b);
  ans = hypot(a,b);

  printf("斜辺の長さは%gです。\n",ans);
  return 0;
}

