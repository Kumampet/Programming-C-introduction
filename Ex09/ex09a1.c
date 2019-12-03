//A-1

#include <stdio.h>

int main(){
  int i;
  double a[5],b[5],naiseki=0.0;
  
  printf("ベクトルaiの座標を入力してください。\n"); 
    for(i=0 ; i<=4 ; i++){
    scanf("%lf",&a[i]);
  }
  
    printf("ベクトルbiの座標を入力してください。\n");
    for(i=0 ; i<=4 ; i++){
      scanf("%lf",&b[i]);
  }

  naiseki = a[0]*b[0]+a[1]*b[1]+a[2]*b[2]+a[3]*b[3]+a[4]*b[4];
  printf("aとbの内積の値は%fです。\n",naiseki);

  return 0;
}
