/*三角形の底辺の長さと高さをキーボードから読み込み、三角形の面積を求めるプログラムを作りなさい。*/

#include <stdio.h>

int main()
{
  double under, high, S;

  printf("三角形の底辺の長さと高さをcmで入力してください :\n");
  scanf("%lf %lf",&under, &high);

  S = under * high / 2.0;

  printf("三角形の面積は %lf 平方cmです\n",S);
  return 0;
}
