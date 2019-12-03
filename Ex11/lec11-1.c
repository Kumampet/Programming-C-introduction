/*****************************************
 * lec11-1.c
 *
 * 二次元配列入出力
 * 
 *****************************************/
#include <stdio.h> 
#define   GYOU   3 
#define   RETSU  5 

main(){ 
  int data[GYOU][RETSU], i, j; 
  for(i = 0; i < GYOU; i++){ 
    for(j = 0; j < RETSU; j++){ 
      scanf("%d", &data[i][j]); 
    } 
  } 
  for(i = 0; i < GYOU; i++){ 
    for(j = 0; j < RETSU; j++){ 
      printf("%d ", data[i][j]); 
    } 
    printf("＼n"); 
  } 
} 
 		 	   		  
