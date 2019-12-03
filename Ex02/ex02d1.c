#include <stdio.h>

int main(){

  int a1,d,n,an,Sn;

  printf("Enter a1 d n ->");
  scanf("%d%d%d",&a1,&d,&n);

  printf("What is an? = %d\n",a1+d*(n-1));
  printf("What is Sn? = %d\n",(n+1)*n/2);

  return 0;
}
