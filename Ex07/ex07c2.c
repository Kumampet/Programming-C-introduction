/*
ある試験の採点結果が240件分あるとする。成績の傾向を見るために、10点刻みで分類し、その数を数えたい。 具体的には「0から9点」、「10から19点」...「90点から99点」、そして100点の11分類とする。
以下のプログラムに必要な変数宣言や処理を補ってプログラムを完成させなさい。 ただし、分類には配列変数histを使うこと。また、switch文を使ってはいけない。
採点結果は0から100までの整数値で与えられるとする。
*/
//[プログラム]
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i;
  int score[240];  /* 点数の配列 */
  int hist[11];     /* 11分類 */

  srand((unsigned int)time(NULL));

  for(i = 0; i < 240; i++) {
    score[i] = rand() % (100 + 1);
  }

  /* 配列histの初期化 */
  
  /* 分類処理 */
  for(i=0; i<240; i++) {
    /* 分類処理の記述をすること */
    if(0 <= score[i] && 9 >= score[i]){
      hist[0]++;
    }else if(10 <= score[i] && 19 >= score[i]){
      hist[1]++;
    }else if(20 <= score[i] && 29 >= score[i]){
      hist[2]++;
    }else if(30 <= score[i] && 39 >= score[i]){
      hist[3]++;
    }else if(40 <= score[i] && 49 >= score[i]){
      hist[4]++;
    }else if(50 <= score[i] && 59 >= score[i]){
      hist[5]++;
    }else if(60 <= score[i] && 69 >= score[i]){
      hist[6]++;
    }else if(70 <= score[i] && 79 >= score[i]){
      hist[7]++;
    }else if(80 <= score[i] && 89 >= score[i]){
      hist[8]++;
    }else if(90 <= score[i] && 99 >= score[i]){
      hist[9]++;
    }else if(100 == score[i] ){
      hist[10]++;
    }
  } 

  /* 結果出力 */
  /* for文を使って「x点からy点の人はn人です」 と繰り返すこと */
  /* 最後は「100点の人はn人です」 とする */
  for(i = 0 ; i < 10 ; i++){
    printf("%d点から%d点の人は%d人です。\n",i*10,i*10+9,hist[i]);
  }
  printf("100点の人は%d人です。\n",score[10]);

  return 0;
}
/*
実行例 (乱数を使っているため実行結果は異なる場合がある)

% ./a.out
0点から9点の人は15人です
10点から19点の人は20人です
20点から29点の人は25人です
30点から39点の人は22人です
40点から49点の人は22人です
50点から59点の人は19人です
60点から69点の人は24人です
70点から79点の人は27人です
80点から89点の人は33人です
90点から99点の人は27人です
100点の人は6人です
%
*/
