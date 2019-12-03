#include <stdio.h>
int main()
{
  double x = 31.4;
  int i = 29;

  printf("認定単位数は%05dです\n", i);
  printf("認定単位数は%5dです\n", i);
  printf("認定単位数は%-5dです\n", i);
  printf("認定単位数は%+5dです\n", i);
  printf("総合点数は%6.3f点です\n", x);
  printf("総合点数は%9.6f点です\n", x);
  printf("総合点数は%e点です\n", x);
  printf("総合点数は%5.3E点です\n", x); 

  return 0;  
}
