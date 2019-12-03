//B-1

#include <stdio.h>
int main(){

  int i,a[6],b[6];
  double center[6],ave=0;
  
  for(i=0 ; i<6 ; i++){
    printf("%d番目の線分の始点と終点を空白で区切って入力してください。\n",i+1);
    scanf("%d%d",&a[i],&b[i]);
    
    center[i] = ((double)a[i]+(double)b[i])/2;
    ave += center[i];
  }
  ave = ave/6;

  for(i=0 ; i<6 ; i++){
    printf("%d番目の線分(%d,%d)の中点は%fです。\n",i+1,a[i],b[i],center[i]);
  }
  printf("中点の平均値は%fです。\n",ave);

  return 0;
}
