#include <stdio.h>

int main()
{
  int a = 6;
  int b = 4;
  double c1,c2,c3;

  printf("c1 = %d\n",a + b * a);
  printf("c2 = %d\n",a / b);
  printf("c3 = %f\n",(double)a / (double)b);
  return 0;
}
