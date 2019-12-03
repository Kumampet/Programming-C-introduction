/*****************************************
 * lec11-2.c
 *
 * 入力されたデータの平均を計算する
 *
 *****************************************/
#include<stdio.h>
#include<stdlib.h>

main()
{
  int i, data, result, sum = 0;
  for(i = 0;; i++){
    result = scanf("%d",&data);
    if (result == EOF) break;
    if (result != 1) exit(1);
    sum += data;
  }
  printf("Average = %f\n",(float)sum/i);
}
