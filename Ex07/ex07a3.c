/*次のプログラムでは、最初のループで、配列scoreに1クラス分(40人)の点数を作成している。このプログラムに、以下の処理を追加しなさい。
1. このクラスの点数の平均点を計算する(変数名：avg)
2. 平均点以上の点数をとった学生を合格とし、合格者を数える(変数名：n_gtavg)
補足説明
・点数はキーボードから直接入力の代わりに、rand() % (100 + 1)で０～１００までの乱数を作成しています（Lec07-21参照）
・一般に min〜maxの範囲の整数の乱数を作る場合，min + rand() % (max - min + 1) とすればよい
・乱数を使用しているので、毎回平均と合格者数は変動します
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int i,score[40],n_gtavg=0,sum=0;
  double avg=0.0;

  srand((unsigned int)time(NULL));

	for(i =0; i < 40; i++){
	  score[i] = rand() % (100+1);
	  printf("score[%d]=%d\n",i,score[i]);
	  sum += score[i];
	}

	//処理を追加
	avg = (double)sum/40;
	for(i =0; i < 40; i++){
	  if(score[i] >= avg){
	    n_gtavg++;
	  }
	}
	

	printf("平均点 = %f\n",avg);
	printf("合格者数 = %d\n",n_gtavg);

  return 0;
}
