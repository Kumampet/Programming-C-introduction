/*BMI指数を調べるプログラムを作成しなさい。*/

#include <stdio.h>

int main(){
  double weight, high, bmi;

  printf("体重（kg）と身長（cｍ)を入力してください :\n");
  scanf("%lf %lf",&weight, &high);

  high = high/100;
  bmi = weight / (high * high);
  printf("BMIは %lf です。\n",bmi);

  return 0;
}
