#include <stdio.h>

int main(){
  int repay,a=0,b=0,c=0,manth=0,min=0;
  double A;

  while(1){
  printf("借入金額を入力して下さい：");
  scanf("%d",&a);
  printf("毎月の返済額を入力して下さい：");
  scanf("%d",&repay);
  printf("年率を入力してください：");
  scanf("%lf",&A);

  min = a * A / 12;
  
  if(min < repay){
    break;
  }
  printf("返済不能な金額です。やり直してください。\n");
    }

  printf("%d円を定額リボ払いで月%d円ずつ返済します。\n",a,repay);

 
  while(1){
    if(a < repay)
      break;
    a = a + a * A / 12;
    b = a - repay;
    c = c + repay;
    manth++;
    printf("%3dヶ月: 金利手数料込残金：%6d円 支払後残金：%6d円 返済総額：%6d円\n",manth,a,b,c);
    a = b;
  }
  manth = manth + 1;
  a = a + a * A / 12;
  b = a - a;
  c = c + a;
  printf("%3dヶ月: 金利手数料込残金：%6d円 支払後残金：%6d円 返済総額：%6d円\n",manth,a,b,c);

  printf("返済期間%dヶ月  返済総額:%d円\n",manth,c);
  return 0;
}
