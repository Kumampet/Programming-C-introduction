/*５人分の体重の情報を入力すると、平均値と偏差（各個人毎の体重の値と平均値との差）を求めて入力された体重とともに表示するプログラムを作成しなさい。 
その際、表示の桁数が揃うようにprintfの書式を工夫すること。
整数部の表示は最大３桁まで考慮し、小数点以下は１桁を表示することとする。*/

#include <stdio.h>

int main(){
  double a,b,c,d,e,ave; 

  printf("５人分の体重を空白で分けて入力してください\n");
  scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);

  /*平均の計算*/
  ave = (a+b+c+d+e)/5;
  printf("５人の体重の平均値: %lf\n",ave);
  printf("１人目の体重: %-5.1lf [kg]，平均からの偏差: %-+5.1lf [kg]\n",a,a-ave);
  printf("２人目の体重: %-5.1lf [kg]，平均からの偏差: %-+5.1lf [kg]\n",b,b-ave);
  printf("３人目の体重: %-5.1lf [kg]，平均からの偏差: %-+5.1lf [kg]\n",c,c-ave);
  printf("４人目の体重: %-5.1lf [kg]，平均からの偏差: %-+5.1lf [kg]\n",d,d-ave);
  printf("５人目の体重: %-5.1lf [kg]，平均からの偏差: %-+5.1lf [kg]\n",e,e-ave);

  return 0;
}

