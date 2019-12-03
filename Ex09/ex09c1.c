//C-1

#include <stdio.h>

int main(){
  int n,d,sumd=0;

  for(n=1 ; n<=10000 ; n++){
    for(d=1 ; d<=n/2 ; d++){
      if(n%d == 0){
	sumd += d;
      }
    }
    if(n == sumd){
      printf("%dは完全数です。\n",n);
    }
  }
  return 0;
}
