#include <stdio.h>

int main()
{
  int a,b,c,res;

  a = 2;
  b = 3;
  c = 4;
  res = a * b;

  printf("%d * %d = %d\n",a,b,res);
  printf("(2*%d+%d)%%%d = %d\n",a,b,c,b);
  /*printfで%を表示させたい場合は%%を使用する*/

  return 0;
}
