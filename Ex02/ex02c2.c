#include <stdio.h>

int main()
{
  int a,b,c;
  printf("縦の長さを入力してください");
  scanf("%d",&a);
  printf("横の長さを入力してください");
  scanf("%d",&b);
  printf("高さを入力してください");
  scanf("%d",&c);

  printf("体積 = %d\n",a*b*c);
  printf("表面積 = %d\n",a*b*2+b*c*2+a*c*2);

  return 0;
}
