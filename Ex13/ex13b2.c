/*
二つの複素数の積を計算するプログラムを作成しなさい。プログラムの仕様は以下とする。
値の入力、関数の呼び出し、結果の出力はmain関数で行う。
実部を計算する関数と虚部を計算する関数（関数名: real, imaginary） を別々に作る。
実部または虚部が0の場合、その部分は表示しない（実行例を参照）。
複素数の積の出力は小数点以下2桁までとする。
[実行例]

% ./a.out
二つの複素数の実部と虚部の値を空白区切りで入力してください。
複素数1：3.0 2.0
複素数2：3.0 2.0
複素数の積：5.00 + 12.00i
% ./a.out
二つの複素数の実部と虚部の値を空白区切りで入力してください。
複素数1：-3.0 2.0
複素数2：6.0 9.0
複素数の積：-36.00 - 15.00i
% ./a.out
二つの複素数の実部と虚部の値を空白区切りで入力してください。
複素数1：3.0 2.0
複素数2：6.0 9.0
複素数の積：39.00i
% ./a.out
二つの複素数の実部と虚部の値を空白区切りで入力してください。
複素数1：-3.0 2.0
複素数2：9.0 6.0
複素数の積：-39.00
*/

#include <stdio.h>

double real(double,double,double,double);
double imag(double,double,double,double);

int main(){
  double real_1,imag_1,real_2,imag_2,ans;

  printf("二つの複素数の実部と虚部の値を空白区切りで入力してください。\n");
  printf("複素数1：");
  scanf("%lf %lf",&real_1,&imag_1);  
  printf("複素数2：");
  scanf("%lf %lf",&real_2,&imag_2);

  printf("複素数の積：");
  real(real_1,imag_1,real_2,imag_2);
  imag(real_1,imag_1,real_2,imag_2);
  printf("\n");

  return 0;
}

double real(double a, double b, double c, double d){
  double real;

  real = a*c-b*d;
  if(real != 0.0){
    printf("%5.2f",real);
  }
  return real;
}

double imag(double a, double b, double c, double d){
  double imag;

  imag = a*d+b*c;
  if(imag != 0.0){
    printf("%+5.2fi",imag);
  }
  return imag;
}
